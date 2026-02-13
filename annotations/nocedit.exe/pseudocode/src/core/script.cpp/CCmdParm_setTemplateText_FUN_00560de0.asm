; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl int __cdecl core_script_cpp_CCmdParm_setTemplateText_FUN_00560de0 (CCmdParm *this_ptr,char *template_text,int *parse_cursor)
;
; Parameters:
; CCmdParm *       Stack[0x4]:4   this_ptr
; char *           Stack[0x8]:4   template_text
; int *            Stack[0xc]:4   parse_cursor
; Local Variables:
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[2]:
;   core_script.cpp_CCmdParse_parse_FUN_00561fd0 at 00562293
;   core_script.cpp_expandTemplateText_FUN_005643d0 at 0056443c
;
; Referenced Globals:
;   TerminatedCString s_SCmdParm_setTemplateText_00643649
;   TerminatedCString s_SCmdParm_setTemplateText_00643680
;   undefined4 s_Int_006436bc
;   undefined4 s_Int_006436c5
;   undefined4 s_nt_006436c6
;   undefined4 s_t_006436c7
;   undefined4 s__006436c8
;   undefined4 s_Float_006436ce
;   undefined4 s_Float_006436d9
;   undefined4 s_loat_006436da
;   undefined4 s_Text_006436e4
;   undefined4 s_Text_006436ee
;   undefined4 s_ext_006436ef
;   undefined4 s_ActorVariable_006436f8
;   undefined4 s_ActorVariable_0064370b
;   ... and 93 more
;
; Called Functions:
;   core_main.c_displayErrorAndQuit_FUN_00506f10
;   crt_string.c_strnicmp_FUN_005ff070
;   shape_edittool.cpp_CEditorTools_showError_FUN_0049e740
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00560de0
        ;   Label: core_script.cpp_CCmdParm_setTemplateText_FUN_00560de0
    PUSH ESI                            ; 00560de1
    PUSH EDI                            ; 00560de2
    PUSH EBP                            ; 00560de3
    SUB ESP,0x8                         ; 00560de4
    MOV EBP,dword ptr [ESP + 0x1c]      ; 00560de7
    MOV EDI,dword ptr [ESP + 0x20]      ; 00560deb
    MOV EAX,dword ptr [ESP + 0x24]      ; 00560def
    MOV EDX,dword ptr [EAX]             ; 00560df3
    ADD EDX,EDI                         ; 00560df5
    CMP byte ptr [EDX],0x3c             ; 00560df7
    JNZ 0x00560e23                      ; 00560dfa
        ;   XREF to: 00560e23 (CONDITIONAL_JUMP)  ; LAB_00560e23
    MOV EDX,dword ptr [EAX]             ; 00560dfc
    INC EDX                             ; 00560dfe
    LEA ESI,[EBP + 0x1f4]               ; 00560dff
    MOV dword ptr [EAX],EDX             ; 00560e05
    MOV EDX,dword ptr [EAX]             ; 00560e07
        ;   Label: LAB_00560e07
    MOV BH,byte ptr [EDX + EDI*0x1]     ; 00560e09
    CMP BH,0x3e                         ; 00560e0c
    JZ 0x00560e54                       ; 00560e0f
        ;   XREF to: 00560e54 (CONDITIONAL_JUMP)  ; LAB_00560e54
    TEST BH,BH                          ; 00560e11
    JZ 0x00560e44                       ; 00560e13
        ;   XREF to: 00560e44 (CONDITIONAL_JUMP)  ; LAB_00560e44
    LEA ECX,[EDX + 0x1]                 ; 00560e15
    MOV dword ptr [EAX],ECX             ; 00560e18
    INC ESI                             ; 00560e1a
    MOV DL,byte ptr [EDX + EDI*0x1]     ; 00560e1b
    MOV byte ptr [ESI + -0x1],DL        ; 00560e1e
    JMP 0x00560e07                      ; 00560e21
        ;   XREF to: 00560e07 (UNCONDITIONAL_JUMP)  ; LAB_00560e07
    PUSH EDX                            ; 00560e23
        ;   Label: LAB_00560e23
    PUSH 0x643649                       ; 00560e24 | = "SCmdParm::setTemplateText - expected ..."
    MOV ECX,dword ptr [0x00678a60]      ; 00560e29 | g_CEditorToolsPtr
    PUSH ECX                            ; 00560e2f | g_CEditorToolsInstance
    XOR ESI,ESI                         ; 00560e30
        ;   Label: LAB_00560e30
    CALL shape_edittool.cpp_CEditorTools_showError_FUN_0049e740 ; 00560e32
        ;   XREF to: 0049e740 (UNCONDITIONAL_CALL)  ; void shape_edittool.cpp_CEditorTools_showError_FUN_0049e740(CEditorTools * this_ptr, char * format)
    ADD ESP,0xc                         ; 00560e37
    MOV EAX,ESI                         ; 00560e3a
    ADD ESP,0x8                         ; 00560e3c
    POP EBP                             ; 00560e3f
    POP EDI                             ; 00560e40
    POP ESI                             ; 00560e41
    POP EBX                             ; 00560e42
    RET                                 ; 00560e43
    PUSH EDI                            ; 00560e44
        ;   Label: LAB_00560e44
    MOV EAX,0x643680                    ; 00560e45 | = "SCmdParm::setTemplateText - expected ..."
    PUSH EAX                            ; 00560e4a | = "SCmdParm::setTemplateText - expected ..."
    MOV EBX,dword ptr [0x00678a60]      ; 00560e4b | g_CEditorToolsPtr
    PUSH EBX                            ; 00560e51 | g_CEditorToolsInstance
    JMP 0x00560e30                      ; 00560e52
        ;   XREF to: 00560e30 (UNCONDITIONAL_JUMP)  ; LAB_00560e30
    MOV byte ptr [ESI],0x0              ; 00560e54
        ;   Label: LAB_00560e54
    MOV ESI,dword ptr [EAX]             ; 00560e57
    PUSH 0x3                            ; 00560e59
    INC ESI                             ; 00560e5b
    PUSH 0x6436bc                       ; 00560e5c | s_Int_006436bc
    MOV dword ptr [EAX],ESI             ; 00560e61
    LEA ESI,[EBP + 0x1f4]               ; 00560e63
    PUSH ESI                            ; 00560e69
    XOR EBX,EBX                         ; 00560e6a
    CALL crt_string.c_strnicmp_FUN_005ff070 ; 00560e6c
        ;   XREF to: 005ff070 (UNCONDITIONAL_CALL)  ; int crt_string.c_strnicmp_FUN_005ff070(char * str1, char * str2, int count)
    ADD ESP,0xc                         ; 00560e71
    TEST EAX,EAX                        ; 00560e74
    JNZ 0x00560f1e                      ; 00560e76
        ;   XREF to: 00560f1e (CONDITIONAL_JUMP)  ; LAB_00560f1e
    MOV dword ptr [EBP + 0x258],EBX     ; 00560e7c
    LEA EBX,[EBP + 0x1f7]               ; 00560e82
    MOV ESI,0x6436c5                    ; 00560e88 | s_Int_006436c5
    LEA EDI,[EBP + 0x2c0]               ; 00560e8d
    PUSH EDI                            ; 00560e93
        ;   Label: LAB_00560e93
    MOV AL,byte ptr [ESI]               ; 00560e94 | s_Int_006436c5 | s_t_006436c7 | s_Float_006436d9
        ;   Label: LAB_00560e94
    MOV byte ptr [EDI],AL               ; 00560e96
    CMP AL,0x0                          ; 00560e98
    JZ 0x00560eac                       ; 00560e9a
        ;   XREF to: 00560eac (CONDITIONAL_JUMP)  ; LAB_00560eac
    MOV AL,byte ptr [ESI + 0x1]         ; 00560e9c | s_nt_006436c6 | s__006436c8 | s_loat_006436da
    ADD ESI,0x2                         ; 00560e9f
    MOV byte ptr [EDI + 0x1],AL         ; 00560ea2
    ADD EDI,0x2                         ; 00560ea5
    CMP AL,0x0                          ; 00560ea8
    JNZ 0x00560e94                      ; 00560eaa
        ;   XREF to: 00560e94 (CONDITIONAL_JUMP)  ; LAB_00560e94
    POP EDI                             ; 00560eac
        ;   Label: LAB_00560eac
    LEA ESI,[EBP + 0x1f4]               ; 00560ead
        ;   Label: LAB_00560ead
    TEST EBX,EBX                        ; 00560eb3
    JZ 0x00561575                       ; 00560eb5
        ;   XREF to: 00561575 (CONDITIONAL_JUMP)  ; LAB_00561575
    MOV byte ptr [EBP + 0x25c],0x0      ; 00560ebb
    CMP byte ptr [EBX],0x0              ; 00560ec2
    JZ 0x00560f0f                       ; 00560ec5
        ;   XREF to: 00560f0f (CONDITIONAL_JUMP)  ; LAB_00560f0f
    LEA EAX,[EBP + 0x25c]               ; 00560ec7
    MOV dword ptr [ESP + 0x4],EAX       ; 00560ecd
    LEA EAX,[EBP + 0x2c0]               ; 00560ed1
    MOV EDI,ESI                         ; 00560ed7
    MOV dword ptr [ESP],EAX             ; 00560ed9
    MOV AH,byte ptr [EBX]               ; 00560edc
        ;   Label: LAB_00560edc
    LEA EDX,[EBX + 0x1]                 ; 00560ede
    CMP AH,0x3a                         ; 00560ee1
    JNZ 0x00561596                      ; 00560ee4
        ;   XREF to: 00561596 (CONDITIONAL_JUMP)  ; LAB_00561596
    MOV EAX,dword ptr [ESP + 0x4]       ; 00560eea
    MOV CL,byte ptr [EDX]               ; 00560eee
    MOV EBX,EDX                         ; 00560ef0
    TEST CL,CL                          ; 00560ef2
    JZ 0x00560f07                       ; 00560ef4
        ;   XREF to: 00560f07 (CONDITIONAL_JUMP)  ; LAB_00560f07
    CMP byte ptr [EBX],0x27             ; 00560ef6
        ;   Label: LAB_00560ef6
    JZ 0x00560f07                       ; 00560ef9
        ;   XREF to: 00560f07 (CONDITIONAL_JUMP)  ; LAB_00560f07
    MOV DL,byte ptr [EBX]               ; 00560efb
    INC EBX                             ; 00560efd
    MOV byte ptr [EAX],DL               ; 00560efe
    MOV DL,byte ptr [EBX]               ; 00560f00
    INC EAX                             ; 00560f02
    TEST DL,DL                          ; 00560f03
    JNZ 0x00560ef6                      ; 00560f05
        ;   XREF to: 00560ef6 (CONDITIONAL_JUMP)  ; LAB_00560ef6
    MOV byte ptr [EAX],0x0              ; 00560f07
        ;   Label: LAB_00560f07
    CMP byte ptr [EBX],0x0              ; 00560f0a
        ;   Label: LAB_00560f0a
    JNZ 0x00560edc                      ; 00560f0d
        ;   XREF to: 00560edc (CONDITIONAL_JUMP)  ; LAB_00560edc
    MOV ESI,0x1                         ; 00560f0f
        ;   Label: LAB_00560f0f
    MOV EAX,ESI                         ; 00560f14
    ADD ESP,0x8                         ; 00560f16
    POP EBP                             ; 00560f19
    POP EDI                             ; 00560f1a
    POP ESI                             ; 00560f1b
    POP EBX                             ; 00560f1c
    RET                                 ; 00560f1d
    PUSH 0x5                            ; 00560f1e
        ;   Label: LAB_00560f1e
    PUSH 0x6436ce                       ; 00560f20 | s_Float_006436ce
    PUSH ESI                            ; 00560f25
    CALL crt_string.c_strnicmp_FUN_005ff070 ; 00560f26
        ;   XREF to: 005ff070 (UNCONDITIONAL_CALL)  ; int crt_string.c_strnicmp_FUN_005ff070(char * str1, char * str2, int count)
    ADD ESP,0xc                         ; 00560f2b
    TEST EAX,EAX                        ; 00560f2e
    JNZ 0x00560f52                      ; 00560f30
        ;   XREF to: 00560f52 (CONDITIONAL_JUMP)  ; LAB_00560f52
    LEA EBX,[EBP + 0x1f9]               ; 00560f32
    MOV ESI,0x6436d9                    ; 00560f38 | s_Float_006436d9
    LEA EDI,[EBP + 0x2c0]               ; 00560f3d
    MOV dword ptr [EBP + 0x258],0x1     ; 00560f43
    JMP 0x00560e93                      ; 00560f4d
        ;   XREF to: 00560e93 (UNCONDITIONAL_JUMP)  ; LAB_00560e93
    PUSH 0x4                            ; 00560f52
        ;   Label: LAB_00560f52
    PUSH 0x6436e4                       ; 00560f54 | s_Text_006436e4
    PUSH ESI                            ; 00560f59
    CALL crt_string.c_strnicmp_FUN_005ff070 ; 00560f5a
        ;   XREF to: 005ff070 (UNCONDITIONAL_CALL)  ; int crt_string.c_strnicmp_FUN_005ff070(char * str1, char * str2, int count)
    ADD ESP,0xc                         ; 00560f5f
    TEST EAX,EAX                        ; 00560f62
    JNZ 0x00560f86                      ; 00560f64
        ;   XREF to: 00560f86 (CONDITIONAL_JUMP)  ; LAB_00560f86
    LEA EBX,[EBP + 0x1f8]               ; 00560f66
    MOV ESI,0x6436ee                    ; 00560f6c | s_Text_006436ee
    LEA EDI,[EBP + 0x2c0]               ; 00560f71
    MOV dword ptr [EBP + 0x258],0x2     ; 00560f77
    JMP 0x00560e93                      ; 00560f81
        ;   XREF to: 00560e93 (UNCONDITIONAL_JUMP)  ; LAB_00560e93
    PUSH 0xd                            ; 00560f86
        ;   Label: LAB_00560f86
    PUSH 0x6436f8                       ; 00560f88 | s_ActorVariable_006436f8
    PUSH ESI                            ; 00560f8d
    CALL crt_string.c_strnicmp_FUN_005ff070 ; 00560f8e
        ;   XREF to: 005ff070 (UNCONDITIONAL_CALL)  ; int crt_string.c_strnicmp_FUN_005ff070(char * str1, char * str2, int count)
    ADD ESP,0xc                         ; 00560f93
    TEST EAX,EAX                        ; 00560f96
    JNZ 0x00560fba                      ; 00560f98
        ;   XREF to: 00560fba (CONDITIONAL_JUMP)  ; LAB_00560fba
    LEA EBX,[EBP + 0x201]               ; 00560f9a
    MOV ESI,0x64370b                    ; 00560fa0 | s_ActorVariable_0064370b
    LEA EDI,[EBP + 0x2c0]               ; 00560fa5
    MOV dword ptr [EBP + 0x258],0x7     ; 00560fab
    JMP 0x00560e93                      ; 00560fb5
        ;   XREF to: 00560e93 (UNCONDITIONAL_JUMP)  ; LAB_00560e93
    PUSH 0xa                            ; 00560fba
        ;   Label: LAB_00560fba
    PUSH 0x64371e                       ; 00560fbc | s_ActorClass_0064371e
    PUSH ESI                            ; 00560fc1
    CALL crt_string.c_strnicmp_FUN_005ff070 ; 00560fc2
        ;   XREF to: 005ff070 (UNCONDITIONAL_CALL)  ; int crt_string.c_strnicmp_FUN_005ff070(char * str1, char * str2, int count)
    ADD ESP,0xc                         ; 00560fc7
    TEST EAX,EAX                        ; 00560fca
    JNZ 0x00560fee                      ; 00560fcc
        ;   XREF to: 00560fee (CONDITIONAL_JUMP)  ; LAB_00560fee
    LEA EBX,[EBP + 0x1fe]               ; 00560fce
    MOV ESI,0x64372e                    ; 00560fd4 | s_ActorClass_0064372e
    LEA EDI,[EBP + 0x2c0]               ; 00560fd9
    MOV dword ptr [EBP + 0x258],0x1b    ; 00560fdf
    JMP 0x00560e93                      ; 00560fe9
        ;   XREF to: 00560e93 (UNCONDITIONAL_JUMP)  ; LAB_00560e93
    PUSH 0x5                            ; 00560fee
        ;   Label: LAB_00560fee
    PUSH 0x64373e                       ; 00560ff0 | s_Actor_0064373e
    PUSH ESI                            ; 00560ff5
    CALL crt_string.c_strnicmp_FUN_005ff070 ; 00560ff6
        ;   XREF to: 005ff070 (UNCONDITIONAL_CALL)  ; int crt_string.c_strnicmp_FUN_005ff070(char * str1, char * str2, int count)
    ADD ESP,0xc                         ; 00560ffb
    TEST EAX,EAX                        ; 00560ffe
    JNZ 0x00561022                      ; 00561000
        ;   XREF to: 00561022 (CONDITIONAL_JUMP)  ; LAB_00561022
    LEA EBX,[EBP + 0x1f9]               ; 00561002
    MOV ESI,0x643749                    ; 00561008 | s_Actor_00643749
    LEA EDI,[EBP + 0x2c0]               ; 0056100d
    MOV dword ptr [EBP + 0x258],0x3     ; 00561013
    JMP 0x00560e93                      ; 0056101d
        ;   XREF to: 00560e93 (UNCONDITIONAL_JUMP)  ; LAB_00560e93
    PUSH 0x9                            ; 00561022
        ;   Label: LAB_00561022
    PUSH 0x643754                       ; 00561024 | s_Condition_00643754
    PUSH ESI                            ; 00561029
    CALL crt_string.c_strnicmp_FUN_005ff070 ; 0056102a
        ;   XREF to: 005ff070 (UNCONDITIONAL_CALL)  ; int crt_string.c_strnicmp_FUN_005ff070(char * str1, char * str2, int count)
    ADD ESP,0xc                         ; 0056102f
    TEST EAX,EAX                        ; 00561032
    JNZ 0x00561056                      ; 00561034
        ;   XREF to: 00561056 (CONDITIONAL_JUMP)  ; LAB_00561056
    LEA EBX,[EBP + 0x1fd]               ; 00561036
    MOV ESI,0x643763                    ; 0056103c | s_Condition_00643763
    LEA EDI,[EBP + 0x2c0]               ; 00561041
    MOV dword ptr [EBP + 0x258],0x4     ; 00561047
    JMP 0x00560e93                      ; 00561051
        ;   XREF to: 00560e93 (UNCONDITIONAL_JUMP)  ; LAB_00560e93
    PUSH 0x5                            ; 00561056
        ;   Label: LAB_00561056
    PUSH 0x643772                       ; 00561058 | s_Label_00643772
    PUSH ESI                            ; 0056105d
    CALL crt_string.c_strnicmp_FUN_005ff070 ; 0056105e
        ;   XREF to: 005ff070 (UNCONDITIONAL_CALL)  ; int crt_string.c_strnicmp_FUN_005ff070(char * str1, char * str2, int count)
    ADD ESP,0xc                         ; 00561063
    TEST EAX,EAX                        ; 00561066
    JNZ 0x0056108a                      ; 00561068
        ;   XREF to: 0056108a (CONDITIONAL_JUMP)  ; LAB_0056108a
    LEA EBX,[EBP + 0x1f9]               ; 0056106a
    MOV ESI,0x64377d                    ; 00561070 | s_Label_0064377d
    LEA EDI,[EBP + 0x2c0]               ; 00561075
    MOV dword ptr [EBP + 0x258],0x5     ; 0056107b
    JMP 0x00560e93                      ; 00561085
        ;   XREF to: 00560e93 (UNCONDITIONAL_JUMP)  ; LAB_00560e93
    PUSH 0x6                            ; 0056108a
        ;   Label: LAB_0056108a
    PUSH 0x643788                       ; 0056108c | s_Camera_00643788
    PUSH ESI                            ; 00561091
    CALL crt_string.c_strnicmp_FUN_005ff070 ; 00561092
        ;   XREF to: 005ff070 (UNCONDITIONAL_CALL)  ; int crt_string.c_strnicmp_FUN_005ff070(char * str1, char * str2, int count)
    ADD ESP,0xc                         ; 00561097
    TEST EAX,EAX                        ; 0056109a
    JNZ 0x005610be                      ; 0056109c
        ;   XREF to: 005610be (CONDITIONAL_JUMP)  ; LAB_005610be
    LEA EBX,[EBP + 0x1fa]               ; 0056109e
    MOV ESI,0x643794                    ; 005610a4 | s_Camera_00643794
    LEA EDI,[EBP + 0x2c0]               ; 005610a9
    MOV dword ptr [EBP + 0x258],0x6     ; 005610af
    JMP 0x00560e93                      ; 005610b9
        ;   XREF to: 00560e93 (UNCONDITIONAL_JUMP)  ; LAB_00560e93
    PUSH 0xd                            ; 005610be
        ;   Label: LAB_005610be
    PUSH 0x6437a0                       ; 005610c0 | s_ControlButton_006437a0
    PUSH ESI                            ; 005610c5
    CALL crt_string.c_strnicmp_FUN_005ff070 ; 005610c6
        ;   XREF to: 005ff070 (UNCONDITIONAL_CALL)  ; int crt_string.c_strnicmp_FUN_005ff070(char * str1, char * str2, int count)
    ADD ESP,0xc                         ; 005610cb
    TEST EAX,EAX                        ; 005610ce
    JNZ 0x005610f2                      ; 005610d0
        ;   XREF to: 005610f2 (CONDITIONAL_JUMP)  ; LAB_005610f2
    LEA EBX,[EBP + 0x201]               ; 005610d2
    MOV ESI,0x6437b3                    ; 005610d8 | s_ControlButton_006437b3
    LEA EDI,[EBP + 0x2c0]               ; 005610dd
    MOV dword ptr [EBP + 0x258],0x8     ; 005610e3
    JMP 0x00560e93                      ; 005610ed
        ;   XREF to: 00560e93 (UNCONDITIONAL_JUMP)  ; LAB_00560e93
    PUSH 0xa                            ; 005610f2
        ;   Label: LAB_005610f2
    PUSH 0x6437c6                       ; 005610f4 | s_DamageType_006437c6
    PUSH ESI                            ; 005610f9
    CALL crt_string.c_strnicmp_FUN_005ff070 ; 005610fa
        ;   XREF to: 005ff070 (UNCONDITIONAL_CALL)  ; int crt_string.c_strnicmp_FUN_005ff070(char * str1, char * str2, int count)
    ADD ESP,0xc                         ; 005610ff
    TEST EAX,EAX                        ; 00561102
    JNZ 0x00561126                      ; 00561104
        ;   XREF to: 00561126 (CONDITIONAL_JUMP)  ; LAB_00561126
    LEA EBX,[EBP + 0x1fe]               ; 00561106
    MOV ESI,0x6437d6                    ; 0056110c | s_DamageType_006437d6
    LEA EDI,[EBP + 0x2c0]               ; 00561111
    MOV dword ptr [EBP + 0x258],0x9     ; 00561117
    JMP 0x00560e93                      ; 00561121
        ;   XREF to: 00560e93 (UNCONDITIONAL_JUMP)  ; LAB_00560e93
    PUSH 0x9                            ; 00561126
        ;   Label: LAB_00561126
    PUSH 0x6437e6                       ; 00561128 | s_DeathType_006437e6
    PUSH ESI                            ; 0056112d
    CALL crt_string.c_strnicmp_FUN_005ff070 ; 0056112e
        ;   XREF to: 005ff070 (UNCONDITIONAL_CALL)  ; int crt_string.c_strnicmp_FUN_005ff070(char * str1, char * str2, int count)
    ADD ESP,0xc                         ; 00561133
    TEST EAX,EAX                        ; 00561136
    JNZ 0x0056115a                      ; 00561138
        ;   XREF to: 0056115a (CONDITIONAL_JUMP)  ; LAB_0056115a
    LEA EBX,[EBP + 0x1fd]               ; 0056113a
    MOV ESI,0x6437f5                    ; 00561140 | s_DeathType_006437f5
    LEA EDI,[EBP + 0x2c0]               ; 00561145
    MOV dword ptr [EBP + 0x258],0xa     ; 0056114b
    JMP 0x00560e93                      ; 00561155
        ;   XREF to: 00560e93 (UNCONDITIONAL_JUMP)  ; LAB_00560e93
    PUSH 0x6                            ; 0056115a
        ;   Label: LAB_0056115a
    PUSH 0x643804                       ; 0056115c | s_SfxSet_00643804
    PUSH ESI                            ; 00561161
    CALL crt_string.c_strnicmp_FUN_005ff070 ; 00561162
        ;   XREF to: 005ff070 (UNCONDITIONAL_CALL)  ; int crt_string.c_strnicmp_FUN_005ff070(char * str1, char * str2, int count)
    ADD ESP,0xc                         ; 00561167
    TEST EAX,EAX                        ; 0056116a
    JNZ 0x0056118e                      ; 0056116c
        ;   XREF to: 0056118e (CONDITIONAL_JUMP)  ; LAB_0056118e
    LEA EBX,[EBP + 0x1fa]               ; 0056116e
    MOV ESI,0x643810                    ; 00561174 | s_SfxSet_00643810
    LEA EDI,[EBP + 0x2c0]               ; 00561179
    MOV dword ptr [EBP + 0x258],0xb     ; 0056117f
    JMP 0x00560e93                      ; 00561189
        ;   XREF to: 00560e93 (UNCONDITIONAL_JUMP)  ; LAB_00560e93
    PUSH 0x7                            ; 0056118e
        ;   Label: LAB_0056118e
    PUSH 0x64381c                       ; 00561190 | s_SfxUsed_0064381c
    PUSH ESI                            ; 00561195
    CALL crt_string.c_strnicmp_FUN_005ff070 ; 00561196
        ;   XREF to: 005ff070 (UNCONDITIONAL_CALL)  ; int crt_string.c_strnicmp_FUN_005ff070(char * str1, char * str2, int count)
    ADD ESP,0xc                         ; 0056119b
    TEST EAX,EAX                        ; 0056119e
    JNZ 0x005611c2                      ; 005611a0
        ;   XREF to: 005611c2 (CONDITIONAL_JUMP)  ; LAB_005611c2
    LEA EBX,[EBP + 0x1fb]               ; 005611a2
    MOV ESI,0x643829                    ; 005611a8 | s_SfxUsed_00643829
    LEA EDI,[EBP + 0x2c0]               ; 005611ad
    MOV dword ptr [EBP + 0x258],0xc     ; 005611b3
    JMP 0x00560e93                      ; 005611bd
        ;   XREF to: 00560e93 (UNCONDITIONAL_JUMP)  ; LAB_00560e93
    PUSH 0x3                            ; 005611c2
        ;   Label: LAB_005611c2
    PUSH 0x643836                       ; 005611c4 | s_Wav_00643836
    PUSH ESI                            ; 005611c9
    CALL crt_string.c_strnicmp_FUN_005ff070 ; 005611ca
        ;   XREF to: 005ff070 (UNCONDITIONAL_CALL)  ; int crt_string.c_strnicmp_FUN_005ff070(char * str1, char * str2, int count)
    ADD ESP,0xc                         ; 005611cf
    TEST EAX,EAX                        ; 005611d2
    JNZ 0x005611f6                      ; 005611d4
        ;   XREF to: 005611f6 (CONDITIONAL_JUMP)  ; LAB_005611f6
    LEA EBX,[EBP + 0x1f7]               ; 005611d6
    MOV ESI,0x64383f                    ; 005611dc | s_Wav_0064383f
    LEA EDI,[EBP + 0x2c0]               ; 005611e1
    MOV dword ptr [EBP + 0x258],0xd     ; 005611e7
    JMP 0x00560e93                      ; 005611f1
        ;   XREF to: 00560e93 (UNCONDITIONAL_JUMP)  ; LAB_00560e93
    PUSH 0x7                            ; 005611f6
        ;   Label: LAB_005611f6
    PUSH 0x643848                       ; 005611f8 | s_Weather_00643848
    PUSH ESI                            ; 005611fd
    CALL crt_string.c_strnicmp_FUN_005ff070 ; 005611fe
        ;   XREF to: 005ff070 (UNCONDITIONAL_CALL)  ; int crt_string.c_strnicmp_FUN_005ff070(char * str1, char * str2, int count)
    ADD ESP,0xc                         ; 00561203
    TEST EAX,EAX                        ; 00561206
    JNZ 0x0056122a                      ; 00561208
        ;   XREF to: 0056122a (CONDITIONAL_JUMP)  ; LAB_0056122a
    LEA EBX,[EBP + 0x1fb]               ; 0056120a
    MOV ESI,0x643855                    ; 00561210 | s_Weather_00643855
    LEA EDI,[EBP + 0x2c0]               ; 00561215
    MOV dword ptr [EBP + 0x258],0xe     ; 0056121b
    JMP 0x00560e93                      ; 00561225
        ;   XREF to: 00560e93 (UNCONDITIONAL_JUMP)  ; LAB_00560e93
    PUSH 0xa                            ; 0056122a
        ;   Label: LAB_0056122a
    PUSH 0x643862                       ; 0056122c | s_CounterSet_00643862
    PUSH ESI                            ; 00561231
    CALL crt_string.c_strnicmp_FUN_005ff070 ; 00561232
        ;   XREF to: 005ff070 (UNCONDITIONAL_CALL)  ; int crt_string.c_strnicmp_FUN_005ff070(char * str1, char * str2, int count)
    ADD ESP,0xc                         ; 00561237
    TEST EAX,EAX                        ; 0056123a
    JNZ 0x0056125e                      ; 0056123c
        ;   XREF to: 0056125e (CONDITIONAL_JUMP)  ; LAB_0056125e
    LEA EBX,[EBP + 0x1fe]               ; 0056123e
    MOV ESI,0x643872                    ; 00561244 | s_CounterSet_00643872
    LEA EDI,[EBP + 0x2c0]               ; 00561249
    MOV dword ptr [EBP + 0x258],0xf     ; 0056124f
    JMP 0x00560e93                      ; 00561259
        ;   XREF to: 00560e93 (UNCONDITIONAL_JUMP)  ; LAB_00560e93
    PUSH 0xb                            ; 0056125e
        ;   Label: LAB_0056125e
    PUSH 0x643882                       ; 00561260 | s_CounterUsed_00643882
    PUSH ESI                            ; 00561265
    CALL crt_string.c_strnicmp_FUN_005ff070 ; 00561266
        ;   XREF to: 005ff070 (UNCONDITIONAL_CALL)  ; int crt_string.c_strnicmp_FUN_005ff070(char * str1, char * str2, int count)
    ADD ESP,0xc                         ; 0056126b
    TEST EAX,EAX                        ; 0056126e
    JNZ 0x00561292                      ; 00561270
        ;   XREF to: 00561292 (CONDITIONAL_JUMP)  ; LAB_00561292
    LEA EBX,[EBP + 0x1ff]               ; 00561272
    MOV ESI,0x643893                    ; 00561278 | s_CounterUsed_00643893
    LEA EDI,[EBP + 0x2c0]               ; 0056127d
    MOV dword ptr [EBP + 0x258],0x10    ; 00561283
    JMP 0x00560e93                      ; 0056128d
        ;   XREF to: 00560e93 (UNCONDITIONAL_JUMP)  ; LAB_00560e93
    PUSH 0xd                            ; 00561292
        ;   Label: LAB_00561292
    PUSH 0x6438a4                       ; 00561294 | s_LetterBoxMode_006438a4
    PUSH ESI                            ; 00561299
    CALL crt_string.c_strnicmp_FUN_005ff070 ; 0056129a
        ;   XREF to: 005ff070 (UNCONDITIONAL_CALL)  ; int crt_string.c_strnicmp_FUN_005ff070(char * str1, char * str2, int count)
    ADD ESP,0xc                         ; 0056129f
    TEST EAX,EAX                        ; 005612a2
    JNZ 0x005612c6                      ; 005612a4
        ;   XREF to: 005612c6 (CONDITIONAL_JUMP)  ; LAB_005612c6
    LEA EBX,[EBP + 0x201]               ; 005612a6
    MOV ESI,0x6438b7                    ; 005612ac | s_LetterBoxMode_006438b7
    LEA EDI,[EBP + 0x2c0]               ; 005612b1
    MOV dword ptr [EBP + 0x258],0x11    ; 005612b7
    JMP 0x00560e93                      ; 005612c1
        ;   XREF to: 00560e93 (UNCONDITIONAL_JUMP)  ; LAB_00560e93
    PUSH 0x8                            ; 005612c6
        ;   Label: LAB_005612c6
    PUSH 0x6438ca                       ; 005612c8 | s_Filename_006438ca
    PUSH ESI                            ; 005612cd
    CALL crt_string.c_strnicmp_FUN_005ff070 ; 005612ce
        ;   XREF to: 005ff070 (UNCONDITIONAL_CALL)  ; int crt_string.c_strnicmp_FUN_005ff070(char * str1, char * str2, int count)
    ADD ESP,0xc                         ; 005612d3
    TEST EAX,EAX                        ; 005612d6
    JNZ 0x005612fa                      ; 005612d8
        ;   XREF to: 005612fa (CONDITIONAL_JUMP)  ; LAB_005612fa
    LEA EBX,[EBP + 0x1fc]               ; 005612da
    MOV ESI,0x6438d8                    ; 005612e0 | s_Filename_006438d8
    LEA EDI,[EBP + 0x2c0]               ; 005612e5
    MOV dword ptr [EBP + 0x258],0x12    ; 005612eb
    JMP 0x00560e93                      ; 005612f5
        ;   XREF to: 00560e93 (UNCONDITIONAL_JUMP)  ; LAB_00560e93
    PUSH 0x9                            ; 005612fa
        ;   Label: LAB_005612fa
    PUSH 0x6438e6                       ; 005612fc | s_SpotLight_006438e6
    PUSH ESI                            ; 00561301
    CALL crt_string.c_strnicmp_FUN_005ff070 ; 00561302
        ;   XREF to: 005ff070 (UNCONDITIONAL_CALL)  ; int crt_string.c_strnicmp_FUN_005ff070(char * str1, char * str2, int count)
    ADD ESP,0xc                         ; 00561307
    TEST EAX,EAX                        ; 0056130a
    JNZ 0x0056132e                      ; 0056130c
        ;   XREF to: 0056132e (CONDITIONAL_JUMP)  ; LAB_0056132e
    LEA EBX,[EBP + 0x1fd]               ; 0056130e
    MOV ESI,0x6438f5                    ; 00561314 | s_SpotLight_006438f5
    LEA EDI,[EBP + 0x2c0]               ; 00561319
    MOV dword ptr [EBP + 0x258],0x13    ; 0056131f
    JMP 0x00560e93                      ; 00561329
        ;   XREF to: 00560e93 (UNCONDITIONAL_JUMP)  ; LAB_00560e93
    PUSH 0xc                            ; 0056132e
        ;   Label: LAB_0056132e
    PUSH 0x643904                       ; 00561330 | s_EventCommand_00643904
    PUSH ESI                            ; 00561335
    CALL crt_string.c_strnicmp_FUN_005ff070 ; 00561336
        ;   XREF to: 005ff070 (UNCONDITIONAL_CALL)  ; int crt_string.c_strnicmp_FUN_005ff070(char * str1, char * str2, int count)
    ADD ESP,0xc                         ; 0056133b
    TEST EAX,EAX                        ; 0056133e
    JNZ 0x00561362                      ; 00561340
        ;   XREF to: 00561362 (CONDITIONAL_JUMP)  ; LAB_00561362
    LEA EBX,[EBP + 0x200]               ; 00561342
    MOV ESI,0x643916                    ; 00561348 | s_EventCommand_00643916
    LEA EDI,[EBP + 0x2c0]               ; 0056134d
    MOV dword ptr [EBP + 0x258],0x14    ; 00561353
    JMP 0x00560e93                      ; 0056135d
        ;   XREF to: 00560e93 (UNCONDITIONAL_JUMP)  ; LAB_00560e93
    PUSH 0x13                           ; 00561362
        ;   Label: LAB_00561362
    PUSH 0x643928                       ; 00561364 | s_PersistentEventName_00643928
    PUSH ESI                            ; 00561369
    CALL crt_string.c_strnicmp_FUN_005ff070 ; 0056136a
        ;   XREF to: 005ff070 (UNCONDITIONAL_CALL)  ; int crt_string.c_strnicmp_FUN_005ff070(char * str1, char * str2, int count)
    ADD ESP,0xc                         ; 0056136f
    TEST EAX,EAX                        ; 00561372
    JNZ 0x00561396                      ; 00561374
        ;   XREF to: 00561396 (CONDITIONAL_JUMP)  ; LAB_00561396
    LEA EBX,[EBP + 0x207]               ; 00561376
    MOV ESI,0x643941                    ; 0056137c | s_PersistentEventName_00643941
    LEA EDI,[EBP + 0x2c0]               ; 00561381
    MOV dword ptr [EBP + 0x258],0x15    ; 00561387
    JMP 0x00560e93                      ; 00561391
        ;   XREF to: 00560e93 (UNCONDITIONAL_JUMP)  ; LAB_00560e93
    PUSH 0xc                            ; 00561396
        ;   Label: LAB_00561396
    PUSH 0x64395a                       ; 00561398 | s_GameFlagName_0064395a
    PUSH ESI                            ; 0056139d
    CALL crt_string.c_strnicmp_FUN_005ff070 ; 0056139e
        ;   XREF to: 005ff070 (UNCONDITIONAL_CALL)  ; int crt_string.c_strnicmp_FUN_005ff070(char * str1, char * str2, int count)
    ADD ESP,0xc                         ; 005613a3
    TEST EAX,EAX                        ; 005613a6
    JNZ 0x005613ca                      ; 005613a8
        ;   XREF to: 005613ca (CONDITIONAL_JUMP)  ; LAB_005613ca
    LEA EBX,[EBP + 0x200]               ; 005613aa
    MOV ESI,0x64396c                    ; 005613b0 | s_GameFlagName_0064396c
    LEA EDI,[EBP + 0x2c0]               ; 005613b5
    MOV dword ptr [EBP + 0x258],0x16    ; 005613bb
    JMP 0x00560e93                      ; 005613c5
        ;   XREF to: 00560e93 (UNCONDITIONAL_JUMP)  ; LAB_00560e93
    PUSH 0xa                            ; 005613ca
        ;   Label: LAB_005613ca
    PUSH 0x64397e                       ; 005613cc | s_MotionName_0064397e
    PUSH ESI                            ; 005613d1
    CALL crt_string.c_strnicmp_FUN_005ff070 ; 005613d2
        ;   XREF to: 005ff070 (UNCONDITIONAL_CALL)  ; int crt_string.c_strnicmp_FUN_005ff070(char * str1, char * str2, int count)
    ADD ESP,0xc                         ; 005613d7
    TEST EAX,EAX                        ; 005613da
    JNZ 0x005613fe                      ; 005613dc
        ;   XREF to: 005613fe (CONDITIONAL_JUMP)  ; LAB_005613fe
    LEA EBX,[EBP + 0x1fe]               ; 005613de
    MOV ESI,0x64398e                    ; 005613e4 | s_MotionName_0064398e
    LEA EDI,[EBP + 0x2c0]               ; 005613e9
    MOV dword ptr [EBP + 0x258],0x17    ; 005613ef
    JMP 0x00560e93                      ; 005613f9
        ;   XREF to: 00560e93 (UNCONDITIONAL_JUMP)  ; LAB_00560e93
    PUSH 0xb                            ; 005613fe
        ;   Label: LAB_005613fe
    PUSH 0x64399e                       ; 00561400 | s_MotionState_0064399e
    PUSH ESI                            ; 00561405
    CALL crt_string.c_strnicmp_FUN_005ff070 ; 00561406
        ;   XREF to: 005ff070 (UNCONDITIONAL_CALL)  ; int crt_string.c_strnicmp_FUN_005ff070(char * str1, char * str2, int count)
    ADD ESP,0xc                         ; 0056140b
    TEST EAX,EAX                        ; 0056140e
    JNZ 0x00561432                      ; 00561410
        ;   XREF to: 00561432 (CONDITIONAL_JUMP)  ; LAB_00561432
    LEA EBX,[EBP + 0x1ff]               ; 00561412
    MOV ESI,0x6439af                    ; 00561418 | s_MotionState_006439af
    LEA EDI,[EBP + 0x2c0]               ; 0056141d
    MOV dword ptr [EBP + 0x258],0x18    ; 00561423
    JMP 0x00560e93                      ; 0056142d
        ;   XREF to: 00560e93 (UNCONDITIONAL_JUMP)  ; LAB_00560e93
    PUSH 0x5                            ; 00561432
        ;   Label: LAB_00561432
    PUSH 0x6439c0                       ; 00561434 | s_DBTag_006439c0
    PUSH ESI                            ; 00561439
    CALL crt_string.c_strnicmp_FUN_005ff070 ; 0056143a
        ;   XREF to: 005ff070 (UNCONDITIONAL_CALL)  ; int crt_string.c_strnicmp_FUN_005ff070(char * str1, char * str2, int count)
    ADD ESP,0xc                         ; 0056143f
    TEST EAX,EAX                        ; 00561442
    JNZ 0x00561466                      ; 00561444
        ;   XREF to: 00561466 (CONDITIONAL_JUMP)  ; LAB_00561466
    LEA EBX,[EBP + 0x1f9]               ; 00561446
    MOV ESI,0x6439cb                    ; 0056144c | s_DBTag_006439cb
    LEA EDI,[EBP + 0x2c0]               ; 00561451
    MOV dword ptr [EBP + 0x258],0x19    ; 00561457
    JMP 0x00560e93                      ; 00561461
        ;   XREF to: 00560e93 (UNCONDITIONAL_JUMP)  ; LAB_00560e93
    PUSH 0x8                            ; 00561466
        ;   Label: LAB_00561466
    PUSH 0x6439d6                       ; 00561468 | s_HeroTask_006439d6
    PUSH ESI                            ; 0056146d
    CALL crt_string.c_strnicmp_FUN_005ff070 ; 0056146e
        ;   XREF to: 005ff070 (UNCONDITIONAL_CALL)  ; int crt_string.c_strnicmp_FUN_005ff070(char * str1, char * str2, int count)
    ADD ESP,0xc                         ; 00561473
    TEST EAX,EAX                        ; 00561476
    JNZ 0x0056149a                      ; 00561478
        ;   XREF to: 0056149a (CONDITIONAL_JUMP)  ; LAB_0056149a
    LEA EBX,[EBP + 0x1fc]               ; 0056147a
    MOV ESI,0x6439e4                    ; 00561480 | s_HeroTask_006439e4
    LEA EDI,[EBP + 0x2c0]               ; 00561485
    MOV dword ptr [EBP + 0x258],0x1a    ; 0056148b
    JMP 0x00560e93                      ; 00561495
        ;   XREF to: 00560e93 (UNCONDITIONAL_JUMP)  ; LAB_00560e93
    PUSH 0x5                            ; 0056149a
        ;   Label: LAB_0056149a
    PUSH 0x6439f2                       ; 0056149c | s_Timer_006439f2
    PUSH ESI                            ; 005614a1
    CALL crt_string.c_strnicmp_FUN_005ff070 ; 005614a2
        ;   XREF to: 005ff070 (UNCONDITIONAL_CALL)  ; int crt_string.c_strnicmp_FUN_005ff070(char * str1, char * str2, int count)
    ADD ESP,0xc                         ; 005614a7
    TEST EAX,EAX                        ; 005614aa
    JNZ 0x005614ce                      ; 005614ac
        ;   XREF to: 005614ce (CONDITIONAL_JUMP)  ; LAB_005614ce
    LEA EBX,[EBP + 0x1f9]               ; 005614ae
    MOV ESI,0x6439fd                    ; 005614b4 | s_Timer_006439fd
    LEA EDI,[EBP + 0x2c0]               ; 005614b9
    MOV dword ptr [EBP + 0x258],0x1c    ; 005614bf
    JMP 0x00560e93                      ; 005614c9
        ;   XREF to: 00560e93 (UNCONDITIONAL_JUMP)  ; LAB_00560e93
    PUSH 0x5                            ; 005614ce
        ;   Label: LAB_005614ce
    PUSH 0x643a08                       ; 005614d0 | s_RelOp_00643a08
    PUSH ESI                            ; 005614d5
    CALL crt_string.c_strnicmp_FUN_005ff070 ; 005614d6
        ;   XREF to: 005ff070 (UNCONDITIONAL_CALL)  ; int crt_string.c_strnicmp_FUN_005ff070(char * str1, char * str2, int count)
    ADD ESP,0xc                         ; 005614db
    TEST EAX,EAX                        ; 005614de
    JNZ 0x00561502                      ; 005614e0
        ;   XREF to: 00561502 (CONDITIONAL_JUMP)  ; LAB_00561502
    LEA EBX,[EBP + 0x1f9]               ; 005614e2
    MOV ESI,0x643a13                    ; 005614e8 | s_RelOp_00643a13
    LEA EDI,[EBP + 0x2c0]               ; 005614ed
    MOV dword ptr [EBP + 0x258],0x1d    ; 005614f3
    JMP 0x00560e93                      ; 005614fd
        ;   XREF to: 00560e93 (UNCONDITIONAL_JUMP)  ; LAB_00560e93
    PUSH 0xc                            ; 00561502
        ;   Label: LAB_00561502
    PUSH 0x643a1e                       ; 00561504 | s_BodyPartList_00643a1e
    PUSH ESI                            ; 00561509
    CALL crt_string.c_strnicmp_FUN_005ff070 ; 0056150a
        ;   XREF to: 005ff070 (UNCONDITIONAL_CALL)  ; int crt_string.c_strnicmp_FUN_005ff070(char * str1, char * str2, int count)
    ADD ESP,0xc                         ; 0056150f
    TEST EAX,EAX                        ; 00561512
    JNZ 0x00561536                      ; 00561514
        ;   XREF to: 00561536 (CONDITIONAL_JUMP)  ; LAB_00561536
    LEA EBX,[EBP + 0x200]               ; 00561516
    MOV ESI,0x643a30                    ; 0056151c | s_BodyPartList_00643a30
    LEA EDI,[EBP + 0x2c0]               ; 00561521
    MOV dword ptr [EBP + 0x258],0x1e    ; 00561527
    JMP 0x00560e93                      ; 00561531
        ;   XREF to: 00560e93 (UNCONDITIONAL_JUMP)  ; LAB_00560e93
    PUSH 0xb                            ; 00561536
        ;   Label: LAB_00561536
    MOV EAX,0x643a42                    ; 00561538 | s_IniVariable_00643a42
    PUSH EAX                            ; 0056153d | s_IniVariable_00643a42
    LEA EAX,[EBP + 0x1f4]               ; 0056153e
    PUSH EAX                            ; 00561544
    CALL crt_string.c_strnicmp_FUN_005ff070 ; 00561545
        ;   XREF to: 005ff070 (UNCONDITIONAL_CALL)  ; int crt_string.c_strnicmp_FUN_005ff070(char * str1, char * str2, int count)
    ADD ESP,0xc                         ; 0056154a
    TEST EAX,EAX                        ; 0056154d
    JNZ 0x00560ead                      ; 0056154f
        ;   XREF to: 00560ead (CONDITIONAL_JUMP)  ; LAB_00560ead
    LEA EBX,[EBP + 0x1ff]               ; 00561555
    MOV ESI,0x643a53                    ; 0056155b | s_IniVariable_00643a53
    LEA EDI,[EBP + 0x2c0]               ; 00561560
    MOV dword ptr [EBP + 0x258],0x1f    ; 00561566
    JMP 0x00560e93                      ; 00561570
        ;   XREF to: 00560e93 (UNCONDITIONAL_JUMP)  ; LAB_00560e93
    PUSH ESI                            ; 00561575
        ;   Label: LAB_00561575
    PUSH 0x643a5f                       ; 00561576 | = "SCmdParm::setTemplateText - %s unknow..."
    MOV EDI,dword ptr [0x00678a60]      ; 0056157b | g_CEditorToolsPtr
    PUSH EDI                            ; 00561581 | g_CEditorToolsInstance
    XOR ESI,ESI                         ; 00561582
    CALL shape_edittool.cpp_CEditorTools_showError_FUN_0049e740 ; 00561584
        ;   XREF to: 0049e740 (UNCONDITIONAL_CALL)  ; void shape_edittool.cpp_CEditorTools_showError_FUN_0049e740(CEditorTools * this_ptr, char * format)
    ADD ESP,0xc                         ; 00561589
    MOV EAX,ESI                         ; 0056158c
    ADD ESP,0x8                         ; 0056158e
    POP EBP                             ; 00561591
    POP EDI                             ; 00561592
    POP ESI                             ; 00561593
    POP EBX                             ; 00561594
    RET                                 ; 00561595
    CMP AH,0x27                         ; 00561596
        ;   Label: LAB_00561596
    JNZ 0x005615e4                      ; 00561599
        ;   XREF to: 005615e4 (CONDITIONAL_JUMP)  ; LAB_005615e4
    MOV ESI,dword ptr [ESP]             ; 0056159b
    MOV CH,byte ptr [EDX]               ; 0056159e
    MOV EBX,EDX                         ; 005615a0
    CMP CH,AH                           ; 005615a2
    JZ 0x005615db                       ; 005615a4
        ;   XREF to: 005615db (CONDITIONAL_JUMP)  ; LAB_005615db
    CMP byte ptr [EBX],0x0              ; 005615a6
        ;   Label: LAB_005615a6
    JNZ 0x005615ce                      ; 005615a9
        ;   XREF to: 005615ce (CONDITIONAL_JUMP)  ; LAB_005615ce
    PUSH EDI                            ; 005615ab
    MOV EAX,0x643a95                    ; 005615ac | = "..\\core\\script.cpp"
    MOV EDX,0x1188                      ; 005615b1
    PUSH 0x643aa8                       ; 005615b6 | = "Missing closing ' in template string: %s"
    MOV [0x02f0ca48],EAX                ; 005615bb | g_CurrentFilename
    MOV dword ptr [0x02f0ca4c],EDX      ; 005615c0 | g_CurrentLineNumber
    CALL core_main.c_displayErrorAndQuit_FUN_00506f10 ; 005615c6
        ;   XREF to: 00506f10 (UNCONDITIONAL_CALL)  ; void core_main.c_displayErrorAndQuit_FUN_00506f10(char * format)
    ADD ESP,0x8                         ; 005615cb
    MOV AL,byte ptr [EBX]               ; 005615ce
        ;   Label: LAB_005615ce
    INC EBX                             ; 005615d0
    MOV byte ptr [ESI],AL               ; 005615d1
    MOV CH,byte ptr [EBX]               ; 005615d3
    INC ESI                             ; 005615d5
    CMP CH,0x27                         ; 005615d6
    JNZ 0x005615a6                      ; 005615d9
        ;   XREF to: 005615a6 (CONDITIONAL_JUMP)  ; LAB_005615a6
    INC EBX                             ; 005615db
        ;   Label: LAB_005615db
    MOV byte ptr [ESI],0x0              ; 005615dc
    JMP 0x00560f0a                      ; 005615df
        ;   XREF to: 00560f0a (UNCONDITIONAL_JUMP)  ; LAB_00560f0a
    ADD EBP,0x1f4                       ; 005615e4
        ;   Label: LAB_005615e4
    PUSH EBP                            ; 005615ea
    PUSH 0x643ad1                       ; 005615eb | = "SCmdParm::setTemplateText - Invalid t..."
    MOV ESI,dword ptr [0x00678a60]      ; 005615f0 | g_CEditorToolsPtr
    PUSH ESI                            ; 005615f6 | g_CEditorToolsInstance
    CALL shape_edittool.cpp_CEditorTools_showError_FUN_0049e740 ; 005615f7
        ;   XREF to: 0049e740 (UNCONDITIONAL_CALL)  ; void shape_edittool.cpp_CEditorTools_showError_FUN_0049e740(CEditorTools * this_ptr, char * format)
    ADD ESP,0xc                         ; 005615fc
    XOR ESI,ESI                         ; 005615ff
    MOV EAX,ESI                         ; 00561601
    ADD ESP,0x8                         ; 00561603
    POP EBP                             ; 00561606
    POP EDI                             ; 00561607
    POP ESI                             ; 00561608
    POP EBX                             ; 00561609
    RET                                 ; 0056160a

