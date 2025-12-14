; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl int core_actor.cpp_CActorProperty_editInteractive_FUN_0040eed0(CActorProperty * this_ptr, CDemonActor * actor)
;
; Parameters:
; CActorProperty * Stack[0x4]:4   this_ptr
; CDemonActor *    Stack[0x8]:4   actor
; Local Variables:
; undefined4       Stack[-0x37ec]:4  local_37ec
; undefined1       Stack[-0x3444]:1  local_3444
; undefined4       Stack[-0x309c]:4  local_309c
; undefined4       Stack[-0x2cf4]:4  local_2cf4
; undefined4       Stack[-0x294c]:4  local_294c
; undefined1       Stack[-0x25a4]:1  local_25a4
; undefined1       Stack[-0x21fc]:1  local_21fc
; undefined1       Stack[-0x1e54]:1  local_1e54
; undefined1       Stack[-0x1aac]:1  local_1aac
; undefined1       Stack[-0x18ac]:1  local_18ac
; undefined1       Stack[-0x16ac]:1  local_16ac
; undefined1       Stack[-0x14ac]:1  local_14ac
; undefined1       Stack[-0x12ac]:1  local_12ac
; undefined1       Stack[-0x10ac]:1  local_10ac
; undefined1       Stack[-0xeac]:1  local_eac
; undefined1       Stack[-0xcac]:1  local_cac
; undefined1       Stack[-0xaac]:1  local_aac
; undefined1       Stack[-0xaab]:1  local_aab
; undefined1       Stack[-0x980]:1  local_980
; undefined1       Stack[-0x854]:1  local_854
; undefined1       Stack[-0x853]:1  local_853
; undefined1       Stack[-0x750]:1  local_750
; undefined1       Stack[-0x74f]:1  local_74f
; undefined1       Stack[-0x64c]:1  local_64c
; undefined1       Stack[-0x64b]:1  local_64b
; undefined1       Stack[-0x548]:1  local_548
; undefined1       Stack[-0x547]:1  local_547
; undefined1       Stack[-0x444]:1  local_444
; undefined1       Stack[-0x443]:1  local_443
; undefined1       Stack[-0x368]:1  local_368
; undefined1       Stack[-0x2a0]:1  local_2a0
; undefined1       Stack[-0x1d8]:1  local_1d8
; undefined1       Stack[-0x1d7]:1  local_1d7
; undefined1       Stack[-0x175]:1  local_175
; undefined1       Stack[-0x174]:1  local_174
; undefined1       Stack[-0x173]:1  local_173
; undefined1       Stack[-0x110]:1  local_110
; undefined1       Stack[-0x10f]:1  local_10f
; undefined1       Stack[-0xac]:1  local_ac
; undefined1       Stack[-0xab]:1  local_ab
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
; XREF[3]:
;   core_msnedit.cpp_FUN_00536e20 at 00536f7b
;   core_msnedit.cpp_FUN_0053c730 at 0053c8a4
;   core_msnedit.cpp_PrepareMissionMaybe_FUN_005390f0 at 0053ae03
;
; Referenced Globals:
;   void* switchdataD_0040ee84 = 0040ef01
;   undefined4 caseD_0
;   TerminatedCString s_Enter_s_for_s_00614560
;   TerminatedCString s_Select_model_for_actor_s_00614570
;   TerminatedCString s_kfm_006145a1
;   TerminatedCString s_models_006145a7
;   TerminatedCString s_none_006145ae
;   TerminatedCString s_Select_model_for_actor_s_006145b5
;   TerminatedCString s_dfm_006145e6
;   TerminatedCString s_models_006145ec
;   TerminatedCString s_none_006145f3
;   TerminatedCString s_none_006145fa
;   TerminatedCString s_s_s_00614601
;   TerminatedCString s_cth_00614607
;   TerminatedCString s_models_0061460d
;   ... and 30 more
;
; Called Functions:
;   core_cloth.cpp_CClothList_add_FUN_0043c0f0
;   core_cloth.cpp_CClothList_remove_FUN_0043c170
;   core_dmodel.cpp_CKeyFramedModelInstance_setModelName_FUN_00478dd0
;   core_event.cpp_CEventList_FUN_004add00
;   core_event.cpp_CEventList_FUN_004add40
;   core_event.cpp_CRuleList_remove_FUN_004b17c0
;   core_ground.cpp_getGroundTypeName_FUN_004eed80
;   core_main.c_displayErrorAndQuit_FUN_00506f10
;   core_motion.cpp_CMotionController_getCurrentMotion_FUN_0052dab0
;   core_motion.cpp_CMotionController_getMotionList_FUN_0052dce0
;   core_motion.cpp_CMotionController_jumpToMotion_FUN_0052dde0
;   core_msnedit.cpp_RunNoneFunctorForCancelAndElse_FUN_0053cad0
;   core_skeleton.cpp_CDeformableModelInstance_init_FUN_005a0840
;   core_sound.cpp_editSoundName_FUN_005b3de0
;   crt_file.c_makepath_FUN_005febfc
;   ... and 14 more
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0040eed0
        ;   Label: core_actor.cpp_CActorProperty_editInteractive_FUN_0040eed0
    PUSH ESI                            ; 0040eed1
    PUSH EDI                            ; 0040eed2
    PUSH EBP                            ; 0040eed3
    SUB ESP,0x37dc                      ; 0040eed4
    MOV EBX,dword ptr [ESP + 0x37f0]    ; 0040eeda
    MOV EBP,dword ptr [ESP + 0x37f4]    ; 0040eee1
    CMP dword ptr [EBX + 0x54],0x0      ; 0040eee8
    JNZ 0x0041030b                      ; 0040eeec
        ;   XREF to: 0041030b (CONDITIONAL_JUMP)  ; LAB_0041030b
    XOR ESI,ESI                         ; 0040eef2
        ;   Label: LAB_0040eef2
    MOV EAX,ESI                         ; 0040eef4
    ADD ESP,0x37dc                      ; 0040eef6
    POP EBP                             ; 0040eefc
    POP EDI                             ; 0040eefd
    POP ESI                             ; 0040eefe
    POP EBX                             ; 0040eeff
    RET                                 ; 0040ef00
    MOV EAX,dword ptr [EBX + 0x68]      ; 0040ef93
        ;   Label: caseD_1
    MOV EAX,dword ptr [EAX]             ; 0040ef96
    MOV dword ptr [ESP + 0x37bc],EAX    ; 0040ef98
    XOR ESI,ESI                         ; 0040ef9f
    PUSH 0x1                            ; 0040efa1
        ;   Label: LAB_0040efa1
    PUSH dword ptr [EBX + 0x64]         ; 0040efa3
    MOV ECX,dword ptr [EBX + 0x5c]      ; 0040efa6
    PUSH dword ptr [EBX + 0x60]         ; 0040efa9
    PUSH ECX                            ; 0040efac
    LEA EAX,[ESP + 0x37cc]              ; 0040efad
    PUSH EAX                            ; 0040efb4
    LEA EAX,[ESP + 0x3560]              ; 0040efb5
    PUSH EAX                            ; 0040efbc
    MOV EDI,dword ptr [0x00678a60]      ; 0040efbd | g_CEditorToolsPtr
    PUSH EDI                            ; 0040efc3 | g_CEditorToolsPtr
    CALL shape_edittool.cpp_CEditorTools_promptForValidFloat_FUN_004a00f0 ; 0040efc4
        ;   XREF to: 004a00f0 (UNCONDITIONAL_CALL)  ; int shape_edittool.cpp_CEditorTools_promptForValidFloat_FUN_004a00f0(CEditorTools * this_ptr, char * prompt_text, float * result_ptr, bool enable_range_check, ...)
    ADD ESP,0x1c                        ; 0040efc9
    TEST EAX,EAX                        ; 0040efcc
    JZ 0x0040eef2                       ; 0040efce
        ;   XREF to: 0040eef2 (CONDITIONAL_JUMP)  ; LAB_0040eef2
    CMP ESI,dword ptr [EBX + 0xe8]      ; 0040efd4
    JNZ 0x0040f00c                      ; 0040efda
        ;   XREF to: 0040f00c (CONDITIONAL_JUMP)  ; LAB_0040f00c
    MOV EDX,dword ptr [EBX + 0x68]      ; 0040efdc
        ;   Label: LAB_0040efdc
    MOV EAX,dword ptr [ESP + 0x37bc]    ; 0040efdf
    MOV dword ptr [EDX],EAX             ; 0040efe6
    CMP dword ptr [EBX + 0x58],0x0      ; 0040efe8
    JZ 0x0040effa                       ; 0040efec
        ;   XREF to: 0040effa (CONDITIONAL_JUMP)  ; LAB_0040effa
    PUSH EBP                            ; 0040efee
    MOV EAX,dword ptr [EBP + 0x154]     ; 0040efef
    CALL dword ptr [EAX]                ; 0040eff5
    ADD ESP,0x4                         ; 0040eff7
    MOV ESI,0x1                         ; 0040effa
        ;   Label: LAB_0040effa
    MOV EAX,ESI                         ; 0040efff
    ADD ESP,0x37dc                      ; 0040f001
    POP EBP                             ; 0040f007
    POP EDI                             ; 0040f008
    POP ESI                             ; 0040f009
    POP EBX                             ; 0040f00a
    RET                                 ; 0040f00b
    PUSH dword ptr [ESP + 0x37bc]       ; 0040f00c
        ;   Label: LAB_0040f00c
    PUSH EBP                            ; 0040f013
    CALL dword ptr [EBX + 0xe8]         ; 0040f014
    ADD ESP,0x8                         ; 0040f01a
    TEST EAX,EAX                        ; 0040f01d
    JNZ 0x0040efdc                      ; 0040f01f
        ;   XREF to: 0040efdc (CONDITIONAL_JUMP)  ; LAB_0040efdc
    JMP 0x0040efa1                      ; 0040f021
        ;   XREF to: 0040efa1 (UNCONDITIONAL_JUMP)  ; LAB_0040efa1
    MOV EDX,dword ptr [EBX + 0x68]      ; 0040f026
        ;   Label: caseD_2
    MOV EAX,dword ptr [EDX]             ; 0040f029
    MOV dword ptr [ESP + 0x37a4],EAX    ; 0040f02b
    LEA EAX,[EDX + 0x4]                 ; 0040f032
    MOV EAX,dword ptr [EAX]             ; 0040f035
    MOV dword ptr [ESP + 0x37a8],EAX    ; 0040f037
    LEA EAX,[EDX + 0x8]                 ; 0040f03e
    MOV EAX,dword ptr [EAX]             ; 0040f041
    MOV dword ptr [ESP + 0x37ac],EAX    ; 0040f043
    XOR ESI,ESI                         ; 0040f04a
    PUSH 0x1                            ; 0040f04c
        ;   Label: LAB_0040f04c
    LEA EAX,[ESP + 0x37a8]              ; 0040f04e
    PUSH EAX                            ; 0040f055
    LEA EAX,[ESP + 0x3554]              ; 0040f056
    PUSH EAX                            ; 0040f05d
    MOV EDI,dword ptr [0x00678a60]      ; 0040f05e | g_CEditorToolsPtr
    PUSH EDI                            ; 0040f064 | g_CEditorToolsPtr
    CALL shape_edittool.cpp_CEditorTools_promptForValidVector_FUN_004a0300 ; 0040f065
        ;   XREF to: 004a0300 (UNCONDITIONAL_CALL)  ; int shape_edittool.cpp_CEditorTools_promptForValidVector_FUN_004a0300(CEditorTools * editor_tools, char * prompt_text, CVector3f * result_ptr, bool show_current_value)
    ADD ESP,0x10                        ; 0040f06a
    TEST EAX,EAX                        ; 0040f06d
    JZ 0x0040eef2                       ; 0040f06f
        ;   XREF to: 0040eef2 (CONDITIONAL_JUMP)  ; LAB_0040eef2
    CMP ESI,dword ptr [EBX + 0xe8]      ; 0040f075
    JNZ 0x0040f0cc                      ; 0040f07b
        ;   XREF to: 0040f0cc (CONDITIONAL_JUMP)  ; LAB_0040f0cc
    LEA EAX,[ESP + 0x37a4]              ; 0040f07d
        ;   Label: LAB_0040f07d
    MOV EDX,dword ptr [EBX + 0x68]      ; 0040f084
    CMP EDX,EAX                         ; 0040f087
    JZ 0x0040f0a8                       ; 0040f089
        ;   XREF to: 0040f0a8 (CONDITIONAL_JUMP)  ; LAB_0040f0a8
    MOV EAX,dword ptr [ESP + 0x37a4]    ; 0040f08b
    MOV dword ptr [EDX],EAX             ; 0040f092
    MOV EAX,dword ptr [ESP + 0x37a8]    ; 0040f094
    MOV dword ptr [EDX + 0x4],EAX       ; 0040f09b
    MOV EAX,dword ptr [ESP + 0x37ac]    ; 0040f09e
    MOV dword ptr [EDX + 0x8],EAX       ; 0040f0a5
    CMP dword ptr [EBX + 0x58],0x0      ; 0040f0a8
        ;   Label: LAB_0040f0a8
    JZ 0x0040f0ba                       ; 0040f0ac
        ;   XREF to: 0040f0ba (CONDITIONAL_JUMP)  ; LAB_0040f0ba
    PUSH EBP                            ; 0040f0ae
    MOV EAX,dword ptr [EBP + 0x154]     ; 0040f0af
    CALL dword ptr [EAX]                ; 0040f0b5
    ADD ESP,0x4                         ; 0040f0b7
    MOV ESI,0x1                         ; 0040f0ba
        ;   Label: LAB_0040f0ba
    MOV EAX,ESI                         ; 0040f0bf
    ADD ESP,0x37dc                      ; 0040f0c1
    POP EBP                             ; 0040f0c7
    POP EDI                             ; 0040f0c8
    POP ESI                             ; 0040f0c9
    POP EBX                             ; 0040f0ca
    RET                                 ; 0040f0cb
    MOV EAX,dword ptr [ESP + 0x37a4]    ; 0040f0cc
        ;   Label: LAB_0040f0cc
    MOV dword ptr [ESP + 0x37b0],EAX    ; 0040f0d3
    MOV EAX,dword ptr [ESP + 0x37a8]    ; 0040f0da
    MOV dword ptr [ESP + 0x37b4],EAX    ; 0040f0e1
    MOV EAX,dword ptr [ESP + 0x37ac]    ; 0040f0e8
    MOV dword ptr [ESP + 0x37b8],EAX    ; 0040f0ef
    LEA EAX,[ESP + 0x37b0]              ; 0040f0f6
    PUSH EAX                            ; 0040f0fd
    PUSH EBP                            ; 0040f0fe
    CALL dword ptr [EBX + 0xe8]         ; 0040f0ff
    ADD ESP,0x8                         ; 0040f105
    TEST EAX,EAX                        ; 0040f108
    JNZ 0x0040f07d                      ; 0040f10a
        ;   XREF to: 0040f07d (CONDITIONAL_JUMP)  ; LAB_0040f07d
    JMP 0x0040f04c                      ; 0040f110
        ;   XREF to: 0040f04c (UNCONDITIONAL_JUMP)  ; LAB_0040f04c
    MOV EAX,dword ptr [EBX + 0x68]      ; 0040f115
        ;   Label: caseD_4
    CMP dword ptr [EAX],0x0             ; 0040f118
    SETZ AL                             ; 0040f11b
    MOV EDX,EAX                         ; 0040f11e
    MOV EAX,dword ptr [EBX + 0x68]      ; 0040f120
    AND EDX,0xff                        ; 0040f123
    MOV ESI,0x1                         ; 0040f129
    MOV dword ptr [EAX],EDX             ; 0040f12e
    MOV EAX,ESI                         ; 0040f130
    ADD ESP,0x37dc                      ; 0040f132
    POP EBP                             ; 0040f138
    POP EDI                             ; 0040f139
    POP ESI                             ; 0040f13a
    POP EBX                             ; 0040f13b
    RET                                 ; 0040f13c
    LEA EDI,[ESP + 0x2d40]              ; 0040f13d
        ;   Label: caseD_3
    MOV ESI,dword ptr [EBX + 0x68]      ; 0040f144
    PUSH EDI                            ; 0040f147
    MOV AL,byte ptr [ESI]               ; 0040f148
        ;   Label: LAB_0040f148
    MOV byte ptr [EDI],AL               ; 0040f14a
    CMP AL,0x0                          ; 0040f14c
    JZ 0x0040f160                       ; 0040f14e
        ;   XREF to: 0040f160 (CONDITIONAL_JUMP)  ; LAB_0040f160
    MOV AL,byte ptr [ESI + 0x1]         ; 0040f150
    ADD ESI,0x2                         ; 0040f153
    MOV byte ptr [EDI + 0x1],AL         ; 0040f156
    ADD EDI,0x2                         ; 0040f159
    CMP AL,0x0                          ; 0040f15c
    JNZ 0x0040f148                      ; 0040f15e
        ;   XREF to: 0040f148 (CONDITIONAL_JUMP)  ; LAB_0040f148
    POP EDI                             ; 0040f160
        ;   Label: LAB_0040f160
    XOR ESI,ESI                         ; 0040f161
    PUSH 0x1                            ; 0040f163
        ;   Label: LAB_0040f163
    MOV EAX,dword ptr [EBX + 0x64]      ; 0040f165
    PUSH EAX                            ; 0040f168
    LEA EAX,[ESP + 0x2d48]              ; 0040f169
    PUSH EAX                            ; 0040f170
    LEA EAX,[ESP + 0x3558]              ; 0040f171
    PUSH EAX                            ; 0040f178
    MOV EDX,dword ptr [0x00678a60]      ; 0040f179 | g_CEditorToolsPtr
    PUSH EDX                            ; 0040f17f | g_CEditorToolsPtr
    CALL shape_edittool.cpp_CEditorTools_showTextInputDialog_FUN_004a03d0 ; 0040f180
        ;   XREF to: 004a03d0 (UNCONDITIONAL_CALL)  ; int shape_edittool.cpp_CEditorTools_showTextInputDialog_FUN_004a03d0(CEditorTools * this_ptr, char * prompt_text, char * input_buffer, int buffer_size, ...)
    ADD ESP,0x14                        ; 0040f185
    TEST EAX,EAX                        ; 0040f188
    JZ 0x0040eef2                       ; 0040f18a
        ;   XREF to: 0040eef2 (CONDITIONAL_JUMP)  ; LAB_0040eef2
    CMP ESI,dword ptr [EBX + 0xe8]      ; 0040f190
    JNZ 0x0040f1e0                      ; 0040f196
        ;   XREF to: 0040f1e0 (CONDITIONAL_JUMP)  ; LAB_0040f1e0
    LEA ESI,[ESP + 0x2d40]              ; 0040f198
        ;   Label: LAB_0040f198
    MOV EDI,dword ptr [EBX + 0x68]      ; 0040f19f
    PUSH EDI                            ; 0040f1a2
    MOV AL,byte ptr [ESI]               ; 0040f1a3
        ;   Label: LAB_0040f1a3
    MOV byte ptr [EDI],AL               ; 0040f1a5
    CMP AL,0x0                          ; 0040f1a7
    JZ 0x0040f1bb                       ; 0040f1a9
        ;   XREF to: 0040f1bb (CONDITIONAL_JUMP)  ; LAB_0040f1bb
    MOV AL,byte ptr [ESI + 0x1]         ; 0040f1ab
    ADD ESI,0x2                         ; 0040f1ae
    MOV byte ptr [EDI + 0x1],AL         ; 0040f1b1
    ADD EDI,0x2                         ; 0040f1b4
    CMP AL,0x0                          ; 0040f1b7
    JNZ 0x0040f1a3                      ; 0040f1b9
        ;   XREF to: 0040f1a3 (CONDITIONAL_JUMP)  ; LAB_0040f1a3
    POP EDI                             ; 0040f1bb
        ;   Label: LAB_0040f1bb
    CMP dword ptr [EBX + 0x58],0x0      ; 0040f1bc
    JZ 0x0040f1ce                       ; 0040f1c0
        ;   XREF to: 0040f1ce (CONDITIONAL_JUMP)  ; LAB_0040f1ce
    PUSH EBP                            ; 0040f1c2
    MOV EAX,dword ptr [EBP + 0x154]     ; 0040f1c3
    CALL dword ptr [EAX]                ; 0040f1c9
    ADD ESP,0x4                         ; 0040f1cb
    MOV ESI,0x1                         ; 0040f1ce
        ;   Label: LAB_0040f1ce
    MOV EAX,ESI                         ; 0040f1d3
    ADD ESP,0x37dc                      ; 0040f1d5
    POP EBP                             ; 0040f1db
    POP EDI                             ; 0040f1dc
    POP ESI                             ; 0040f1dd
    POP EBX                             ; 0040f1de
    RET                                 ; 0040f1df
    LEA EAX,[ESP + 0x2d40]              ; 0040f1e0
        ;   Label: LAB_0040f1e0
    PUSH EAX                            ; 0040f1e7
    PUSH EBP                            ; 0040f1e8
    CALL dword ptr [EBX + 0xe8]         ; 0040f1e9
    ADD ESP,0x8                         ; 0040f1ef
    TEST EAX,EAX                        ; 0040f1f2
    JNZ 0x0040f198                      ; 0040f1f4
        ;   XREF to: 0040f198 (CONDITIONAL_JUMP)  ; LAB_0040f198
    JMP 0x0040f163                      ; 0040f1f6
        ;   XREF to: 0040f163 (UNCONDITIONAL_JUMP)  ; LAB_0040f163
    MOV EAX,dword ptr [EBX + 0x68]      ; 0040f1fb
        ;   Label: caseD_5
    MOV EAX,dword ptr [EAX]             ; 0040f1fe
    MOV dword ptr [ESP + 0x37c4],EAX    ; 0040f200
    PUSH 0x1                            ; 0040f207
    MOV EDX,dword ptr [EBX + 0xe8]      ; 0040f209
    PUSH EDX                            ; 0040f20f
    LEA EAX,[EBX + 0x84]                ; 0040f210
    PUSH EAX                            ; 0040f216
    MOV ECX,dword ptr [EBX + 0x5c]      ; 0040f217
    PUSH ECX                            ; 0040f21a
    LEA EAX,[ESP + 0x37d4]              ; 0040f21b
    PUSH EAX                            ; 0040f222
    LEA EAX,[ESP + 0x3560]              ; 0040f223
    PUSH EAX                            ; 0040f22a
    PUSH EBP                            ; 0040f22b
    MOV ESI,dword ptr [0x0067d550]      ; 0040f22c | g_CDemonMissionPtr
    PUSH ESI                            ; 0040f232 | g_CDemonMissionInstance
    CALL core_msnedit.cpp_RunNoneFunctorForCancelAndElse_FUN_0053cad0 ; 0040f233
        ;   XREF to: 0053cad0 (UNCONDITIONAL_CALL)  ; undefined core_msnedit.cpp_RunNoneFunctorForCancelAndElse_FUN_0053cad0()
    ADD ESP,0x20                        ; 0040f238
    TEST EAX,EAX                        ; 0040f23b
    JZ 0x0040eef2                       ; 0040f23d
        ;   XREF to: 0040eef2 (CONDITIONAL_JUMP)  ; LAB_0040eef2
    MOV EDX,dword ptr [EBX + 0x68]      ; 0040f243
    MOV EAX,dword ptr [ESP + 0x37c4]    ; 0040f246
    MOV dword ptr [EDX],EAX             ; 0040f24d
    CMP dword ptr [EBX + 0x58],0x0      ; 0040f24f
    JNZ 0x0040f267                      ; 0040f253
        ;   XREF to: 0040f267 (CONDITIONAL_JUMP)  ; LAB_0040f267
    MOV ESI,0x1                         ; 0040f255
    MOV EAX,ESI                         ; 0040f25a
    ADD ESP,0x37dc                      ; 0040f25c
    POP EBP                             ; 0040f262
    POP EDI                             ; 0040f263
    POP ESI                             ; 0040f264
    POP EBX                             ; 0040f265
    RET                                 ; 0040f266
    PUSH EBP                            ; 0040f267
        ;   Label: LAB_0040f267
    MOV EAX,dword ptr [EBP + 0x154]     ; 0040f268
    CALL dword ptr [EAX]                ; 0040f26e
    ADD ESP,0x4                         ; 0040f270
    MOV ESI,0x1                         ; 0040f273
    MOV EAX,ESI                         ; 0040f278
    ADD ESP,0x37dc                      ; 0040f27a
    POP EBP                             ; 0040f280
    POP EDI                             ; 0040f281
    POP ESI                             ; 0040f282
    POP EBX                             ; 0040f283
    RET                                 ; 0040f284
    MOV EAX,dword ptr [EBX + 0x68]      ; 0040f285
        ;   Label: caseD_6
    ADD EAX,0x78                        ; 0040f288
    PUSH EAX                            ; 0040f28b
    PUSH EBP                            ; 0040f28c
    PUSH 0x614570                       ; 0040f28d | = "Select model for actor %s.  Current m..."
    LEA EAX,[ESP + 0x3558]              ; 0040f292
    PUSH EAX                            ; 0040f299
    CALL crt_stdio.c_sprintf_FUN_005fdbd0 ; 0040f29a
        ;   XREF to: 005fdbd0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_sprintf_FUN_005fdbd0(char * buffer, char * format)
    ADD ESP,0x10                        ; 0040f29f
    MOV ESI,dword ptr [EBX + 0x68]      ; 0040f2a2
    LEA EDI,[ESP + 0x2f98]              ; 0040f2a5
    ADD ESI,0x78                        ; 0040f2ac
    PUSH EDI                            ; 0040f2af
    MOV AL,byte ptr [ESI]               ; 0040f2b0
        ;   Label: LAB_0040f2b0
    MOV byte ptr [EDI],AL               ; 0040f2b2
    CMP AL,0x0                          ; 0040f2b4
    JZ 0x0040f2c8                       ; 0040f2b6
        ;   XREF to: 0040f2c8 (CONDITIONAL_JUMP)  ; LAB_0040f2c8
    MOV AL,byte ptr [ESI + 0x1]         ; 0040f2b8
    ADD ESI,0x2                         ; 0040f2bb
    MOV byte ptr [EDI + 0x1],AL         ; 0040f2be
    ADD EDI,0x2                         ; 0040f2c1
    CMP AL,0x0                          ; 0040f2c4
    JNZ 0x0040f2b0                      ; 0040f2c6
        ;   XREF to: 0040f2b0 (CONDITIONAL_JUMP)  ; LAB_0040f2b0
    POP EDI                             ; 0040f2c8
        ;   Label: LAB_0040f2c8
    MOV EAX,ESP                         ; 0040f2c9
    PUSH EAX                            ; 0040f2cb
    CALL shape_edittool.cpp_CPickList_ctor_FUN_004a3b90 ; 0040f2cc
        ;   XREF to: 004a3b90 (UNCONDITIONAL_CALL)  ; CPickList * shape_edittool.cpp_CPickList_ctor_FUN_004a3b90(CPickList * this_ptr)
    ADD ESP,0x4                         ; 0040f2d1
    PUSH 0x6145a1                       ; 0040f2d4 | = "*.kfm"
    PUSH 0x6145a7                       ; 0040f2d9 | = "models"
    LEA EAX,[ESP + 0x8]                 ; 0040f2de
    PUSH EAX                            ; 0040f2e2
    CALL shape_edittool.cpp_CStrList_populateFromFileSearch_FUN_004a35b0 ; 0040f2e3
        ;   XREF to: 004a35b0 (UNCONDITIONAL_CALL)  ; void shape_edittool.cpp_CStrList_populateFromFileSearch_FUN_004a35b0(CStrList * this_ptr, char * directory_path, char * file_pattern)
    ADD ESP,0xc                         ; 0040f2e8
    MOV EAX,ESP                         ; 0040f2eb
    PUSH EAX                            ; 0040f2ed
    CALL shape_edittool.cpp_CStrList_sort_FUN_004a2ec0 ; 0040f2ee
        ;   XREF to: 004a2ec0 (UNCONDITIONAL_CALL)  ; void shape_edittool.cpp_CStrList_sort_FUN_004a2ec0(CStrList * this_ptr)
    MOV EAX,dword ptr [EBX + 0x5c]      ; 0040f2f3
    ADD ESP,0x4                         ; 0040f2f6
    TEST EAX,EAX                        ; 0040f2f9
    JNZ 0x0040f3af                      ; 0040f2fb
        ;   XREF to: 0040f3af (CONDITIONAL_JUMP)  ; LAB_0040f3af
    MOV EDI,0xffffffff                  ; 0040f301
        ;   Label: LAB_0040f301
    PUSH 0x0                            ; 0040f306
        ;   Label: LAB_0040f306
    PUSH EDI                            ; 0040f308
    LEA EAX,[ESP + 0x3554]              ; 0040f309
    PUSH EAX                            ; 0040f310
    LEA EAX,[ESP + 0xc]                 ; 0040f311
    PUSH EAX                            ; 0040f315
    CALL shape_edittool.cpp_CPickList_displayChoicesAndWaitForInput_FUN_004a3e20 ; 0040f316
        ;   XREF to: 004a3e20 (UNCONDITIONAL_CALL)  ; int shape_edittool.cpp_CPickList_displayChoicesAndWaitForInput_FUN_004a3e20(CPickList * this_ptr, char * dialog_title, int config_param1, int config_param2)
    ADD ESP,0x10                        ; 0040f31b
    MOV ESI,EAX                         ; 0040f31e
    TEST EAX,EAX                        ; 0040f320
    JL 0x0040f41f                       ; 0040f322
        ;   XREF to: 0040f41f (CONDITIONAL_JUMP)  ; LAB_0040f41f
    CMP dword ptr [EBX + 0x5c],0x0      ; 0040f328
    JZ 0x0040f3c6                       ; 0040f32c
        ;   XREF to: 0040f3c6 (CONDITIONAL_JUMP)  ; LAB_0040f3c6
    MOV EDX,dword ptr [ESP]             ; 0040f332
    ADD EDX,EDI                         ; 0040f335
    CMP EAX,EDX                         ; 0040f337
    JNZ 0x0040f3c6                      ; 0040f339
        ;   XREF to: 0040f3c6 (CONDITIONAL_JUMP)  ; LAB_0040f3c6
    XOR DH,DH                           ; 0040f33f
    MOV byte ptr [ESP + 0x2f98],DH      ; 0040f341
    CMP dword ptr [EBX + 0xe8],0x0      ; 0040f348
        ;   Label: LAB_0040f348
    JZ 0x0040f367                       ; 0040f34f
        ;   XREF to: 0040f367 (CONDITIONAL_JUMP)  ; LAB_0040f367
    LEA EAX,[ESP + 0x2f98]              ; 0040f351
    PUSH EAX                            ; 0040f358
    PUSH EBP                            ; 0040f359
    CALL dword ptr [EBX + 0xe8]         ; 0040f35a
    ADD ESP,0x8                         ; 0040f360
    TEST EAX,EAX                        ; 0040f363
    JZ 0x0040f306                       ; 0040f365
        ;   XREF to: 0040f306 (CONDITIONAL_JUMP)  ; LAB_0040f306
    LEA EAX,[ESP + 0x2f98]              ; 0040f367
        ;   Label: LAB_0040f367
    PUSH EAX                            ; 0040f36e
    MOV ESI,dword ptr [EBX + 0x68]      ; 0040f36f
    PUSH ESI                            ; 0040f372
    CALL core_dmodel.cpp_CKeyFramedModelInstance_setModelName_FUN_00478dd0 ; 0040f373
        ;   XREF to: 00478dd0 (UNCONDITIONAL_CALL)  ; void core_dmodel.cpp_CKeyFramedModelInstance_setModelName_FUN_00478dd0(CKeyFramedModelInstance * this_ptr, char * filename)
    MOV EDI,dword ptr [EBX + 0x58]      ; 0040f378
    ADD ESP,0x8                         ; 0040f37b
    TEST EDI,EDI                        ; 0040f37e
    JZ 0x0040f38e                       ; 0040f380
        ;   XREF to: 0040f38e (CONDITIONAL_JUMP)  ; LAB_0040f38e
    PUSH EBP                            ; 0040f382
    MOV EAX,dword ptr [EBP + 0x154]     ; 0040f383
    CALL dword ptr [EAX]                ; 0040f389
    ADD ESP,0x4                         ; 0040f38b
    PUSH 0x0                            ; 0040f38e
        ;   Label: LAB_0040f38e
    LEA EAX,[ESP + 0x4]                 ; 0040f390
    PUSH EAX                            ; 0040f394
    MOV ESI,0x1                         ; 0040f395
    CALL shape_edittool.cpp_CPickList_dtor_FUN_004a3c80 ; 0040f39a
        ;   XREF to: 004a3c80 (UNCONDITIONAL_CALL)  ; CPickList * shape_edittool.cpp_CPickList_dtor_FUN_004a3c80(CPickList * this_ptr, uint d1, uint d2, uint d3, ...)
    ADD ESP,0x8                         ; 0040f39f
    MOV EAX,ESI                         ; 0040f3a2
    ADD ESP,0x37dc                      ; 0040f3a4
    POP EBP                             ; 0040f3aa
    POP EDI                             ; 0040f3ab
    POP ESI                             ; 0040f3ac
    POP EBX                             ; 0040f3ad
    RET                                 ; 0040f3ae
    PUSH 0x6145ae                       ; 0040f3af | = "(none)"
        ;   Label: LAB_0040f3af
    LEA EAX,[ESP + 0x4]                 ; 0040f3b4
    PUSH EAX                            ; 0040f3b8
    CALL shape_edittool.cpp_CStrList_add_FUN_004a2b80 ; 0040f3b9
        ;   XREF to: 004a2b80 (UNCONDITIONAL_CALL)  ; void shape_edittool.cpp_CStrList_add_FUN_004a2b80(CStrList * this_ptr, char * string_data)
    ADD ESP,0x8                         ; 0040f3be
    JMP 0x0040f301                      ; 0040f3c1
        ;   XREF to: 0040f301 (UNCONDITIONAL_JUMP)  ; LAB_0040f301
    PUSH 0x0                            ; 0040f3c6
        ;   Label: LAB_0040f3c6
    PUSH ESI                            ; 0040f3c8
    LEA EAX,[ESP + 0x1f48]              ; 0040f3c9
    PUSH EAX                            ; 0040f3d0
    LEA EAX,[ESP + 0xc]                 ; 0040f3d1
    PUSH EAX                            ; 0040f3d5
    CALL shape_edittool.cpp_CStrList_getFieldAt_FUN_004a2f80 ; 0040f3d6
        ;   XREF to: 004a2f80 (UNCONDITIONAL_CALL)  ; void shape_edittool.cpp_CStrList_getFieldAt_FUN_004a2f80(CStrList * this_ptr, int string_index, char * output_buffer, int field_number)
    ADD ESP,0x10                        ; 0040f3db
    PUSH 0x1                            ; 0040f3de
    PUSH ESI                            ; 0040f3e0
    LEA EAX,[ESP + 0x2948]              ; 0040f3e1
    PUSH EAX                            ; 0040f3e8
    LEA EAX,[ESP + 0xc]                 ; 0040f3e9
    PUSH EAX                            ; 0040f3ed
    CALL shape_edittool.cpp_CStrList_getFieldAt_FUN_004a2f80 ; 0040f3ee
        ;   XREF to: 004a2f80 (UNCONDITIONAL_CALL)  ; void shape_edittool.cpp_CStrList_getFieldAt_FUN_004a2f80(CStrList * this_ptr, int string_index, char * output_buffer, int field_number)
    ADD ESP,0x10                        ; 0040f3f3
    LEA EAX,[ESP + 0x2940]              ; 0040f3f6
    PUSH EAX                            ; 0040f3fd
    LEA EAX,[ESP + 0x1f44]              ; 0040f3fe
    PUSH EAX                            ; 0040f405
    PUSH 0x0                            ; 0040f406
    PUSH 0x0                            ; 0040f408
    LEA EAX,[ESP + 0x2fa8]              ; 0040f40a
    PUSH EAX                            ; 0040f411
    CALL crt_file.c_makepath_FUN_005febfc ; 0040f412
        ;   XREF to: 005febfc (UNCONDITIONAL_CALL)  ; void crt_file.c_makepath_FUN_005febfc(char * path_buffer, char * drive, char * directory, char * filename, ...)
    ADD ESP,0x14                        ; 0040f417
    JMP 0x0040f348                      ; 0040f41a
        ;   XREF to: 0040f348 (UNCONDITIONAL_JUMP)  ; LAB_0040f348
    PUSH 0x0                            ; 0040f41f
        ;   Label: LAB_0040f41f
    LEA EAX,[ESP + 0x4]                 ; 0040f421
    PUSH EAX                            ; 0040f425
    CALL shape_edittool.cpp_CPickList_dtor_FUN_004a3c80 ; 0040f426
        ;   XREF to: 004a3c80 (UNCONDITIONAL_CALL)  ; CPickList * shape_edittool.cpp_CPickList_dtor_FUN_004a3c80(CPickList * this_ptr, uint d1, uint d2, uint d3, ...)
    ADD ESP,0x8                         ; 0040f42b
    XOR ESI,ESI                         ; 0040f42e
    MOV EAX,ESI                         ; 0040f430
    ADD ESP,0x37dc                      ; 0040f432
    POP EBP                             ; 0040f438
    POP EDI                             ; 0040f439
    POP ESI                             ; 0040f43a
    POP EBX                             ; 0040f43b
    RET                                 ; 0040f43c
    MOV EAX,dword ptr [EBX + 0x68]      ; 0040f43d
        ;   Label: caseD_7
    ADD EAX,0x2260                      ; 0040f440
    PUSH EAX                            ; 0040f445
    PUSH EBP                            ; 0040f446
    PUSH 0x6145b5                       ; 0040f447 | = "Select model for actor %s.  Current m..."
    LEA EAX,[ESP + 0x3558]              ; 0040f44c
    PUSH EAX                            ; 0040f453
    CALL crt_stdio.c_sprintf_FUN_005fdbd0 ; 0040f454
        ;   XREF to: 005fdbd0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_sprintf_FUN_005fdbd0(char * buffer, char * format)
    ADD ESP,0x10                        ; 0040f459
    MOV ESI,dword ptr [EBX + 0x68]      ; 0040f45c
    LEA EDI,[ESP + 0x32a4]              ; 0040f45f
    ADD ESI,0x2260                      ; 0040f466
    PUSH EDI                            ; 0040f46c
    MOV AL,byte ptr [ESI]               ; 0040f46d
        ;   Label: LAB_0040f46d
    MOV byte ptr [EDI],AL               ; 0040f46f
    CMP AL,0x0                          ; 0040f471
    JZ 0x0040f485                       ; 0040f473
        ;   XREF to: 0040f485 (CONDITIONAL_JUMP)  ; LAB_0040f485
    MOV AL,byte ptr [ESI + 0x1]         ; 0040f475
    ADD ESI,0x2                         ; 0040f478
    MOV byte ptr [EDI + 0x1],AL         ; 0040f47b
    ADD EDI,0x2                         ; 0040f47e
    CMP AL,0x0                          ; 0040f481
    JNZ 0x0040f46d                      ; 0040f483
        ;   XREF to: 0040f46d (CONDITIONAL_JUMP)  ; LAB_0040f46d
    POP EDI                             ; 0040f485
        ;   Label: LAB_0040f485
    LEA EAX,[ESP + 0xaf8]               ; 0040f486
    PUSH EAX                            ; 0040f48d
    CALL shape_edittool.cpp_CPickList_ctor_FUN_004a3b90 ; 0040f48e
        ;   XREF to: 004a3b90 (UNCONDITIONAL_CALL)  ; CPickList * shape_edittool.cpp_CPickList_ctor_FUN_004a3b90(CPickList * this_ptr)
    ADD ESP,0x4                         ; 0040f493
    PUSH 0x6145e6                       ; 0040f496 | = "*.dfm"
    PUSH 0x6145ec                       ; 0040f49b | = "models"
    LEA EAX,[ESP + 0xb00]               ; 0040f4a0
    PUSH EAX                            ; 0040f4a7
    CALL shape_edittool.cpp_CStrList_populateFromFileSearch_FUN_004a35b0 ; 0040f4a8
        ;   XREF to: 004a35b0 (UNCONDITIONAL_CALL)  ; void shape_edittool.cpp_CStrList_populateFromFileSearch_FUN_004a35b0(CStrList * this_ptr, char * directory_path, char * file_pattern)
    ADD ESP,0xc                         ; 0040f4ad
    LEA EAX,[ESP + 0xaf8]               ; 0040f4b0
    PUSH EAX                            ; 0040f4b7
    CALL shape_edittool.cpp_CStrList_sort_FUN_004a2ec0 ; 0040f4b8
        ;   XREF to: 004a2ec0 (UNCONDITIONAL_CALL)  ; void shape_edittool.cpp_CStrList_sort_FUN_004a2ec0(CStrList * this_ptr)
    MOV EDI,dword ptr [EBX + 0x5c]      ; 0040f4bd
    ADD ESP,0x4                         ; 0040f4c0
    TEST EDI,EDI                        ; 0040f4c3
    JNZ 0x0040f583                      ; 0040f4c5
        ;   XREF to: 0040f583 (CONDITIONAL_JUMP)  ; LAB_0040f583
    MOV EDI,0xffffffff                  ; 0040f4cb
        ;   Label: LAB_0040f4cb
    PUSH 0x0                            ; 0040f4d0
        ;   Label: LAB_0040f4d0
    PUSH EDI                            ; 0040f4d2
    LEA EAX,[ESP + 0x3554]              ; 0040f4d3
    PUSH EAX                            ; 0040f4da
    LEA EAX,[ESP + 0xb04]               ; 0040f4db
    PUSH EAX                            ; 0040f4e2
    CALL shape_edittool.cpp_CPickList_displayChoicesAndWaitForInput_FUN_004a3e20 ; 0040f4e3
        ;   XREF to: 004a3e20 (UNCONDITIONAL_CALL)  ; int shape_edittool.cpp_CPickList_displayChoicesAndWaitForInput_FUN_004a3e20(CPickList * this_ptr, char * dialog_title, int config_param1, int config_param2)
    ADD ESP,0x10                        ; 0040f4e8
    MOV ESI,EAX                         ; 0040f4eb
    TEST EAX,EAX                        ; 0040f4ed
    JL 0x0040f5fc                       ; 0040f4ef
        ;   XREF to: 0040f5fc (CONDITIONAL_JUMP)  ; LAB_0040f5fc
    CMP dword ptr [EBX + 0x5c],0x0      ; 0040f4f5
    JZ 0x0040f59d                       ; 0040f4f9
        ;   XREF to: 0040f59d (CONDITIONAL_JUMP)  ; LAB_0040f59d
    MOV EDX,dword ptr [ESP + 0xaf8]     ; 0040f4ff
    ADD EDX,EDI                         ; 0040f506
    CMP EAX,EDX                         ; 0040f508
    JNZ 0x0040f59d                      ; 0040f50a
        ;   XREF to: 0040f59d (CONDITIONAL_JUMP)  ; LAB_0040f59d
    XOR DL,DL                           ; 0040f510
    MOV byte ptr [ESP + 0x32a4],DL      ; 0040f512
    CMP dword ptr [EBX + 0xe8],0x0      ; 0040f519
        ;   Label: LAB_0040f519
    JZ 0x0040f538                       ; 0040f520
        ;   XREF to: 0040f538 (CONDITIONAL_JUMP)  ; LAB_0040f538
    LEA EAX,[ESP + 0x32a4]              ; 0040f522
    PUSH EAX                            ; 0040f529
    PUSH EBP                            ; 0040f52a
    CALL dword ptr [EBX + 0xe8]         ; 0040f52b
    ADD ESP,0x8                         ; 0040f531
    TEST EAX,EAX                        ; 0040f534
    JZ 0x0040f4d0                       ; 0040f536
        ;   XREF to: 0040f4d0 (CONDITIONAL_JUMP)  ; LAB_0040f4d0
    LEA EAX,[ESP + 0x32a4]              ; 0040f538
        ;   Label: LAB_0040f538
    PUSH EAX                            ; 0040f53f
    MOV ESI,dword ptr [EBX + 0x68]      ; 0040f540
    PUSH ESI                            ; 0040f543
    CALL core_skeleton.cpp_CDeformableModelInstance_init_FUN_005a0840 ; 0040f544
        ;   XREF to: 005a0840 (UNCONDITIONAL_CALL)  ; void core_skeleton.cpp_CDeformableModelInstance_init_FUN_005a0840(CDeformableModelInstance * this_ptr, char * model_name)
    MOV EDI,dword ptr [EBX + 0x58]      ; 0040f549
    ADD ESP,0x8                         ; 0040f54c
    TEST EDI,EDI                        ; 0040f54f
    JZ 0x0040f55f                       ; 0040f551
        ;   XREF to: 0040f55f (CONDITIONAL_JUMP)  ; LAB_0040f55f
    PUSH EBP                            ; 0040f553
    MOV EAX,dword ptr [EBP + 0x154]     ; 0040f554
    CALL dword ptr [EAX]                ; 0040f55a
    ADD ESP,0x4                         ; 0040f55c
    PUSH 0x0                            ; 0040f55f
        ;   Label: LAB_0040f55f
    LEA EAX,[ESP + 0xafc]               ; 0040f561
    PUSH EAX                            ; 0040f568
    MOV ESI,0x1                         ; 0040f569
    CALL shape_edittool.cpp_CPickList_dtor_FUN_004a3c80 ; 0040f56e
        ;   XREF to: 004a3c80 (UNCONDITIONAL_CALL)  ; CPickList * shape_edittool.cpp_CPickList_dtor_FUN_004a3c80(CPickList * this_ptr, uint d1, uint d2, uint d3, ...)
    ADD ESP,0x8                         ; 0040f573
    MOV EAX,ESI                         ; 0040f576
    ADD ESP,0x37dc                      ; 0040f578
    POP EBP                             ; 0040f57e
    POP EDI                             ; 0040f57f
    POP ESI                             ; 0040f580
    POP EBX                             ; 0040f581
    RET                                 ; 0040f582
    PUSH 0x6145f3                       ; 0040f583 | = "(none)"
        ;   Label: LAB_0040f583
    LEA EAX,[ESP + 0xafc]               ; 0040f588
    PUSH EAX                            ; 0040f58f
    CALL shape_edittool.cpp_CStrList_add_FUN_004a2b80 ; 0040f590
        ;   XREF to: 004a2b80 (UNCONDITIONAL_CALL)  ; void shape_edittool.cpp_CStrList_add_FUN_004a2b80(CStrList * this_ptr, char * string_data)
    ADD ESP,0x8                         ; 0040f595
    JMP 0x0040f4cb                      ; 0040f598
        ;   XREF to: 0040f4cb (UNCONDITIONAL_JUMP)  ; LAB_0040f4cb
    PUSH 0x0                            ; 0040f59d
        ;   Label: LAB_0040f59d
    PUSH ESI                            ; 0040f59f
    LEA EAX,[ESP + 0x2548]              ; 0040f5a0
    PUSH EAX                            ; 0040f5a7
    LEA EAX,[ESP + 0xb04]               ; 0040f5a8
    PUSH EAX                            ; 0040f5af
    CALL shape_edittool.cpp_CStrList_getFieldAt_FUN_004a2f80 ; 0040f5b0
        ;   XREF to: 004a2f80 (UNCONDITIONAL_CALL)  ; void shape_edittool.cpp_CStrList_getFieldAt_FUN_004a2f80(CStrList * this_ptr, int string_index, char * output_buffer, int field_number)
    ADD ESP,0x10                        ; 0040f5b5
    PUSH 0x1                            ; 0040f5b8
    PUSH ESI                            ; 0040f5ba
    LEA EAX,[ESP + 0x1d48]              ; 0040f5bb
    PUSH EAX                            ; 0040f5c2
    LEA EAX,[ESP + 0xb04]               ; 0040f5c3
    PUSH EAX                            ; 0040f5ca
    CALL shape_edittool.cpp_CStrList_getFieldAt_FUN_004a2f80 ; 0040f5cb
        ;   XREF to: 004a2f80 (UNCONDITIONAL_CALL)  ; void shape_edittool.cpp_CStrList_getFieldAt_FUN_004a2f80(CStrList * this_ptr, int string_index, char * output_buffer, int field_number)
    ADD ESP,0x10                        ; 0040f5d0
    LEA EAX,[ESP + 0x1d40]              ; 0040f5d3
    PUSH EAX                            ; 0040f5da
    LEA EAX,[ESP + 0x2544]              ; 0040f5db
    PUSH EAX                            ; 0040f5e2
    PUSH 0x0                            ; 0040f5e3
    PUSH 0x0                            ; 0040f5e5
    LEA EAX,[ESP + 0x32b4]              ; 0040f5e7
    PUSH EAX                            ; 0040f5ee
    CALL crt_file.c_makepath_FUN_005febfc ; 0040f5ef
        ;   XREF to: 005febfc (UNCONDITIONAL_CALL)  ; void crt_file.c_makepath_FUN_005febfc(char * path_buffer, char * drive, char * directory, char * filename, ...)
    ADD ESP,0x14                        ; 0040f5f4
    JMP 0x0040f519                      ; 0040f5f7
        ;   XREF to: 0040f519 (UNCONDITIONAL_JUMP)  ; LAB_0040f519
    PUSH 0x0                            ; 0040f5fc
        ;   Label: LAB_0040f5fc
    LEA EAX,[ESP + 0xafc]               ; 0040f5fe
    PUSH EAX                            ; 0040f605
    CALL shape_edittool.cpp_CPickList_dtor_FUN_004a3c80 ; 0040f606
        ;   XREF to: 004a3c80 (UNCONDITIONAL_CALL)  ; CPickList * shape_edittool.cpp_CPickList_dtor_FUN_004a3c80(CPickList * this_ptr, uint d1, uint d2, uint d3, ...)
    ADD ESP,0x8                         ; 0040f60b
    XOR ESI,ESI                         ; 0040f60e
    MOV EAX,ESI                         ; 0040f610
    ADD ESP,0x37dc                      ; 0040f612
    POP EBP                             ; 0040f618
    POP EDI                             ; 0040f619
    POP ESI                             ; 0040f61a
    POP EBX                             ; 0040f61b
    RET                                 ; 0040f61c
    LEA EAX,[ESP + 0x354c]              ; 0040f61d
        ;   Label: caseD_8
    PUSH EAX                            ; 0040f624
    MOV ESI,dword ptr [EBX + 0x68]      ; 0040f625
    PUSH ESI                            ; 0040f628
    CALL core_sound.cpp_editSoundName_FUN_005b3de0 ; 0040f629
        ;   XREF to: 005b3de0 (UNCONDITIONAL_CALL)  ; void core_sound.cpp_editSoundName_FUN_005b3de0(char * prompt_text, char * output_buffer)
    ADD ESP,0x8                         ; 0040f62e
    MOV ESI,EAX                         ; 0040f631
    MOV EAX,ESI                         ; 0040f633
    ADD ESP,0x37dc                      ; 0040f635
    POP EBP                             ; 0040f63b
    POP EDI                             ; 0040f63c
    POP ESI                             ; 0040f63d
    POP EBX                             ; 0040f63e
    RET                                 ; 0040f63f
    LEA EAX,[ESP + 0x3a8]               ; 0040f640
        ;   Label: caseD_9
    PUSH EAX                            ; 0040f647
    XOR ESI,ESI                         ; 0040f648
    CALL shape_edittool.cpp_CPickList_ctor_FUN_004a3b90 ; 0040f64a
        ;   XREF to: 004a3b90 (UNCONDITIONAL_CALL)  ; CPickList * shape_edittool.cpp_CPickList_ctor_FUN_004a3b90(CPickList * this_ptr)
    ADD ESP,0x4                         ; 0040f64f
    PUSH ESI                            ; 0040f652
        ;   Label: LAB_0040f652
    CALL core_ground.cpp_getGroundTypeName_FUN_004eed80 ; 0040f653
        ;   XREF to: 004eed80 (UNCONDITIONAL_CALL)  ; char * core_ground.cpp_getGroundTypeName_FUN_004eed80(int type)
    ADD ESP,0x4                         ; 0040f658
    PUSH EAX                            ; 0040f65b
    LEA EAX,[ESP + 0x3ac]               ; 0040f65c
    PUSH EAX                            ; 0040f663
    INC ESI                             ; 0040f664
    CALL shape_edittool.cpp_CStrList_add_FUN_004a2b80 ; 0040f665
        ;   XREF to: 004a2b80 (UNCONDITIONAL_CALL)  ; void shape_edittool.cpp_CStrList_add_FUN_004a2b80(CStrList * this_ptr, char * string_data)
    ADD ESP,0x8                         ; 0040f66a
    CMP ESI,0xe                         ; 0040f66d
    JL 0x0040f652                       ; 0040f670
        ;   XREF to: 0040f652 (CONDITIONAL_JUMP)  ; LAB_0040f652
    MOV EAX,dword ptr [EBX + 0x68]      ; 0040f672
    PUSH 0x0                            ; 0040f675
    MOV EDI,dword ptr [EAX]             ; 0040f677
    PUSH EDI                            ; 0040f679
    LEA EAX,[ESP + 0x3554]              ; 0040f67a
    PUSH EAX                            ; 0040f681
    LEA EAX,[ESP + 0x3b4]               ; 0040f682
    PUSH EAX                            ; 0040f689
    CALL shape_edittool.cpp_CPickList_displayChoicesAndWaitForInput_FUN_004a3e20 ; 0040f68a
        ;   XREF to: 004a3e20 (UNCONDITIONAL_CALL)  ; int shape_edittool.cpp_CPickList_displayChoicesAndWaitForInput_FUN_004a3e20(CPickList * this_ptr, char * dialog_title, int config_param1, int config_param2)
    ADD ESP,0x10                        ; 0040f68f
    TEST EAX,EAX                        ; 0040f692
    JL 0x0040f6d1                       ; 0040f694
        ;   XREF to: 0040f6d1 (CONDITIONAL_JUMP)  ; LAB_0040f6d1
    MOV EDX,dword ptr [EBX + 0x68]      ; 0040f696
    MOV dword ptr [EDX],EAX             ; 0040f699
    CMP dword ptr [EBX + 0x58],0x0      ; 0040f69b
    JZ 0x0040f6ad                       ; 0040f69f
        ;   XREF to: 0040f6ad (CONDITIONAL_JUMP)  ; LAB_0040f6ad
    PUSH EBP                            ; 0040f6a1
    MOV EAX,dword ptr [EBP + 0x154]     ; 0040f6a2
    CALL dword ptr [EAX]                ; 0040f6a8
    ADD ESP,0x4                         ; 0040f6aa
    PUSH 0x0                            ; 0040f6ad
        ;   Label: LAB_0040f6ad
    LEA EAX,[ESP + 0x3ac]               ; 0040f6af
    PUSH EAX                            ; 0040f6b6
    MOV ESI,0x1                         ; 0040f6b7
    CALL shape_edittool.cpp_CPickList_dtor_FUN_004a3c80 ; 0040f6bc
        ;   XREF to: 004a3c80 (UNCONDITIONAL_CALL)  ; CPickList * shape_edittool.cpp_CPickList_dtor_FUN_004a3c80(CPickList * this_ptr, uint d1, uint d2, uint d3, ...)
    ADD ESP,0x8                         ; 0040f6c1
    MOV EAX,ESI                         ; 0040f6c4
    ADD ESP,0x37dc                      ; 0040f6c6
    POP EBP                             ; 0040f6cc
    POP EDI                             ; 0040f6cd
    POP ESI                             ; 0040f6ce
    POP EBX                             ; 0040f6cf
    RET                                 ; 0040f6d0
    PUSH 0x0                            ; 0040f6d1
        ;   Label: LAB_0040f6d1
    LEA EAX,[ESP + 0x3ac]               ; 0040f6d3
    PUSH EAX                            ; 0040f6da
    CALL shape_edittool.cpp_CPickList_dtor_FUN_004a3c80 ; 0040f6db
        ;   XREF to: 004a3c80 (UNCONDITIONAL_CALL)  ; CPickList * shape_edittool.cpp_CPickList_dtor_FUN_004a3c80(CPickList * this_ptr, uint d1, uint d2, uint d3, ...)
    ADD ESP,0x8                         ; 0040f6e0
    XOR ESI,ESI                         ; 0040f6e3
    MOV EAX,ESI                         ; 0040f6e5
    ADD ESP,0x37dc                      ; 0040f6e7
    POP EBP                             ; 0040f6ed
    POP EDI                             ; 0040f6ee
    POP ESI                             ; 0040f6ef
    POP EBX                             ; 0040f6f0
    RET                                 ; 0040f6f1
    LEA EDI,[ESP + 0x309c]              ; 0040f6f2
        ;   Label: caseD_a
    MOV ESI,dword ptr [EBX + 0x68]      ; 0040f6f9
    PUSH EDI                            ; 0040f6fc
    MOV AL,byte ptr [ESI]               ; 0040f6fd
        ;   Label: LAB_0040f6fd
    MOV byte ptr [EDI],AL               ; 0040f6ff
    CMP AL,0x0                          ; 0040f701
    JZ 0x0040f715                       ; 0040f703
        ;   XREF to: 0040f715 (CONDITIONAL_JUMP)  ; LAB_0040f715
    MOV AL,byte ptr [ESI + 0x1]         ; 0040f705
    ADD ESI,0x2                         ; 0040f708
    MOV byte ptr [EDI + 0x1],AL         ; 0040f70b
    ADD EDI,0x2                         ; 0040f70e
    CMP AL,0x0                          ; 0040f711
    JNZ 0x0040f6fd                      ; 0040f713
        ;   XREF to: 0040f6fd (CONDITIONAL_JUMP)  ; LAB_0040f6fd
    POP EDI                             ; 0040f715
        ;   Label: LAB_0040f715
    LEA EAX,[ESP + 0x750]               ; 0040f716
    PUSH EAX                            ; 0040f71d
    CALL shape_edittool.cpp_CPickList_ctor_FUN_004a3b90 ; 0040f71e
        ;   XREF to: 004a3b90 (UNCONDITIONAL_CALL)  ; CPickList * shape_edittool.cpp_CPickList_ctor_FUN_004a3b90(CPickList * this_ptr)
    ADD ESP,0x4                         ; 0040f723
    LEA EAX,[EBX + 0x84]                ; 0040f726
    PUSH EAX                            ; 0040f72c
    LEA EAX,[EBX + 0x70]                ; 0040f72d
    PUSH EAX                            ; 0040f730
    LEA EAX,[ESP + 0x758]               ; 0040f731
    PUSH EAX                            ; 0040f738
    CALL shape_edittool.cpp_CStrList_populateFromFileSearch_FUN_004a35b0 ; 0040f739
        ;   XREF to: 004a35b0 (UNCONDITIONAL_CALL)  ; void shape_edittool.cpp_CStrList_populateFromFileSearch_FUN_004a35b0(CStrList * this_ptr, char * directory_path, char * file_pattern)
    ADD ESP,0xc                         ; 0040f73e
    LEA EAX,[ESP + 0x750]               ; 0040f741
    PUSH EAX                            ; 0040f748
    CALL shape_edittool.cpp_CStrList_sort_FUN_004a2ec0 ; 0040f749
        ;   XREF to: 004a2ec0 (UNCONDITIONAL_CALL)  ; void shape_edittool.cpp_CStrList_sort_FUN_004a2ec0(CStrList * this_ptr)
    MOV ECX,dword ptr [EBX + 0x5c]      ; 0040f74e
    ADD ESP,0x4                         ; 0040f751
    TEST ECX,ECX                        ; 0040f754
    JNZ 0x0040f823                      ; 0040f756
        ;   XREF to: 0040f823 (CONDITIONAL_JUMP)  ; LAB_0040f823
    MOV EDI,0xffffffff                  ; 0040f75c
        ;   Label: LAB_0040f75c
    PUSH 0x0                            ; 0040f761
        ;   Label: LAB_0040f761
    PUSH EDI                            ; 0040f763
    LEA EAX,[ESP + 0x3554]              ; 0040f764
    PUSH EAX                            ; 0040f76b
    LEA EAX,[ESP + 0x75c]               ; 0040f76c
    PUSH EAX                            ; 0040f773
    CALL shape_edittool.cpp_CPickList_displayChoicesAndWaitForInput_FUN_004a3e20 ; 0040f774
        ;   XREF to: 004a3e20 (UNCONDITIONAL_CALL)  ; int shape_edittool.cpp_CPickList_displayChoicesAndWaitForInput_FUN_004a3e20(CPickList * this_ptr, char * dialog_title, int config_param1, int config_param2)
    ADD ESP,0x10                        ; 0040f779
    MOV ESI,EAX                         ; 0040f77c
    TEST EAX,EAX                        ; 0040f77e
    JL 0x0040f89c                       ; 0040f780
        ;   XREF to: 0040f89c (CONDITIONAL_JUMP)  ; LAB_0040f89c
    CMP dword ptr [EBX + 0x5c],0x0      ; 0040f786
    JZ 0x0040f83d                       ; 0040f78a
        ;   XREF to: 0040f83d (CONDITIONAL_JUMP)  ; LAB_0040f83d
    MOV EDX,dword ptr [ESP + 0x750]     ; 0040f790
    ADD EDX,EDI                         ; 0040f797
    CMP EAX,EDX                         ; 0040f799
    JNZ 0x0040f83d                      ; 0040f79b
        ;   XREF to: 0040f83d (CONDITIONAL_JUMP)  ; LAB_0040f83d
    XOR AH,DH                           ; 0040f7a1
    MOV byte ptr [ESP + 0x309c],AH      ; 0040f7a3
    CMP dword ptr [EBX + 0xe8],0x0      ; 0040f7aa
        ;   Label: LAB_0040f7aa
    JZ 0x0040f7c9                       ; 0040f7b1
        ;   XREF to: 0040f7c9 (CONDITIONAL_JUMP)  ; LAB_0040f7c9
    LEA EAX,[ESP + 0x309c]              ; 0040f7b3
    PUSH EAX                            ; 0040f7ba
    PUSH EBP                            ; 0040f7bb
    CALL dword ptr [EBX + 0xe8]         ; 0040f7bc
    ADD ESP,0x8                         ; 0040f7c2
    TEST EAX,EAX                        ; 0040f7c5
    JZ 0x0040f761                       ; 0040f7c7
        ;   XREF to: 0040f761 (CONDITIONAL_JUMP)  ; LAB_0040f761
    LEA ESI,[ESP + 0x309c]              ; 0040f7c9
        ;   Label: LAB_0040f7c9
    MOV EDI,dword ptr [EBX + 0x68]      ; 0040f7d0
    PUSH EDI                            ; 0040f7d3
    MOV AL,byte ptr [ESI]               ; 0040f7d4
        ;   Label: LAB_0040f7d4
    MOV byte ptr [EDI],AL               ; 0040f7d6
    CMP AL,0x0                          ; 0040f7d8
    JZ 0x0040f7ec                       ; 0040f7da
        ;   XREF to: 0040f7ec (CONDITIONAL_JUMP)  ; LAB_0040f7ec
    MOV AL,byte ptr [ESI + 0x1]         ; 0040f7dc
    ADD ESI,0x2                         ; 0040f7df
    MOV byte ptr [EDI + 0x1],AL         ; 0040f7e2
    ADD EDI,0x2                         ; 0040f7e5
    CMP AL,0x0                          ; 0040f7e8
    JNZ 0x0040f7d4                      ; 0040f7ea
        ;   XREF to: 0040f7d4 (CONDITIONAL_JUMP)  ; LAB_0040f7d4
    POP EDI                             ; 0040f7ec
        ;   Label: LAB_0040f7ec
    CMP dword ptr [EBX + 0x58],0x0      ; 0040f7ed
    JZ 0x0040f7ff                       ; 0040f7f1
        ;   XREF to: 0040f7ff (CONDITIONAL_JUMP)  ; LAB_0040f7ff
    PUSH EBP                            ; 0040f7f3
    MOV EAX,dword ptr [EBP + 0x154]     ; 0040f7f4
    CALL dword ptr [EAX]                ; 0040f7fa
    ADD ESP,0x4                         ; 0040f7fc
    PUSH 0x0                            ; 0040f7ff
        ;   Label: LAB_0040f7ff
    LEA EAX,[ESP + 0x754]               ; 0040f801
    PUSH EAX                            ; 0040f808
    MOV ESI,0x1                         ; 0040f809
    CALL shape_edittool.cpp_CPickList_dtor_FUN_004a3c80 ; 0040f80e
        ;   XREF to: 004a3c80 (UNCONDITIONAL_CALL)  ; CPickList * shape_edittool.cpp_CPickList_dtor_FUN_004a3c80(CPickList * this_ptr, uint d1, uint d2, uint d3, ...)
    ADD ESP,0x8                         ; 0040f813
    MOV EAX,ESI                         ; 0040f816
    ADD ESP,0x37dc                      ; 0040f818
    POP EBP                             ; 0040f81e
    POP EDI                             ; 0040f81f
    POP ESI                             ; 0040f820
    POP EBX                             ; 0040f821
    RET                                 ; 0040f822
    PUSH 0x6145fa                       ; 0040f823 | = "(none)"
        ;   Label: LAB_0040f823
    LEA EAX,[ESP + 0x754]               ; 0040f828
    PUSH EAX                            ; 0040f82f
    CALL shape_edittool.cpp_CStrList_add_FUN_004a2b80 ; 0040f830
        ;   XREF to: 004a2b80 (UNCONDITIONAL_CALL)  ; void shape_edittool.cpp_CStrList_add_FUN_004a2b80(CStrList * this_ptr, char * string_data)
    ADD ESP,0x8                         ; 0040f835
    JMP 0x0040f75c                      ; 0040f838
        ;   XREF to: 0040f75c (UNCONDITIONAL_JUMP)  ; LAB_0040f75c
    PUSH 0x0                            ; 0040f83d
        ;   Label: LAB_0040f83d
    PUSH ESI                            ; 0040f83f
    LEA EAX,[ESP + 0x2b48]              ; 0040f840
    PUSH EAX                            ; 0040f847
    LEA EAX,[ESP + 0x75c]               ; 0040f848
    PUSH EAX                            ; 0040f84f
    CALL shape_edittool.cpp_CStrList_getFieldAt_FUN_004a2f80 ; 0040f850
        ;   XREF to: 004a2f80 (UNCONDITIONAL_CALL)  ; void shape_edittool.cpp_CStrList_getFieldAt_FUN_004a2f80(CStrList * this_ptr, int string_index, char * output_buffer, int field_number)
    ADD ESP,0x10                        ; 0040f855
    PUSH 0x1                            ; 0040f858
    PUSH ESI                            ; 0040f85a
    LEA EAX,[ESP + 0x2748]              ; 0040f85b
    PUSH EAX                            ; 0040f862
    LEA EAX,[ESP + 0x75c]               ; 0040f863
    PUSH EAX                            ; 0040f86a
    CALL shape_edittool.cpp_CStrList_getFieldAt_FUN_004a2f80 ; 0040f86b
        ;   XREF to: 004a2f80 (UNCONDITIONAL_CALL)  ; void shape_edittool.cpp_CStrList_getFieldAt_FUN_004a2f80(CStrList * this_ptr, int string_index, char * output_buffer, int field_number)
    ADD ESP,0x10                        ; 0040f870
    LEA EAX,[ESP + 0x2740]              ; 0040f873
    PUSH EAX                            ; 0040f87a
    LEA EAX,[ESP + 0x2b44]              ; 0040f87b
    PUSH EAX                            ; 0040f882
    PUSH 0x0                            ; 0040f883
    PUSH 0x0                            ; 0040f885
    LEA EAX,[ESP + 0x30ac]              ; 0040f887
    PUSH EAX                            ; 0040f88e
    CALL crt_file.c_makepath_FUN_005febfc ; 0040f88f
        ;   XREF to: 005febfc (UNCONDITIONAL_CALL)  ; void crt_file.c_makepath_FUN_005febfc(char * path_buffer, char * drive, char * directory, char * filename, ...)
    ADD ESP,0x14                        ; 0040f894
    JMP 0x0040f7aa                      ; 0040f897
        ;   XREF to: 0040f7aa (UNCONDITIONAL_JUMP)  ; LAB_0040f7aa
    PUSH 0x0                            ; 0040f89c
        ;   Label: LAB_0040f89c
    LEA EAX,[ESP + 0x754]               ; 0040f89e
    PUSH EAX                            ; 0040f8a5
    CALL shape_edittool.cpp_CPickList_dtor_FUN_004a3c80 ; 0040f8a6
        ;   XREF to: 004a3c80 (UNCONDITIONAL_CALL)  ; CPickList * shape_edittool.cpp_CPickList_dtor_FUN_004a3c80(CPickList * this_ptr, uint d1, uint d2, uint d3, ...)
    ADD ESP,0x8                         ; 0040f8ab
    XOR ESI,ESI                         ; 0040f8ae
    MOV EAX,ESI                         ; 0040f8b0
    ADD ESP,0x37dc                      ; 0040f8b2
    POP EBP                             ; 0040f8b8
    POP EDI                             ; 0040f8b9
    POP ESI                             ; 0040f8ba
    POP EBX                             ; 0040f8bb
    RET                                 ; 0040f8bc
    LEA EDI,[ESP + 0x3740]              ; 0040f8bd
        ;   Label: caseD_b
    MOV ESI,dword ptr [EBX + 0x68]      ; 0040f8c4
    PUSH EDI                            ; 0040f8c7
    MOV AL,byte ptr [ESI]               ; 0040f8c8
        ;   Label: LAB_0040f8c8
    MOV byte ptr [EDI],AL               ; 0040f8ca
    CMP AL,0x0                          ; 0040f8cc
    JZ 0x0040f8e0                       ; 0040f8ce
        ;   XREF to: 0040f8e0 (CONDITIONAL_JUMP)  ; LAB_0040f8e0
    MOV AL,byte ptr [ESI + 0x1]         ; 0040f8d0
    ADD ESI,0x2                         ; 0040f8d3
    MOV byte ptr [EDI + 0x1],AL         ; 0040f8d6
    ADD EDI,0x2                         ; 0040f8d9
    CMP AL,0x0                          ; 0040f8dc
    JNZ 0x0040f8c8                      ; 0040f8de
        ;   XREF to: 0040f8c8 (CONDITIONAL_JUMP)  ; LAB_0040f8c8
    POP EDI                             ; 0040f8e0
        ;   Label: LAB_0040f8e0
    PUSH 0x1                            ; 0040f8e1
        ;   Label: LAB_0040f8e1
    PUSH 0x64                           ; 0040f8e3
    LEA EAX,[ESP + 0x3748]              ; 0040f8e5
    PUSH EAX                            ; 0040f8ec
    LEA EAX,[ESP + 0x3558]              ; 0040f8ed
    PUSH EAX                            ; 0040f8f4
    MOV EAX,[0x00678a60]                ; 0040f8f5 | g_CEditorToolsPtr
    PUSH EAX                            ; 0040f8fa | g_CEditorToolsPtr
    CALL shape_edittool.cpp_CEditorTools_showTextInputDialog_FUN_004a03d0 ; 0040f8fb
        ;   XREF to: 004a03d0 (UNCONDITIONAL_CALL)  ; int shape_edittool.cpp_CEditorTools_showTextInputDialog_FUN_004a03d0(CEditorTools * this_ptr, char * prompt_text, char * input_buffer, int buffer_size, ...)
    ADD ESP,0x14                        ; 0040f900
    TEST EAX,EAX                        ; 0040f903
    JZ 0x0040eef2                       ; 0040f905
        ;   XREF to: 0040eef2 (CONDITIONAL_JUMP)  ; LAB_0040eef2
    LEA EAX,[ESP + 0x3740]              ; 0040f90b
    PUSH EAX                            ; 0040f912
    MOV EDX,dword ptr [0x006793d0]      ; 0040f913 | g_CEventListInstance | g_CEventListPtr
    PUSH EDX                            ; 0040f919 | g_CEventListInstance
    CALL core_event.cpp_CEventList_FUN_004add00 ; 0040f91a
        ;   XREF to: 004add00 (UNCONDITIONAL_CALL)  ; int core_event.cpp_CEventList_FUN_004add00(CEventList * this_ptr)
    ADD ESP,0x8                         ; 0040f91f
    TEST EAX,EAX                        ; 0040f922
    JZ 0x0040f938                       ; 0040f924
        ;   XREF to: 0040f938 (CONDITIONAL_JUMP)  ; LAB_0040f938
    PUSH EAX                            ; 0040f926
    MOV ESI,dword ptr [0x00678a60]      ; 0040f927 | g_CEditorToolsPtr
    PUSH ESI                            ; 0040f92d | g_CEditorToolsPtr
    CALL shape_edittool.cpp_CEditorTools_showError_FUN_0049e740 ; 0040f92e
        ;   XREF to: 0049e740 (UNCONDITIONAL_CALL)  ; void shape_edittool.cpp_CEditorTools_showError_FUN_0049e740(CEditorTools * this_ptr, char * format)
    ADD ESP,0x8                         ; 0040f933
    JMP 0x0040f8e1                      ; 0040f936
        ;   XREF to: 0040f8e1 (UNCONDITIONAL_JUMP)  ; LAB_0040f8e1
    LEA ESI,[ESP + 0x3740]              ; 0040f938
        ;   Label: LAB_0040f938
    MOV EDI,dword ptr [EBX + 0x68]      ; 0040f93f
    PUSH EDI                            ; 0040f942
    MOV AL,byte ptr [ESI]               ; 0040f943
        ;   Label: LAB_0040f943
    MOV byte ptr [EDI],AL               ; 0040f945
    CMP AL,0x0                          ; 0040f947
    JZ 0x0040f95b                       ; 0040f949
        ;   XREF to: 0040f95b (CONDITIONAL_JUMP)  ; LAB_0040f95b
    MOV AL,byte ptr [ESI + 0x1]         ; 0040f94b
    ADD ESI,0x2                         ; 0040f94e
    MOV byte ptr [EDI + 0x1],AL         ; 0040f951
    ADD EDI,0x2                         ; 0040f954
    CMP AL,0x0                          ; 0040f957
    JNZ 0x0040f943                      ; 0040f959
        ;   XREF to: 0040f943 (CONDITIONAL_JUMP)  ; LAB_0040f943
    POP EDI                             ; 0040f95b
        ;   Label: LAB_0040f95b
    CMP dword ptr [EBX + 0x58],0x0      ; 0040f95c
    JZ 0x0040f96e                       ; 0040f960
        ;   XREF to: 0040f96e (CONDITIONAL_JUMP)  ; LAB_0040f96e
    PUSH EBP                            ; 0040f962
    MOV EAX,dword ptr [EBP + 0x154]     ; 0040f963
    CALL dword ptr [EAX]                ; 0040f969
    ADD ESP,0x4                         ; 0040f96b
    MOV ESI,0x1                         ; 0040f96e
        ;   Label: LAB_0040f96e
    MOV EAX,ESI                         ; 0040f973
    ADD ESP,0x37dc                      ; 0040f975
    POP EBP                             ; 0040f97b
    POP EDI                             ; 0040f97c
    POP ESI                             ; 0040f97d
    POP EBX                             ; 0040f97e
    RET                                 ; 0040f97f
    LEA EDI,[ESP + 0x36dc]              ; 0040f980
        ;   Label: caseD_c
    MOV ESI,dword ptr [EBX + 0x68]      ; 0040f987
    PUSH EDI                            ; 0040f98a
    MOV AL,byte ptr [ESI]               ; 0040f98b
        ;   Label: LAB_0040f98b
    MOV byte ptr [EDI],AL               ; 0040f98d
    CMP AL,0x0                          ; 0040f98f
    JZ 0x0040f9a3                       ; 0040f991
        ;   XREF to: 0040f9a3 (CONDITIONAL_JUMP)  ; LAB_0040f9a3
    MOV AL,byte ptr [ESI + 0x1]         ; 0040f993
    ADD ESI,0x2                         ; 0040f996
    MOV byte ptr [EDI + 0x1],AL         ; 0040f999
    ADD EDI,0x2                         ; 0040f99c
    CMP AL,0x0                          ; 0040f99f
    JNZ 0x0040f98b                      ; 0040f9a1
        ;   XREF to: 0040f98b (CONDITIONAL_JUMP)  ; LAB_0040f98b
    POP EDI                             ; 0040f9a3
        ;   Label: LAB_0040f9a3
    PUSH 0x1                            ; 0040f9a4
        ;   Label: LAB_0040f9a4
    PUSH 0x64                           ; 0040f9a6
    LEA EAX,[ESP + 0x36e4]              ; 0040f9a8
    PUSH EAX                            ; 0040f9af
    LEA EAX,[ESP + 0x3558]              ; 0040f9b0
    PUSH EAX                            ; 0040f9b7
    MOV EDX,dword ptr [0x00678a60]      ; 0040f9b8 | g_CEditorToolsPtr
    PUSH EDX                            ; 0040f9be | g_CEditorToolsPtr
    CALL shape_edittool.cpp_CEditorTools_showTextInputDialog_FUN_004a03d0 ; 0040f9bf
        ;   XREF to: 004a03d0 (UNCONDITIONAL_CALL)  ; int shape_edittool.cpp_CEditorTools_showTextInputDialog_FUN_004a03d0(CEditorTools * this_ptr, char * prompt_text, char * input_buffer, int buffer_size, ...)
    ADD ESP,0x14                        ; 0040f9c4
    TEST EAX,EAX                        ; 0040f9c7
    JZ 0x0040eef2                       ; 0040f9c9
        ;   XREF to: 0040eef2 (CONDITIONAL_JUMP)  ; LAB_0040eef2
    LEA EAX,[ESP + 0x36dc]              ; 0040f9cf
    PUSH EAX                            ; 0040f9d6
    MOV ECX,dword ptr [0x006793d0]      ; 0040f9d7 | g_CEventListInstance | g_CEventListPtr
    PUSH ECX                            ; 0040f9dd | g_CEventListInstance
    CALL core_event.cpp_CEventList_FUN_004add40 ; 0040f9de
        ;   XREF to: 004add40 (UNCONDITIONAL_CALL)  ; int core_event.cpp_CEventList_FUN_004add40(CEventList * this_ptr)
    ADD ESP,0x8                         ; 0040f9e3
    TEST EAX,EAX                        ; 0040f9e6
    JZ 0x0040f9fc                       ; 0040f9e8
        ;   XREF to: 0040f9fc (CONDITIONAL_JUMP)  ; LAB_0040f9fc
    PUSH EAX                            ; 0040f9ea
    MOV EDI,dword ptr [0x00678a60]      ; 0040f9eb | g_CEditorToolsPtr
    PUSH EDI                            ; 0040f9f1 | g_CEditorToolsPtr
    CALL shape_edittool.cpp_CEditorTools_showError_FUN_0049e740 ; 0040f9f2
        ;   XREF to: 0049e740 (UNCONDITIONAL_CALL)  ; void shape_edittool.cpp_CEditorTools_showError_FUN_0049e740(CEditorTools * this_ptr, char * format)
    ADD ESP,0x8                         ; 0040f9f7
    JMP 0x0040f9a4                      ; 0040f9fa
        ;   XREF to: 0040f9a4 (UNCONDITIONAL_JUMP)  ; LAB_0040f9a4
    LEA ESI,[ESP + 0x36dc]              ; 0040f9fc
        ;   Label: LAB_0040f9fc
    MOV EDI,dword ptr [EBX + 0x68]      ; 0040fa03
    PUSH EDI                            ; 0040fa06
    MOV AL,byte ptr [ESI]               ; 0040fa07
        ;   Label: LAB_0040fa07
    MOV byte ptr [EDI],AL               ; 0040fa09
    CMP AL,0x0                          ; 0040fa0b
    JZ 0x0040fa1f                       ; 0040fa0d
        ;   XREF to: 0040fa1f (CONDITIONAL_JUMP)  ; LAB_0040fa1f
    MOV AL,byte ptr [ESI + 0x1]         ; 0040fa0f
    ADD ESI,0x2                         ; 0040fa12
    MOV byte ptr [EDI + 0x1],AL         ; 0040fa15
    ADD EDI,0x2                         ; 0040fa18
    CMP AL,0x0                          ; 0040fa1b
    JNZ 0x0040fa07                      ; 0040fa1d
        ;   XREF to: 0040fa07 (CONDITIONAL_JUMP)  ; LAB_0040fa07
    POP EDI                             ; 0040fa1f
        ;   Label: LAB_0040fa1f
    CMP dword ptr [EBX + 0x58],0x0      ; 0040fa20
    JZ 0x0040fa32                       ; 0040fa24
        ;   XREF to: 0040fa32 (CONDITIONAL_JUMP)  ; LAB_0040fa32
    PUSH EBP                            ; 0040fa26
    MOV EAX,dword ptr [EBP + 0x154]     ; 0040fa27
    CALL dword ptr [EAX]                ; 0040fa2d
    ADD ESP,0x4                         ; 0040fa2f
    MOV ESI,0x1                         ; 0040fa32
        ;   Label: LAB_0040fa32
    MOV EAX,ESI                         ; 0040fa37
    ADD ESP,0x37dc                      ; 0040fa39
    POP EBP                             ; 0040fa3f
    POP EDI                             ; 0040fa40
    POP ESI                             ; 0040fa41
    POP EBX                             ; 0040fa42
    RET                                 ; 0040fa43
    LEA EAX,[ESP + 0x15f0]              ; 0040fa44
        ;   Label: caseD_d
    PUSH EAX                            ; 0040fa4b
    CALL shape_edittool.cpp_CPickList_ctor_FUN_004a3b90 ; 0040fa4c
        ;   XREF to: 004a3b90 (UNCONDITIONAL_CALL)  ; CPickList * shape_edittool.cpp_CPickList_ctor_FUN_004a3b90(CPickList * this_ptr)
    ADD ESP,0x4                         ; 0040fa51
    MOV ESI,dword ptr [EBX + 0x68]      ; 0040fa54
    PUSH ESI                            ; 0040fa57
    MOV EDI,0xffffffff                  ; 0040fa58
    CALL core_motion.cpp_CMotionController_getMotionList_FUN_0052dce0 ; 0040fa5d
        ;   XREF to: 0052dce0 (UNCONDITIONAL_CALL)  ; CMotionList * core_motion.cpp_CMotionController_getMotionList_FUN_0052dce0(CMotionController * this_ptr)
    ADD ESP,0x4                         ; 0040fa62
    MOV EDX,dword ptr [EAX + 0x964]     ; 0040fa65
    XOR ESI,ESI                         ; 0040fa6b
    MOV dword ptr [ESP + 0x37d4],EAX    ; 0040fa6d
    MOV dword ptr [ESP + 0x37cc],EDI    ; 0040fa74
    TEST EDX,EDX                        ; 0040fa7b
    JLE 0x0040fb18                      ; 0040fa7d
        ;   XREF to: 0040fb18 (CONDITIONAL_JUMP)  ; LAB_0040fb18
    LEA EDX,[EAX + 0x4]                 ; 0040fa83
    LEA EDI,[EAX + 0x968]               ; 0040fa86
    MOV dword ptr [ESP + 0x37d0],EDX    ; 0040fa8c
    MOV dword ptr [ESP + 0x37c8],EAX    ; 0040fa93
    MOV EAX,dword ptr [ESP + 0x37c8]    ; 0040fa9a
        ;   Label: LAB_0040fa9a
    IMUL EAX,dword ptr [EAX + 0x98c],0x1e ; 0040faa1
    ADD EAX,dword ptr [ESP + 0x37d0]    ; 0040faa8
    PUSH EAX                            ; 0040faaf
    PUSH EDI                            ; 0040fab0
    PUSH 0x614601                       ; 0040fab1 | = "%s\t%s"
    LEA EAX,[ESP + 0x2e78]              ; 0040fab6
    PUSH EAX                            ; 0040fabd
    CALL crt_stdio.c_sprintf_FUN_005fdbd0 ; 0040fabe
        ;   XREF to: 005fdbd0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_sprintf_FUN_005fdbd0(char * buffer, char * format)
    ADD ESP,0x10                        ; 0040fac3
    LEA EAX,[ESP + 0x2e6c]              ; 0040fac6
    PUSH EAX                            ; 0040facd
    LEA EAX,[ESP + 0x15f4]              ; 0040face
    PUSH EAX                            ; 0040fad5
    CALL shape_edittool.cpp_CStrList_add_FUN_004a2b80 ; 0040fad6
        ;   XREF to: 004a2b80 (UNCONDITIONAL_CALL)  ; void shape_edittool.cpp_CStrList_add_FUN_004a2b80(CStrList * this_ptr, char * string_data)
    ADD ESP,0x8                         ; 0040fadb
    MOV EAX,dword ptr [EBX + 0x68]      ; 0040fade
    PUSH EAX                            ; 0040fae1
    CALL core_motion.cpp_CMotionController_getCurrentMotion_FUN_0052dab0 ; 0040fae2
        ;   XREF to: 0052dab0 (UNCONDITIONAL_CALL)  ; SMotion * core_motion.cpp_CMotionController_getCurrentMotion_FUN_0052dab0(CMotionController * this_ptr)
    ADD ESP,0x4                         ; 0040fae7
    CMP EAX,EDI                         ; 0040faea
    JNZ 0x0040faf5                      ; 0040faec
        ;   XREF to: 0040faf5 (CONDITIONAL_JUMP)  ; LAB_0040faf5
    MOV dword ptr [ESP + 0x37cc],ESI    ; 0040faee
    ADD dword ptr [ESP + 0x37c8],0x54c  ; 0040faf5
        ;   Label: LAB_0040faf5
    MOV EAX,dword ptr [ESP + 0x37d4]    ; 0040fb00
    INC ESI                             ; 0040fb07
    MOV EDX,dword ptr [EAX + 0x964]     ; 0040fb08
    ADD EDI,0x54c                       ; 0040fb0e
    CMP ESI,EDX                         ; 0040fb14
    JL 0x0040fa9a                       ; 0040fb16
        ;   XREF to: 0040fa9a (CONDITIONAL_JUMP)  ; LAB_0040fa9a
    PUSH 0x0                            ; 0040fb18
        ;   Label: LAB_0040fb18
    MOV ECX,dword ptr [ESP + 0x37d0]    ; 0040fb1a
    PUSH ECX                            ; 0040fb21
    LEA EAX,[ESP + 0x3554]              ; 0040fb22
    PUSH EAX                            ; 0040fb29
    LEA EAX,[ESP + 0x15fc]              ; 0040fb2a
    PUSH EAX                            ; 0040fb31
    CALL shape_edittool.cpp_CPickList_displayChoicesAndWaitForInput_FUN_004a3e20 ; 0040fb32
        ;   XREF to: 004a3e20 (UNCONDITIONAL_CALL)  ; int shape_edittool.cpp_CPickList_displayChoicesAndWaitForInput_FUN_004a3e20(CPickList * this_ptr, char * dialog_title, int config_param1, int config_param2)
    ADD ESP,0x10                        ; 0040fb37
    TEST EAX,EAX                        ; 0040fb3a
    JL 0x0040fb84                       ; 0040fb3c
        ;   XREF to: 0040fb84 (CONDITIONAL_JUMP)  ; LAB_0040fb84
    PUSH 0x0                            ; 0040fb3e
    PUSH EAX                            ; 0040fb40
    MOV ESI,dword ptr [EBX + 0x68]      ; 0040fb41
    PUSH ESI                            ; 0040fb44
    CALL core_motion.cpp_CMotionController_jumpToMotion_FUN_0052dde0 ; 0040fb45
        ;   XREF to: 0052dde0 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_jumpToMotion_FUN_0052dde0(CMotionController * this_ptr, int target_motion_index, float target_frame_number)
    MOV EDI,dword ptr [EBX + 0x58]      ; 0040fb4a
    ADD ESP,0xc                         ; 0040fb4d
    TEST EDI,EDI                        ; 0040fb50
    JZ 0x0040fb60                       ; 0040fb52
        ;   XREF to: 0040fb60 (CONDITIONAL_JUMP)  ; LAB_0040fb60
    PUSH EBP                            ; 0040fb54
    MOV EAX,dword ptr [EBP + 0x154]     ; 0040fb55
    CALL dword ptr [EAX]                ; 0040fb5b
    ADD ESP,0x4                         ; 0040fb5d
    PUSH 0x0                            ; 0040fb60
        ;   Label: LAB_0040fb60
    LEA EAX,[ESP + 0x15f4]              ; 0040fb62
    PUSH EAX                            ; 0040fb69
    MOV ESI,0x1                         ; 0040fb6a
    CALL shape_edittool.cpp_CPickList_dtor_FUN_004a3c80 ; 0040fb6f
        ;   XREF to: 004a3c80 (UNCONDITIONAL_CALL)  ; CPickList * shape_edittool.cpp_CPickList_dtor_FUN_004a3c80(CPickList * this_ptr, uint d1, uint d2, uint d3, ...)
    ADD ESP,0x8                         ; 0040fb74
    MOV EAX,ESI                         ; 0040fb77
    ADD ESP,0x37dc                      ; 0040fb79
    POP EBP                             ; 0040fb7f
    POP EDI                             ; 0040fb80
    POP ESI                             ; 0040fb81
    POP EBX                             ; 0040fb82
    RET                                 ; 0040fb83
    PUSH 0x0                            ; 0040fb84
        ;   Label: LAB_0040fb84
    LEA EAX,[ESP + 0x15f4]              ; 0040fb86
    PUSH EAX                            ; 0040fb8d
    CALL shape_edittool.cpp_CPickList_dtor_FUN_004a3c80 ; 0040fb8e
        ;   XREF to: 004a3c80 (UNCONDITIONAL_CALL)  ; CPickList * shape_edittool.cpp_CPickList_dtor_FUN_004a3c80(CPickList * this_ptr, uint d1, uint d2, uint d3, ...)
    ADD ESP,0x8                         ; 0040fb93
    XOR ESI,ESI                         ; 0040fb96
    MOV EAX,ESI                         ; 0040fb98
    ADD ESP,0x37dc                      ; 0040fb9a
    POP EBP                             ; 0040fba0
    POP EDI                             ; 0040fba1
    POP ESI                             ; 0040fba2
    POP EBX                             ; 0040fba3
    RET                                 ; 0040fba4
    LEA EAX,[ESP + 0xea0]               ; 0040fba5
        ;   Label: caseD_e
    PUSH EAX                            ; 0040fbac
    CALL shape_edittool.cpp_CPickList_ctor_FUN_004a3b90 ; 0040fbad
        ;   XREF to: 004a3b90 (UNCONDITIONAL_CALL)  ; CPickList * shape_edittool.cpp_CPickList_ctor_FUN_004a3b90(CPickList * this_ptr)
    ADD ESP,0x4                         ; 0040fbb2
    PUSH 0x614607                       ; 0040fbb5 | = "*.cth"
    PUSH 0x61460d                       ; 0040fbba | = "models"
    LEA EAX,[ESP + 0xea8]               ; 0040fbbf
    PUSH EAX                            ; 0040fbc6
    CALL shape_edittool.cpp_CStrList_populateFromFileSearch_FUN_004a35b0 ; 0040fbc7
        ;   XREF to: 004a35b0 (UNCONDITIONAL_CALL)  ; void shape_edittool.cpp_CStrList_populateFromFileSearch_FUN_004a35b0(CStrList * this_ptr, char * directory_path, char * file_pattern)
    ADD ESP,0xc                         ; 0040fbcc
    LEA EAX,[ESP + 0xea0]               ; 0040fbcf
    PUSH EAX                            ; 0040fbd6
    CALL shape_edittool.cpp_CStrList_sort_FUN_004a2ec0 ; 0040fbd7
        ;   XREF to: 004a2ec0 (UNCONDITIONAL_CALL)  ; void shape_edittool.cpp_CStrList_sort_FUN_004a2ec0(CStrList * this_ptr)
    MOV ECX,dword ptr [EBX + 0x68]      ; 0040fbdc
    MOV EAX,dword ptr [EBX + 0x5c]      ; 0040fbdf
    MOV EDI,dword ptr [ECX]             ; 0040fbe2
    ADD ESP,0x4                         ; 0040fbe4
    CMP EAX,EDI                         ; 0040fbe7
    JL 0x0040fce3                       ; 0040fbe9
        ;   XREF to: 0040fce3 (CONDITIONAL_JUMP)  ; LAB_0040fce3
    PUSH EBP                            ; 0040fbef
    PUSH ESI                            ; 0040fbf0
    PUSH 0x61464b                       ; 0040fbf1 | = "Add %s for actor %s."
    LEA EAX,[ESP + 0x3558]              ; 0040fbf6
    PUSH EAX                            ; 0040fbfd
    CALL crt_stdio.c_sprintf_FUN_005fdbd0 ; 0040fbfe
        ;   XREF to: 005fdbd0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_sprintf_FUN_005fdbd0(char * buffer, char * format)
    ADD ESP,0x10                        ; 0040fc03
    PUSH 0x0                            ; 0040fc06
        ;   Label: LAB_0040fc06
    PUSH -0x1                           ; 0040fc08
    LEA EAX,[ESP + 0x3554]              ; 0040fc0a
    PUSH EAX                            ; 0040fc11
    LEA EAX,[ESP + 0xeac]               ; 0040fc12
    PUSH EAX                            ; 0040fc19
    CALL shape_edittool.cpp_CPickList_displayChoicesAndWaitForInput_FUN_004a3e20 ; 0040fc1a
        ;   XREF to: 004a3e20 (UNCONDITIONAL_CALL)  ; int shape_edittool.cpp_CPickList_displayChoicesAndWaitForInput_FUN_004a3e20(CPickList * this_ptr, char * dialog_title, int config_param1, int config_param2)
    MOV ESI,EAX                         ; 0040fc1f
    ADD ESP,0x10                        ; 0040fc21
    TEST EAX,EAX                        ; 0040fc24
    JL 0x0040fd71                       ; 0040fc26
        ;   XREF to: 0040fd71 (CONDITIONAL_JUMP)  ; LAB_0040fd71
    PUSH 0x0                            ; 0040fc2c
    PUSH EAX                            ; 0040fc2e
    LEA EAX,[ESP + 0x2148]              ; 0040fc2f
    PUSH EAX                            ; 0040fc36
    LEA EAX,[ESP + 0xeac]               ; 0040fc37
    PUSH EAX                            ; 0040fc3e
    CALL shape_edittool.cpp_CStrList_getFieldAt_FUN_004a2f80 ; 0040fc3f
        ;   XREF to: 004a2f80 (UNCONDITIONAL_CALL)  ; void shape_edittool.cpp_CStrList_getFieldAt_FUN_004a2f80(CStrList * this_ptr, int string_index, char * output_buffer, int field_number)
    ADD ESP,0x10                        ; 0040fc44
    PUSH 0x1                            ; 0040fc47
    PUSH ESI                            ; 0040fc49
    LEA EAX,[ESP + 0x2348]              ; 0040fc4a
    PUSH EAX                            ; 0040fc51
    LEA EAX,[ESP + 0xeac]               ; 0040fc52
    PUSH EAX                            ; 0040fc59
    CALL shape_edittool.cpp_CStrList_getFieldAt_FUN_004a2f80 ; 0040fc5a
        ;   XREF to: 004a2f80 (UNCONDITIONAL_CALL)  ; void shape_edittool.cpp_CStrList_getFieldAt_FUN_004a2f80(CStrList * this_ptr, int string_index, char * output_buffer, int field_number)
    ADD ESP,0x10                        ; 0040fc5f
    LEA EAX,[ESP + 0x2340]              ; 0040fc62
    PUSH EAX                            ; 0040fc69
    LEA EAX,[ESP + 0x2144]              ; 0040fc6a
    PUSH EAX                            ; 0040fc71
    PUSH 0x0                            ; 0040fc72
    PUSH 0x0                            ; 0040fc74
    LEA EAX,[ESP + 0x31b0]              ; 0040fc76
    PUSH EAX                            ; 0040fc7d
    CALL crt_file.c_makepath_FUN_005febfc ; 0040fc7e
        ;   XREF to: 005febfc (UNCONDITIONAL_CALL)  ; void crt_file.c_makepath_FUN_005febfc(char * path_buffer, char * drive, char * directory, char * filename, ...)
    MOV EDI,dword ptr [EBX + 0x68]      ; 0040fc83
    MOV EAX,dword ptr [EBX + 0x5c]      ; 0040fc86
    MOV EDX,dword ptr [EDI]             ; 0040fc89
    ADD ESP,0x14                        ; 0040fc8b
    CMP EAX,EDX                         ; 0040fc8e
    JGE 0x0040fd5e                      ; 0040fc90
        ;   XREF to: 0040fd5e (CONDITIONAL_JUMP)  ; LAB_0040fd5e
    MOV EAX,dword ptr [ESP + 0xea0]     ; 0040fc96
    DEC EAX                             ; 0040fc9d
    CMP ESI,EAX                         ; 0040fc9e
    JNZ 0x0040fd24                      ; 0040fca0
        ;   XREF to: 0040fd24 (CONDITIONAL_JUMP)  ; LAB_0040fd24
    MOV ECX,dword ptr [EBX + 0x5c]      ; 0040fca6
    PUSH ECX                            ; 0040fca9
    PUSH EDI                            ; 0040fcaa
    CALL core_cloth.cpp_CClothList_remove_FUN_0043c170 ; 0040fcab
        ;   XREF to: 0043c170 (UNCONDITIONAL_CALL)  ; void core_cloth.cpp_CClothList_remove_FUN_0043c170(CClothList * this_ptr)
    ADD ESP,0x8                         ; 0040fcb0
        ;   Label: LAB_0040fcb0
    PUSH EBP                            ; 0040fcb3
        ;   Label: LAB_0040fcb3
    MOV EAX,dword ptr [EBP + 0x154]     ; 0040fcb4
    CALL dword ptr [EAX]                ; 0040fcba
    ADD ESP,0x4                         ; 0040fcbc
    PUSH 0x0                            ; 0040fcbf
    LEA EAX,[ESP + 0xea4]               ; 0040fcc1
    PUSH EAX                            ; 0040fcc8
    MOV ESI,0x1                         ; 0040fcc9
    CALL shape_edittool.cpp_CPickList_dtor_FUN_004a3c80 ; 0040fcce
        ;   XREF to: 004a3c80 (UNCONDITIONAL_CALL)  ; CPickList * shape_edittool.cpp_CPickList_dtor_FUN_004a3c80(CPickList * this_ptr, uint d1, uint d2, uint d3, ...)
    ADD ESP,0x8                         ; 0040fcd3
    MOV EAX,ESI                         ; 0040fcd6
    ADD ESP,0x37dc                      ; 0040fcd8
    POP EBP                             ; 0040fcde
    POP EDI                             ; 0040fcdf
    POP ESI                             ; 0040fce0
    POP EBX                             ; 0040fce1
    RET                                 ; 0040fce2
    MOV EDX,EAX                         ; 0040fce3
        ;   Label: LAB_0040fce3
    SHL EAX,0x2                         ; 0040fce5
    ADD EAX,EDX                         ; 0040fce8
    ADD ECX,0x4                         ; 0040fcea
    SHL EAX,0x3                         ; 0040fced
    ADD EAX,ECX                         ; 0040fcf0
    PUSH EAX                            ; 0040fcf2
    PUSH EBP                            ; 0040fcf3
    PUSH ESI                            ; 0040fcf4
    PUSH 0x614614                       ; 0040fcf5 | = "Select %s for actor %s.  Current is %s."
    LEA EAX,[ESP + 0x355c]              ; 0040fcfa
    PUSH EAX                            ; 0040fd01
    CALL crt_stdio.c_sprintf_FUN_005fdbd0 ; 0040fd02
        ;   XREF to: 005fdbd0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_sprintf_FUN_005fdbd0(char * buffer, char * format)
    ADD ESP,0x14                        ; 0040fd07
    PUSH 0x61463c                       ; 0040fd0a | = "(remove cloth)"
    LEA EAX,[ESP + 0xea4]               ; 0040fd0f
    PUSH EAX                            ; 0040fd16
    CALL shape_edittool.cpp_CStrList_add_FUN_004a2b80 ; 0040fd17
        ;   XREF to: 004a2b80 (UNCONDITIONAL_CALL)  ; void shape_edittool.cpp_CStrList_add_FUN_004a2b80(CStrList * this_ptr, char * string_data)
    ADD ESP,0x8                         ; 0040fd1c
    JMP 0x0040fc06                      ; 0040fd1f
        ;   XREF to: 0040fc06 (UNCONDITIONAL_JUMP)  ; LAB_0040fc06
    MOV EDX,dword ptr [EBX + 0x5c]      ; 0040fd24
        ;   Label: LAB_0040fd24
    LEA EAX,[EDX*0x4 + 0x0]             ; 0040fd27
    ADD EAX,EDX                         ; 0040fd2e
    ADD EDI,0x4                         ; 0040fd30
    SHL EAX,0x3                         ; 0040fd33
    LEA ESI,[ESP + 0x31a0]              ; 0040fd36
    ADD EDI,EAX                         ; 0040fd3d
    PUSH EDI                            ; 0040fd3f
    MOV AL,byte ptr [ESI]               ; 0040fd40
        ;   Label: LAB_0040fd40
    MOV byte ptr [EDI],AL               ; 0040fd42
    CMP AL,0x0                          ; 0040fd44
    JZ 0x0040fd58                       ; 0040fd46
        ;   XREF to: 0040fd58 (CONDITIONAL_JUMP)  ; LAB_0040fd58
    MOV AL,byte ptr [ESI + 0x1]         ; 0040fd48
    ADD ESI,0x2                         ; 0040fd4b
    MOV byte ptr [EDI + 0x1],AL         ; 0040fd4e
    ADD EDI,0x2                         ; 0040fd51
    CMP AL,0x0                          ; 0040fd54
    JNZ 0x0040fd40                      ; 0040fd56
        ;   XREF to: 0040fd40 (CONDITIONAL_JUMP)  ; LAB_0040fd40
    POP EDI                             ; 0040fd58
        ;   Label: LAB_0040fd58
    JMP 0x0040fcb3                      ; 0040fd59
        ;   XREF to: 0040fcb3 (UNCONDITIONAL_JUMP)  ; LAB_0040fcb3
    LEA EAX,[ESP + 0x31a0]              ; 0040fd5e
        ;   Label: LAB_0040fd5e
    PUSH EAX                            ; 0040fd65
    PUSH EDI                            ; 0040fd66
    CALL core_cloth.cpp_CClothList_add_FUN_0043c0f0 ; 0040fd67
        ;   XREF to: 0043c0f0 (UNCONDITIONAL_CALL)  ; void core_cloth.cpp_CClothList_add_FUN_0043c0f0(CClothList * this_ptr)
    JMP 0x0040fcb0                      ; 0040fd6c
        ;   XREF to: 0040fcb0 (UNCONDITIONAL_JUMP)  ; LAB_0040fcb0
    PUSH 0x0                            ; 0040fd71
        ;   Label: LAB_0040fd71
    LEA EAX,[ESP + 0xea4]               ; 0040fd73
    PUSH EAX                            ; 0040fd7a
    CALL shape_edittool.cpp_CPickList_dtor_FUN_004a3c80 ; 0040fd7b
        ;   XREF to: 004a3c80 (UNCONDITIONAL_CALL)  ; CPickList * shape_edittool.cpp_CPickList_dtor_FUN_004a3c80(CPickList * this_ptr, uint d1, uint d2, uint d3, ...)
    ADD ESP,0x8                         ; 0040fd80
    XOR ESI,ESI                         ; 0040fd83
    MOV EAX,ESI                         ; 0040fd85
    ADD ESP,0x37dc                      ; 0040fd87
    POP EBP                             ; 0040fd8d
    POP EDI                             ; 0040fd8e
    POP ESI                             ; 0040fd8f
    POP EBX                             ; 0040fd90
    RET                                 ; 0040fd91
    MOV ECX,dword ptr [EBX + 0x68]      ; 0040fd92
        ;   Label: caseD_10
    MOV EAX,dword ptr [EBX + 0x5c]      ; 0040fd95
    CMP EAX,dword ptr [ECX]             ; 0040fd98
    JGE 0x0040fe27                      ; 0040fd9a
        ;   XREF to: 0040fe27 (CONDITIONAL_JUMP)  ; LAB_0040fe27
    MOV EDX,EAX                         ; 0040fda0
    SHL EAX,0x2                         ; 0040fda2
    SUB EAX,EDX                         ; 0040fda5
    SHL EAX,0x3                         ; 0040fda7
    ADD EAX,EDX                         ; 0040fdaa
    SHL EAX,0x2                         ; 0040fdac
    LEA EDX,[ECX + 0x1f8]               ; 0040fdaf
    ADD EDX,EAX                         ; 0040fdb5
    ADD ECX,0x4                         ; 0040fdb7
    PUSH EDX                            ; 0040fdba
    ADD EAX,ECX                         ; 0040fdbb
    PUSH EAX                            ; 0040fdbd
    PUSH 0x614673                       ; 0040fdbe | = "%s => %s"
    LEA EAX,[ESP + 0x33b4]              ; 0040fdc3
    PUSH EAX                            ; 0040fdca
    CALL crt_stdio.c_sprintf_FUN_005fdbd0 ; 0040fdcb
        ;   XREF to: 005fdbd0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_sprintf_FUN_005fdbd0(char * buffer, char * format)
    ADD ESP,0x10                        ; 0040fdd0
    PUSH 0x1                            ; 0040fdd3
        ;   Label: LAB_0040fdd3
    PUSH 0xdc                           ; 0040fdd5
    LEA EAX,[ESP + 0x33b0]              ; 0040fdda
    PUSH EAX                            ; 0040fde1
    LEA EAX,[ESP + 0x3558]              ; 0040fde2
    PUSH EAX                            ; 0040fde9
    MOV EBP,dword ptr [0x00678a60]      ; 0040fdea | g_CEditorToolsPtr
    PUSH EBP                            ; 0040fdf0 | g_CEditorToolsPtr
    CALL shape_edittool.cpp_CEditorTools_showTextInputDialog_FUN_004a03d0 ; 0040fdf1
        ;   XREF to: 004a03d0 (UNCONDITIONAL_CALL)  ; int shape_edittool.cpp_CEditorTools_showTextInputDialog_FUN_004a03d0(CEditorTools * this_ptr, char * prompt_text, char * input_buffer, int buffer_size, ...)
    ADD ESP,0x14                        ; 0040fdf6
    TEST EAX,EAX                        ; 0040fdf9
    JZ 0x0040eef2                       ; 0040fdfb
        ;   XREF to: 0040eef2 (CONDITIONAL_JUMP)  ; LAB_0040eef2
    CMP byte ptr [ESP + 0x33a8],0x0     ; 0040fe01
    JNZ 0x0040fe5b                      ; 0040fe09
        ;   XREF to: 0040fe5b (CONDITIONAL_JUMP)  ; LAB_0040fe5b
    MOV EAX,dword ptr [EBX + 0x68]      ; 0040fe0b
    MOV EDX,dword ptr [EBX + 0x5c]      ; 0040fe0e
    CMP EDX,dword ptr [EAX]             ; 0040fe11
    JL 0x0040fe4f                       ; 0040fe13
        ;   XREF to: 0040fe4f (CONDITIONAL_JUMP)  ; LAB_0040fe4f
    MOV ESI,0x1                         ; 0040fe15
        ;   Label: LAB_0040fe15
    MOV EAX,ESI                         ; 0040fe1a
    ADD ESP,0x37dc                      ; 0040fe1c
    POP EBP                             ; 0040fe22
    POP EDI                             ; 0040fe23
    POP ESI                             ; 0040fe24
    POP EBX                             ; 0040fe25
    RET                                 ; 0040fe26
    MOV ESI,0x614660                    ; 0040fe27 | = "Condition => Event"
        ;   Label: LAB_0040fe27
    LEA EDI,[ESP + 0x33a8]              ; 0040fe2c
    PUSH EDI                            ; 0040fe33
    MOV AL,byte ptr [ESI]               ; 0040fe34 | = "Condition => Event" | s_ndition_=>_Event_00614662
        ;   Label: LAB_0040fe34
    MOV byte ptr [EDI],AL               ; 0040fe36
    CMP AL,0x0                          ; 0040fe38
    JZ 0x0040fe4c                       ; 0040fe3a
        ;   XREF to: 0040fe4c (CONDITIONAL_JUMP)  ; LAB_0040fe4c
    MOV AL,byte ptr [ESI + 0x1]         ; 0040fe3c | s_ondition_=>_Event_00614661 | s_dition_=>_Event_00614663
    ADD ESI,0x2                         ; 0040fe3f
    MOV byte ptr [EDI + 0x1],AL         ; 0040fe42
    ADD EDI,0x2                         ; 0040fe45
    CMP AL,0x0                          ; 0040fe48
    JNZ 0x0040fe34                      ; 0040fe4a
        ;   XREF to: 0040fe34 (CONDITIONAL_JUMP)  ; LAB_0040fe34
    POP EDI                             ; 0040fe4c
        ;   Label: LAB_0040fe4c
    JMP 0x0040fdd3                      ; 0040fe4d
        ;   XREF to: 0040fdd3 (UNCONDITIONAL_JUMP)  ; LAB_0040fdd3
    PUSH EDX                            ; 0040fe4f
        ;   Label: LAB_0040fe4f
    PUSH EAX                            ; 0040fe50
    CALL core_event.cpp_CRuleList_remove_FUN_004b17c0 ; 0040fe51
        ;   XREF to: 004b17c0 (UNCONDITIONAL_CALL)  ; void core_event.cpp_CRuleList_remove_FUN_004b17c0(CRuleList * this_ptr)
    ADD ESP,0x8                         ; 0040fe56
    JMP 0x0040fe15                      ; 0040fe59
        ;   XREF to: 0040fe15 (UNCONDITIONAL_JUMP)  ; LAB_0040fe15
    PUSH 0x61467c                       ; 0040fe5b | = "=>"
        ;   Label: LAB_0040fe5b
    LEA EAX,[ESP + 0x33ac]              ; 0040fe60
    PUSH EAX                            ; 0040fe67
    CALL crt_string.c_strstr_FUN_005fedd0 ; 0040fe68
        ;   XREF to: 005fedd0 (UNCONDITIONAL_CALL)  ; char * crt_string.c_strstr_FUN_005fedd0(char * haystack_str, char * needle_str)
    ADD ESP,0x8                         ; 0040fe6d
    MOV EBP,EAX                         ; 0040fe70
    TEST EAX,EAX                        ; 0040fe72
    JZ 0x0040ff1a                       ; 0040fe74
        ;   XREF to: 0040ff1a (CONDITIONAL_JUMP)  ; LAB_0040ff1a
    LEA ESI,[ESP + 0x33a8]              ; 0040fe7a
    LEA EDI,[ESP + 0x3614]              ; 0040fe81
    MOV byte ptr [EAX],0x0              ; 0040fe88
    PUSH EDI                            ; 0040fe8b
    MOV AL,byte ptr [ESI]               ; 0040fe8c
        ;   Label: LAB_0040fe8c
    MOV byte ptr [EDI],AL               ; 0040fe8e
    CMP AL,0x0                          ; 0040fe90
    JZ 0x0040fea4                       ; 0040fe92
        ;   XREF to: 0040fea4 (CONDITIONAL_JUMP)  ; LAB_0040fea4
    MOV AL,byte ptr [ESI + 0x1]         ; 0040fe94
    ADD ESI,0x2                         ; 0040fe97
    MOV byte ptr [EDI + 0x1],AL         ; 0040fe9a
    ADD EDI,0x2                         ; 0040fe9d
    CMP AL,0x0                          ; 0040fea0
    JNZ 0x0040fe8c                      ; 0040fea2
        ;   XREF to: 0040fe8c (CONDITIONAL_JUMP)  ; LAB_0040fe8c
    POP EDI                             ; 0040fea4
        ;   Label: LAB_0040fea4
    LEA EDI,[ESP + 0x3614]              ; 0040fea5
    LEA ESI,[ESP + 0x3614]              ; 0040feac
    SUB ECX,ECX                         ; 0040feb3
    DEC ECX                             ; 0040feb5
    XOR EAX,EAX                         ; 0040feb6
    SCASB.REPNE ES:EDI                  ; 0040feb8
    NOT ECX                             ; 0040feba
    DEC ECX                             ; 0040febc
    MOV EAX,ECX                         ; 0040febd
    MOV EDI,ECX                         ; 0040febf
    TEST ECX,ECX                        ; 0040fec1
    JLE 0x0040fee3                      ; 0040fec3
        ;   XREF to: 0040fee3 (CONDITIONAL_JUMP)  ; LAB_0040fee3
    LEA EDX,[ESP + 0x3614]              ; 0040fec5
    LEA EAX,[ECX + EDX*0x1]             ; 0040fecc
    MOV DL,byte ptr [EAX + -0x1]        ; 0040fecf
        ;   Label: LAB_0040fecf
    INC DL                              ; 0040fed2
    AND EDX,0xff                        ; 0040fed4
    TEST byte ptr [EDX + 0x6849c4],0x2  ; 0040feda | g_CharacterClassificationTable
    JNZ 0x0040ff32                      ; 0040fee1
        ;   XREF to: 0040ff32 (CONDITIONAL_JUMP)  ; LAB_0040ff32
    LEA EAX,[ESI + EDI*0x1]             ; 0040fee3
        ;   Label: LAB_0040fee3
    MOV byte ptr [EAX],0x0              ; 0040fee6
    LEA EAX,[ESI + 0x1]                 ; 0040fee9
    MOV dword ptr [ESP + 0x37d8],EAX    ; 0040feec
    MOV AL,byte ptr [ESI]               ; 0040fef3
        ;   Label: LAB_0040fef3
    INC AL                              ; 0040fef5
    AND EAX,0xff                        ; 0040fef7
    TEST byte ptr [EAX + 0x6849c4],0x2  ; 0040fefc | g_CharacterClassificationTable
    JZ 0x0040ff3a                       ; 0040ff03
        ;   XREF to: 0040ff3a (CONDITIONAL_JUMP)  ; LAB_0040ff3a
    PUSH EDI                            ; 0040ff05
    MOV EAX,dword ptr [ESP + 0x37dc]    ; 0040ff06
    PUSH EAX                            ; 0040ff0d
    PUSH ESI                            ; 0040ff0e
    DEC EDI                             ; 0040ff0f
    CALL crt_string.c_memmove_FUN_005fe5e0 ; 0040ff10
        ;   XREF to: 005fe5e0 (UNCONDITIONAL_CALL)  ; void * crt_string.c_memmove_FUN_005fe5e0(void * dest, void * src, SIZE_T n)
    ADD ESP,0xc                         ; 0040ff15
    JMP 0x0040fef3                      ; 0040ff18
        ;   XREF to: 0040fef3 (UNCONDITIONAL_JUMP)  ; LAB_0040fef3
    PUSH 0x61467f                       ; 0040ff1a | = "Please input rule as \"<condition> =>..."
        ;   Label: LAB_0040ff1a
    MOV EAX,[0x00678a60]                ; 0040ff1f | g_CEditorToolsPtr
    PUSH EAX                            ; 0040ff24 | g_CEditorToolsPtr
    CALL shape_edittool.cpp_CEditorTools_showError_FUN_0049e740 ; 0040ff25
        ;   XREF to: 0049e740 (UNCONDITIONAL_CALL)  ; void shape_edittool.cpp_CEditorTools_showError_FUN_0049e740(CEditorTools * this_ptr, char * format)
    ADD ESP,0x8                         ; 0040ff2a
    JMP 0x0040fdd3                      ; 0040ff2d
        ;   XREF to: 0040fdd3 (UNCONDITIONAL_JUMP)  ; LAB_0040fdd3
    DEC EDI                             ; 0040ff32
        ;   Label: LAB_0040ff32
    DEC EAX                             ; 0040ff33
    TEST EDI,EDI                        ; 0040ff34
    JG 0x0040fecf                       ; 0040ff36
        ;   XREF to: 0040fecf (CONDITIONAL_JUMP)  ; LAB_0040fecf
    JMP 0x0040fee3                      ; 0040ff38
        ;   XREF to: 0040fee3 (UNCONDITIONAL_JUMP)  ; LAB_0040fee3
    LEA EDI,[ESP + 0x3678]              ; 0040ff3a
        ;   Label: LAB_0040ff3a
    LEA ESI,[EBP + 0x2]                 ; 0040ff41
    MOV byte ptr [EBP],0x3d             ; 0040ff44
    PUSH EDI                            ; 0040ff48
    MOV AL,byte ptr [ESI]               ; 0040ff49
        ;   Label: LAB_0040ff49
    MOV byte ptr [EDI],AL               ; 0040ff4b
    CMP AL,0x0                          ; 0040ff4d
    JZ 0x0040ff61                       ; 0040ff4f
        ;   XREF to: 0040ff61 (CONDITIONAL_JUMP)  ; LAB_0040ff61
    MOV AL,byte ptr [ESI + 0x1]         ; 0040ff51
    ADD ESI,0x2                         ; 0040ff54
    MOV byte ptr [EDI + 0x1],AL         ; 0040ff57
    ADD EDI,0x2                         ; 0040ff5a
    CMP AL,0x0                          ; 0040ff5d
    JNZ 0x0040ff49                      ; 0040ff5f
        ;   XREF to: 0040ff49 (CONDITIONAL_JUMP)  ; LAB_0040ff49
    POP EDI                             ; 0040ff61
        ;   Label: LAB_0040ff61
    LEA EDI,[ESP + 0x3678]              ; 0040ff62
    LEA ESI,[ESP + 0x3678]              ; 0040ff69
    SUB ECX,ECX                         ; 0040ff70
    DEC ECX                             ; 0040ff72
    XOR EAX,EAX                         ; 0040ff73
    SCASB.REPNE ES:EDI                  ; 0040ff75
    NOT ECX                             ; 0040ff77
    DEC ECX                             ; 0040ff79
    MOV EDI,ECX                         ; 0040ff7a
    TEST ECX,ECX                        ; 0040ff7c
    JLE 0x0040ff9d                      ; 0040ff7e
        ;   XREF to: 0040ff9d (CONDITIONAL_JUMP)  ; LAB_0040ff9d
    LEA EAX,[ESP + 0x3678]              ; 0040ff80
    ADD EAX,ECX                         ; 0040ff87
    MOV DL,byte ptr [EAX + -0x1]        ; 0040ff89
        ;   Label: LAB_0040ff89
    INC DL                              ; 0040ff8c
    AND EDX,0xff                        ; 0040ff8e
    TEST byte ptr [EDX + 0x6849c4],0x2  ; 0040ff94 | g_CharacterClassificationTable
    JNZ 0x0040ffc6                      ; 0040ff9b
        ;   XREF to: 0040ffc6 (CONDITIONAL_JUMP)  ; LAB_0040ffc6
    LEA EAX,[ESI + EDI*0x1]             ; 0040ff9d
        ;   Label: LAB_0040ff9d
    LEA EBP,[ESI + 0x1]                 ; 0040ffa0
    MOV byte ptr [EAX],0x0              ; 0040ffa3
    MOV AL,byte ptr [ESI]               ; 0040ffa6
        ;   Label: LAB_0040ffa6
    INC AL                              ; 0040ffa8
    AND EAX,0xff                        ; 0040ffaa
    TEST byte ptr [EAX + 0x6849c4],0x2  ; 0040ffaf | g_CharacterClassificationTable
    JZ 0x0040ffce                       ; 0040ffb6
        ;   XREF to: 0040ffce (CONDITIONAL_JUMP)  ; LAB_0040ffce
    PUSH EDI                            ; 0040ffb8
    PUSH EBP                            ; 0040ffb9
    PUSH ESI                            ; 0040ffba
    DEC EDI                             ; 0040ffbb
    CALL crt_string.c_memmove_FUN_005fe5e0 ; 0040ffbc
        ;   XREF to: 005fe5e0 (UNCONDITIONAL_CALL)  ; void * crt_string.c_memmove_FUN_005fe5e0(void * dest, void * src, SIZE_T n)
    ADD ESP,0xc                         ; 0040ffc1
    JMP 0x0040ffa6                      ; 0040ffc4
        ;   XREF to: 0040ffa6 (UNCONDITIONAL_JUMP)  ; LAB_0040ffa6
    DEC EDI                             ; 0040ffc6
        ;   Label: LAB_0040ffc6
    DEC EAX                             ; 0040ffc7
    TEST EDI,EDI                        ; 0040ffc8
    JG 0x0040ff89                       ; 0040ffca
        ;   XREF to: 0040ff89 (CONDITIONAL_JUMP)  ; LAB_0040ff89
    JMP 0x0040ff9d                      ; 0040ffcc
        ;   XREF to: 0040ff9d (UNCONDITIONAL_JUMP)  ; LAB_0040ff9d
    LEA EAX,[ESP + 0x3614]              ; 0040ffce
        ;   Label: LAB_0040ffce
    PUSH EAX                            ; 0040ffd5
    MOV EDX,dword ptr [0x006793d0]      ; 0040ffd6 | g_CEventListInstance | g_CEventListPtr
    PUSH EDX                            ; 0040ffdc | g_CEventListInstance
    CALL core_event.cpp_CEventList_FUN_004add00 ; 0040ffdd
        ;   XREF to: 004add00 (UNCONDITIONAL_CALL)  ; int core_event.cpp_CEventList_FUN_004add00(CEventList * this_ptr)
    ADD ESP,0x8                         ; 0040ffe2
    TEST EAX,EAX                        ; 0040ffe5
    JZ 0x0040fffe                       ; 0040ffe7
        ;   XREF to: 0040fffe (CONDITIONAL_JUMP)
    PUSH EAX                            ; 0040ffe9
    MOV EDX,dword ptr [0x00678a60]      ; 0040ffea | g_CEditorToolsPtr
    PUSH EDX                            ; 0040fff0 | g_CEditorToolsPtr
    CALL shape_edittool.cpp_CEditorTools_showError_FUN_0049e740 ; 0040fff1
        ;   XREF to: 0049e740 (UNCONDITIONAL_CALL)  ; void shape_edittool.cpp_CEditorTools_showError_FUN_0049e740(CEditorTools * this_ptr, char * format)
    ADD ESP,0x8                         ; 0040fff6
    JMP 0x0040fdd3                      ; 0040fff9
        ;   XREF to: 0040fdd3 (UNCONDITIONAL_JUMP)  ; LAB_0040fdd3
    LEA EAX,[ESP + 0x1998]              ; 004100ee
        ;   Label: caseD_f
    PUSH EAX                            ; 004100f5
    MOV EBP,0xffffffff                  ; 004100f6
    XOR ESI,ESI                         ; 004100fb
    CALL shape_edittool.cpp_CPickList_ctor_FUN_004a3b90 ; 004100fd
        ;   XREF to: 004a3b90 (UNCONDITIONAL_CALL)  ; CPickList * shape_edittool.cpp_CPickList_ctor_FUN_004a3b90(CPickList * this_ptr)
    MOV ECX,dword ptr [EBX + 0x5c]      ; 00410102
    ADD ESP,0x4                         ; 00410105
    TEST ECX,ECX                        ; 00410108
    JLE 0x00410142                      ; 0041010a
        ;   XREF to: 00410142 (CONDITIONAL_JUMP)  ; LAB_00410142
    XOR EDI,EDI                         ; 0041010c
    MOV EAX,dword ptr [EBX + 0x60]      ; 0041010e
        ;   Label: LAB_0041010e
    MOV ECX,dword ptr [EDI + EAX*0x1]   ; 00410111
    PUSH ECX                            ; 00410114
    LEA EAX,[ESP + 0x199c]              ; 00410115
    PUSH EAX                            ; 0041011c
    CALL shape_edittool.cpp_CStrList_add_FUN_004a2b80 ; 0041011d
        ;   XREF to: 004a2b80 (UNCONDITIONAL_CALL)  ; void shape_edittool.cpp_CStrList_add_FUN_004a2b80(CStrList * this_ptr, char * string_data)
    MOV EAX,dword ptr [EBX + 0x68]      ; 00410122
    MOV EDX,dword ptr [EBX + 0x60]      ; 00410125
    MOV EAX,dword ptr [EAX]             ; 00410128
    MOV ECX,dword ptr [EDX + EDI*0x1 + 0x4] ; 0041012a
    ADD ESP,0x8                         ; 0041012e
    CMP EAX,ECX                         ; 00410131
    JNZ 0x00410137                      ; 00410133
        ;   XREF to: 00410137 (CONDITIONAL_JUMP)  ; LAB_00410137
    MOV EBP,ESI                         ; 00410135
    INC ESI                             ; 00410137
        ;   Label: LAB_00410137
    MOV EAX,dword ptr [EBX + 0x5c]      ; 00410138
    ADD EDI,0x8                         ; 0041013b
    CMP ESI,EAX                         ; 0041013e
    JL 0x0041010e                       ; 00410140
        ;   XREF to: 0041010e (CONDITIONAL_JUMP)  ; LAB_0041010e
    CMP dword ptr [EBX + 0x5c],0x2      ; 00410142
        ;   Label: LAB_00410142
    JNZ 0x00410184                      ; 00410146
        ;   XREF to: 00410184 (CONDITIONAL_JUMP)  ; LAB_00410184
    TEST EBP,EBP                        ; 00410148
    JL 0x00410184                       ; 0041014a
        ;   XREF to: 00410184 (CONDITIONAL_JUMP)  ; LAB_00410184
    MOV EAX,0x1                         ; 0041014c
    SUB EAX,EBP                         ; 00410151
    MOV EDX,dword ptr [EBX + 0x60]      ; 00410153
    SHL EAX,0x3                         ; 00410156
    ADD EAX,EDX                         ; 00410159
        ;   Label: LAB_00410159
    MOV EDX,dword ptr [EBX + 0x68]      ; 0041015b
    MOV EAX,dword ptr [EAX + 0x4]       ; 0041015e
    MOV dword ptr [EDX],EAX             ; 00410161
    PUSH 0x0                            ; 00410163
        ;   Label: LAB_00410163
    LEA EAX,[ESP + 0x199c]              ; 00410165
    PUSH EAX                            ; 0041016c
    CALL shape_edittool.cpp_CPickList_dtor_FUN_004a3c80 ; 0041016d
        ;   XREF to: 004a3c80 (UNCONDITIONAL_CALL)  ; CPickList * shape_edittool.cpp_CPickList_dtor_FUN_004a3c80(CPickList * this_ptr, uint d1, uint d2, uint d3, ...)
    ADD ESP,0x8                         ; 00410172
    XOR ESI,ESI                         ; 00410175
    MOV EAX,ESI                         ; 00410177
    ADD ESP,0x37dc                      ; 00410179
    POP EBP                             ; 0041017f
    POP EDI                             ; 00410180
    POP ESI                             ; 00410181
    POP EBX                             ; 00410182
    RET                                 ; 00410183
    PUSH 0x0                            ; 00410184
        ;   Label: LAB_00410184
    PUSH EBP                            ; 00410186
    LEA EAX,[ESP + 0x3554]              ; 00410187
    PUSH EAX                            ; 0041018e
    LEA EAX,[ESP + 0x19a4]              ; 0041018f
    PUSH EAX                            ; 00410196
    CALL shape_edittool.cpp_CPickList_displayChoicesAndWaitForInput_FUN_004a3e20 ; 00410197
        ;   XREF to: 004a3e20 (UNCONDITIONAL_CALL)  ; int shape_edittool.cpp_CPickList_displayChoicesAndWaitForInput_FUN_004a3e20(CPickList * this_ptr, char * dialog_title, int config_param1, int config_param2)
    ADD ESP,0x10                        ; 0041019c
    TEST EAX,EAX                        ; 0041019f
    JL 0x00410163                       ; 004101a1
        ;   XREF to: 00410163 (CONDITIONAL_JUMP)  ; LAB_00410163
    SHL EAX,0x3                         ; 004101a3
    MOV EDX,dword ptr [EBX + 0x60]      ; 004101a6
    JMP 0x00410159                      ; 004101a9
        ;   XREF to: 00410159 (UNCONDITIONAL_JUMP)  ; LAB_00410159
    XOR ESI,ESI                         ; 004101ab
        ;   Label: caseD_12
    MOV EBP,0x6146b4                    ; 004101ad | = "disabled"
    LEA EAX,[ESP + 0x1248]              ; 004101b2
        ;   Label: LAB_004101b2
    PUSH EAX                            ; 004101b9
    XOR EDI,EDI                         ; 004101ba
    CALL shape_edittool.cpp_CPickList_ctor_FUN_004a3b90 ; 004101bc
        ;   XREF to: 004a3b90 (UNCONDITIONAL_CALL)  ; CPickList * shape_edittool.cpp_CPickList_ctor_FUN_004a3b90(CPickList * this_ptr)
    ADD ESP,0x4                         ; 004101c1
    MOV EAX,dword ptr [EBX + 0x68]      ; 004101c4
        ;   Label: LAB_004101c4
    MOV EDX,dword ptr [EDI + 0x66e30c]  ; 004101c7 | DAT_0066e30c | DAT_0066e314
    TEST dword ptr [EAX],EDX            ; 004101cd
    JZ 0x00410265                       ; 004101cf
        ;   XREF to: 00410265 (CONDITIONAL_JUMP)  ; LAB_00410265
    MOV EAX,0x6146ad                    ; 004101d5 | = "enable"
    PUSH EAX                            ; 004101da | = "enable" | s_disabled_006146b4
        ;   Label: LAB_004101da
    MOV ECX,dword ptr [EDI + 0x66e310]  ; 004101db | = "thrust" | PTR_s_thrust_0066e310 | PTR_s_swing_0066e318
    PUSH ECX                            ; 004101e1 | = "thrust" | s_swing_006146fc
    PUSH 0x6146bd                       ; 004101e2 | = "%s\t%s"
    LEA EAX,[ESP + 0x3490]              ; 004101e7
    PUSH EAX                            ; 004101ee
    CALL crt_stdio.c_sprintf_FUN_005fdbd0 ; 004101ef
        ;   XREF to: 005fdbd0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_sprintf_FUN_005fdbd0(char * buffer, char * format)
    ADD ESP,0x10                        ; 004101f4
    LEA EAX,[ESP + 0x3484]              ; 004101f7
    PUSH EAX                            ; 004101fe
    LEA EAX,[ESP + 0x124c]              ; 004101ff
    PUSH EAX                            ; 00410206
    ADD EDI,0x8                         ; 00410207
    CALL shape_edittool.cpp_CStrList_add_FUN_004a2b80 ; 0041020a
        ;   XREF to: 004a2b80 (UNCONDITIONAL_CALL)  ; void shape_edittool.cpp_CStrList_add_FUN_004a2b80(CStrList * this_ptr, char * string_data)
    ADD ESP,0x8                         ; 0041020f
    CMP EDI,0x10                        ; 00410212
    JNZ 0x004101c4                      ; 00410215
        ;   XREF to: 004101c4 (CONDITIONAL_JUMP)  ; LAB_004101c4
    PUSH 0x0                            ; 00410217
    PUSH ESI                            ; 00410219
    LEA EAX,[ESP + 0x3554]              ; 0041021a
    PUSH EAX                            ; 00410221
    LEA EAX,[ESP + 0x1254]              ; 00410222
    PUSH EAX                            ; 00410229
    CALL shape_edittool.cpp_CPickList_displayChoicesAndWaitForInput_FUN_004a3e20 ; 0041022a
        ;   XREF to: 004a3e20 (UNCONDITIONAL_CALL)  ; int shape_edittool.cpp_CPickList_displayChoicesAndWaitForInput_FUN_004a3e20(CPickList * this_ptr, char * dialog_title, int config_param1, int config_param2)
    ADD ESP,0x10                        ; 0041022f
    MOV ESI,EAX                         ; 00410232
    TEST EAX,EAX                        ; 00410234
    JL 0x0041026c                       ; 00410236
        ;   XREF to: 0041026c (CONDITIONAL_JUMP)  ; LAB_0041026c
    LEA EDX,[EAX*0x8 + 0x0]             ; 00410238
    MOV EAX,dword ptr [EBX + 0x68]      ; 0041023f
    MOV EDX,dword ptr [EDX + 0x66e30c]  ; 00410242 | DAT_0066e30c
    MOV EDI,dword ptr [EAX]             ; 00410248
    XOR EDI,EDX                         ; 0041024a
    PUSH 0x0                            ; 0041024c
    MOV dword ptr [EAX],EDI             ; 0041024e
    LEA EAX,[ESP + 0x124c]              ; 00410250
    PUSH EAX                            ; 00410257
    CALL shape_edittool.cpp_CPickList_dtor_FUN_004a3c80 ; 00410258
        ;   XREF to: 004a3c80 (UNCONDITIONAL_CALL)  ; CPickList * shape_edittool.cpp_CPickList_dtor_FUN_004a3c80(CPickList * this_ptr, uint d1, uint d2, uint d3, ...)
    ADD ESP,0x8                         ; 0041025d
    JMP 0x004101b2                      ; 00410260
        ;   XREF to: 004101b2 (UNCONDITIONAL_JUMP)  ; LAB_004101b2
    MOV EAX,EBP                         ; 00410265
        ;   Label: LAB_00410265
    JMP 0x004101da                      ; 00410267
        ;   XREF to: 004101da (UNCONDITIONAL_JUMP)  ; LAB_004101da
    PUSH 0x0                            ; 0041026c
        ;   Label: LAB_0041026c
    LEA EAX,[ESP + 0x124c]              ; 0041026e
    PUSH EAX                            ; 00410275
    CALL shape_edittool.cpp_CPickList_dtor_FUN_004a3c80 ; 00410276
        ;   XREF to: 004a3c80 (UNCONDITIONAL_CALL)  ; CPickList * shape_edittool.cpp_CPickList_dtor_FUN_004a3c80(CPickList * this_ptr, uint d1, uint d2, uint d3, ...)
    ADD ESP,0x8                         ; 0041027b
    XOR ESI,ESI                         ; 0041027e
    MOV EAX,ESI                         ; 00410280
    ADD ESP,0x37dc                      ; 00410282
    POP EBP                             ; 00410288
    POP EDI                             ; 00410289
    POP ESI                             ; 0041028a
    POP EBX                             ; 0041028b
    RET                                 ; 0041028c
    PUSH EBX                            ; 0041028d
        ;   Label: caseD_11
    PUSH EBP                            ; 0041028e
    CALL dword ptr [EBX + 0xe8]         ; 0041028f
    ADD ESP,0x8                         ; 00410295
    TEST EAX,EAX                        ; 00410298
    JZ 0x0040eef2                       ; 0041029a
        ;   XREF to: 0040eef2 (CONDITIONAL_JUMP)  ; LAB_0040eef2
    CMP dword ptr [EBX + 0x58],0x0      ; 004102a0
    JNZ 0x004102b8                      ; 004102a4
        ;   XREF to: 004102b8 (CONDITIONAL_JUMP)  ; LAB_004102b8
    MOV ESI,0x1                         ; 004102a6
    MOV EAX,ESI                         ; 004102ab
    ADD ESP,0x37dc                      ; 004102ad
    POP EBP                             ; 004102b3
    POP EDI                             ; 004102b4
    POP ESI                             ; 004102b5
    POP EBX                             ; 004102b6
    RET                                 ; 004102b7
    PUSH EBP                            ; 004102b8
        ;   Label: LAB_004102b8
    MOV EAX,dword ptr [EBP + 0x154]     ; 004102b9
    CALL dword ptr [EAX]                ; 004102bf
    ADD ESP,0x4                         ; 004102c1
    MOV ESI,0x1                         ; 004102c4
    MOV EAX,ESI                         ; 004102c9
    ADD ESP,0x37dc                      ; 004102cb
    POP EBP                             ; 004102d1
    POP EDI                             ; 004102d2
    POP ESI                             ; 004102d3
    POP EBX                             ; 004102d4
    RET                                 ; 004102d5
    MOV EDI,dword ptr [EBX]             ; 004102d6
        ;   Label: default
    PUSH EDI                            ; 004102d8
    MOV ECX,0x6146c3                    ; 004102d9 | = "..\\core\\actor.cpp"
    MOV ESI,0x119f                      ; 004102de
    PUSH 0x6146d5                       ; 004102e3 | = "Unknown CActorProperty type: %d"
    MOV dword ptr [0x02f0ca48],ECX      ; 004102e8 | g_CurrentFilename
    MOV dword ptr [0x02f0ca4c],ESI      ; 004102ee | g_CurrentLineNumber
    CALL core_main.c_displayErrorAndQuit_FUN_00506f10 ; 004102f4
        ;   XREF to: 00506f10 (UNCONDITIONAL_CALL)  ; void core_main.c_displayErrorAndQuit_FUN_00506f10(char * format)
    ADD ESP,0x8                         ; 004102f9
    XOR ESI,ESI                         ; 004102fc
    MOV EAX,ESI                         ; 004102fe
    ADD ESP,0x37dc                      ; 00410300
    POP EBP                             ; 00410306
    POP EDI                             ; 00410307
    POP ESI                             ; 00410308
    POP EBX                             ; 00410309
    RET                                 ; 0041030a
    PUSH EBP                            ; 0041030b
        ;   Label: LAB_0041030b
    LEA ESI,[EBX + 0x4]                 ; 0041030c
    PUSH ESI                            ; 0041030f
    PUSH 0x614560                       ; 00410310 | = "Enter %s for %s"
    LEA EAX,[ESP + 0x3558]              ; 00410315
    PUSH EAX                            ; 0041031c
    CALL crt_stdio.c_sprintf_FUN_005fdbd0 ; 0041031d
        ;   XREF to: 005fdbd0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_sprintf_FUN_005fdbd0(char * buffer, char * format)
    MOV EAX,dword ptr [EBX]             ; 00410322
    ADD ESP,0x10                        ; 00410324
    CMP EAX,0x12                        ; 00410327
    JA 0x004102d6                       ; 0041032a
        ;   XREF to: 004102d6 (CONDITIONAL_JUMP)  ; default
    JMP dword ptr [EAX*0x4 + 0x40ee84]  ; 0041032c | caseD_0 | caseD_1 | caseD_2
        ;   Label: switchD

