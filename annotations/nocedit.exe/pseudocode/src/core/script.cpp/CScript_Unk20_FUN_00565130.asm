; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; unknown undefined core_script.cpp_CScript_Unk20_FUN_00565130()
;
;
; XREF[1]:
;   core_msnedit.cpp_PrepareMissionMaybe_FUN_005390f0 at 0053a4d6
;
; Referenced Globals:
;   TerminatedCString s_Enter_line_number_00643e4f
;   TerminatedCString s_Find_00643e61
;   TerminatedCString s_Found_s_00643e66
;   TerminatedCString s_Can_t_find_s_00643e6f
;   TerminatedCString s_Find_00643e7d
;   TerminatedCString s_Found_s_00643e82
;   TerminatedCString s_Can_t_find_s_00643e8b
;   CEditorTools* g_CEditorToolsPtr = 02cf1cd4
;   CKeys* g_CKeysPtr = 02dcd7d4
;   undefined4 DAT_0068105c
;   char[256] g_CharacterClassificationTable
;   CEditorTools g_CEditorToolsInstance
;   CEdButton* g_ActiveButton
;   int g_GlobalDeltaTimeInt
;   int g_MouseX
;   ... and 20 more
;
; Called Functions:
;   core_script.cpp_CScript_CallingScriptEditorX2_2_FUN_00566910
;   core_script.cpp_CScript_CalltoScriptEditorX2Index_FUN_00565aa0
;   core_script.cpp_CScript_editorAction_FUN_00564820
;   core_script.cpp_CScript_editorIndex2X_FUN_00566b30
;   core_script.cpp_CScript_editorPutLine_FUN_005662a0
;   core_script.cpp_CScript_editorX2Index_FUN_00566a90
;   core_script.cpp_CScript_Unk18_FUN_005669a0
;   core_script.cpp_FUN_005644e0
;   core_script.cpp_FUN_00564500
;   core_script.cpp_FUN_00565ae0
;   core_script.cpp_FUN_00565d00
;   core_script.cpp_FUN_00565e70
;   core_script.cpp_FUN_00566230
;   core_script.cpp_FUN_00566390
;   core_script.cpp_FUN_00566800
;   ... and 12 more
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00565130
        ;   Label: core_script.cpp_CScript_Unk20_FUN_00565130
    PUSH ESI                            ; 00565131
    PUSH EDI                            ; 00565132
    PUSH EBP                            ; 00565133
    SUB ESP,0x2c                        ; 00565134
    MOV EBP,dword ptr [ESP + 0x40]      ; 00565137
    PUSH 0x2a                           ; 0056513b
    MOV EAX,[0x0067cf44]                ; 0056513d | g_CKeysPtr
    PUSH EAX                            ; 00565142 | g_CKeysInstance
    MOV EDX,dword ptr [EAX]             ; 00565143 | g_CKeysInstance
    CALL dword ptr [EDX]                ; 00565145
    ADD ESP,0x8                         ; 00565147
    MOV EDX,dword ptr [0x02cf6a80]      ; 0056514a | g_GlobalDeltaTimeInt
    MOV dword ptr [ESP + 0x24],EAX      ; 00565150
    MOV EAX,[0x0310fd40]                ; 00565154 | DAT_0310fd40
    ADD EAX,EDX                         ; 00565159
    AND EAX,0xfffff                     ; 0056515b
    PUSH EBP                            ; 00565160
    MOV [0x0310fd40],EAX                ; 00565161 | DAT_0310fd40
    CALL core_script.cpp_CScript_CallingScriptEditorX2_2_FUN_00566910 ; 00565166
        ;   XREF to: 00566910 (UNCONDITIONAL_CALL)  ; undefined core_script.cpp_CScript_CallingScriptEditorX2_2_FUN_00566910()
    ADD ESP,0x4                         ; 0056516b
    PUSH EBP                            ; 0056516e
    CALL core_script.cpp_CScript_Unk18_FUN_005669a0 ; 0056516f
        ;   XREF to: 005669a0 (UNCONDITIONAL_CALL)  ; undefined core_script.cpp_CScript_Unk18_FUN_005669a0()
    ADD ESP,0x4                         ; 00565174
    CALL core_script.cpp_FUN_00564500   ; 00565177
        ;   XREF to: 00564500 (UNCONDITIONAL_CALL)  ; undefined core_script.cpp_FUN_00564500()
    PUSH 0x310fd0c                      ; 0056517c | DAT_0310fd0c
    CALL shape_edittool.cpp_CEdScrollBar_handleInput_FUN_004a5fc0 ; 00565181
        ;   XREF to: 004a5fc0 (UNCONDITIONAL_CALL)  ; void shape_edittool.cpp_CEdScrollBar_handleInput_FUN_004a5fc0(CEdScrollBar * this_ptr)
    ADD ESP,0x4                         ; 00565186
    PUSH 0x310fcd8                      ; 00565189 | DAT_0310fcd8
    CALL shape_edittool.cpp_CEdScrollBar_handleInput_FUN_004a5fc0 ; 0056518e
        ;   XREF to: 004a5fc0 (UNCONDITIONAL_CALL)  ; void shape_edittool.cpp_CEdScrollBar_handleInput_FUN_004a5fc0(CEdScrollBar * this_ptr)
    ADD ESP,0x4                         ; 00565193
    PUSH EBP                            ; 00565196
    CALL core_script.cpp_FUN_00566880   ; 00565197
        ;   XREF to: 00566880 (UNCONDITIONAL_CALL)  ; undefined core_script.cpp_FUN_00566880()
    MOV EAX,[0x0310fd44]                ; 0056519c | DAT_0310fd44
    ADD ESP,0x4                         ; 005651a1
    MOV dword ptr [ESP + 0x20],EAX      ; 005651a4
    MOV EAX,[0x0310fd48]                ; 005651a8 | DAT_0310fd48
    PUSH 0x4b                           ; 005651ad
    MOV dword ptr [ESP + 0x20],EAX      ; 005651af
    MOV EAX,[0x0067cf44]                ; 005651b3 | g_CKeysPtr
    PUSH EAX                            ; 005651b8 | g_CKeysInstance
    MOV EDX,dword ptr [EAX]             ; 005651b9 | g_CKeysInstance
    XOR ESI,ESI                         ; 005651bb
    CALL dword ptr [EDX + 0x4]          ; 005651bd
    ADD ESP,0x8                         ; 005651c0
    TEST EAX,EAX                        ; 005651c3
    JNZ 0x0056579f                      ; 005651c5
        ;   XREF to: 0056579f (CONDITIONAL_JUMP)  ; LAB_0056579f
    PUSH 0x4d                           ; 005651cb
        ;   Label: LAB_005651cb
    MOV EAX,[0x0067cf44]                ; 005651cd | g_CKeysPtr
    PUSH EAX                            ; 005651d2 | g_CKeysInstance
    MOV EDX,dword ptr [EAX]             ; 005651d3 | g_CKeysInstance
    CALL dword ptr [EDX + 0x4]          ; 005651d5
    ADD ESP,0x8                         ; 005651d8
    TEST EAX,EAX                        ; 005651db
    JZ 0x005651ec                       ; 005651dd
        ;   XREF to: 005651ec (CONDITIONAL_JUMP)  ; LAB_005651ec
    PUSH 0x0                            ; 005651df
    PUSH 0x1                            ; 005651e1
    PUSH EBP                            ; 005651e3
    CALL core_script.cpp_CScript_editorAction_FUN_00564820 ; 005651e4
        ;   XREF to: 00564820 (UNCONDITIONAL_CALL)  ; undefined core_script.cpp_CScript_editorAction_FUN_00564820()
    ADD ESP,0xc                         ; 005651e9
    PUSH 0x50                           ; 005651ec
        ;   Label: LAB_005651ec
    MOV EAX,[0x0067cf44]                ; 005651ee | g_CKeysPtr
    PUSH EAX                            ; 005651f3 | g_CKeysInstance
    MOV EDX,dword ptr [EAX]             ; 005651f4 | g_CKeysInstance
    CALL dword ptr [EDX + 0x4]          ; 005651f6
    ADD ESP,0x8                         ; 005651f9
    TEST EAX,EAX                        ; 005651fc
    JZ 0x0056520d                       ; 005651fe
        ;   XREF to: 0056520d (CONDITIONAL_JUMP)  ; LAB_0056520d
    PUSH 0x0                            ; 00565200
    PUSH 0x3                            ; 00565202
    PUSH EBP                            ; 00565204
    CALL core_script.cpp_CScript_editorAction_FUN_00564820 ; 00565205
        ;   XREF to: 00564820 (UNCONDITIONAL_CALL)  ; undefined core_script.cpp_CScript_editorAction_FUN_00564820()
    ADD ESP,0xc                         ; 0056520a
    PUSH 0x48                           ; 0056520d
        ;   Label: LAB_0056520d
    MOV EAX,[0x0067cf44]                ; 0056520f | g_CKeysPtr
    PUSH EAX                            ; 00565214 | g_CKeysInstance
    MOV EDX,dword ptr [EAX]             ; 00565215 | g_CKeysInstance
    CALL dword ptr [EDX + 0x4]          ; 00565217
    ADD ESP,0x8                         ; 0056521a
    TEST EAX,EAX                        ; 0056521d
    JZ 0x0056522e                       ; 0056521f
        ;   XREF to: 0056522e (CONDITIONAL_JUMP)  ; LAB_0056522e
    PUSH 0x0                            ; 00565221
    PUSH 0x2                            ; 00565223
    PUSH EBP                            ; 00565225
    CALL core_script.cpp_CScript_editorAction_FUN_00564820 ; 00565226
        ;   XREF to: 00564820 (UNCONDITIONAL_CALL)  ; undefined core_script.cpp_CScript_editorAction_FUN_00564820()
    ADD ESP,0xc                         ; 0056522b
    PUSH 0x47                           ; 0056522e
        ;   Label: LAB_0056522e
    MOV EAX,[0x0067cf44]                ; 00565230 | g_CKeysPtr
    PUSH EAX                            ; 00565235 | g_CKeysInstance
    MOV EDX,dword ptr [EAX]             ; 00565236 | g_CKeysInstance
    CALL dword ptr [EDX + 0x4]          ; 00565238
    ADD ESP,0x8                         ; 0056523b
    TEST EAX,EAX                        ; 0056523e
    JZ 0x00565266                       ; 00565240
        ;   XREF to: 00565266 (CONDITIONAL_JUMP)  ; LAB_00565266
    PUSH 0x1d                           ; 00565242
    MOV EAX,[0x0067cf44]                ; 00565244 | g_CKeysPtr
    PUSH EAX                            ; 00565249 | g_CKeysInstance
    MOV EDX,dword ptr [EAX]             ; 0056524a | g_CKeysInstance
    CALL dword ptr [EDX]                ; 0056524c
    ADD ESP,0x8                         ; 0056524e
    TEST EAX,EAX                        ; 00565251
    JZ 0x005657af                       ; 00565253
        ;   XREF to: 005657af (CONDITIONAL_JUMP)  ; LAB_005657af
    PUSH 0x0                            ; 00565259
    PUSH 0x8                            ; 0056525b
    PUSH EBP                            ; 0056525d
        ;   Label: LAB_0056525d
    CALL core_script.cpp_CScript_editorAction_FUN_00564820 ; 0056525e
        ;   XREF to: 00564820 (UNCONDITIONAL_CALL)  ; undefined core_script.cpp_CScript_editorAction_FUN_00564820()
    ADD ESP,0xc                         ; 00565263
    PUSH 0x4f                           ; 00565266
        ;   Label: LAB_00565266
    MOV EAX,[0x0067cf44]                ; 00565268 | g_CKeysPtr
    PUSH EAX                            ; 0056526d | g_CKeysInstance
    MOV EDX,dword ptr [EAX]             ; 0056526e | g_CKeysInstance
    CALL dword ptr [EDX + 0x4]          ; 00565270
    ADD ESP,0x8                         ; 00565273
    TEST EAX,EAX                        ; 00565276
    JZ 0x0056529e                       ; 00565278
        ;   XREF to: 0056529e (CONDITIONAL_JUMP)  ; LAB_0056529e
    PUSH 0x1d                           ; 0056527a
    MOV EAX,[0x0067cf44]                ; 0056527c | g_CKeysPtr
    PUSH EAX                            ; 00565281 | g_CKeysInstance
    MOV EDX,dword ptr [EAX]             ; 00565282 | g_CKeysInstance
    CALL dword ptr [EDX]                ; 00565284
    ADD ESP,0x8                         ; 00565286
    TEST EAX,EAX                        ; 00565289
    JZ 0x005657b7                       ; 0056528b
        ;   XREF to: 005657b7 (CONDITIONAL_JUMP)  ; LAB_005657b7
    PUSH 0x0                            ; 00565291
    PUSH 0x9                            ; 00565293
    PUSH EBP                            ; 00565295
        ;   Label: LAB_00565295
    CALL core_script.cpp_CScript_editorAction_FUN_00564820 ; 00565296
        ;   XREF to: 00564820 (UNCONDITIONAL_CALL)  ; undefined core_script.cpp_CScript_editorAction_FUN_00564820()
    ADD ESP,0xc                         ; 0056529b
    PUSH 0x51                           ; 0056529e
        ;   Label: LAB_0056529e
    MOV EAX,[0x0067cf44]                ; 005652a0 | g_CKeysPtr
    PUSH EAX                            ; 005652a5 | g_CKeysInstance
    MOV EDX,dword ptr [EAX]             ; 005652a6 | g_CKeysInstance
    CALL dword ptr [EDX + 0x4]          ; 005652a8
    ADD ESP,0x8                         ; 005652ab
    TEST EAX,EAX                        ; 005652ae
    JZ 0x005652bf                       ; 005652b0
        ;   XREF to: 005652bf (CONDITIONAL_JUMP)  ; LAB_005652bf
    PUSH 0x0                            ; 005652b2
    PUSH 0x5                            ; 005652b4
    PUSH EBP                            ; 005652b6
    CALL core_script.cpp_CScript_editorAction_FUN_00564820 ; 005652b7
        ;   XREF to: 00564820 (UNCONDITIONAL_CALL)  ; undefined core_script.cpp_CScript_editorAction_FUN_00564820()
    ADD ESP,0xc                         ; 005652bc
    PUSH 0x49                           ; 005652bf
        ;   Label: LAB_005652bf
    MOV EAX,[0x0067cf44]                ; 005652c1 | g_CKeysPtr
    PUSH EAX                            ; 005652c6 | g_CKeysInstance
    MOV EDX,dword ptr [EAX]             ; 005652c7 | g_CKeysInstance
    CALL dword ptr [EDX + 0x4]          ; 005652c9
    ADD ESP,0x8                         ; 005652cc
    TEST EAX,EAX                        ; 005652cf
    JZ 0x005652e0                       ; 005652d1
        ;   XREF to: 005652e0 (CONDITIONAL_JUMP)  ; LAB_005652e0
    PUSH 0x0                            ; 005652d3
    PUSH 0x4                            ; 005652d5
    PUSH EBP                            ; 005652d7
    CALL core_script.cpp_CScript_editorAction_FUN_00564820 ; 005652d8
        ;   XREF to: 00564820 (UNCONDITIONAL_CALL)  ; undefined core_script.cpp_CScript_editorAction_FUN_00564820()
    ADD ESP,0xc                         ; 005652dd
    PUSH 0x53                           ; 005652e0
        ;   Label: LAB_005652e0
    MOV EAX,[0x0067cf44]                ; 005652e2 | g_CKeysPtr
    PUSH EAX                            ; 005652e7 | g_CKeysInstance
    MOV EDX,dword ptr [EAX]             ; 005652e8 | g_CKeysInstance
    CALL dword ptr [EDX + 0x4]          ; 005652ea
    ADD ESP,0x8                         ; 005652ed
    TEST EAX,EAX                        ; 005652f0
    JZ 0x0056532b                       ; 005652f2
        ;   XREF to: 0056532b (CONDITIONAL_JUMP)  ; LAB_0056532b
    MOV ECX,dword ptr [0x0310fd4c]      ; 005652f4 | DAT_0310fd4c
    MOV ESI,0x1                         ; 005652fa
    TEST ECX,ECX                        ; 005652ff
    JL 0x005657c7                       ; 00565301
        ;   XREF to: 005657c7 (CONDITIONAL_JUMP)  ; LAB_005657c7
    PUSH 0x2a                           ; 00565307
    MOV EAX,[0x0067cf44]                ; 00565309 | g_CKeysPtr
    PUSH EAX                            ; 0056530e | g_CKeysInstance
    MOV EDX,dword ptr [EAX]             ; 0056530f | g_CKeysInstance
    CALL dword ptr [EDX]                ; 00565311
    ADD ESP,0x8                         ; 00565313
    TEST EAX,EAX                        ; 00565316
    JZ 0x005657bf                       ; 00565318
        ;   XREF to: 005657bf (CONDITIONAL_JUMP)  ; LAB_005657bf
    PUSH 0x0                            ; 0056531e
    PUSH 0xc                            ; 00565320
    PUSH EBP                            ; 00565322
        ;   Label: LAB_00565322
    CALL core_script.cpp_CScript_editorAction_FUN_00564820 ; 00565323
        ;   XREF to: 00564820 (UNCONDITIONAL_CALL)  ; undefined core_script.cpp_CScript_editorAction_FUN_00564820()
    ADD ESP,0xc                         ; 00565328
    PUSH 0x52                           ; 0056532b
        ;   Label: LAB_0056532b
    MOV EAX,[0x0067cf44]                ; 0056532d | g_CKeysPtr
    PUSH EAX                            ; 00565332 | g_CKeysInstance
    MOV EDX,dword ptr [EAX]             ; 00565333 | g_CKeysInstance
    CALL dword ptr [EDX + 0x4]          ; 00565335
    ADD ESP,0x8                         ; 00565338
    TEST EAX,EAX                        ; 0056533b
    JZ 0x00565363                       ; 0056533d
        ;   XREF to: 00565363 (CONDITIONAL_JUMP)  ; LAB_00565363
    PUSH 0x1d                           ; 0056533f
    MOV EAX,[0x0067cf44]                ; 00565341 | g_CKeysPtr
    PUSH EAX                            ; 00565346 | g_CKeysInstance
    MOV EDX,dword ptr [EAX]             ; 00565347 | g_CKeysInstance
    CALL dword ptr [EDX]                ; 00565349
    ADD ESP,0x8                         ; 0056534b
    TEST EAX,EAX                        ; 0056534e
    JZ 0x005657d0                       ; 00565350
        ;   XREF to: 005657d0 (CONDITIONAL_JUMP)  ; LAB_005657d0
    PUSH 0x0                            ; 00565356
    PUSH 0xd                            ; 00565358
    PUSH EBP                            ; 0056535a
    CALL core_script.cpp_CScript_editorAction_FUN_00564820 ; 0056535b
        ;   XREF to: 00564820 (UNCONDITIONAL_CALL)  ; undefined core_script.cpp_CScript_editorAction_FUN_00564820()
        ;   Label: LAB_0056535b
    ADD ESP,0xc                         ; 00565360
    PUSH 0x1d                           ; 00565363
        ;   Label: LAB_00565363
    MOV EAX,[0x0067cf44]                ; 00565365 | g_CKeysPtr
    PUSH EAX                            ; 0056536a | g_CKeysInstance
    MOV EDX,dword ptr [EAX]             ; 0056536b | g_CKeysInstance
    CALL dword ptr [EDX]                ; 0056536d
    ADD ESP,0x8                         ; 0056536f
    TEST EAX,EAX                        ; 00565372
    JZ 0x005653ec                       ; 00565374
        ;   XREF to: 005653ec (CONDITIONAL_JUMP)  ; LAB_005653ec
    PUSH 0x2d                           ; 0056537a
    MOV EAX,[0x0067cf44]                ; 0056537c | g_CKeysPtr
    PUSH EAX                            ; 00565381 | g_CKeysInstance
    MOV EDX,dword ptr [EAX]             ; 00565382 | g_CKeysInstance
    CALL dword ptr [EDX + 0x4]          ; 00565384
    ADD ESP,0x8                         ; 00565387
    TEST EAX,EAX                        ; 0056538a
    JZ 0x005653a0                       ; 0056538c
        ;   XREF to: 005653a0 (CONDITIONAL_JUMP)  ; LAB_005653a0
    PUSH 0x0                            ; 0056538e
    PUSH 0xc                            ; 00565390
    PUSH EBP                            ; 00565392
    CALL core_script.cpp_CScript_editorAction_FUN_00564820 ; 00565393
        ;   XREF to: 00564820 (UNCONDITIONAL_CALL)  ; undefined core_script.cpp_CScript_editorAction_FUN_00564820()
    ADD ESP,0xc                         ; 00565398
    CALL wincore_winrun.cpp_clearKeypresses_FUN_005f2e70 ; 0056539b
        ;   XREF to: 005f2e70 (UNCONDITIONAL_CALL)  ; void wincore_winrun.cpp_clearKeypresses_FUN_005f2e70()
    PUSH 0x2e                           ; 005653a0
        ;   Label: LAB_005653a0
    MOV EAX,[0x0067cf44]                ; 005653a2 | g_CKeysPtr
    PUSH EAX                            ; 005653a7 | g_CKeysInstance
    MOV EDX,dword ptr [EAX]             ; 005653a8 | g_CKeysInstance
    CALL dword ptr [EDX + 0x4]          ; 005653aa
    ADD ESP,0x8                         ; 005653ad
    TEST EAX,EAX                        ; 005653b0
    JZ 0x005653c6                       ; 005653b2
        ;   XREF to: 005653c6 (CONDITIONAL_JUMP)  ; LAB_005653c6
    PUSH 0x0                            ; 005653b4
    PUSH 0xd                            ; 005653b6
    PUSH EBP                            ; 005653b8
    CALL core_script.cpp_CScript_editorAction_FUN_00564820 ; 005653b9
        ;   XREF to: 00564820 (UNCONDITIONAL_CALL)  ; undefined core_script.cpp_CScript_editorAction_FUN_00564820()
    ADD ESP,0xc                         ; 005653be
    CALL wincore_winrun.cpp_clearKeypresses_FUN_005f2e70 ; 005653c1
        ;   XREF to: 005f2e70 (UNCONDITIONAL_CALL)  ; void wincore_winrun.cpp_clearKeypresses_FUN_005f2e70()
    PUSH 0x2f                           ; 005653c6
        ;   Label: LAB_005653c6
    MOV EAX,[0x0067cf44]                ; 005653c8 | g_CKeysPtr
    PUSH EAX                            ; 005653cd | g_CKeysInstance
    MOV EDX,dword ptr [EAX]             ; 005653ce | g_CKeysInstance
    CALL dword ptr [EDX + 0x4]          ; 005653d0
    ADD ESP,0x8                         ; 005653d3
    TEST EAX,EAX                        ; 005653d6
    JZ 0x005653ec                       ; 005653d8
        ;   XREF to: 005653ec (CONDITIONAL_JUMP)  ; LAB_005653ec
    PUSH 0x0                            ; 005653da
    PUSH 0xe                            ; 005653dc
    PUSH EBP                            ; 005653de
    CALL core_script.cpp_CScript_editorAction_FUN_00564820 ; 005653df
        ;   XREF to: 00564820 (UNCONDITIONAL_CALL)  ; undefined core_script.cpp_CScript_editorAction_FUN_00564820()
    ADD ESP,0xc                         ; 005653e4
    CALL wincore_winrun.cpp_clearKeypresses_FUN_005f2e70 ; 005653e7
        ;   XREF to: 005f2e70 (UNCONDITIONAL_CALL)  ; void wincore_winrun.cpp_clearKeypresses_FUN_005f2e70()
    PUSH 0x1d                           ; 005653ec
        ;   Label: LAB_005653ec
    MOV EAX,[0x0067cf44]                ; 005653ee | g_CKeysPtr
    PUSH EAX                            ; 005653f3 | g_CKeysInstance
    MOV EDX,dword ptr [EAX]             ; 005653f4 | g_CKeysInstance
    CALL dword ptr [EDX]                ; 005653f6
    ADD ESP,0x8                         ; 005653f8
    TEST EAX,EAX                        ; 005653fb
    JZ 0x00565469                       ; 005653fd
        ;   XREF to: 00565469 (CONDITIONAL_JUMP)  ; LAB_00565469
    PUSH 0x22                           ; 005653ff
    MOV EAX,[0x0067cf44]                ; 00565401 | g_CKeysPtr
    PUSH EAX                            ; 00565406 | g_CKeysInstance
    MOV EDX,dword ptr [EAX]             ; 00565407 | g_CKeysInstance
    CALL dword ptr [EDX + 0x4]          ; 00565409
    ADD ESP,0x8                         ; 0056540c
    TEST EAX,EAX                        ; 0056540f
    JZ 0x00565469                       ; 00565411
        ;   XREF to: 00565469 (CONDITIONAL_JUMP)  ; LAB_00565469
    MOV EAX,[0x0310fd48]                ; 00565413 | DAT_0310fd48
    INC EAX                             ; 00565418
    PUSH 0x1                            ; 00565419
    MOV dword ptr [ESP + 0xc],EAX       ; 0056541b
    LEA EAX,[EBP + 0x38]                ; 0056541f
    PUSH EAX                            ; 00565422
    CALL shape_edittool.cpp_getFontBitmapCount_FUN_004a6ed0 ; 00565423
        ;   XREF to: 004a6ed0 (UNCONDITIONAL_CALL)  ; int shape_edittool.cpp_getFontBitmapCount_FUN_004a6ed0(CBitFont * font_ptr)
    ADD ESP,0x4                         ; 00565428
    INC EAX                             ; 0056542b
    PUSH EAX                            ; 0056542c
    PUSH 0x1                            ; 0056542d
    PUSH 0x1                            ; 0056542f
    LEA EAX,[ESP + 0x18]                ; 00565431
    PUSH EAX                            ; 00565435
    PUSH 0x643e4f                       ; 00565436 | = "Enter line number"
    MOV EDI,dword ptr [0x00678a60]      ; 0056543b | g_CEditorToolsPtr
    PUSH EDI                            ; 00565441 | g_CEditorToolsInstance
    CALL shape_edittool.cpp_CEditorTools_promptForValidInteger_FUN_004a0020 ; 00565442
        ;   XREF to: 004a0020 (UNCONDITIONAL_CALL)  ; int shape_edittool.cpp_CEditorTools_promptForValidInteger_FUN_004a0020(CEditorTools * this_ptr, char * prompt_text, int * result_ptr, int enable_range_check, ...)
    ADD ESP,0x1c                        ; 00565447
    TEST EAX,EAX                        ; 0056544a
    JZ 0x00565464                       ; 0056544c
        ;   XREF to: 00565464 (CONDITIONAL_JUMP)  ; LAB_00565464
    MOV EAX,dword ptr [ESP + 0x8]       ; 0056544e
    DEC EAX                             ; 00565452
    MOV [0x0310fd48],EAX                ; 00565453 | DAT_0310fd48
    XOR EAX,EAX                         ; 00565458
    MOV ESI,0x1                         ; 0056545a
    MOV [0x0310fd44],EAX                ; 0056545f | DAT_0310fd44
    CALL engine_2d.c_clearInputAndWait_FUN_00403260 ; 00565464
        ;   XREF to: 00403260 (UNCONDITIONAL_CALL)  ; void engine_2d.c_clearInputAndWait_FUN_00403260()
        ;   Label: LAB_00565464
    PUSH 0x1d                           ; 00565469
        ;   Label: LAB_00565469
    MOV EAX,[0x0067cf44]                ; 0056546b | g_CKeysPtr
    PUSH EAX                            ; 00565470 | g_CKeysInstance
    MOV EDX,dword ptr [EAX]             ; 00565471 | g_CKeysInstance
    CALL dword ptr [EDX]                ; 00565473
    ADD ESP,0x8                         ; 00565475
    TEST EAX,EAX                        ; 00565478
    JZ 0x0056554e                       ; 0056547a
        ;   XREF to: 0056554e (CONDITIONAL_JUMP)  ; LAB_0056554e
    PUSH 0x21                           ; 00565480
    MOV EAX,[0x0067cf44]                ; 00565482 | g_CKeysPtr
    PUSH EAX                            ; 00565487 | g_CKeysInstance
    MOV EDX,dword ptr [EAX]             ; 00565488 | g_CKeysInstance
    CALL dword ptr [EDX + 0x4]          ; 0056548a
    ADD ESP,0x8                         ; 0056548d
    TEST EAX,EAX                        ; 00565490
    JZ 0x0056554e                       ; 00565492
        ;   XREF to: 0056554e (CONDITIONAL_JUMP)  ; LAB_0056554e
    PUSH 0x2a                           ; 00565498
    MOV EAX,[0x0067cf44]                ; 0056549a | g_CKeysPtr
    PUSH EAX                            ; 0056549f | g_CKeysInstance
    MOV EDX,dword ptr [EAX]             ; 005654a0 | g_CKeysInstance
    MOV EBX,0x1                         ; 005654a2
    CALL dword ptr [EDX]                ; 005654a7
    ADD ESP,0x8                         ; 005654a9
    TEST EAX,EAX                        ; 005654ac
    JZ 0x005654b5                       ; 005654ae
        ;   XREF to: 005654b5 (CONDITIONAL_JUMP)  ; LAB_005654b5
    MOV EBX,0xffffffff                  ; 005654b0
    PUSH 0x1                            ; 005654b5
        ;   Label: LAB_005654b5
    PUSH 0x64                           ; 005654b7
    PUSH 0x310fd58                      ; 005654b9 | DAT_0310fd58
    PUSH 0x643e61                       ; 005654be | = "Find"
    MOV EDX,dword ptr [0x00678a60]      ; 005654c3 | g_CEditorToolsInstance | g_CEditorToolsPtr
    PUSH EDX                            ; 005654c9 | g_CEditorToolsInstance
    CALL shape_edittool.cpp_CEditorTools_showTextInputDialog_FUN_004a03d0 ; 005654ca
        ;   XREF to: 004a03d0 (UNCONDITIONAL_CALL)  ; int shape_edittool.cpp_CEditorTools_showTextInputDialog_FUN_004a03d0(CEditorTools * this_ptr, char * prompt_text, char * input_buffer, int buffer_size, ...)
    ADD ESP,0x14                        ; 005654cf
    TEST EAX,EAX                        ; 005654d2
    JZ 0x0056554e                       ; 005654d4
        ;   XREF to: 0056554e (CONDITIONAL_JUMP)  ; LAB_0056554e
    PUSH EBX                            ; 005654d6
    LEA EAX,[ESP + 0x8]                 ; 005654d7
    PUSH EAX                            ; 005654db
    LEA EAX,[ESP + 0x8]                 ; 005654dc
    PUSH EAX                            ; 005654e0
    LEA EAX,[ESP + 0x18]                ; 005654e1
    PUSH EAX                            ; 005654e5
    MOV ECX,dword ptr [0x0310fd48]      ; 005654e6 | DAT_0310fd48
    PUSH ECX                            ; 005654ec
    MOV EBX,dword ptr [0x0310fd44]      ; 005654ed | DAT_0310fd44
    PUSH EBX                            ; 005654f3
    PUSH 0x310fd58                      ; 005654f4 | DAT_0310fd58
    PUSH EBP                            ; 005654f9
    CALL core_script.cpp_FUN_00566cc0   ; 005654fa
        ;   XREF to: 00566cc0 (UNCONDITIONAL_CALL)  ; undefined core_script.cpp_FUN_00566cc0()
    ADD ESP,0x20                        ; 005654ff
    TEST EAX,EAX                        ; 00565502
    JZ 0x0056580b                       ; 00565504
        ;   XREF to: 0056580b (CONDITIONAL_JUMP)  ; LAB_0056580b
    PUSH 0x310fd58                      ; 0056550a | DAT_0310fd58
    PUSH 0x643e66                       ; 0056550f | = "Found %s"
    PUSH 0x310fdc0                      ; 00565514 | DAT_0310fdc0
    CALL crt_stdio.c_sprintf_FUN_005fdbd0 ; 00565519
        ;   XREF to: 005fdbd0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_sprintf_FUN_005fdbd0(char * buffer, char * format)
    ADD ESP,0xc                         ; 0056551e
    MOV EAX,dword ptr [ESP]             ; 00565521
    MOV [0x0310fd48],EAX                ; 00565524 | DAT_0310fd48
    MOV EAX,dword ptr [ESP + 0xc]       ; 00565529
    MOV EDI,0x1                         ; 0056552d
    MOV [0x0310fd44],EAX                ; 00565532 | DAT_0310fd44
    MOV EAX,dword ptr [ESP + 0x4]       ; 00565537
    XOR ESI,ESI                         ; 0056553b
    MOV [0x0310fd4c],EAX                ; 0056553d | DAT_0310fd4c
    MOV EAX,dword ptr [ESP]             ; 00565542
    MOV dword ptr [ESP + 0x24],EDI      ; 00565545
    MOV [0x0310fd50],EAX                ; 00565549 | DAT_0310fd50
    PUSH 0x3d                           ; 0056554e
        ;   Label: LAB_0056554e
    MOV EAX,[0x0067cf44]                ; 00565550 | g_CKeysPtr
    PUSH EAX                            ; 00565555 | g_CKeysInstance
    MOV EDX,dword ptr [EAX]             ; 00565556 | g_CKeysInstance
    CALL dword ptr [EDX + 0x4]          ; 00565558
    ADD ESP,0x8                         ; 0056555b
    TEST EAX,EAX                        ; 0056555e
    JZ 0x0056562d                       ; 00565560
        ;   XREF to: 0056562d (CONDITIONAL_JUMP)  ; LAB_0056562d
    PUSH 0x2a                           ; 00565566
    MOV EAX,[0x0067cf44]                ; 00565568 | g_CKeysPtr
    PUSH EAX                            ; 0056556d | g_CKeysInstance
    MOV EDX,dword ptr [EAX]             ; 0056556e | g_CKeysInstance
    MOV EBX,0x1                         ; 00565570
    CALL dword ptr [EDX]                ; 00565575
    ADD ESP,0x8                         ; 00565577
    TEST EAX,EAX                        ; 0056557a
    JZ 0x00565583                       ; 0056557c
        ;   XREF to: 00565583 (CONDITIONAL_JUMP)  ; LAB_00565583
    MOV EBX,0xffffffff                  ; 0056557e
    CMP byte ptr [0x0310fd58],0x0       ; 00565583 | DAT_0310fd58
        ;   Label: LAB_00565583
    JNZ 0x005655a8                      ; 0056558a
        ;   XREF to: 005655a8 (CONDITIONAL_JUMP)  ; LAB_005655a8
    PUSH 0x1                            ; 0056558c
    PUSH 0x64                           ; 0056558e
    PUSH 0x310fd58                      ; 00565590 | DAT_0310fd58
    PUSH 0x643e7d                       ; 00565595 | = "Find"
    MOV EAX,[0x00678a60]                ; 0056559a | g_CEditorToolsInstance | g_CEditorToolsPtr
    PUSH EAX                            ; 0056559f | g_CEditorToolsInstance
    CALL shape_edittool.cpp_CEditorTools_showTextInputDialog_FUN_004a03d0 ; 005655a0
        ;   XREF to: 004a03d0 (UNCONDITIONAL_CALL)  ; int shape_edittool.cpp_CEditorTools_showTextInputDialog_FUN_004a03d0(CEditorTools * this_ptr, char * prompt_text, char * input_buffer, int buffer_size, ...)
    ADD ESP,0x14                        ; 005655a5
    CMP byte ptr [0x0310fd58],0x0       ; 005655a8 | DAT_0310fd58
        ;   Label: LAB_005655a8
    JZ 0x0056562d                       ; 005655af
        ;   XREF to: 0056562d (CONDITIONAL_JUMP)  ; LAB_0056562d
    PUSH EBX                            ; 005655b1
    LEA EAX,[ESP + 0x1c]                ; 005655b2
    PUSH EAX                            ; 005655b6
    LEA EAX,[ESP + 0x1c]                ; 005655b7
    PUSH EAX                            ; 005655bb
    LEA EAX,[ESP + 0x1c]                ; 005655bc
    PUSH EAX                            ; 005655c0
    MOV EDX,dword ptr [0x0310fd48]      ; 005655c1 | DAT_0310fd48
    MOV ECX,dword ptr [0x0310fd44]      ; 005655c7 | DAT_0310fd44
    PUSH EDX                            ; 005655cd
    ADD EBX,ECX                         ; 005655ce
    PUSH EBX                            ; 005655d0
    PUSH 0x310fd58                      ; 005655d1 | DAT_0310fd58
    PUSH EBP                            ; 005655d6
    CALL core_script.cpp_FUN_00566cc0   ; 005655d7
        ;   XREF to: 00566cc0 (UNCONDITIONAL_CALL)  ; undefined core_script.cpp_FUN_00566cc0()
    ADD ESP,0x20                        ; 005655dc
    TEST EAX,EAX                        ; 005655df
    JZ 0x00565827                       ; 005655e1
        ;   XREF to: 00565827 (CONDITIONAL_JUMP)  ; LAB_00565827
    PUSH 0x310fd58                      ; 005655e7 | DAT_0310fd58
    PUSH 0x643e82                       ; 005655ec | = "Found %s"
    PUSH 0x310fdc0                      ; 005655f1 | DAT_0310fdc0
    CALL crt_stdio.c_sprintf_FUN_005fdbd0 ; 005655f6
        ;   XREF to: 005fdbd0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_sprintf_FUN_005fdbd0(char * buffer, char * format)
    ADD ESP,0xc                         ; 005655fb
    MOV EAX,dword ptr [ESP + 0x14]      ; 005655fe
    MOV [0x0310fd48],EAX                ; 00565602 | DAT_0310fd48
    MOV EAX,dword ptr [ESP + 0x10]      ; 00565607
    MOV EBX,0x1                         ; 0056560b
    MOV [0x0310fd44],EAX                ; 00565610 | DAT_0310fd44
    MOV EAX,dword ptr [ESP + 0x18]      ; 00565615
    XOR ESI,ESI                         ; 00565619
    MOV [0x0310fd4c],EAX                ; 0056561b | DAT_0310fd4c
    MOV EAX,dword ptr [ESP + 0x14]      ; 00565620
    MOV dword ptr [ESP + 0x24],EBX      ; 00565624
    MOV [0x0310fd50],EAX                ; 00565628 | DAT_0310fd50
    PUSH 0x3e                           ; 0056562d
        ;   Label: LAB_0056562d
    MOV EAX,[0x0067cf44]                ; 0056562f | g_CKeysPtr
    PUSH EAX                            ; 00565634 | g_CKeysInstance
    MOV EDX,dword ptr [EAX]             ; 00565635 | g_CKeysInstance
    CALL dword ptr [EDX + 0x4]          ; 00565637
    ADD ESP,0x8                         ; 0056563a
    TEST EAX,EAX                        ; 0056563d
    JZ 0x0056565d                       ; 0056563f
        ;   XREF to: 0056565d (CONDITIONAL_JUMP)  ; LAB_0056565d
    MOV ESI,dword ptr [0x0310fd48]      ; 00565641 | DAT_0310fd48
    PUSH ESI                            ; 00565647
    MOV EDI,dword ptr [0x0310fd44]      ; 00565648 | DAT_0310fd44
    PUSH EDI                            ; 0056564e
    PUSH EBP                            ; 0056564f
    MOV ESI,0x1                         ; 00565650
    CALL core_script.cpp_FUN_00565ae0   ; 00565655
        ;   XREF to: 00565ae0 (UNCONDITIONAL_CALL)  ; undefined core_script.cpp_FUN_00565ae0()
    ADD ESP,0xc                         ; 0056565a
    PUSH 0x40                           ; 0056565d
        ;   Label: LAB_0056565d
    MOV EAX,[0x0067cf44]                ; 0056565f | g_CKeysPtr
    PUSH EAX                            ; 00565664 | g_CKeysInstance
    MOV EDX,dword ptr [EAX]             ; 00565665 | g_CKeysInstance
    CALL dword ptr [EDX + 0x4]          ; 00565667
    ADD ESP,0x8                         ; 0056566a
    TEST EAX,EAX                        ; 0056566d
    JZ 0x0056568c                       ; 0056566f
        ;   XREF to: 0056568c (CONDITIONAL_JUMP)  ; LAB_0056568c
    MOV EAX,[0x0310fd48]                ; 00565671 | DAT_0310fd48
    PUSH EAX                            ; 00565676
    MOV EDX,dword ptr [0x0310fd44]      ; 00565677 | DAT_0310fd44
    PUSH EDX                            ; 0056567d
    PUSH EBP                            ; 0056567e
    MOV ESI,0x1                         ; 0056567f
    CALL core_script.cpp_FUN_00565d00   ; 00565684
        ;   XREF to: 00565d00 (UNCONDITIONAL_CALL)  ; undefined core_script.cpp_FUN_00565d00()
    ADD ESP,0xc                         ; 00565689
    PUSH 0x3b                           ; 0056568c
        ;   Label: LAB_0056568c
    MOV EAX,[0x0067cf44]                ; 0056568e | g_CKeysPtr
    PUSH EAX                            ; 00565693 | g_CKeysInstance
    MOV EDX,dword ptr [EAX]             ; 00565694 | g_CKeysInstance
    CALL dword ptr [EDX + 0x4]          ; 00565696
    ADD ESP,0x8                         ; 00565699
    TEST EAX,EAX                        ; 0056569c
    JZ 0x005656b7                       ; 0056569e
        ;   XREF to: 005656b7 (CONDITIONAL_JUMP)  ; LAB_005656b7
    MOV ECX,dword ptr [0x0310fd48]      ; 005656a0 | DAT_0310fd48
    PUSH ECX                            ; 005656a6
    MOV EBX,dword ptr [0x0310fd44]      ; 005656a7 | DAT_0310fd44
    PUSH EBX                            ; 005656ad
    PUSH EBP                            ; 005656ae
    CALL core_script.cpp_FUN_00565e70   ; 005656af
        ;   XREF to: 00565e70 (UNCONDITIONAL_CALL)  ; undefined core_script.cpp_FUN_00565e70()
    ADD ESP,0xc                         ; 005656b4
    MOV EDI,dword ptr [0x02cf2b00]      ; 005656b7 | g_ActiveButton
        ;   Label: LAB_005656b7
    CMP EBP,EDI                         ; 005656bd
    JNZ 0x0056584f                      ; 005656bf
        ;   XREF to: 0056584f (CONDITIONAL_JUMP)  ; LAB_0056584f
    TEST byte ptr [0x02cf6a94],0x1      ; 005656c5 | g_MouseButtonFlags
    JZ 0x00565843                       ; 005656cc
        ;   XREF to: 00565843 (CONDITIONAL_JUMP)  ; LAB_00565843
    PUSH 0x310fd48                      ; 005656d2 | DAT_0310fd48
    PUSH 0x310fd44                      ; 005656d7 | DAT_0310fd44
    MOV EDX,dword ptr [0x02cf6a90]      ; 005656dc | g_MouseY
    PUSH EDX                            ; 005656e2
    MOV ECX,dword ptr [0x02cf6a8c]      ; 005656e3 | g_MouseX
    PUSH ECX                            ; 005656e9
    PUSH EDI                            ; 005656ea
    CALL core_script.cpp_FUN_00566c20   ; 005656eb
        ;   XREF to: 00566c20 (UNCONDITIONAL_CALL)  ; undefined core_script.cpp_FUN_00566c20()
    MOV EAX,[0x02cf6a8c]                ; 005656f0 | g_MouseX
    MOV EBX,dword ptr [0x031141e0]      ; 005656f5 | DAT_031141e0
    ADD ESP,0x14                        ; 005656fb
    CMP EAX,EBX                         ; 005656fe
    JG 0x0056570f                       ; 00565700
        ;   XREF to: 0056570f (CONDITIONAL_JUMP)  ; LAB_0056570f
    PUSH 0x0                            ; 00565702
    PUSH 0x0                            ; 00565704
    PUSH EDI                            ; 00565706
    CALL core_script.cpp_CScript_editorAction_FUN_00564820 ; 00565707
        ;   XREF to: 00564820 (UNCONDITIONAL_CALL)  ; undefined core_script.cpp_CScript_editorAction_FUN_00564820()
    ADD ESP,0xc                         ; 0056570c
    MOV EDI,dword ptr [0x031141e8]      ; 0056570f | DAT_031141e8
        ;   Label: LAB_0056570f
    CMP EDI,dword ptr [0x02cf6a8c]      ; 00565715 | g_MouseX
    JG 0x0056572a                       ; 0056571b
        ;   XREF to: 0056572a (CONDITIONAL_JUMP)  ; LAB_0056572a
    PUSH 0x0                            ; 0056571d
    PUSH 0x1                            ; 0056571f
    PUSH EBP                            ; 00565721
    CALL core_script.cpp_CScript_editorAction_FUN_00564820 ; 00565722
        ;   XREF to: 00564820 (UNCONDITIONAL_CALL)  ; undefined core_script.cpp_CScript_editorAction_FUN_00564820()
    ADD ESP,0xc                         ; 00565727
    MOV EDX,dword ptr [0x031141e4]      ; 0056572a | DAT_031141e4
        ;   Label: LAB_0056572a
    CMP EDX,dword ptr [0x02cf6a90]      ; 00565730 | g_MouseY
    JL 0x00565745                       ; 00565736
        ;   XREF to: 00565745 (CONDITIONAL_JUMP)  ; LAB_00565745
    PUSH 0x0                            ; 00565738
    PUSH 0x2                            ; 0056573a
    PUSH EBP                            ; 0056573c
    CALL core_script.cpp_CScript_editorAction_FUN_00564820 ; 0056573d
        ;   XREF to: 00564820 (UNCONDITIONAL_CALL)  ; undefined core_script.cpp_CScript_editorAction_FUN_00564820()
    ADD ESP,0xc                         ; 00565742
    MOV ECX,dword ptr [0x031141ec]      ; 00565745 | DAT_031141ec
        ;   Label: LAB_00565745
    CMP ECX,dword ptr [0x02cf6a90]      ; 0056574b | g_MouseY
    JG 0x00565760                       ; 00565751
        ;   XREF to: 00565760 (CONDITIONAL_JUMP)  ; LAB_00565760
    PUSH 0x0                            ; 00565753
    PUSH 0x3                            ; 00565755
    PUSH EBP                            ; 00565757
    CALL core_script.cpp_CScript_editorAction_FUN_00564820 ; 00565758
        ;   XREF to: 00564820 (UNCONDITIONAL_CALL)  ; undefined core_script.cpp_CScript_editorAction_FUN_00564820()
    ADD ESP,0xc                         ; 0056575d
    MOV dword ptr [ESP + 0x24],0x1      ; 00565760
        ;   Label: LAB_00565760
    PUSH EBP                            ; 00565768
        ;   Label: LAB_00565768
    CALL core_script.cpp_CScript_CallingScriptEditorX2_2_FUN_00566910 ; 00565769
        ;   XREF to: 00566910 (UNCONDITIONAL_CALL)  ; undefined core_script.cpp_CScript_CallingScriptEditorX2_2_FUN_00566910()
    ADD ESP,0x4                         ; 0056576e
    CALL wincore_winrun.cpp_wasKeyPressed_FUN_005f2f00 ; 00565771
        ;   XREF to: 005f2f00 (UNCONDITIONAL_CALL)  ; int wincore_winrun.cpp_wasKeyPressed_FUN_005f2f00()
        ;   Label: LAB_00565771
    TEST EAX,EAX                        ; 00565776
    JZ 0x00565a16                       ; 00565778
        ;   XREF to: 00565a16 (CONDITIONAL_JUMP)  ; LAB_00565a16
    XOR EBX,EBX                         ; 0056577e
    CALL wincore_winrun.cpp_getNextKeypress_FUN_005f2e90 ; 00565780
        ;   XREF to: 005f2e90 (UNCONDITIONAL_CALL)  ; int wincore_winrun.cpp_getNextKeypress_FUN_005f2e90()
    MOV BL,AL                           ; 00565785
    CMP EBX,0xd                         ; 00565787
    JNZ 0x0056591c                      ; 0056578a
        ;   XREF to: 0056591c (CONDITIONAL_JUMP)  ; LAB_0056591c
    PUSH 0x0                            ; 00565790
    PUSH 0x12                           ; 00565792
    PUSH EBP                            ; 00565794
    CALL core_script.cpp_CScript_editorAction_FUN_00564820 ; 00565795
        ;   XREF to: 00564820 (UNCONDITIONAL_CALL)  ; undefined core_script.cpp_CScript_editorAction_FUN_00564820()
    ADD ESP,0xc                         ; 0056579a
    JMP 0x00565771                      ; 0056579d
        ;   XREF to: 00565771 (UNCONDITIONAL_JUMP)  ; LAB_00565771
    PUSH ESI                            ; 0056579f
        ;   Label: LAB_0056579f
    PUSH ESI                            ; 005657a0
    PUSH EBP                            ; 005657a1
    CALL core_script.cpp_CScript_editorAction_FUN_00564820 ; 005657a2
        ;   XREF to: 00564820 (UNCONDITIONAL_CALL)  ; undefined core_script.cpp_CScript_editorAction_FUN_00564820()
    ADD ESP,0xc                         ; 005657a7
    JMP 0x005651cb                      ; 005657aa
        ;   XREF to: 005651cb (UNCONDITIONAL_JUMP)  ; LAB_005651cb
    PUSH EAX                            ; 005657af
        ;   Label: LAB_005657af
    PUSH 0x6                            ; 005657b0
    JMP 0x0056525d                      ; 005657b2
        ;   XREF to: 0056525d (UNCONDITIONAL_JUMP)  ; LAB_0056525d
    PUSH EAX                            ; 005657b7
        ;   Label: LAB_005657b7
    PUSH 0x7                            ; 005657b8
    JMP 0x00565295                      ; 005657ba
        ;   XREF to: 00565295 (UNCONDITIONAL_JUMP)  ; LAB_00565295
    PUSH EAX                            ; 005657bf
        ;   Label: LAB_005657bf
    PUSH 0xf                            ; 005657c0
    JMP 0x00565322                      ; 005657c2
        ;   XREF to: 00565322 (UNCONDITIONAL_JUMP)  ; LAB_00565322
    PUSH 0x0                            ; 005657c7
        ;   Label: LAB_005657c7
    PUSH 0x11                           ; 005657c9
    JMP 0x00565322                      ; 005657cb
        ;   XREF to: 00565322 (UNCONDITIONAL_JUMP)  ; LAB_00565322
    PUSH 0x2a                           ; 005657d0
        ;   Label: LAB_005657d0
    MOV EAX,[0x0067cf44]                ; 005657d2 | g_CKeysPtr
    PUSH EAX                            ; 005657d7 | g_CKeysInstance
    MOV EDX,dword ptr [EAX]             ; 005657d8 | g_CKeysInstance
    CALL dword ptr [EDX]                ; 005657da
    ADD ESP,0x8                         ; 005657dc
    TEST EAX,EAX                        ; 005657df
    JZ 0x005657f2                       ; 005657e1
        ;   XREF to: 005657f2 (CONDITIONAL_JUMP)  ; LAB_005657f2
    PUSH 0x0                            ; 005657e3
    PUSH 0xe                            ; 005657e5
    PUSH EBP                            ; 005657e7
    MOV ESI,0x1                         ; 005657e8
    JMP 0x0056535b                      ; 005657ed
        ;   XREF to: 0056535b (UNCONDITIONAL_JUMP)  ; LAB_0056535b
    CMP dword ptr [0x0068105c],0x0      ; 005657f2 | DAT_0068105c
        ;   Label: LAB_005657f2
    SETZ AL                             ; 005657f9
    AND EAX,0xff                        ; 005657fc
    MOV [0x0068105c],EAX                ; 00565801 | DAT_0068105c
    JMP 0x00565363                      ; 00565806
        ;   XREF to: 00565363 (UNCONDITIONAL_JUMP)  ; LAB_00565363
    PUSH 0x310fd58                      ; 0056580b | DAT_0310fd58
        ;   Label: LAB_0056580b
    PUSH 0x643e6f                       ; 00565810 | = "Can't find %s"
    PUSH 0x310fdc0                      ; 00565815 | DAT_0310fdc0
    CALL crt_stdio.c_sprintf_FUN_005fdbd0 ; 0056581a
        ;   XREF to: 005fdbd0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_sprintf_FUN_005fdbd0(char * buffer, char * format)
    ADD ESP,0xc                         ; 0056581f
    JMP 0x0056554e                      ; 00565822
        ;   XREF to: 0056554e (UNCONDITIONAL_JUMP)  ; LAB_0056554e
    PUSH 0x310fd58                      ; 00565827 | DAT_0310fd58
        ;   Label: LAB_00565827
    PUSH 0x643e8b                       ; 0056582c | = "Can't find %s"
    PUSH 0x310fdc0                      ; 00565831 | DAT_0310fdc0
    CALL crt_stdio.c_sprintf_FUN_005fdbd0 ; 00565836
        ;   XREF to: 005fdbd0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_sprintf_FUN_005fdbd0(char * buffer, char * format)
    ADD ESP,0xc                         ; 0056583b
    JMP 0x0056562d                      ; 0056583e
        ;   XREF to: 0056562d (UNCONDITIONAL_JUMP)  ; LAB_0056562d
    XOR EAX,EAX                         ; 00565843
        ;   Label: LAB_00565843
    MOV [0x02cf2b00],EAX                ; 00565845 | g_ActiveButton
    JMP 0x00565768                      ; 0056584a
        ;   XREF to: 00565768 (UNCONDITIONAL_JUMP)  ; LAB_00565768
    TEST EDI,EDI                        ; 0056584f
        ;   Label: LAB_0056584f
    JNZ 0x00565768                      ; 00565851
        ;   XREF to: 00565768 (CONDITIONAL_JUMP)  ; LAB_00565768
    MOV DH,byte ptr [0x02cf6a94]        ; 00565857 | g_MouseButtonFlags
    TEST DH,0x1                         ; 0056585d
    JZ 0x005658c9                       ; 00565860
        ;   XREF to: 005658c9 (CONDITIONAL_JUMP)  ; LAB_005658c9
    PUSH 0x310fd48                      ; 00565862 | DAT_0310fd48
    PUSH 0x310fd44                      ; 00565867 | DAT_0310fd44
    MOV EDX,dword ptr [0x02cf6a90]      ; 0056586c | g_MouseY
    PUSH EDX                            ; 00565872
    MOV ECX,dword ptr [0x02cf6a8c]      ; 00565873 | g_MouseX
    PUSH ECX                            ; 00565879
    PUSH EBP                            ; 0056587a
    CALL core_script.cpp_FUN_00566c20   ; 0056587b
        ;   XREF to: 00566c20 (UNCONDITIONAL_CALL)  ; undefined core_script.cpp_FUN_00566c20()
    ADD ESP,0x14                        ; 00565880
    TEST EAX,EAX                        ; 00565883
    JZ 0x005658b7                       ; 00565885
        ;   XREF to: 005658b7 (CONDITIONAL_JUMP)  ; LAB_005658b7
    PUSH 0x38                           ; 00565887
    MOV EAX,[0x0067cf44]                ; 00565889 | g_CKeysPtr
    PUSH EAX                            ; 0056588e | g_CKeysInstance
    MOV EDX,dword ptr [EAX]             ; 0056588f | g_CKeysInstance
    CALL dword ptr [EDX]                ; 00565891
    ADD ESP,0x8                         ; 00565893
    TEST EAX,EAX                        ; 00565896
    JZ 0x005658c1                       ; 00565898
        ;   XREF to: 005658c1 (CONDITIONAL_JUMP)  ; LAB_005658c1
    MOV EBX,dword ptr [0x0310fd48]      ; 0056589a | DAT_0310fd48
    PUSH EBX                            ; 005658a0
    MOV ESI,dword ptr [0x0310fd44]      ; 005658a1 | DAT_0310fd44
    PUSH ESI                            ; 005658a7
    PUSH EBP                            ; 005658a8
    CALL core_script.cpp_FUN_00565ae0   ; 005658a9
        ;   XREF to: 00565ae0 (UNCONDITIONAL_CALL)  ; undefined core_script.cpp_FUN_00565ae0()
    ADD ESP,0xc                         ; 005658ae
    MOV dword ptr [0x02cf6a94],EDI      ; 005658b1 | g_MouseButtonFlags
    MOV ESI,0x1                         ; 005658b7
        ;   Label: LAB_005658b7
    JMP 0x00565768                      ; 005658bc
        ;   XREF to: 00565768 (UNCONDITIONAL_JUMP)  ; LAB_00565768
    MOV dword ptr [0x02cf2b00],EBP      ; 005658c1 | g_ActiveButton
        ;   Label: LAB_005658c1
    JMP 0x005658b7                      ; 005658c7
        ;   XREF to: 005658b7 (UNCONDITIONAL_JUMP)  ; LAB_005658b7
    TEST DH,0x2                         ; 005658c9
        ;   Label: LAB_005658c9
    JZ 0x00565768                       ; 005658cc
        ;   XREF to: 00565768 (CONDITIONAL_JUMP)  ; LAB_00565768
    PUSH 0x310fd48                      ; 005658d2 | DAT_0310fd48
    PUSH 0x310fd44                      ; 005658d7 | DAT_0310fd44
    MOV ECX,dword ptr [0x02cf6a90]      ; 005658dc | g_MouseY
    PUSH ECX                            ; 005658e2
    MOV EBX,dword ptr [0x02cf6a8c]      ; 005658e3 | g_MouseX
    PUSH EBX                            ; 005658e9
    PUSH EBP                            ; 005658ea
    MOV dword ptr [0x02cf6a94],EDI      ; 005658eb | g_MouseButtonFlags
    CALL core_script.cpp_FUN_00566c20   ; 005658f1
        ;   XREF to: 00566c20 (UNCONDITIONAL_CALL)  ; undefined core_script.cpp_FUN_00566c20()
    ADD ESP,0x14                        ; 005658f6
    TEST EAX,EAX                        ; 005658f9
    JZ 0x00565768                       ; 005658fb
        ;   XREF to: 00565768 (CONDITIONAL_JUMP)  ; LAB_00565768
    MOV EDI,dword ptr [0x0310fd48]      ; 00565901 | DAT_0310fd48
    PUSH EDI                            ; 00565907
    MOV EAX,[0x0310fd44]                ; 00565908 | DAT_0310fd44
    PUSH EAX                            ; 0056590d
    PUSH EBP                            ; 0056590e
    CALL core_script.cpp_CScript_CalltoScriptEditorX2Index_FUN_00565aa0 ; 0056590f
        ;   XREF to: 00565aa0 (UNCONDITIONAL_CALL)  ; undefined core_script.cpp_CScript_CalltoScriptEditorX2Index_FUN_00565aa0()
    ADD ESP,0xc                         ; 00565914
    JMP 0x00565768                      ; 00565917
        ;   XREF to: 00565768 (UNCONDITIONAL_JUMP)  ; LAB_00565768
    CMP EBX,0x8                         ; 0056591c
        ;   Label: LAB_0056591c
    JNZ 0x00565933                      ; 0056591f
        ;   XREF to: 00565933 (CONDITIONAL_JUMP)  ; LAB_00565933
    PUSH 0x0                            ; 00565921
    PUSH 0x10                           ; 00565923
    PUSH EBP                            ; 00565925
    CALL core_script.cpp_CScript_editorAction_FUN_00564820 ; 00565926
        ;   XREF to: 00564820 (UNCONDITIONAL_CALL)  ; undefined core_script.cpp_CScript_editorAction_FUN_00564820()
    ADD ESP,0xc                         ; 0056592b
    JMP 0x00565771                      ; 0056592e
        ;   XREF to: 00565771 (UNCONDITIONAL_JUMP)  ; LAB_00565771
    INC AL                              ; 00565933
        ;   Label: LAB_00565933
    AND EAX,0xff                        ; 00565935
    TEST byte ptr [EAX + 0x6849c4],0x8  ; 0056593a | g_CharacterClassificationTable
    JZ 0x0056597e                       ; 00565941
        ;   XREF to: 0056597e (CONDITIONAL_JUMP)  ; LAB_0056597e
    PUSH 0x0                            ; 00565943
        ;   Label: LAB_00565943
    PUSH 0xf                            ; 00565945
    PUSH EBP                            ; 00565947
    CALL core_script.cpp_CScript_editorAction_FUN_00564820 ; 00565948
        ;   XREF to: 00564820 (UNCONDITIONAL_CALL)  ; undefined core_script.cpp_CScript_editorAction_FUN_00564820()
    MOV ESI,dword ptr [0x0068105c]      ; 0056594d | DAT_0068105c
    ADD ESP,0xc                         ; 00565953
    TEST ESI,ESI                        ; 00565956
    JZ 0x00565988                       ; 00565958
        ;   XREF to: 00565988 (CONDITIONAL_JUMP)  ; LAB_00565988
    PUSH 0x1                            ; 0056595a
    LEA EAX,[ESP + 0x2c]                ; 0056595c
    PUSH EAX                            ; 00565960
    XOR CH,CH                           ; 00565961
    PUSH EBP                            ; 00565963
    MOV byte ptr [ESP + 0x34],BL        ; 00565964
    MOV byte ptr [ESP + 0x35],CH        ; 00565968
    CALL core_script.cpp_FUN_00566390   ; 0056596c
        ;   XREF to: 00566390 (UNCONDITIONAL_CALL)  ; undefined core_script.cpp_FUN_00566390()
    ADD ESP,0xc                         ; 00565971
    MOV ESI,0x1                         ; 00565974
    JMP 0x00565771                      ; 00565979
        ;   XREF to: 00565771 (UNCONDITIONAL_JUMP)  ; LAB_00565771
    CMP EBX,0x9                         ; 0056597e
        ;   Label: LAB_0056597e
    JZ 0x00565943                       ; 00565981
        ;   XREF to: 00565943 (CONDITIONAL_JUMP)  ; LAB_00565943
    JMP 0x00565771                      ; 00565983
        ;   XREF to: 00565771 (UNCONDITIONAL_JUMP)  ; LAB_00565771
    MOV EDI,dword ptr [0x0310fd48]      ; 00565988 | DAT_0310fd48
        ;   Label: LAB_00565988
    PUSH EDI                            ; 0056598e
    PUSH EBP                            ; 0056598f
    CALL core_script.cpp_FUN_00566230   ; 00565990
        ;   XREF to: 00566230 (UNCONDITIONAL_CALL)  ; undefined core_script.cpp_FUN_00566230()
    ADD ESP,0x8                         ; 00565995
    MOV EDI,0x31101c0                   ; 00565998 | DAT_031101c0
    SUB ECX,ECX                         ; 0056599d
    DEC ECX                             ; 0056599f
    XOR EAX,EAX                         ; 005659a0
    SCASB.REPNE ES:EDI                  ; 005659a2 | DAT_031101c0 | DAT_031101c1
    NOT ECX                             ; 005659a4
    DEC ECX                             ; 005659a6
    MOV EAX,[0x0310fd44]                ; 005659a7 | DAT_0310fd44
    PUSH EAX                            ; 005659ac
    MOV EDX,dword ptr [0x0310fd48]      ; 005659ad | DAT_0310fd48
    PUSH EDX                            ; 005659b3
    PUSH EBP                            ; 005659b4
    MOV EDI,ECX                         ; 005659b5
    MOV ESI,ECX                         ; 005659b7
    CALL core_script.cpp_CScript_editorX2Index_FUN_00566a90 ; 005659b9
        ;   XREF to: 00566a90 (UNCONDITIONAL_CALL)  ; undefined core_script.cpp_CScript_editorX2Index_FUN_00566a90()
    ADD ESP,0xc                         ; 005659be
    CMP EDI,EAX                         ; 005659c1
    JGE 0x005659d2                      ; 005659c3
        ;   XREF to: 005659d2 (CONDITIONAL_JUMP)  ; LAB_005659d2
    MOV DL,0x20                         ; 005659c5
    INC ESI                             ; 005659c7
        ;   Label: LAB_005659c7
    MOV byte ptr [ESI + 0x31101bf],DL   ; 005659c8 | DAT_031101c0 | DAT_031101c1
    CMP ESI,EAX                         ; 005659ce
    JL 0x005659c7                       ; 005659d0
        ;   XREF to: 005659c7 (CONDITIONAL_JUMP)  ; LAB_005659c7
    MOV byte ptr [EAX + 0x31101c0],BL   ; 005659d2 | DAT_031101c0
        ;   Label: LAB_005659d2
    CMP ESI,EAX                         ; 005659d8
    JG 0x005659dd                       ; 005659da
        ;   XREF to: 005659dd (CONDITIONAL_JUMP)  ; LAB_005659dd
    INC ESI                             ; 005659dc
    INC EAX                             ; 005659dd
        ;   Label: LAB_005659dd
    PUSH EAX                            ; 005659de
    MOV ECX,dword ptr [0x0310fd48]      ; 005659df | DAT_0310fd48
    PUSH ECX                            ; 005659e5
    XOR DH,DH                           ; 005659e6
    PUSH EBP                            ; 005659e8
    MOV byte ptr [ESI + 0x31101c0],DH   ; 005659e9 | DAT_031101c1 | DAT_031101c2 | DAT_031101c3
    CALL core_script.cpp_CScript_editorIndex2X_FUN_00566b30 ; 005659ef
        ;   XREF to: 00566b30 (UNCONDITIONAL_CALL)  ; undefined core_script.cpp_CScript_editorIndex2X_FUN_00566b30()
    ADD ESP,0xc                         ; 005659f4
    MOV EBX,dword ptr [0x0310fd48]      ; 005659f7 | DAT_0310fd48
    PUSH EBX                            ; 005659fd
    PUSH EBP                            ; 005659fe
    MOV [0x0310fd44],EAX                ; 005659ff | DAT_0310fd44
    CALL core_script.cpp_CScript_editorPutLine_FUN_005662a0 ; 00565a04
        ;   XREF to: 005662a0 (UNCONDITIONAL_CALL)  ; undefined core_script.cpp_CScript_editorPutLine_FUN_005662a0()
    ADD ESP,0x8                         ; 00565a09
    MOV ESI,0x1                         ; 00565a0c
    JMP 0x00565771                      ; 00565a11
        ;   XREF to: 00565771 (UNCONDITIONAL_JUMP)  ; LAB_00565771
    PUSH EBP                            ; 00565a16
        ;   Label: LAB_00565a16
    CALL core_script.cpp_CScript_Unk18_FUN_005669a0 ; 00565a17
        ;   XREF to: 005669a0 (UNCONDITIONAL_CALL)  ; undefined core_script.cpp_CScript_Unk18_FUN_005669a0()
    ADD ESP,0x4                         ; 00565a1c
    TEST ESI,ESI                        ; 00565a1f
    JNZ 0x00565a62                      ; 00565a21
        ;   XREF to: 00565a62 (CONDITIONAL_JUMP)  ; LAB_00565a62
    MOV EAX,dword ptr [ESP + 0x20]      ; 00565a23
    CMP EAX,dword ptr [0x0310fd44]      ; 00565a27 | DAT_0310fd44
    JZ 0x00565a69                       ; 00565a2d
        ;   XREF to: 00565a69 (CONDITIONAL_JUMP)  ; LAB_00565a69
    CMP dword ptr [ESP + 0x24],0x0      ; 00565a2f
        ;   Label: LAB_00565a2f
    JZ 0x00565a8b                       ; 00565a34
        ;   XREF to: 00565a8b (CONDITIONAL_JUMP)  ; LAB_00565a8b
    CMP dword ptr [0x0310fd4c],0x0      ; 00565a36 | DAT_0310fd4c
    JL 0x00565a77                       ; 00565a3d
        ;   XREF to: 00565a77 (CONDITIONAL_JUMP)  ; LAB_00565a77
    XOR ECX,ECX                         ; 00565a3f
        ;   Label: LAB_00565a3f
    MOV dword ptr [0x0310fd40],ECX      ; 00565a41 | DAT_0310fd40
    MOV ESI,dword ptr [ESP + 0x1c]      ; 00565a47
        ;   Label: LAB_00565a47
    PUSH ESI                            ; 00565a4b
    PUSH EBP                            ; 00565a4c
    CALL core_script.cpp_FUN_00566800   ; 00565a4d
        ;   XREF to: 00566800 (UNCONDITIONAL_CALL)  ; undefined core_script.cpp_FUN_00566800()
    ADD ESP,0x8                         ; 00565a52
    CALL core_script.cpp_FUN_00564500   ; 00565a55
        ;   XREF to: 00564500 (UNCONDITIONAL_CALL)  ; undefined core_script.cpp_FUN_00564500()
    ADD ESP,0x2c                        ; 00565a5a
    POP EBP                             ; 00565a5d
    POP EDI                             ; 00565a5e
    POP ESI                             ; 00565a5f
    POP EBX                             ; 00565a60
    RET                                 ; 00565a61
    CALL core_script.cpp_FUN_005644e0   ; 00565a62
        ;   XREF to: 005644e0 (UNCONDITIONAL_CALL)  ; undefined core_script.cpp_FUN_005644e0()
        ;   Label: LAB_00565a62
    JMP 0x00565a47                      ; 00565a67
        ;   XREF to: 00565a47 (UNCONDITIONAL_JUMP)  ; LAB_00565a47
    MOV EAX,dword ptr [ESP + 0x1c]      ; 00565a69
        ;   Label: LAB_00565a69
    CMP EAX,dword ptr [0x0310fd48]      ; 00565a6d | DAT_0310fd48
    JNZ 0x00565a2f                      ; 00565a73
        ;   XREF to: 00565a2f (CONDITIONAL_JUMP)  ; LAB_00565a2f
    JMP 0x00565a47                      ; 00565a75
        ;   XREF to: 00565a47 (UNCONDITIONAL_JUMP)  ; LAB_00565a47
    MOV EAX,dword ptr [ESP + 0x20]      ; 00565a77
        ;   Label: LAB_00565a77
    MOV [0x0310fd4c],EAX                ; 00565a7b | DAT_0310fd4c
    MOV EAX,dword ptr [ESP + 0x1c]      ; 00565a80
    MOV [0x0310fd50],EAX                ; 00565a84 | DAT_0310fd50
    JMP 0x00565a3f                      ; 00565a89
        ;   XREF to: 00565a3f (UNCONDITIONAL_JUMP)  ; LAB_00565a3f
    CALL core_script.cpp_FUN_005644e0   ; 00565a8b
        ;   XREF to: 005644e0 (UNCONDITIONAL_CALL)  ; undefined core_script.cpp_FUN_005644e0()
        ;   Label: LAB_00565a8b
    JMP 0x00565a3f                      ; 00565a90
        ;   XREF to: 00565a3f (UNCONDITIONAL_JUMP)  ; LAB_00565a3f

