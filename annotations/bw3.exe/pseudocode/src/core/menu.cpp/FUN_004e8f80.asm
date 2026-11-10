; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_menu_cpp_FUN_004e8f80(void)
;
; Local Variables:
; undefined8       Stack[-0x11c]:8  local_11c
; undefined        Stack[-0x114]:1  local_114
; undefined1       Stack[-0x113]:1  local_113
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[1]:
;   core_menu.cpp_FUN_004ea280 at 004ea445
;
; Referenced Globals:
;   void* switchdataD_004e8f54 = 004e9037
;   void* switchdataD_004e8f64 = 004e927e
;   TerminatedCString s_Control_Keyboard_005c75e4
;   TerminatedCString s_Control_Keyboard_Mouse_005c75f7
;   TerminatedCString s_Control_Gamepad_005c7610
;   TerminatedCString s_Control_Point_Click_005c7622
;   TerminatedCString s_Customize_Keys_005c763a
;   TerminatedCString s_Always_Run_On_005c7649
;   TerminatedCString s_Always_Run_Off_005c7659
;   TerminatedCString s_Aiming_Auto_005c766a
;   TerminatedCString s_Aiming_Kindof_auto_005c7678
;   TerminatedCString s_Aiming_Manual_005c768d
;   TerminatedCString s_X_Axis_Sensitivity_005c769d
;   TerminatedCString s_s_5_2f_005c76b3
;   TerminatedCString s_Y_Axis_Sensitivity_005c76b9
;   ... and 24 more
;
; Called Functions:
;   core_game.cpp_CGame_saveClockTime_FUN_004b4430
;   core_game.cpp_FUN_004b4440
;   core_menu.cpp_adjustMouseSensitivity_FUN_004e80f0
;   core_menu.cpp_FUN_004e7860
;   core_menu.cpp_FUN_004e7dc0
;   core_menu.cpp_FUN_004eae80
;   core_moon.cpp_FUN_004f9670
;   core_set.cpp_CDemonSet_setFlatColor_FUN_0053b100
;   crt_unknown.c_sprintf_FUN_005a28c0
;   support_newmsg.cpp_getLocalizedString_FUN_00508960
;   wincore_wddvmem.cpp_swapBuffers_FUN_0057a8a0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004e8f80
        ;   Label: core_menu.cpp_FUN_004e8f80
    PUSH ESI                            ; 004e8f81
    PUSH EDI                            ; 004e8f82
    PUSH EBP                            ; 004e8f83
    SUB ESP,0x104                       ; 004e8f84
    MOV ECX,dword ptr [0x005fe9dc]      ; 004e8f8a | g_CGamePtr
    XOR EDX,EDX                         ; 004e8f90
    PUSH ECX                            ; 004e8f92
    MOV EBX,0x1d74128                   ; 004e8f93
    MOV dword ptr [ESP + 0x104],EDX     ; 004e8f98
    CALL core_game.cpp_CGame_saveClockTime_FUN_004b4430 ; 004e8f9f
        ;   XREF to: 004b4430 (UNCONDITIONAL_CALL)  ; void core_game.cpp_CGame_saveClockTime_FUN_004b4430(CGame * this_ptr)
    ADD ESP,0x4                         ; 004e8fa4
    XOR EAX,EAX                         ; 004e8fa7
    MOV dword ptr [EAX + 0x1d74a28],EBX ; 004e8fa9
        ;   Label: LAB_004e8fa9
    ADD EAX,0x4                         ; 004e8faf
    ADD EBX,0x100                       ; 004e8fb2
    CMP EAX,0x24                        ; 004e8fb8
    JNZ 0x004e8fa9                      ; 004e8fbb
        ;   XREF to: 004e8fa9 (CONDITIONAL_JUMP)  ; LAB_004e8fa9
    MOV EBX,dword ptr [0x005fe9dc]      ; 004e8fbd | g_CGamePtr
        ;   Label: LAB_004e8fbd
    PUSH EBX                            ; 004e8fc3
    CALL core_game.cpp_FUN_004b4440     ; 004e8fc4
        ;   XREF to: 004b4440 (UNCONDITIONAL_CALL)  ; undefined core_game.cpp_FUN_004b4440()
    ADD ESP,0x4                         ; 004e8fc9
    PUSH 0x10000                        ; 004e8fcc
    PUSH 0xc350                         ; 004e8fd1
    PUSH 0xc350                         ; 004e8fd6
    MOV EAX,[0x00603b28]                ; 004e8fdb | g_CDemonSetPtr
    PUSH EAX                            ; 004e8fe0 | g_CDemonSetInstance
    MOV dword ptr [EAX + 0x15ae84],0x1  ; 004e8fe1 | g_CDemonSetInstance.rendering_mode
    CALL core_set.cpp_CDemonSet_setFlatColor_FUN_0053b100 ; 004e8feb
        ;   XREF to: 0053b100 (UNCONDITIONAL_CALL)  ; void core_set.cpp_CDemonSet_setFlatColor_FUN_0053b100(CDemonSet * this_ptr, int light_scale, int color_scale, int fog_scale)
    ADD ESP,0x10                        ; 004e8ff0
    MOV EAX,[0x00603b28]                ; 004e8ff3 | g_CDemonSetPtr
    PUSH 0x1d72cb0                      ; 004e8ff8
    MOV dword ptr [EAX + 0x15ae94],0xdac ; 004e8ffd | g_CDemonSetInstance.ambient_base_quick
    CALL core_moon.cpp_FUN_004f9670     ; 004e9007
        ;   XREF to: 004f9670 (UNCONDITIONAL_CALL)  ; undefined core_moon.cpp_FUN_004f9670()
    MOV EAX,[0x00603b28]                ; 004e900c | g_CDemonSetPtr
    MOV dword ptr [EAX + 0x15ae84],0x0  ; 004e9011 | g_CDemonSetInstance.rendering_mode
    MOV EAX,[0x005fe9dc]                ; 004e901b | g_CGamePtr
    XOR EBX,EBX                         ; 004e9020
    MOV ESI,dword ptr [EAX + 0xd4]      ; 004e9022 | g_CGameInstance.field164_0xd4
    ADD ESP,0x4                         ; 004e9028
    CMP ESI,0x3                         ; 004e902b
    JA 0x004e9058                       ; 004e902e
        ;   XREF to: 004e9058 (CONDITIONAL_JUMP)  ; default
    JMP dword ptr [ESI*0x4 + 0x4e8f54]  ; 004e9030 | caseD_0 | caseD_1 | caseD_2
        ;   Label: switchD
    PUSH 0x5c75e4                       ; 004e9037 | = "Control : Keyboard"
        ;   Label: caseD_0
    MOV dword ptr [EAX + 0xd4],EBX      ; 004e903c | g_CGameInstance.field164_0xd4
    CALL support_newmsg.cpp_getLocalizedString_FUN_00508960 ; 004e9042
        ;   XREF to: 00508960 (UNCONDITIONAL_CALL)  ; char * support_newmsg.cpp_getLocalizedString_FUN_00508960(char * key)
        ;   Label: LAB_004e9042
    ADD ESP,0x4                         ; 004e9047
    PUSH EAX                            ; 004e904a
    PUSH 0x1d74128                      ; 004e904b
    CALL crt_unknown.c_sprintf_FUN_005a28c0 ; 004e9050
        ;   XREF to: 005a28c0 (UNCONDITIONAL_CALL)  ; int crt_unknown.c_sprintf_FUN_005a28c0(char * buffer, char * format)
    ADD ESP,0x8                         ; 004e9055
    PUSH 0x5c763a                       ; 004e9058 | = "Customize Keys"
        ;   Label: default
    CALL support_newmsg.cpp_getLocalizedString_FUN_00508960 ; 004e905d
        ;   XREF to: 00508960 (UNCONDITIONAL_CALL)  ; char * support_newmsg.cpp_getLocalizedString_FUN_00508960(char * key)
    ADD ESP,0x4                         ; 004e9062
    INC EBX                             ; 004e9065
    PUSH EAX                            ; 004e9066
    MOV EAX,EBX                         ; 004e9067
    SHL EAX,0x8                         ; 004e9069
    ADD EAX,0x1d74128                   ; 004e906c
    INC EBX                             ; 004e9071
    PUSH EAX                            ; 004e9072
    MOV ESI,EBX                         ; 004e9073
    CALL crt_unknown.c_sprintf_FUN_005a28c0 ; 004e9075
        ;   XREF to: 005a28c0 (UNCONDITIONAL_CALL)  ; int crt_unknown.c_sprintf_FUN_005a28c0(char * buffer, char * format)
    SHL ESI,0x8                         ; 004e907a
    MOV EAX,[0x005fe9dc]                ; 004e907d | g_CGamePtr
    INC EBX                             ; 004e9082
    ADD ESP,0x8                         ; 004e9083
    MOV EDI,dword ptr [EAX + 0xb0]      ; 004e9086 | g_CGameInstance.always_run
    ADD ESI,0x1d74128                   ; 004e908c
    TEST EDI,EDI                        ; 004e9092
    JZ 0x004e932b                       ; 004e9094
        ;   XREF to: 004e932b (CONDITIONAL_JUMP)  ; LAB_004e932b
    PUSH 0x5c7649                       ; 004e909a | = "Always Run : On"
    CALL support_newmsg.cpp_getLocalizedString_FUN_00508960 ; 004e909f
        ;   XREF to: 00508960 (UNCONDITIONAL_CALL)  ; char * support_newmsg.cpp_getLocalizedString_FUN_00508960(char * key)
        ;   Label: LAB_004e909f
    ADD ESP,0x4                         ; 004e90a4
    PUSH EAX                            ; 004e90a7
    PUSH ESI                            ; 004e90a8
    CALL crt_unknown.c_sprintf_FUN_005a28c0 ; 004e90a9
        ;   XREF to: 005a28c0 (UNCONDITIONAL_CALL)  ; int crt_unknown.c_sprintf_FUN_005a28c0(char * buffer, char * format)
    ADD ESP,0x8                         ; 004e90ae
    MOV EAX,[0x005fe9dc]                ; 004e90b1 | g_CGamePtr
    MOV EAX,dword ptr [EAX + 0xdc]      ; 004e90b6 | g_CGameInstance.field172_0xdc
    CMP EAX,0x1                         ; 004e90bc
    JNC 0x004e935d                      ; 004e90bf
        ;   XREF to: 004e935d (CONDITIONAL_JUMP)  ; LAB_004e935d
    MOV EAX,[0x005fe9dc]                ; 004e90c5 | g_CGamePtr
        ;   Label: LAB_004e90c5
    PUSH 0x5c766a                       ; 004e90ca | = "Aiming : Auto"
    MOV dword ptr [EAX + 0xdc],0x0      ; 004e90cf | g_CGameInstance.field172_0xdc
    CALL support_newmsg.cpp_getLocalizedString_FUN_00508960 ; 004e90d9
        ;   XREF to: 00508960 (UNCONDITIONAL_CALL)  ; char * support_newmsg.cpp_getLocalizedString_FUN_00508960(char * key)
    ADD ESP,0x4                         ; 004e90de
    PUSH EAX                            ; 004e90e1
    MOV EAX,EBX                         ; 004e90e2
    SHL EAX,0x8                         ; 004e90e4
    ADD EAX,0x1d74128                   ; 004e90e7
    PUSH EAX                            ; 004e90ec
    CALL crt_unknown.c_sprintf_FUN_005a28c0 ; 004e90ed
        ;   XREF to: 005a28c0 (UNCONDITIONAL_CALL)  ; int crt_unknown.c_sprintf_FUN_005a28c0(char * buffer, char * format)
        ;   Label: LAB_004e90ed
    ADD ESP,0x8                         ; 004e90f2
    PUSH 0x5c769d                       ; 004e90f5 | = "X-Axis Sensitivity : "
    INC EBX                             ; 004e90fa
    CALL support_newmsg.cpp_getLocalizedString_FUN_00508960 ; 004e90fb
        ;   XREF to: 00508960 (UNCONDITIONAL_CALL)  ; char * support_newmsg.cpp_getLocalizedString_FUN_00508960(char * key)
    MOV EDI,EBX                         ; 004e9100
    ADD ESP,0x4                         ; 004e9102
    SHL EDI,0x8                         ; 004e9105
    MOV ESI,EAX                         ; 004e9108
    ADD EDI,0x1d74128                   ; 004e910a
    PUSH EDI                            ; 004e9110
    MOV AL,byte ptr [ESI]               ; 004e9111
        ;   Label: LAB_004e9111
    MOV byte ptr [EDI],AL               ; 004e9113
    CMP AL,0x0                          ; 004e9115
    JZ 0x004e9129                       ; 004e9117
        ;   XREF to: 004e9129 (CONDITIONAL_JUMP)  ; LAB_004e9129
    MOV AL,byte ptr [ESI + 0x1]         ; 004e9119
    ADD ESI,0x2                         ; 004e911c
    MOV byte ptr [EDI + 0x1],AL         ; 004e911f
    ADD EDI,0x2                         ; 004e9122
    CMP AL,0x0                          ; 004e9125
    JNZ 0x004e9111                      ; 004e9127
        ;   XREF to: 004e9111 (CONDITIONAL_JUMP)  ; LAB_004e9111
    POP EDI                             ; 004e9129
        ;   Label: LAB_004e9129
    MOV EAX,[0x005fe9dc]                ; 004e912a | g_CGamePtr
    FILD dword ptr [EAX + 0xb4]         ; 004e912f | g_CGameInstance.x_mouse_sensitivity
    FMUL double ptr [0x005c774e]        ; 004e9135 | DAT_005c774e
    SUB ESP,0x8                         ; 004e913b
    FSTP double ptr [ESP]               ; 004e913e
    PUSH 0x5c76b3                       ; 004e9141 | = "%5.2f"
    LEA EAX,[ESP + 0xc]                 ; 004e9146
    PUSH EAX                            ; 004e914a
    CALL crt_unknown.c_sprintf_FUN_005a28c0 ; 004e914b
        ;   XREF to: 005a28c0 (UNCONDITIONAL_CALL)  ; int crt_unknown.c_sprintf_FUN_005a28c0(char * buffer, char * format)
    ADD ESP,0x10                        ; 004e9150
    MOV ESI,ESP                         ; 004e9153
    PUSH EDI                            ; 004e9155
    SUB ECX,ECX                         ; 004e9156
    DEC ECX                             ; 004e9158
    MOV AL,0x0                          ; 004e9159
    SCASB.REPNE ES:EDI                  ; 004e915b
    DEC EDI                             ; 004e915d
    MOV AL,byte ptr [ESI]               ; 004e915e
        ;   Label: LAB_004e915e
    MOV byte ptr [EDI],AL               ; 004e9160
    CMP AL,0x0                          ; 004e9162
    JZ 0x004e9176                       ; 004e9164
        ;   XREF to: 004e9176 (CONDITIONAL_JUMP)  ; LAB_004e9176
    MOV AL,byte ptr [ESI + 0x1]         ; 004e9166
    ADD ESI,0x2                         ; 004e9169
    MOV byte ptr [EDI + 0x1],AL         ; 004e916c
    ADD EDI,0x2                         ; 004e916f
    CMP AL,0x0                          ; 004e9172
    JNZ 0x004e915e                      ; 004e9174
        ;   XREF to: 004e915e (CONDITIONAL_JUMP)  ; LAB_004e915e
    POP EDI                             ; 004e9176
        ;   Label: LAB_004e9176
    PUSH 0x5c76b9                       ; 004e9177 | = "Y-Axis Sensitivity : "
    INC EBX                             ; 004e917c
    CALL support_newmsg.cpp_getLocalizedString_FUN_00508960 ; 004e917d
        ;   XREF to: 00508960 (UNCONDITIONAL_CALL)  ; char * support_newmsg.cpp_getLocalizedString_FUN_00508960(char * key)
    MOV EDI,EBX                         ; 004e9182
    ADD ESP,0x4                         ; 004e9184
    SHL EDI,0x8                         ; 004e9187
    MOV ESI,EAX                         ; 004e918a
    ADD EDI,0x1d74128                   ; 004e918c
    PUSH EDI                            ; 004e9192
    MOV AL,byte ptr [ESI]               ; 004e9193
        ;   Label: LAB_004e9193
    MOV byte ptr [EDI],AL               ; 004e9195
    CMP AL,0x0                          ; 004e9197
    JZ 0x004e91ab                       ; 004e9199
        ;   XREF to: 004e91ab (CONDITIONAL_JUMP)  ; LAB_004e91ab
    MOV AL,byte ptr [ESI + 0x1]         ; 004e919b
    ADD ESI,0x2                         ; 004e919e
    MOV byte ptr [EDI + 0x1],AL         ; 004e91a1
    ADD EDI,0x2                         ; 004e91a4
    CMP AL,0x0                          ; 004e91a7
    JNZ 0x004e9193                      ; 004e91a9
        ;   XREF to: 004e9193 (CONDITIONAL_JUMP)  ; LAB_004e9193
    POP EDI                             ; 004e91ab
        ;   Label: LAB_004e91ab
    MOV EAX,[0x005fe9dc]                ; 004e91ac | g_CGamePtr
    FILD dword ptr [EAX + 0xb8]         ; 004e91b1 | g_CGameInstance.y_mouse_sensitivity
    FMUL double ptr [0x005c774e]        ; 004e91b7 | DAT_005c774e
    SUB ESP,0x8                         ; 004e91bd
    FSTP double ptr [ESP]               ; 004e91c0
    PUSH 0x5c76cf                       ; 004e91c3 | = "%5.2f"
    LEA EAX,[ESP + 0xc]                 ; 004e91c8
    PUSH EAX                            ; 004e91cc
    CALL crt_unknown.c_sprintf_FUN_005a28c0 ; 004e91cd
        ;   XREF to: 005a28c0 (UNCONDITIONAL_CALL)  ; int crt_unknown.c_sprintf_FUN_005a28c0(char * buffer, char * format)
    ADD ESP,0x10                        ; 004e91d2
    MOV ESI,ESP                         ; 004e91d5
    INC EBX                             ; 004e91d7
    PUSH EDI                            ; 004e91d8
    SUB ECX,ECX                         ; 004e91d9
    DEC ECX                             ; 004e91db
    MOV AL,0x0                          ; 004e91dc
    SCASB.REPNE ES:EDI                  ; 004e91de
    DEC EDI                             ; 004e91e0
    MOV AL,byte ptr [ESI]               ; 004e91e1
        ;   Label: LAB_004e91e1
    MOV byte ptr [EDI],AL               ; 004e91e3
    CMP AL,0x0                          ; 004e91e5
    JZ 0x004e91f9                       ; 004e91e7
        ;   XREF to: 004e91f9 (CONDITIONAL_JUMP)  ; LAB_004e91f9
    MOV AL,byte ptr [ESI + 0x1]         ; 004e91e9
    ADD ESI,0x2                         ; 004e91ec
    MOV byte ptr [EDI + 0x1],AL         ; 004e91ef
    ADD EDI,0x2                         ; 004e91f2
    CMP AL,0x0                          ; 004e91f5
    JNZ 0x004e91e1                      ; 004e91f7
        ;   XREF to: 004e91e1 (CONDITIONAL_JUMP)  ; LAB_004e91e1
    POP EDI                             ; 004e91f9
        ;   Label: LAB_004e91f9
    MOV ESI,EBX                         ; 004e91fa
    MOV EAX,[0x005fe9dc]                ; 004e91fc | g_CGamePtr
    SHL ESI,0x8                         ; 004e9201
    LEA EBP,[EBX + 0x1]                 ; 004e9204
    MOV EDX,dword ptr [EAX + 0xd4]      ; 004e9207 | g_CGameInstance.field164_0xd4
    ADD ESI,0x1d74128                   ; 004e920d
    CMP EDX,0x1                         ; 004e9213
    JNZ 0x004e9381                      ; 004e9216
        ;   XREF to: 004e9381 (CONDITIONAL_JUMP)  ; LAB_004e9381
    CMP dword ptr [EAX + 0xac],0x0      ; 004e921c | g_CGameInstance.invert_mouse_y_axis
    JZ 0x004e9377                       ; 004e9223
        ;   XREF to: 004e9377 (CONDITIONAL_JUMP)  ; LAB_004e9377
    PUSH 0x5c76d5                       ; 004e9229 | = "Invert Y Axis : On"
    CALL support_newmsg.cpp_getLocalizedString_FUN_00508960 ; 004e922e
        ;   XREF to: 00508960 (UNCONDITIONAL_CALL)  ; char * support_newmsg.cpp_getLocalizedString_FUN_00508960(char * key)
        ;   Label: LAB_004e922e
    ADD ESP,0x4                         ; 004e9233
    PUSH EAX                            ; 004e9236
    PUSH ESI                            ; 004e9237
    MOV EBX,EBP                         ; 004e9238
    CALL crt_unknown.c_sprintf_FUN_005a28c0 ; 004e923a
        ;   XREF to: 005a28c0 (UNCONDITIONAL_CALL)  ; int crt_unknown.c_sprintf_FUN_005a28c0(char * buffer, char * format)
    ADD ESP,0x8                         ; 004e923f
    PUSH 0x5c7706                       ; 004e9242 | = "Control Options"
        ;   Label: LAB_004e9242
    CALL support_newmsg.cpp_getLocalizedString_FUN_00508960 ; 004e9247
        ;   XREF to: 00508960 (UNCONDITIONAL_CALL)  ; char * support_newmsg.cpp_getLocalizedString_FUN_00508960(char * key)
    ADD ESP,0x4                         ; 004e924c
    PUSH EAX                            ; 004e924f
    PUSH 0xc8                           ; 004e9250
    LEA EAX,[ESP + 0x108]               ; 004e9255
    PUSH EAX                            ; 004e925c
    PUSH EBX                            ; 004e925d
    PUSH 0x1d74a28                      ; 004e925e
    CALL core_menu.cpp_FUN_004e7860     ; 004e9263
        ;   XREF to: 004e7860 (UNCONDITIONAL_CALL)  ; int core_menu.cpp_FUN_004e7860(char * * menu_text_array, int menu_count, int * selected_index_ptr, int y_position, ...)
    ADD ESP,0x14                        ; 004e9268
    MOV EBX,EAX                         ; 004e926b
    CALL wincore_wddvmem.cpp_swapBuffers_FUN_0057a8a0 ; 004e926d
        ;   XREF to: 0057a8a0 (UNCONDITIONAL_CALL)  ; void wincore_wddvmem.cpp_swapBuffers_FUN_0057a8a0()
    CMP EBX,0x6                         ; 004e9272
    JA 0x004e92cf                       ; 004e9275
        ;   XREF to: 004e92cf (CONDITIONAL_JUMP)  ; default
    JMP dword ptr [EBX*0x4 + 0x4e8f64]  ; 004e9277 | caseD_0 | caseD_1 | caseD_2
        ;   Label: switchD
    CMP dword ptr [0x01d737d4],0x1      ; 004e927e | DAT_01d737d4
        ;   Label: caseD_0
    JNZ 0x004e93a3                      ; 004e9285
        ;   XREF to: 004e93a3 (CONDITIONAL_JUMP)  ; LAB_004e93a3
    MOV EAX,[0x005fe9dc]                ; 004e928b | g_CGamePtr
    MOV EBX,dword ptr [EAX + 0xd4]      ; 004e9290 | g_CGameInstance.field164_0xd4
    DEC EBX                             ; 004e9296
    MOV dword ptr [EAX + 0xd4],EBX      ; 004e9297 | g_CGameInstance.field164_0xd4
    TEST EBX,EBX                        ; 004e929d
    JL 0x004e9394                       ; 004e929f
        ;   XREF to: 004e9394 (CONDITIONAL_JUMP)  ; LAB_004e9394
    MOV EAX,[0x005fe9dc]                ; 004e92a5 | g_CGamePtr
        ;   Label: LAB_004e92a5
    CMP dword ptr [EAX + 0xd4],0x3      ; 004e92aa | g_CGameInstance.field164_0xd4
    JZ 0x004e92cf                       ; 004e92b1
        ;   XREF to: 004e92cf (CONDITIONAL_JUMP)  ; default
    MOV EAX,[0x01d5ba14]                ; 004e92b3 | DAT_01d5ba14
    SHL EAX,0x2                         ; 004e92b8
    MOV EDX,dword ptr [EAX + 0x1d5ba04] ; 004e92bb
    TEST EDX,EDX                        ; 004e92c1
    JZ 0x004e92cf                       ; 004e92c3
        ;   XREF to: 004e92cf (CONDITIONAL_JUMP)  ; default
    MOV dword ptr [EDX + 0xcdd4],0x0    ; 004e92c5
    PUSH 0x1                            ; 004e92cf
        ;   Label: default
    MOV EAX,[0x00600284]                ; 004e92d1 | DAT_00600284
    PUSH EAX                            ; 004e92d6 | DAT_01d70a78
    MOV EBX,dword ptr [EAX]             ; 004e92d7 | DAT_01d70a78
    CALL dword ptr [EBX + 0x4]          ; 004e92d9
    ADD ESP,0x8                         ; 004e92dc
    TEST EAX,EAX                        ; 004e92df
    JZ 0x004e8fbd                       ; 004e92e1
        ;   XREF to: 004e8fbd (CONDITIONAL_JUMP)  ; LAB_004e8fbd
    MOV EAX,[0x005fe9dc]                ; 004e92e7 | g_CGamePtr
    CMP dword ptr [EAX + 0xd4],0x2      ; 004e92ec | g_CGameInstance.field164_0xd4
    JNZ 0x004e9302                      ; 004e92f3
        ;   XREF to: 004e9302 (CONDITIONAL_JUMP)  ; LAB_004e9302
    CMP dword ptr [EAX + 0xbc],0x0      ; 004e92f5 | g_CGameInstance.x_center
    JZ 0x004e94ad                       ; 004e92fc
        ;   XREF to: 004e94ad (CONDITIONAL_JUMP)  ; LAB_004e94ad
    ADD ESP,0x104                       ; 004e9302
        ;   Label: LAB_004e9302
    POP EBP                             ; 004e9308
    POP EDI                             ; 004e9309
    POP ESI                             ; 004e930a
    POP EBX                             ; 004e930b
    RET                                 ; 004e930c
    PUSH 0x5c75f7                       ; 004e930d | = "Control : Keyboard/Mouse"
        ;   Label: caseD_1
    JMP 0x004e9042                      ; 004e9312
        ;   XREF to: 004e9042 (UNCONDITIONAL_JUMP)  ; LAB_004e9042
    PUSH 0x5c7610                       ; 004e9317 | = "Control : Gamepad"
        ;   Label: caseD_2
    JMP 0x004e9042                      ; 004e931c
        ;   XREF to: 004e9042 (UNCONDITIONAL_JUMP)  ; LAB_004e9042
    PUSH 0x5c7622                       ; 004e9321 | = "Control : Point & Click"
        ;   Label: caseD_3
    JMP 0x004e9042                      ; 004e9326
        ;   XREF to: 004e9042 (UNCONDITIONAL_JUMP)  ; LAB_004e9042
    PUSH 0x5c7659                       ; 004e932b | = "Always Run : Off"
        ;   Label: LAB_004e932b
    JMP 0x004e909f                      ; 004e9330
        ;   XREF to: 004e909f (UNCONDITIONAL_JUMP)  ; LAB_004e909f
    PUSH 0x5c7678                       ; 004e9335 | = "Aiming : Kindof auto"
        ;   Label: LAB_004e9335
    CALL support_newmsg.cpp_getLocalizedString_FUN_00508960 ; 004e933a
        ;   XREF to: 00508960 (UNCONDITIONAL_CALL)  ; char * support_newmsg.cpp_getLocalizedString_FUN_00508960(char * key)
    ADD ESP,0x4                         ; 004e933f
    PUSH EAX                            ; 004e9342
    PUSH ESI                            ; 004e9343
    JMP 0x004e90ed                      ; 004e9344
        ;   XREF to: 004e90ed (UNCONDITIONAL_JUMP)  ; LAB_004e90ed
    PUSH 0x5c768d                       ; 004e9349 | = "Aiming : Manual"
        ;   Label: LAB_004e9349
    CALL support_newmsg.cpp_getLocalizedString_FUN_00508960 ; 004e934e
        ;   XREF to: 00508960 (UNCONDITIONAL_CALL)  ; char * support_newmsg.cpp_getLocalizedString_FUN_00508960(char * key)
    ADD ESP,0x4                         ; 004e9353
    PUSH EAX                            ; 004e9356
    PUSH ESI                            ; 004e9357
    JMP 0x004e90ed                      ; 004e9358
        ;   XREF to: 004e90ed (UNCONDITIONAL_JUMP)  ; LAB_004e90ed
    MOV ESI,EBX                         ; 004e935d
        ;   Label: LAB_004e935d
    SHL ESI,0x8                         ; 004e935f
    ADD ESI,0x1d74128                   ; 004e9362
    CMP EAX,0x1                         ; 004e9368
    JBE 0x004e9335                      ; 004e936b
        ;   XREF to: 004e9335 (CONDITIONAL_JUMP)  ; LAB_004e9335
    CMP EAX,0x2                         ; 004e936d
    JZ 0x004e9349                       ; 004e9370
        ;   XREF to: 004e9349 (CONDITIONAL_JUMP)  ; LAB_004e9349
    JMP 0x004e90c5                      ; 004e9372
        ;   XREF to: 004e90c5 (UNCONDITIONAL_JUMP)  ; LAB_004e90c5
    PUSH 0x5c76e8                       ; 004e9377 | = "Invert Y Axis : Off"
        ;   Label: LAB_004e9377
    JMP 0x004e922e                      ; 004e937c
        ;   XREF to: 004e922e (UNCONDITIONAL_JUMP)  ; LAB_004e922e
    CMP EDX,0x2                         ; 004e9381
        ;   Label: LAB_004e9381
    JNZ 0x004e9242                      ; 004e9384
        ;   XREF to: 004e9242 (CONDITIONAL_JUMP)  ; LAB_004e9242
    PUSH 0x5c76fc                       ; 004e938a | = "Calibrate"
    JMP 0x004e922e                      ; 004e938f
        ;   XREF to: 004e922e (UNCONDITIONAL_JUMP)  ; LAB_004e922e
    MOV dword ptr [EAX + 0xd4],0x3      ; 004e9394 | g_CGameInstance.field164_0xd4
        ;   Label: LAB_004e9394
    JMP 0x004e92a5                      ; 004e939e
        ;   XREF to: 004e92a5 (UNCONDITIONAL_JUMP)  ; LAB_004e92a5
    MOV EAX,[0x005fe9dc]                ; 004e93a3 | g_CGamePtr
        ;   Label: LAB_004e93a3
    MOV EBX,dword ptr [EAX + 0xd4]      ; 004e93a8 | g_CGameInstance.field164_0xd4
    INC EBX                             ; 004e93ae
    MOV dword ptr [EAX + 0xd4],EBX      ; 004e93af | g_CGameInstance.field164_0xd4
    CMP EBX,0x3                         ; 004e93b5
    JLE 0x004e92a5                      ; 004e93b8
        ;   XREF to: 004e92a5 (CONDITIONAL_JUMP)  ; LAB_004e92a5
    MOV dword ptr [EAX + 0xd4],0x0      ; 004e93be | g_CGameInstance.field164_0xd4
    JMP 0x004e92a5                      ; 004e93c8
        ;   XREF to: 004e92a5 (UNCONDITIONAL_JUMP)  ; LAB_004e92a5
    CALL core_menu.cpp_FUN_004eae80     ; 004e93cd
        ;   XREF to: 004eae80 (UNCONDITIONAL_CALL)  ; undefined core_menu.cpp_FUN_004eae80()
        ;   Label: caseD_1
    JMP 0x004e92cf                      ; 004e93d2
        ;   XREF to: 004e92cf (UNCONDITIONAL_JUMP)  ; default
    MOV EAX,[0x005fe9dc]                ; 004e93d7 | g_CGamePtr
        ;   Label: caseD_2
    CMP dword ptr [EAX + 0xb0],0x0      ; 004e93dc | g_CGameInstance.always_run
    SETZ BL                             ; 004e93e3
    AND EBX,0xff                        ; 004e93e6
    MOV dword ptr [EAX + 0xb0],EBX      ; 004e93ec | g_CGameInstance.always_run
    JMP 0x004e92cf                      ; 004e93f2
        ;   XREF to: 004e92cf (UNCONDITIONAL_JUMP)  ; default
    MOV EAX,[0x005fe9dc]                ; 004e93f7 | g_CGamePtr
        ;   Label: caseD_3
    CMP dword ptr [EAX + 0xdc],0x0      ; 004e93fc | g_CGameInstance.field172_0xdc
    JNZ 0x004e9414                      ; 004e9403
        ;   XREF to: 004e9414 (CONDITIONAL_JUMP)  ; LAB_004e9414
    MOV dword ptr [EAX + 0xdc],0x2      ; 004e9405 | g_CGameInstance.field172_0xdc
    JMP 0x004e92cf                      ; 004e940f
        ;   XREF to: 004e92cf (UNCONDITIONAL_JUMP)  ; default
    MOV dword ptr [EAX + 0xdc],0x0      ; 004e9414 | g_CGameInstance.field172_0xdc
        ;   Label: LAB_004e9414
    JMP 0x004e92cf                      ; 004e941e
        ;   XREF to: 004e92cf (UNCONDITIONAL_JUMP)  ; default
    PUSH 0x5c7716                       ; 004e9423 | = "Adjust X-Axis Sensitivity"
        ;   Label: caseD_4
    CALL support_newmsg.cpp_getLocalizedString_FUN_00508960 ; 004e9428
        ;   XREF to: 00508960 (UNCONDITIONAL_CALL)  ; char * support_newmsg.cpp_getLocalizedString_FUN_00508960(char * key)
    ADD ESP,0x4                         ; 004e942d
    PUSH EAX                            ; 004e9430
    MOV EAX,[0x005fe9dc]                ; 004e9431 | g_CGamePtr
    ADD EAX,0xb4                        ; 004e9436
    PUSH EAX                            ; 004e943b | g_CGameInstance.x_mouse_sensitivity
    CALL core_menu.cpp_adjustMouseSensitivity_FUN_004e80f0 ; 004e943c
        ;   XREF to: 004e80f0 (UNCONDITIONAL_CALL)  ; void core_menu.cpp_adjustMouseSensitivity_FUN_004e80f0(int * sensitivity_value_ptr, char * window_title)
    ADD ESP,0x8                         ; 004e9441
    JMP 0x004e92cf                      ; 004e9444
        ;   XREF to: 004e92cf (UNCONDITIONAL_JUMP)  ; default
    PUSH 0x5c7730                       ; 004e9449 | = "Adjust Y-Axis Sensitivity"
        ;   Label: caseD_5
    CALL support_newmsg.cpp_getLocalizedString_FUN_00508960 ; 004e944e
        ;   XREF to: 00508960 (UNCONDITIONAL_CALL)  ; char * support_newmsg.cpp_getLocalizedString_FUN_00508960(char * key)
    ADD ESP,0x4                         ; 004e9453
    PUSH EAX                            ; 004e9456
    MOV EAX,[0x005fe9dc]                ; 004e9457 | g_CGamePtr
    ADD EAX,0xb8                        ; 004e945c
    PUSH EAX                            ; 004e9461 | g_CGameInstance.y_mouse_sensitivity
    CALL core_menu.cpp_adjustMouseSensitivity_FUN_004e80f0 ; 004e9462
        ;   XREF to: 004e80f0 (UNCONDITIONAL_CALL)  ; void core_menu.cpp_adjustMouseSensitivity_FUN_004e80f0(int * sensitivity_value_ptr, char * window_title)
    ADD ESP,0x8                         ; 004e9467
    JMP 0x004e92cf                      ; 004e946a
        ;   XREF to: 004e92cf (UNCONDITIONAL_JUMP)  ; default
    MOV EAX,[0x005fe9dc]                ; 004e946f | g_CGamePtr
        ;   Label: caseD_6
    MOV ESI,dword ptr [EAX + 0xd4]      ; 004e9474 | g_CGameInstance.field164_0xd4
    CMP ESI,0x1                         ; 004e947a
    JNZ 0x004e949a                      ; 004e947d
        ;   XREF to: 004e949a (CONDITIONAL_JUMP)  ; LAB_004e949a
    CMP dword ptr [EAX + 0xac],0x0      ; 004e947f | g_CGameInstance.invert_mouse_y_axis
    SETZ BL                             ; 004e9486
    AND EBX,0xff                        ; 004e9489
    MOV dword ptr [EAX + 0xac],EBX      ; 004e948f | g_CGameInstance.invert_mouse_y_axis
    JMP 0x004e92cf                      ; 004e9495
        ;   XREF to: 004e92cf (UNCONDITIONAL_JUMP)  ; default
    CMP ESI,0x2                         ; 004e949a
        ;   Label: LAB_004e949a
    JNZ 0x004e92cf                      ; 004e949d
        ;   XREF to: 004e92cf (CONDITIONAL_JUMP)  ; default
    CALL core_menu.cpp_FUN_004e7dc0     ; 004e94a3
        ;   XREF to: 004e7dc0 (UNCONDITIONAL_CALL)  ; undefined core_menu.cpp_FUN_004e7dc0()
    JMP 0x004e92cf                      ; 004e94a8
        ;   XREF to: 004e92cf (UNCONDITIONAL_JUMP)  ; default
    CALL core_menu.cpp_FUN_004e7dc0     ; 004e94ad
        ;   XREF to: 004e7dc0 (UNCONDITIONAL_CALL)  ; undefined core_menu.cpp_FUN_004e7dc0()
        ;   Label: LAB_004e94ad
    TEST EAX,EAX                        ; 004e94b2
    JNZ 0x004e9302                      ; 004e94b4
        ;   XREF to: 004e9302 (CONDITIONAL_JUMP)  ; LAB_004e9302
    JMP 0x004e8fbd                      ; 004e94ba
        ;   XREF to: 004e8fbd (UNCONDITIONAL_JUMP)  ; LAB_004e8fbd

