; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void core_dmodel.cpp_CKeyFramedModel_mergeTrianglesToQuads_FUN_0047b1e0(CKeyFramedModel * this_ptr, float angle_threshold_radians)
;
; Parameters:
; CKeyFramedModel * Stack[0x4]:4   this_ptr
; float            Stack[0x8]:4   angle_threshold_radians
; Local Variables:
; undefined4       Stack[-0x118]:4  local_118
; undefined4       Stack[-0x114]:4  local_114
; undefined8       Stack[-0x110]:8  local_110
; undefined8       Stack[-0x108]:8  local_108
; undefined8       Stack[-0x100]:8  local_100
; undefined4       Stack[-0xf8]:4  local_f8
; undefined4       Stack[-0xf4]:4  local_f4
; undefined1       Stack[-0xf0]:1  local_f0
; undefined1       Stack[-0xe4]:1  local_e4
; undefined1       Stack[-0xd8]:1  local_d8
; undefined1       Stack[-0xcc]:1  local_cc
; undefined1       Stack[-0xc0]:1  local_c0
; undefined4       Stack[-0xb4]:4  local_b4
; undefined4       Stack[-0xb0]:4  local_b0
; undefined4       Stack[-0xac]:4  local_ac
; undefined4       Stack[-0xa8]:4  local_a8
; undefined4       Stack[-0xa4]:4  local_a4
; undefined4       Stack[-0xa0]:4  local_a0
; undefined1       Stack[-0x9c]:1  local_9c
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
;
; XREF[1]:
;   core_dmodel.cpp_CKeyFramedModel_reducePolygons_FUN_0047aa00 at 0047aa1a
;
; Referenced Globals:
;   TerminatedCString s_Reducing_polygons_00620453
;   TerminatedCString s_core_dmodel_cpp_00620468
;   TerminatedCString s_Vertex_reducer_bug_or_CK_0062047b
;   double DOUBLE_006204b3 = -1
;   double DOUBLE_006204bb = 6.27445866074028
;   double DOUBLE_006204c3 = 6.29191195325972
;   int[3] g_TriangleMatchTableA
;   undefined4 DAT_006700f4
;   int[3] g_TriangleMatchTableB
;   undefined4 DAT_00670100
;   CEditorTools* g_CEditorToolsPtr = 02cf1cd4
;   CEditorTools g_CEditorToolsPtr
;   char* g_CurrentFilename
;   int g_CurrentLineNumber
;
; Called Functions:
;   core_dmodel.cpp_CKeyFramedModel_calcNormals_FUN_00477e60
;   core_dmodel.cpp_CKeyFramedModel_calculateTriangleNormal_FUN_0047c080
;   core_dmodel.cpp_CKeyFramedModel_removeDegeneratePolygons_FUN_0047bdb0
;   core_dmodel.cpp_CKeyFramedModel_removeDuplicatePolygons_FUN_0047bbc0
;   core_dmodel.cpp_CKeyFramedModel_removeUnusedVertices_FUN_0047aa30
;   core_dmodel.cpp_CKeyFramedModel_validatePartList_FUN_0047bf40
;   core_main.c_displayErrorAndQuit_FUN_00506f10
;   crt_math.c_acos_FUN_00600162
;   shape_edittool.cpp_CEditorTools_restoreWindowAndCleanup_FUN_004a0dd0
;   shape_edittool.cpp_CEditorTools_showCenteredProgressDialog_FUN_004a0430
;   shape_edittool.cpp_CEditorTools_updatePercentage_FUN_004a0530
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0047b1e0
        ;   Label: core_dmodel.cpp_CKeyFramedModel_mergeTrianglesToQuads_FUN_0047b1e0
    PUSH ESI                            ; 0047b1e1
    PUSH EDI                            ; 0047b1e2
    PUSH EBP                            ; 0047b1e3
    MOV EBP,ESP                         ; 0047b1e4
    SUB ESP,0xfc                        ; 0047b1e6
    AND ESP,0xfffffff8                  ; 0047b1ec
    MOV EDX,dword ptr [EBP + 0x14]      ; 0047b1ef
    PUSH EDX                            ; 0047b1f2
    CALL core_dmodel.cpp_CKeyFramedModel_validatePartList_FUN_0047bf40 ; 0047b1f3
        ;   XREF to: 0047bf40 (UNCONDITIONAL_CALL)  ; void core_dmodel.cpp_CKeyFramedModel_validatePartList_FUN_0047bf40(CKeyFramedModel * this_ptr)
    ADD ESP,0x4                         ; 0047b1f8
    MOV EAX,dword ptr [EBP + 0x14]      ; 0047b1fb
    CMP dword ptr [EAX + 0x110],0x1     ; 0047b1fe
    JL 0x0047b210                       ; 0047b205
        ;   XREF to: 0047b210 (CONDITIONAL_JUMP)  ; LAB_0047b210
    CMP dword ptr [EAX + 0x100],0x1     ; 0047b207
    JGE 0x0047b217                      ; 0047b20e
        ;   XREF to: 0047b217 (CONDITIONAL_JUMP)  ; LAB_0047b217
    MOV ESP,EBP                         ; 0047b210
        ;   Label: LAB_0047b210
    POP EBP                             ; 0047b212
    POP EDI                             ; 0047b213
    POP ESI                             ; 0047b214
    POP EBX                             ; 0047b215
    RET                                 ; 0047b216
    PUSH EAX                            ; 0047b217
        ;   Label: LAB_0047b217
    MOV ESI,EAX                         ; 0047b218
    CALL core_dmodel.cpp_CKeyFramedModel_removeDegeneratePolygons_FUN_0047bdb0 ; 0047b21a
        ;   XREF to: 0047bdb0 (UNCONDITIONAL_CALL)  ; void core_dmodel.cpp_CKeyFramedModel_removeDegeneratePolygons_FUN_0047bdb0(CKeyFramedModel * this_ptr)
    ADD ESP,0x4                         ; 0047b21f
    MOV EDI,ESI                         ; 0047b222
    PUSH EDI                            ; 0047b224
    CALL core_dmodel.cpp_CKeyFramedModel_removeDuplicatePolygons_FUN_0047bbc0 ; 0047b225
        ;   XREF to: 0047bbc0 (UNCONDITIONAL_CALL)  ; void core_dmodel.cpp_CKeyFramedModel_removeDuplicatePolygons_FUN_0047bbc0(CKeyFramedModel * this_ptr)
    ADD ESP,0x4                         ; 0047b22a
    FLD float ptr [EBP + 0x18]          ; 0047b22d
    FCOS                                ; 0047b230
    MOV EDX,dword ptr [EDI + 0x110]     ; 0047b232
    XOR EAX,EAX                         ; 0047b238
    FSTP float ptr [ESP + 0xf4]         ; 0047b23a
    MOV dword ptr [ESP + 0x98],EAX      ; 0047b241
    CMP EDX,0x7d0                       ; 0047b248
    JLE 0x0047b270                      ; 0047b24e
        ;   XREF to: 0047b270 (CONDITIONAL_JUMP)  ; LAB_0047b270
    PUSH 0x620453                       ; 0047b250 | = "Reducing polygons..."
    MOV ECX,dword ptr [0x00678a60]      ; 0047b255 | g_CEditorToolsPtr
    PUSH ECX                            ; 0047b25b | g_CEditorToolsPtr
    MOV EBX,0x1                         ; 0047b25c
    CALL shape_edittool.cpp_CEditorTools_showCenteredProgressDialog_FUN_004a0430 ; 0047b261
        ;   XREF to: 004a0430 (UNCONDITIONAL_CALL)  ; void shape_edittool.cpp_CEditorTools_showCenteredProgressDialog_FUN_004a0430(CEditorTools * this_ptr, char * message_text)
    ADD ESP,0x8                         ; 0047b266
    MOV dword ptr [ESP + 0x98],EBX      ; 0047b269
    MOV EAX,dword ptr [EBP + 0x14]      ; 0047b270
        ;   Label: LAB_0047b270
    XOR ESI,ESI                         ; 0047b273
    MOV EDX,dword ptr [EAX + 0x5584]    ; 0047b275
    MOV dword ptr [ESP + 0x8c],ESI      ; 0047b27b
    TEST EDX,EDX                        ; 0047b282
    JLE 0x0047b3a7                      ; 0047b284
        ;   XREF to: 0047b3a7 (CONDITIONAL_JUMP)  ; LAB_0047b3a7
    MOV dword ptr [ESP + 0x94],EAX      ; 0047b28a
    MOV EAX,dword ptr [ESP + 0x94]      ; 0047b291
        ;   Label: LAB_0047b291
    MOV EAX,dword ptr [EAX + 0x558c]    ; 0047b298
    MOV EDX,dword ptr [EBP + 0x14]      ; 0047b29e
    ADD EAX,ESI                         ; 0047b2a1
    MOV EDI,dword ptr [EDX + 0x110]     ; 0047b2a3
    MOV dword ptr [ESP + 0xac],EAX      ; 0047b2a9
    CMP EAX,EDI                         ; 0047b2b0
    JLE 0x0047b2d6                      ; 0047b2b2
        ;   XREF to: 0047b2d6 (CONDITIONAL_JUMP)  ; LAB_0047b2d6
    MOV EAX,0x620468                    ; 0047b2b4 | = "..\\core\\dmodel.cpp"
    MOV EDX,0x986                       ; 0047b2b9
    PUSH 0x62047b                       ; 0047b2be | = "Vertex reducer bug or CKeyFramedModel..."
    MOV [0x02f0ca48],EAX                ; 0047b2c3 | g_CurrentFilename
    MOV dword ptr [0x02f0ca4c],EDX      ; 0047b2c8 | g_CurrentLineNumber
    CALL core_main.c_displayErrorAndQuit_FUN_00506f10 ; 0047b2ce
        ;   XREF to: 00506f10 (UNCONDITIONAL_CALL)  ; void core_main.c_displayErrorAndQuit_FUN_00506f10(char * format)
    ADD ESP,0x4                         ; 0047b2d3
    MOV ECX,dword ptr [ESP + 0xac]      ; 0047b2d6
        ;   Label: LAB_0047b2d6
    MOV dword ptr [ESP + 0xc0],ESI      ; 0047b2dd
    CMP ESI,ECX                         ; 0047b2e4
    JGE 0x0047b36f                      ; 0047b2e6
        ;   XREF to: 0047b36f (CONDITIONAL_JUMP)  ; LAB_0047b36f
    MOV EAX,dword ptr [ESP + 0x94]      ; 0047b2ec
    MOV dword ptr [ESP + 0x9c],EAX      ; 0047b2f3
    IMUL EAX,ESI,0x48                   ; 0047b2fa
    SHL ESI,0x2                         ; 0047b2fd
    MOV dword ptr [ESP + 0xa4],EAX      ; 0047b300
    MOV dword ptr [ESP + 0xa0],ESI      ; 0047b307
    MOV EAX,dword ptr [EBP + 0x14]      ; 0047b30e
        ;   Label: LAB_0047b30e
    MOV EDX,dword ptr [ESP + 0xa4]      ; 0047b311
    MOV EAX,dword ptr [EAX + 0x114]     ; 0047b318
    ADD EDX,EAX                         ; 0047b31e
    MOV ESI,dword ptr [EDX + 0x4]       ; 0047b320
    MOV dword ptr [ESP + 0xdc],EDX      ; 0047b323
    CMP ESI,0x3                         ; 0047b32a
    JZ 0x0047b4d2                       ; 0047b32d
        ;   XREF to: 0047b4d2 (CONDITIONAL_JUMP)  ; LAB_0047b4d2
    MOV EAX,dword ptr [ESP + 0xa4]      ; 0047b333
        ;   Label: LAB_0047b333
    MOV EDX,dword ptr [ESP + 0xa0]      ; 0047b33a
    MOV ECX,dword ptr [ESP + 0xc0]      ; 0047b341
    MOV EBX,dword ptr [ESP + 0xac]      ; 0047b348
    ADD EAX,0x48                        ; 0047b34f
    ADD EDX,0x4                         ; 0047b352
    INC ECX                             ; 0047b355
    MOV dword ptr [ESP + 0xa4],EAX      ; 0047b356
    MOV dword ptr [ESP + 0xa0],EDX      ; 0047b35d
    MOV dword ptr [ESP + 0xc0],ECX      ; 0047b364
    CMP ECX,EBX                         ; 0047b36b
    JL 0x0047b30e                       ; 0047b36d
        ;   XREF to: 0047b30e (CONDITIONAL_JUMP)  ; LAB_0047b30e
    MOV ESI,dword ptr [ESP + 0xac]      ; 0047b36f
        ;   Label: LAB_0047b36f
    MOV ECX,dword ptr [ESP + 0x94]      ; 0047b376
    MOV EBX,dword ptr [ESP + 0x8c]      ; 0047b37d
    MOV EDX,dword ptr [EBP + 0x14]      ; 0047b384
    ADD ECX,0x8                         ; 0047b387
    INC EBX                             ; 0047b38a
    MOV EDI,dword ptr [EDX + 0x5584]    ; 0047b38b
    MOV dword ptr [ESP + 0x94],ECX      ; 0047b391
    MOV dword ptr [ESP + 0x8c],EBX      ; 0047b398
    CMP EBX,EDI                         ; 0047b39f
    JL 0x0047b291                       ; 0047b3a1
        ;   XREF to: 0047b291 (CONDITIONAL_JUMP)  ; LAB_0047b291
    MOV ECX,dword ptr [EBP + 0x14]      ; 0047b3a7
        ;   Label: LAB_0047b3a7
    XOR EAX,EAX                         ; 0047b3aa
    MOV EBX,dword ptr [ECX + 0x110]     ; 0047b3ac
    XOR EDX,EDX                         ; 0047b3b2
    TEST EBX,EBX                        ; 0047b3b4
    JLE 0x0047b484                      ; 0047b3b6
        ;   XREF to: 0047b484 (CONDITIONAL_JUMP)  ; LAB_0047b484
    MOV dword ptr [ESP + 0x90],EDX      ; 0047b3bc
    MOV dword ptr [ESP + 0x84],EDX      ; 0047b3c3
    MOV dword ptr [ESP + 0x88],EDX      ; 0047b3ca
    XOR EBX,EBX                         ; 0047b3d1
    MOV ECX,dword ptr [EBP + 0x14]      ; 0047b3d3
        ;   Label: LAB_0047b3d3
    MOV ESI,dword ptr [ESP + 0x88]      ; 0047b3d6
    MOV ECX,dword ptr [ECX + 0x114]     ; 0047b3dd
    ADD ESI,ECX                         ; 0047b3e3
    CMP dword ptr [ESI + 0x4],0x3       ; 0047b3e5
    JL 0x0047b450                       ; 0047b3e9
        ;   XREF to: 0047b450 (CONDITIONAL_JUMP)  ; LAB_0047b450
    CMP EDX,EAX                         ; 0047b3eb
    JGE 0x0047b43b                      ; 0047b3ed
        ;   XREF to: 0047b43b (CONDITIONAL_JUMP)  ; LAB_0047b43b
    MOV EDI,dword ptr [ESP + 0x84]      ; 0047b3ef
    ADD EDI,ECX                         ; 0047b3f6
    MOV ECX,0x12                        ; 0047b3f8
    MOVSD.REP ES:EDI,ESI                ; 0047b3fd
    MOV ECX,dword ptr [EBP + 0x14]      ; 0047b3ff
    MOV ESI,dword ptr [ESP + 0x90]      ; 0047b402
    MOV ECX,dword ptr [ECX + 0x118]     ; 0047b409
    ADD ESI,ECX                         ; 0047b40f
    ADD ECX,EBX                         ; 0047b411
    MOV dword ptr [ESP + 0xf8],ECX      ; 0047b413
    MOV ECX,dword ptr [ESI]             ; 0047b41a
    MOV ESI,dword ptr [ESP + 0xf8]      ; 0047b41c
    MOV dword ptr [ESI],ECX             ; 0047b423
    MOV ECX,dword ptr [EBP + 0x14]      ; 0047b425
    MOV ESI,dword ptr [ECX + 0x11c]     ; 0047b428
    TEST ESI,ESI                        ; 0047b42e
    JZ 0x0047b43b                       ; 0047b430
        ;   XREF to: 0047b43b (CONDITIONAL_JUMP)  ; LAB_0047b43b
    LEA EDI,[ESI + EAX*0x1]             ; 0047b432
    ADD ESI,EDX                         ; 0047b435
    MOV CL,byte ptr [EDI]               ; 0047b437
    MOV byte ptr [ESI],CL               ; 0047b439
    MOV EDI,dword ptr [ESP + 0x84]      ; 0047b43b
        ;   Label: LAB_0047b43b
    INC EDX                             ; 0047b442
    ADD EDI,0x48                        ; 0047b443
    ADD EBX,0x4                         ; 0047b446
    MOV dword ptr [ESP + 0x84],EDI      ; 0047b449
    MOV ESI,dword ptr [ESP + 0x88]      ; 0047b450
        ;   Label: LAB_0047b450
    MOV EDI,dword ptr [ESP + 0x90]      ; 0047b457
    MOV ECX,dword ptr [EBP + 0x14]      ; 0047b45e
    INC EAX                             ; 0047b461
    ADD ESI,0x48                        ; 0047b462
    ADD EDI,0x4                         ; 0047b465
    MOV dword ptr [ESP + 0x88],ESI      ; 0047b468
    MOV ESI,dword ptr [ECX + 0x110]     ; 0047b46f
    MOV dword ptr [ESP + 0x90],EDI      ; 0047b475
    CMP EAX,ESI                         ; 0047b47c
    JL 0x0047b3d3                       ; 0047b47e
        ;   XREF to: 0047b3d3 (CONDITIONAL_JUMP)  ; LAB_0047b3d3
    MOV EAX,dword ptr [EBP + 0x14]      ; 0047b484
        ;   Label: LAB_0047b484
    PUSH EAX                            ; 0047b487
    MOV EDI,EAX                         ; 0047b488
    MOV dword ptr [EAX + 0x110],EDX     ; 0047b48a
    CALL core_dmodel.cpp_CKeyFramedModel_validatePartList_FUN_0047bf40 ; 0047b490
        ;   XREF to: 0047bf40 (UNCONDITIONAL_CALL)  ; void core_dmodel.cpp_CKeyFramedModel_validatePartList_FUN_0047bf40(CKeyFramedModel * this_ptr)
    ADD ESP,0x4                         ; 0047b495
    MOV EAX,EDI                         ; 0047b498
    PUSH EAX                            ; 0047b49a
    CALL core_dmodel.cpp_CKeyFramedModel_removeUnusedVertices_FUN_0047aa30 ; 0047b49b
        ;   XREF to: 0047aa30 (UNCONDITIONAL_CALL)  ; void core_dmodel.cpp_CKeyFramedModel_removeUnusedVertices_FUN_0047aa30(CKeyFramedModel * this_ptr)
    ADD ESP,0x4                         ; 0047b4a0
    MOV EDX,EDI                         ; 0047b4a3
    PUSH EDX                            ; 0047b4a5
    CALL core_dmodel.cpp_CKeyFramedModel_calcNormals_FUN_00477e60 ; 0047b4a6
        ;   XREF to: 00477e60 (UNCONDITIONAL_CALL)  ; void core_dmodel.cpp_CKeyFramedModel_calcNormals_FUN_00477e60(CKeyFramedModel * this_ptr)
    ADD ESP,0x4                         ; 0047b4ab
    CMP dword ptr [ESP + 0x98],0x0      ; 0047b4ae
    JZ 0x0047b210                       ; 0047b4b6
        ;   XREF to: 0047b210 (CONDITIONAL_JUMP)  ; LAB_0047b210
    MOV EBX,dword ptr [0x00678a60]      ; 0047b4bc | g_CEditorToolsPtr
    PUSH EBX                            ; 0047b4c2 | g_CEditorToolsPtr
    CALL shape_edittool.cpp_CEditorTools_restoreWindowAndCleanup_FUN_004a0dd0 ; 0047b4c3
        ;   XREF to: 004a0dd0 (UNCONDITIONAL_CALL)  ; void shape_edittool.cpp_CEditorTools_restoreWindowAndCleanup_FUN_004a0dd0(CEditorTools * this_ptr)
    ADD ESP,0x4                         ; 0047b4c8
    MOV ESP,EBP                         ; 0047b4cb
    POP EBP                             ; 0047b4cd
    POP EDI                             ; 0047b4ce
    POP ESI                             ; 0047b4cf
    POP EBX                             ; 0047b4d0
    RET                                 ; 0047b4d1
    CMP dword ptr [ESP + 0x98],0x0      ; 0047b4d2
        ;   Label: LAB_0047b4d2
    JZ 0x0047b4ea                       ; 0047b4da
        ;   XREF to: 0047b4ea (CONDITIONAL_JUMP)  ; LAB_0047b4ea
    TEST byte ptr [ESP + 0xc0],0xff     ; 0047b4dc
    JZ 0x0047b59b                       ; 0047b4e4
        ;   XREF to: 0047b59b (CONDITIONAL_JUMP)  ; LAB_0047b59b
    MOV EAX,dword ptr [ESP + 0xc0]      ; 0047b4ea
        ;   Label: LAB_0047b4ea
    INC EAX                             ; 0047b4f1
    MOV EDX,dword ptr [ESP + 0xac]      ; 0047b4f2
    MOV dword ptr [ESP + 0xc8],EAX      ; 0047b4f9
    CMP EAX,EDX                         ; 0047b500
    JGE 0x0047b333                      ; 0047b502
        ;   XREF to: 0047b333 (CONDITIONAL_JUMP)  ; LAB_0047b333
    MOV EAX,dword ptr [ESP + 0xa0]      ; 0047b508
    MOV EDX,dword ptr [ESP + 0xc8]      ; 0047b50f
    MOV dword ptr [ESP + 0xa8],EAX      ; 0047b516
    IMUL EAX,EDX,0x48                   ; 0047b51d
    MOV dword ptr [ESP + 0xb8],EAX      ; 0047b520
    LEA EAX,[EDX*0x4 + 0x0]             ; 0047b527
    MOV dword ptr [ESP + 0xb4],EAX      ; 0047b52e
    MOV EAX,dword ptr [EBP + 0x14]      ; 0047b535
        ;   Label: LAB_0047b535
    MOV EDX,dword ptr [ESP + 0xb8]      ; 0047b538
    MOV EAX,dword ptr [EAX + 0x114]     ; 0047b53f
    ADD EDX,EAX                         ; 0047b545
    MOV ECX,dword ptr [EDX + 0x4]       ; 0047b547
    MOV dword ptr [ESP + 0xe8],EDX      ; 0047b54a
    CMP ECX,0x3                         ; 0047b551
    JZ 0x0047b5d8                       ; 0047b554
        ;   XREF to: 0047b5d8 (CONDITIONAL_JUMP)  ; LAB_0047b5d8
    MOV ECX,dword ptr [ESP + 0xb8]      ; 0047b55a
        ;   Label: LAB_0047b55a
    MOV EBX,dword ptr [ESP + 0xb4]      ; 0047b561
    MOV ESI,dword ptr [ESP + 0xc8]      ; 0047b568
    MOV EDI,dword ptr [ESP + 0xac]      ; 0047b56f
    ADD ECX,0x48                        ; 0047b576
    ADD EBX,0x4                         ; 0047b579
    INC ESI                             ; 0047b57c
    MOV dword ptr [ESP + 0xb8],ECX      ; 0047b57d
    MOV dword ptr [ESP + 0xb4],EBX      ; 0047b584
    MOV dword ptr [ESP + 0xc8],ESI      ; 0047b58b
    CMP ESI,EDI                         ; 0047b592
    JL 0x0047b535                       ; 0047b594
        ;   XREF to: 0047b535 (CONDITIONAL_JUMP)  ; LAB_0047b535
    JMP 0x0047b333                      ; 0047b596
        ;   XREF to: 0047b333 (UNCONDITIONAL_JUMP)  ; LAB_0047b333
    MOV EAX,dword ptr [EBP + 0x14]      ; 0047b59b
        ;   Label: LAB_0047b59b
    SUB ESP,0x4                         ; 0047b59e
    FILD dword ptr [EAX + 0x110]        ; 0047b5a1
    MOV EAX,dword ptr [ESP + 0xc4]      ; 0047b5a7
    MOV dword ptr [ESP + 0xfc],EAX      ; 0047b5ae
    FSTP float ptr [ESP]                ; 0047b5b5
    FILD dword ptr [ESP + 0xfc]         ; 0047b5b8
    SUB ESP,0x4                         ; 0047b5bf
    MOV EAX,[0x00678a60]                ; 0047b5c2 | g_CEditorToolsPtr
    FSTP float ptr [ESP]                ; 0047b5c7
    PUSH EAX                            ; 0047b5ca | g_CEditorToolsPtr
    CALL shape_edittool.cpp_CEditorTools_updatePercentage_FUN_004a0530 ; 0047b5cb
        ;   XREF to: 004a0530 (UNCONDITIONAL_CALL)  ; void shape_edittool.cpp_CEditorTools_updatePercentage_FUN_004a0530(CEditorTools * this_ptr, float progress_min, float progress_max)
    ADD ESP,0xc                         ; 0047b5d0
    JMP 0x0047b4ea                      ; 0047b5d3
        ;   XREF to: 0047b4ea (UNCONDITIONAL_JUMP)  ; LAB_0047b4ea
    MOV EAX,dword ptr [EBP + 0x14]      ; 0047b5d8
        ;   Label: LAB_0047b5d8
    MOV ECX,dword ptr [ESP + 0xb4]      ; 0047b5db
    MOV EAX,dword ptr [EAX + 0x118]     ; 0047b5e2
    MOV EDX,dword ptr [ESP + 0xa8]      ; 0047b5e8
    ADD ECX,EAX                         ; 0047b5ef
    MOV EAX,dword ptr [EDX + EAX*0x1]   ; 0047b5f1
    CMP EAX,dword ptr [ECX]             ; 0047b5f4
    JNZ 0x0047b55a                      ; 0047b5f6
        ;   XREF to: 0047b55a (CONDITIONAL_JUMP)  ; LAB_0047b55a
    MOV EAX,dword ptr [EBP + 0x14]      ; 0047b5fc
    MOV ESI,dword ptr [EAX + 0x11c]     ; 0047b5ff
    TEST ESI,ESI                        ; 0047b605
    JNZ 0x0047ba55                      ; 0047b607
        ;   XREF to: 0047ba55 (CONDITIONAL_JUMP)  ; LAB_0047ba55
    MOV EDI,0xffffffff                  ; 0047b60d
        ;   Label: LAB_0047b60d
    XOR EAX,EAX                         ; 0047b612
    XOR EDX,EDX                         ; 0047b614
    MOV dword ptr [ESP + 0xd4],EAX      ; 0047b616
    MOV dword ptr [ESP + 0xcc],EDX      ; 0047b61d
    MOV EAX,dword ptr [ESP + 0xdc]      ; 0047b624
    MOV dword ptr [ESP + 0xc4],EDI      ; 0047b62b
    MOV dword ptr [ESP + 0xd0],EAX      ; 0047b632
    MOV EAX,dword ptr [ESP + 0xcc]      ; 0047b639
        ;   Label: LAB_0047b639
    MOV ECX,dword ptr [ESP + 0xe8]      ; 0047b640
    XOR EDX,EDX                         ; 0047b647
    MOV dword ptr [ESP + 0xe4],EAX      ; 0047b649
    MOV EAX,dword ptr [ESP + 0xd0]      ; 0047b650
    XOR EBX,EBX                         ; 0047b657
    MOV dword ptr [ESP + 0xe0],EAX      ; 0047b659
    MOV ESI,dword ptr [ESP + 0xe0]      ; 0047b660
        ;   Label: LAB_0047b660
    MOV EDI,dword ptr [ECX + 0x18]      ; 0047b667
    CMP EDI,dword ptr [ESI + 0x18]      ; 0047b66a
    JNZ 0x0047ba77                      ; 0047b66d
        ;   XREF to: 0047ba77 (CONDITIONAL_JUMP)  ; LAB_0047ba77
    MOV EAX,dword ptr [ESP + 0xe4]      ; 0047b673
    IMUL ESI,dword ptr [EAX + 0x6700f0],0xc ; 0047b67a | g_TriangleMatchTableA | DAT_006700f4
    MOV EAX,dword ptr [ESP + 0xdc]      ; 0047b681
    MOV EDI,dword ptr [EDX + 0x6700fc]  ; 0047b688 | g_TriangleMatchTableB | DAT_00670100
    ADD EAX,ESI                         ; 0047b68e
    IMUL ESI,EDI,0xc                    ; 0047b690
    MOV EDI,dword ptr [ESP + 0xe8]      ; 0047b693
    ADD EDI,ESI                         ; 0047b69a
    MOV ESI,dword ptr [EAX + 0x18]      ; 0047b69c
    CMP ESI,dword ptr [EDI + 0x18]      ; 0047b69f
    JNZ 0x0047ba77                      ; 0047b6a2
        ;   XREF to: 0047ba77 (CONDITIONAL_JUMP)  ; LAB_0047ba77
    MOV EAX,dword ptr [ESP + 0xd4]      ; 0047b6a8
    MOV dword ptr [ESP + 0xbc],EBX      ; 0047b6af
    MOV dword ptr [ESP + 0xc4],EAX      ; 0047b6b6
    MOV ECX,dword ptr [ESP + 0xcc]      ; 0047b6bd
        ;   Label: LAB_0047b6bd
    MOV EBX,dword ptr [ESP + 0xd4]      ; 0047b6c4
    MOV EDX,dword ptr [ESP + 0xd0]      ; 0047b6cb
    ADD ECX,0x4                         ; 0047b6d2
    INC EBX                             ; 0047b6d5
    ADD EDX,0xc                         ; 0047b6d6
    MOV dword ptr [ESP + 0xcc],ECX      ; 0047b6d9
    MOV dword ptr [ESP + 0xd4],EBX      ; 0047b6e0
    MOV dword ptr [ESP + 0xd0],EDX      ; 0047b6e7
    CMP EBX,0x3                         ; 0047b6ee
    JL 0x0047b639                       ; 0047b6f1
        ;   XREF to: 0047b639 (CONDITIONAL_JUMP)  ; LAB_0047b639
    MOV EDI,dword ptr [ESP + 0xc4]      ; 0047b6f7
    TEST EDI,EDI                        ; 0047b6fe
    JL 0x0047b55a                       ; 0047b700
        ;   XREF to: 0047b55a (CONDITIONAL_JUMP)  ; LAB_0047b55a
    MOV EDX,EDI                         ; 0047b706
    IMUL EAX,EDI,0xc                    ; 0047b708
    ADD EAX,dword ptr [ESP + 0xdc]      ; 0047b70b
    LEA EDI,[ESP + 0x20]                ; 0047b712
    LEA ESI,[EAX + 0x18]                ; 0047b716
    MOV EAX,dword ptr [ESP + 0xbc]      ; 0047b719
    MOVSD ES:EDI,ESI                    ; 0047b720
    MOVSD ES:EDI,ESI                    ; 0047b721
    MOVSD ES:EDI,ESI                    ; 0047b722
    IMUL ESI,dword ptr [EAX*0x4 + 0x6700f0],0xc ; 0047b723 | g_TriangleMatchTableA
    MOV EAX,EDX                         ; 0047b72b
    IMUL EDX,dword ptr [EAX*0x4 + 0x6700f0],0xc ; 0047b72d | g_TriangleMatchTableA
    ADD ESI,dword ptr [ESP + 0xe8]      ; 0047b735
    LEA EDI,[ESP + 0x2c]                ; 0047b73c
    LEA ESI,[ESI + 0x18]                ; 0047b740
    MOV EBX,dword ptr [ESP + 0xdc]      ; 0047b743
    MOVSD ES:EDI,ESI                    ; 0047b74a
    MOVSD ES:EDI,ESI                    ; 0047b74b
    MOVSD ES:EDI,ESI                    ; 0047b74c
    ADD EDX,EBX                         ; 0047b74d
    LEA EDI,[ESP + 0x38]                ; 0047b74f
    LEA ESI,[EDX + 0x18]                ; 0047b753
    MOVSD ES:EDI,ESI                    ; 0047b756
    MOVSD ES:EDI,ESI                    ; 0047b757
    MOVSD ES:EDI,ESI                    ; 0047b758
    IMUL EAX,dword ptr [EAX*0x4 + 0x6700fc],0xc ; 0047b759 | g_TriangleMatchTableB
    ADD EAX,EBX                         ; 0047b761
    LEA ESI,[EAX + 0x18]                ; 0047b763
    MOV EAX,0x1                         ; 0047b766
    LEA EDI,[ESP + 0x44]                ; 0047b76b
    MOV dword ptr [ESP + 0xb0],EAX      ; 0047b76f
    MOV EAX,dword ptr [EBP + 0x14]      ; 0047b776
    MOVSD ES:EDI,ESI                    ; 0047b779
    MOVSD ES:EDI,ESI                    ; 0047b77a
    MOVSD ES:EDI,ESI                    ; 0047b77b
    XOR EDX,EDX                         ; 0047b77c
    MOV ECX,dword ptr [EAX + 0x100]     ; 0047b77e
    MOV dword ptr [ESP + 0xd8],EDX      ; 0047b784
    TEST ECX,ECX                        ; 0047b78b
    JLE 0x0047bb1b                      ; 0047b78d
        ;   XREF to: 0047bb1b (CONDITIONAL_JUMP)  ; LAB_0047bb1b
    MOV ECX,dword ptr [ESP + 0xc8]      ; 0047b793
        ;   Label: LAB_0047b793
    PUSH ECX                            ; 0047b79a
    MOV EBX,dword ptr [ESP + 0xdc]      ; 0047b79b
    PUSH EBX                            ; 0047b7a2
    LEA EAX,[ESP + 0x58]                ; 0047b7a3
    PUSH EAX                            ; 0047b7a7
    MOV ESI,dword ptr [EBP + 0x14]      ; 0047b7a8
    PUSH ESI                            ; 0047b7ab
    CALL core_dmodel.cpp_CKeyFramedModel_calculateTriangleNormal_FUN_0047c080 ; 0047b7ac
        ;   XREF to: 0047c080 (UNCONDITIONAL_CALL)  ; CVector3f * core_dmodel.cpp_CKeyFramedModel_calculateTriangleNormal_FUN_0047c080(CKeyFramedModel * this_ptr, CVector3f * output_normal, int frame_index, int poly_index)
    ADD ESP,0x10                        ; 0047b7b1
    MOV EDI,dword ptr [ESP + 0xc0]      ; 0047b7b4
    PUSH EDI                            ; 0047b7bb
    MOV EBX,EAX                         ; 0047b7bc
    MOV EAX,dword ptr [ESP + 0xdc]      ; 0047b7be
    PUSH EAX                            ; 0047b7c5
    LEA EAX,[ESP + 0x7c]                ; 0047b7c6
    PUSH EAX                            ; 0047b7ca
    PUSH ESI                            ; 0047b7cb
    CALL core_dmodel.cpp_CKeyFramedModel_calculateTriangleNormal_FUN_0047c080 ; 0047b7cc
        ;   XREF to: 0047c080 (UNCONDITIONAL_CALL)  ; CVector3f * core_dmodel.cpp_CKeyFramedModel_calculateTriangleNormal_FUN_0047c080(CKeyFramedModel * this_ptr, CVector3f * output_normal, int frame_index, int poly_index)
    FLD float ptr [EAX + 0x4]           ; 0047b7d1
    FMUL float ptr [EBX + 0x4]          ; 0047b7d4
    FLD float ptr [EAX]                 ; 0047b7d7
    FMUL float ptr [EBX]                ; 0047b7d9
    FADDP                               ; 0047b7db
    FLD float ptr [EAX + 0x8]           ; 0047b7dd
    FMUL float ptr [EBX + 0x8]          ; 0047b7e0
    FADDP                               ; 0047b7e3
    ADD ESP,0x10                        ; 0047b7e5
    FCOMP float ptr [ESP + 0xf4]        ; 0047b7e8
    FNSTSW AX                           ; 0047b7ef
    SAHF                                ; 0047b7f1
    JC 0x0047b55a                       ; 0047b7f2
        ;   XREF to: 0047b55a (CONDITIONAL_JUMP)  ; LAB_0047b55a
    MOV EAX,dword ptr [ESP + 0xd8]      ; 0047b7f8
    IMUL EAX,dword ptr [ESI + 0x104]    ; 0047b7ff
    IMUL EDX,EAX,0xc                    ; 0047b806
    XOR EBX,EBX                         ; 0047b809
    XOR EDI,EDI                         ; 0047b80b
    MOV dword ptr [ESP + 0x8],EBX       ; 0047b80d
    MOV dword ptr [ESP + 0xc],EBX       ; 0047b811
    MOV dword ptr [ESP + 0xf0],EDI      ; 0047b815
    MOV EAX,dword ptr [ESI + 0x10c]     ; 0047b81c
    MOV EBX,0x2                         ; 0047b822
    ADD EAX,EDX                         ; 0047b827
    XOR ESI,ESI                         ; 0047b829
    MOV dword ptr [ESP + 0xec],EAX      ; 0047b82b
    MOV EAX,dword ptr [ESP + 0xf0]      ; 0047b832
        ;   Label: LAB_0047b832
    IMUL EDX,dword ptr [ESP + EAX*0x1 + 0x20],0xc ; 0047b839
    MOV EAX,dword ptr [ESP + 0xec]      ; 0047b83e
    MOV ECX,0x4                         ; 0047b845
    ADD EAX,EDX                         ; 0047b84a
    LEA EDX,[ESI + 0x1]                 ; 0047b84c
    MOV dword ptr [ESP + 0x80],EAX      ; 0047b84f
    MOV EAX,EDX                         ; 0047b856
    SAR EDX,0x1f                        ; 0047b858
    IDIV ECX                            ; 0047b85b
    IMUL EDX,EDX,0xc                    ; 0047b85d
    IMUL ECX,dword ptr [ESP + EDX*0x1 + 0x20],0xc ; 0047b860
    MOV EDX,EBX                         ; 0047b865
    MOV EAX,dword ptr [ESP + 0xec]      ; 0047b867
    SAR EDX,0x1f                        ; 0047b86e
    MOV EDI,0x4                         ; 0047b871
    ADD ECX,EAX                         ; 0047b876
    MOV EAX,EBX                         ; 0047b878
    IDIV EDI                            ; 0047b87a
    IMUL EDX,EDX,0xc                    ; 0047b87c
    IMUL EDI,dword ptr [ESP + EDX*0x1 + 0x20],0xc ; 0047b87f
    ADD EDI,dword ptr [ESP + 0xec]      ; 0047b884
    MOV EDX,dword ptr [ESP + 0x80]      ; 0047b88b
    MOV EAX,dword ptr [ECX]             ; 0047b892
    MOV EDX,dword ptr [EDX]             ; 0047b894
    SUB EDX,EAX                         ; 0047b896
    MOV dword ptr [ESP + 0xf8],EDX      ; 0047b898
    FILD dword ptr [ESP + 0xf8]         ; 0047b89f
    MOV EDX,dword ptr [ESP + 0x80]      ; 0047b8a6
    FSTP float ptr [ESP + 0x68]         ; 0047b8ad
    MOV EDX,dword ptr [EDX + 0x4]       ; 0047b8b1
    MOV EAX,dword ptr [ECX + 0x4]       ; 0047b8b4
    SUB EDX,EAX                         ; 0047b8b7
    MOV dword ptr [ESP + 0xf8],EDX      ; 0047b8b9
    FILD dword ptr [ESP + 0xf8]         ; 0047b8c0
    MOV EDX,dword ptr [ESP + 0x80]      ; 0047b8c7
    FST float ptr [ESP + 0x6c]          ; 0047b8ce
    MOV EDX,dword ptr [EDX + 0x8]       ; 0047b8d2
    MOV EAX,dword ptr [ECX + 0x8]       ; 0047b8d5
    FMUL float ptr [ESP + 0x6c]         ; 0047b8d8
    SUB EDX,EAX                         ; 0047b8dc
    FLD float ptr [ESP + 0x68]          ; 0047b8de
    MOV dword ptr [ESP + 0xf8],EDX      ; 0047b8e2
    FMUL float ptr [ESP + 0x68]         ; 0047b8e9
    FILD dword ptr [ESP + 0xf8]         ; 0047b8ed
    FXCH                                ; 0047b8f4
    FADDP ST2,ST0                       ; 0047b8f6
    FST float ptr [ESP + 0x70]          ; 0047b8f8
    FMUL float ptr [ESP + 0x70]         ; 0047b8fc
    FADDP                               ; 0047b900
    FSQRT                               ; 0047b902
    FST float ptr [ESP + 0x1c]          ; 0047b904
    FLDZ                                ; 0047b908
    FCOMPP                              ; 0047b90a
    FNSTSW AX                           ; 0047b90c
    SAHF                                ; 0047b90e
    JNC 0x0047ba8c                      ; 0047b90f
        ;   XREF to: 0047ba8c (CONDITIONAL_JUMP)  ; LAB_0047ba8c
    FLD1                                ; 0047b915
    FLD float ptr [ESP + 0x68]          ; 0047b917
    FXCH                                ; 0047b91b
    FDIV float ptr [ESP + 0x1c]         ; 0047b91d
    FXCH                                ; 0047b921
    FMUL ST1                            ; 0047b923
    FLD float ptr [ESP + 0x6c]          ; 0047b925
    FMUL ST2                            ; 0047b929
    FLD float ptr [ESP + 0x70]          ; 0047b92b
    FMULP ST3                           ; 0047b92f
    FXCH                                ; 0047b931
    FSTP float ptr [ESP + 0x68]         ; 0047b933
    FSTP float ptr [ESP + 0x6c]         ; 0047b937
    FSTP float ptr [ESP + 0x70]         ; 0047b93b
    MOV EDX,dword ptr [EDI]             ; 0047b93f
        ;   Label: LAB_0047b93f
    MOV EAX,dword ptr [ECX]             ; 0047b941
    SUB EDX,EAX                         ; 0047b943
    MOV dword ptr [ESP + 0xf8],EDX      ; 0047b945
    FILD dword ptr [ESP + 0xf8]         ; 0047b94c
    FSTP float ptr [ESP + 0x5c]         ; 0047b953
    MOV EDX,dword ptr [EDI + 0x4]       ; 0047b957
    MOV EAX,dword ptr [ECX + 0x4]       ; 0047b95a
    SUB EDX,EAX                         ; 0047b95d
    MOV dword ptr [ESP + 0xf8],EDX      ; 0047b95f
    FILD dword ptr [ESP + 0xf8]         ; 0047b966
    FST float ptr [ESP + 0x60]          ; 0047b96d
    FMUL float ptr [ESP + 0x60]         ; 0047b971
    MOV EDX,dword ptr [EDI + 0x8]       ; 0047b975
    SUB EDX,dword ptr [ECX + 0x8]       ; 0047b978
    FLD float ptr [ESP + 0x5c]          ; 0047b97b
    MOV dword ptr [ESP + 0xf8],EDX      ; 0047b97f
    FMUL float ptr [ESP + 0x5c]         ; 0047b986
    FILD dword ptr [ESP + 0xf8]         ; 0047b98a
    FXCH                                ; 0047b991
    FADDP ST2,ST0                       ; 0047b993
    FST float ptr [ESP + 0x64]          ; 0047b995
    FMUL float ptr [ESP + 0x64]         ; 0047b999
    FADDP                               ; 0047b99d
    FSQRT                               ; 0047b99f
    FST float ptr [ESP + 0x18]          ; 0047b9a1
    FLDZ                                ; 0047b9a5
    FCOMPP                              ; 0047b9a7
    FNSTSW AX                           ; 0047b9a9
    SAHF                                ; 0047b9ab
    JNC 0x0047ba9f                      ; 0047b9ac
        ;   XREF to: 0047ba9f (CONDITIONAL_JUMP)  ; LAB_0047ba9f
    FLD1                                ; 0047b9b2
    FLD float ptr [ESP + 0x5c]          ; 0047b9b4
    FXCH                                ; 0047b9b8
    FDIV float ptr [ESP + 0x18]         ; 0047b9ba
    FXCH                                ; 0047b9be
    FMUL ST1                            ; 0047b9c0
    FLD float ptr [ESP + 0x60]          ; 0047b9c2
    FMUL ST2                            ; 0047b9c6
    FLD float ptr [ESP + 0x64]          ; 0047b9c8
    FMULP ST3                           ; 0047b9cc
    FXCH                                ; 0047b9ce
    FSTP float ptr [ESP + 0x5c]         ; 0047b9d0
    FSTP float ptr [ESP + 0x60]         ; 0047b9d4
    FSTP float ptr [ESP + 0x64]         ; 0047b9d8
    FLD float ptr [ESP + 0x6c]          ; 0047b9dc
        ;   Label: LAB_0047b9dc
    FMUL float ptr [ESP + 0x60]         ; 0047b9e0
    FLD float ptr [ESP + 0x68]          ; 0047b9e4
    FMUL float ptr [ESP + 0x5c]         ; 0047b9e8
    FADDP                               ; 0047b9ec
    FLD float ptr [ESP + 0x70]          ; 0047b9ee
    FMUL float ptr [ESP + 0x64]         ; 0047b9f2
    FADDP                               ; 0047b9f6
    FLD1                                ; 0047b9f8
    FXCH                                ; 0047b9fa
    FSTP double ptr [ESP]               ; 0047b9fc
    FCOMP double ptr [ESP]              ; 0047b9ff
    FNSTSW AX                           ; 0047ba02
    SAHF                                ; 0047ba04
    JA 0x0047bab2                       ; 0047ba05
        ;   XREF to: 0047bab2 (CONDITIONAL_JUMP)  ; LAB_0047bab2
    XOR EDX,EDX                         ; 0047ba0b
    MOV dword ptr [ESP + 0x10],EDX      ; 0047ba0d
    MOV dword ptr [ESP + 0x14],EDX      ; 0047ba11
    FLD double ptr [ESP + 0x8]          ; 0047ba15
        ;   Label: LAB_0047ba15
    MOV EDI,dword ptr [ESP + 0xf0]      ; 0047ba19
    INC EBX                             ; 0047ba20
    INC ESI                             ; 0047ba21
    FADD double ptr [ESP + 0x10]        ; 0047ba22
    ADD EDI,0xc                         ; 0047ba26
    FSTP double ptr [ESP + 0x8]         ; 0047ba29
    MOV dword ptr [ESP + 0xf0],EDI      ; 0047ba2d
    CMP ESI,0x4                         ; 0047ba34
    JL 0x0047b832                       ; 0047ba37
        ;   XREF to: 0047b832 (CONDITIONAL_JUMP)  ; LAB_0047b832
    FLD double ptr [ESP + 0x8]          ; 0047ba3d
    FCOMP double ptr [0x006204bb]       ; 0047ba41 | DOUBLE_006204bb
    FNSTSW AX                           ; 0047ba47
    SAHF                                ; 0047ba49
    JNC 0x0047bae8                      ; 0047ba4a
        ;   XREF to: 0047bae8 (CONDITIONAL_JUMP)  ; LAB_0047bae8
    JMP 0x0047b55a                      ; 0047ba50
        ;   XREF to: 0047b55a (UNCONDITIONAL_JUMP)  ; LAB_0047b55a
    MOV ECX,dword ptr [ESP + 0xc0]      ; 0047ba55
        ;   Label: LAB_0047ba55
    MOV EDX,dword ptr [ESP + 0xc8]      ; 0047ba5c
    MOV EAX,ESI                         ; 0047ba63
    ADD EDX,ESI                         ; 0047ba65
    MOV AL,byte ptr [ECX + EAX*0x1]     ; 0047ba67
    CMP AL,byte ptr [EDX]               ; 0047ba6a
    JNZ 0x0047b55a                      ; 0047ba6c
        ;   XREF to: 0047b55a (CONDITIONAL_JUMP)  ; LAB_0047b55a
    JMP 0x0047b60d                      ; 0047ba72
        ;   XREF to: 0047b60d (UNCONDITIONAL_JUMP)  ; LAB_0047b60d
    ADD EDX,0x4                         ; 0047ba77
        ;   Label: LAB_0047ba77
    INC EBX                             ; 0047ba7a
    ADD ECX,0xc                         ; 0047ba7b
    CMP EDX,0xc                         ; 0047ba7e
    JL 0x0047b660                       ; 0047ba81
        ;   XREF to: 0047b660 (CONDITIONAL_JUMP)  ; LAB_0047b660
    JMP 0x0047b6bd                      ; 0047ba87
        ;   XREF to: 0047b6bd (UNCONDITIONAL_JUMP)  ; LAB_0047b6bd
    XOR EDX,EDX                         ; 0047ba8c
        ;   Label: LAB_0047ba8c
    MOV dword ptr [ESP + 0x6c],EDX      ; 0047ba8e
    MOV dword ptr [ESP + 0x68],EDX      ; 0047ba92
    MOV dword ptr [ESP + 0x70],EDX      ; 0047ba96
    JMP 0x0047b93f                      ; 0047ba9a
        ;   XREF to: 0047b93f (UNCONDITIONAL_JUMP)  ; LAB_0047b93f
    XOR EAX,EAX                         ; 0047ba9f
        ;   Label: LAB_0047ba9f
    MOV dword ptr [ESP + 0x60],EAX      ; 0047baa1
    MOV dword ptr [ESP + 0x5c],EAX      ; 0047baa5
    MOV dword ptr [ESP + 0x64],EAX      ; 0047baa9
    JMP 0x0047b9dc                      ; 0047baad
        ;   XREF to: 0047b9dc (UNCONDITIONAL_JUMP)  ; LAB_0047b9dc
    FLD double ptr [ESP]                ; 0047bab2
        ;   Label: LAB_0047bab2
    FCOMP double ptr [0x006204b3]       ; 0047bab5 | DOUBLE_006204b3
    FNSTSW AX                           ; 0047babb
    SAHF                                ; 0047babd
    JA 0x0047bad7                       ; 0047babe
        ;   XREF to: 0047bad7 (CONDITIONAL_JUMP)  ; LAB_0047bad7
    MOV EDI,0x54411744                  ; 0047bac0
    MOV EAX,0x400921fb                  ; 0047bac5
    MOV dword ptr [ESP + 0x10],EDI      ; 0047baca
    MOV dword ptr [ESP + 0x14],EAX      ; 0047bace
    JMP 0x0047ba15                      ; 0047bad2
        ;   XREF to: 0047ba15 (UNCONDITIONAL_JUMP)  ; LAB_0047ba15
    FLD double ptr [ESP]                ; 0047bad7
        ;   Label: LAB_0047bad7
    CALL crt_math.c_acos_FUN_00600162   ; 0047bada
        ;   XREF to: 00600162 (UNCONDITIONAL_CALL)  ; double crt_math.c_acos_FUN_00600162(double x)
    FSTP double ptr [ESP + 0x10]        ; 0047badf
    JMP 0x0047ba15                      ; 0047bae3
        ;   XREF to: 0047ba15 (UNCONDITIONAL_JUMP)  ; LAB_0047ba15
    FLD double ptr [ESP + 0x8]          ; 0047bae8
        ;   Label: LAB_0047bae8
    FCOMP double ptr [0x006204c3]       ; 0047baec | DOUBLE_006204c3
    FNSTSW AX                           ; 0047baf2
    SAHF                                ; 0047baf4
    JA 0x0047b55a                       ; 0047baf5
        ;   XREF to: 0047b55a (CONDITIONAL_JUMP)  ; LAB_0047b55a
    MOV EBX,dword ptr [ESP + 0xd8]      ; 0047bafb
    MOV EDX,dword ptr [EBP + 0x14]      ; 0047bb02
    INC EBX                             ; 0047bb05
    MOV ESI,dword ptr [EDX + 0x100]     ; 0047bb06
    MOV dword ptr [ESP + 0xd8],EBX      ; 0047bb0c
    CMP EBX,ESI                         ; 0047bb13
    JL 0x0047b793                       ; 0047bb15
        ;   XREF to: 0047b793 (CONDITIONAL_JUMP)  ; LAB_0047b793
    CMP dword ptr [ESP + 0xb0],0x0      ; 0047bb1b
        ;   Label: LAB_0047bb1b
    JZ 0x0047b55a                       ; 0047bb23
        ;   XREF to: 0047b55a (CONDITIONAL_JUMP)  ; LAB_0047b55a
    MOV EDI,dword ptr [ESP + 0xdc]      ; 0047bb29
    LEA ESI,[ESP + 0x20]                ; 0047bb30
    LEA EDI,[EDI + 0x18]                ; 0047bb34
    MOVSD ES:EDI,ESI                    ; 0047bb37
    MOVSD ES:EDI,ESI                    ; 0047bb38
    MOVSD ES:EDI,ESI                    ; 0047bb39
    MOV EDI,dword ptr [ESP + 0xdc]      ; 0047bb3a
    LEA ESI,[ESP + 0x2c]                ; 0047bb41
    LEA EDI,[EDI + 0x24]                ; 0047bb45
    MOVSD ES:EDI,ESI                    ; 0047bb48
    MOVSD ES:EDI,ESI                    ; 0047bb49
    MOVSD ES:EDI,ESI                    ; 0047bb4a
    MOV EDI,dword ptr [ESP + 0xdc]      ; 0047bb4b
    LEA ESI,[ESP + 0x38]                ; 0047bb52
    LEA EDI,[EDI + 0x30]                ; 0047bb56
    MOVSD ES:EDI,ESI                    ; 0047bb59
    MOVSD ES:EDI,ESI                    ; 0047bb5a
    MOVSD ES:EDI,ESI                    ; 0047bb5b
    MOV EDI,dword ptr [ESP + 0xdc]      ; 0047bb5c
    LEA ESI,[ESP + 0x44]                ; 0047bb63
    LEA EDI,[EDI + 0x3c]                ; 0047bb67
    MOV EAX,dword ptr [ESP + 0xdc]      ; 0047bb6a
    MOVSD ES:EDI,ESI                    ; 0047bb71
    MOVSD ES:EDI,ESI                    ; 0047bb72
    MOVSD ES:EDI,ESI                    ; 0047bb73
    MOV dword ptr [EAX + 0x4],0x4       ; 0047bb74
    MOV dword ptr [EAX + 0x14],0x0      ; 0047bb7b
    MOV EDX,dword ptr [ESP + 0xdc]      ; 0047bb82
    MOV EAX,dword ptr [EAX + 0x14]      ; 0047bb89
    MOV dword ptr [EDX + 0x10],EAX      ; 0047bb8c
    MOV dword ptr [EDX + 0xc],EAX       ; 0047bb8f
    MOV dword ptr [EDX + 0x8],EAX       ; 0047bb92
    MOV EAX,dword ptr [ESP + 0xe8]      ; 0047bb95
    MOV dword ptr [EAX + 0x4],0x0       ; 0047bb9c
    MOV EAX,dword ptr [ESP + 0x9c]      ; 0047bba3
    DEC dword ptr [EAX + 0x558c]        ; 0047bbaa
    JMP 0x0047b333                      ; 0047bbb0
        ;   XREF to: 0047b333 (UNCONDITIONAL_JUMP)  ; LAB_0047b333

