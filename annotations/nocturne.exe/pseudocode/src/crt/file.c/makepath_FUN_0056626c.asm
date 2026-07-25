; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl crt_file_c_makepath_FUN_0056626c(byte *param_1,byte *param_2,char *param_3,char *param_4,byte *param_5)
;
; Local Variables:
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[9]:
;   FUN_00470730 at 004708d6
;   FUN_00474ae0 at 00474b40
;   core_mission.cpp_CDemonMission_loadScript_FUN_004d86d0 at 004d86ef
;   engine_font.cpp_CBitFont_loadBitmap_FUN_0048ff70 at 004900dd
;   shape_edittool.cpp_CEditorTools_showFileSelectionDialog_FUN_00470550 at 0047061d
;   shape_edittool.cpp_CStrList_insertSortedFileRecord_FUN_00474460 at 004744fe
;   shape_edittool.cpp_CStrList_populateFromFileSearch_FUN_004746b0 at 00474794
;   shape_edittool.cpp_CStrList_populateFromFilesNoDuplicates_FUN_004748b0 at 00474994
;   sound_sndmain.cpp_CSfxSample_parseConfigFile_FUN_00521e10 at 00521e91
;
; Called Functions:
;   FUN_00566250
;   FUN_0056d9f0
;   FUN_0056da30
;   FUN_0056da50
;   FUN_0056da80
;   FUN_0056dab0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0056626c
        ;   Label: crt_file.c_makepath_FUN_0056626c
    PUSH ESI                            ; 0056626d
    PUSH EDI                            ; 0056626e
    PUSH EBP                            ; 0056626f
    SUB ESP,0x8                         ; 00566270
    MOV EBX,dword ptr [ESP + 0x1c]      ; 00566273
    MOV EDX,dword ptr [ESP + 0x20]      ; 00566277
    MOV EBP,dword ptr [ESP + 0x2c]      ; 0056627b
    XOR ECX,ECX                         ; 0056627f
    MOV dword ptr [ESP + 0x4],EBX       ; 00566281
    MOV dword ptr [ESP],ECX             ; 00566285
    TEST EDX,EDX                        ; 00566288
    JZ 0x005662da                       ; 0056628a
        ;   XREF to: 005662da (CONDITIONAL_JUMP)  ; LAB_005662da
    MOV AH,byte ptr [EDX]               ; 0056628c
    TEST AH,AH                          ; 0056628e
    JZ 0x005662da                       ; 00566290
        ;   XREF to: 005662da (CONDITIONAL_JUMP)  ; LAB_005662da
    CMP AH,0x5c                         ; 00566292
    JNZ 0x005662d0                      ; 00566295
        ;   XREF to: 005662d0 (CONDITIONAL_JUMP)  ; LAB_005662d0
    CMP AH,byte ptr [EDX + 0x1]         ; 00566297
    JNZ 0x005662d0                      ; 0056629a
        ;   XREF to: 005662d0 (CONDITIONAL_JUMP)  ; LAB_005662d0
    MOV ESI,EDX                         ; 0056629c
    MOV EDI,EBX                         ; 0056629e
    PUSH EDI                            ; 005662a0
    MOV AL,byte ptr [ESI]               ; 005662a1
        ;   Label: LAB_005662a1
    MOV byte ptr [EDI],AL               ; 005662a3
    CMP AL,0x0                          ; 005662a5
    JZ 0x005662b9                       ; 005662a7
        ;   XREF to: 005662b9 (CONDITIONAL_JUMP)  ; LAB_005662b9
    MOV AL,byte ptr [ESI + 0x1]         ; 005662a9
    ADD ESI,0x2                         ; 005662ac
    MOV byte ptr [EDI + 0x1],AL         ; 005662af
    ADD EDI,0x2                         ; 005662b2
    CMP AL,0x0                          ; 005662b5
    JNZ 0x005662a1                      ; 005662b7
        ;   XREF to: 005662a1 (CONDITIONAL_JUMP)  ; LAB_005662a1
    POP EDI                             ; 005662b9
        ;   Label: LAB_005662b9
    MOV EDI,EDX                         ; 005662ba
    PUSH ES                             ; 005662bc
    MOV AX,DS                           ; 005662bd
    MOV ES,AX                           ; 005662bf
    SUB ECX,ECX                         ; 005662c1
    DEC ECX                             ; 005662c3
    XOR EAX,EAX                         ; 005662c4
    SCASB.REPNE ES:EDI                  ; 005662c6
    NOT ECX                             ; 005662c8
    DEC ECX                             ; 005662ca
    POP ES                              ; 005662cb
    ADD EBX,ECX                         ; 005662cc
    JMP 0x005662da                      ; 005662ce
        ;   XREF to: 005662da (UNCONDITIONAL_JUMP)  ; LAB_005662da
    INC EBX                             ; 005662d0
        ;   Label: LAB_005662d0
    MOV AL,byte ptr [EDX]               ; 005662d1
    MOV byte ptr [EBX + -0x1],AL        ; 005662d3
    MOV byte ptr [EBX],0x3a             ; 005662d6
    INC EBX                             ; 005662d9
    MOV ESI,dword ptr [ESP + 0x24]      ; 005662da
        ;   Label: LAB_005662da
    MOV byte ptr [EBX],0x0              ; 005662de
    TEST ESI,ESI                        ; 005662e1
    JZ 0x00566371                       ; 005662e3
        ;   XREF to: 00566371 (CONDITIONAL_JUMP)  ; LAB_00566371
    CMP byte ptr [ESI],0x0              ; 005662e9
    JZ 0x00566371                       ; 005662ec
        ;   XREF to: 00566371 (CONDITIONAL_JUMP)  ; LAB_00566371
    MOV EAX,ESP                         ; 005662f2
        ;   Label: LAB_005662f2
    PUSH EAX                            ; 005662f4
    MOV EDI,dword ptr [ESP + 0x28]      ; 005662f5
    PUSH EDI                            ; 005662f9
    CALL FUN_0056d9f0                   ; 005662fa
        ;   XREF to: 0056d9f0 (UNCONDITIONAL_CALL)  ; undefined FUN_0056d9f0()
    ADD ESP,0x4                         ; 005662ff
    PUSH EAX                            ; 00566302
    CALL FUN_00566250                   ; 00566303
        ;   XREF to: 00566250 (UNCONDITIONAL_CALL)  ; undefined FUN_00566250()
    ADD ESP,0x8                         ; 00566308
    PUSH EBX                            ; 0056630b
    PUSH EAX                            ; 0056630c
    CALL FUN_0056da30                   ; 0056630d
        ;   XREF to: 0056da30 (UNCONDITIONAL_CALL)  ; undefined FUN_0056da30()
    ADD ESP,0x8                         ; 00566312
    PUSH EBX                            ; 00566315
    CALL FUN_0056da50                   ; 00566316
        ;   XREF to: 0056da50 (UNCONDITIONAL_CALL)  ; undefined FUN_0056da50()
    ADD ESP,0x4                         ; 0056631b
    PUSH EBX                            ; 0056631e
    MOV byte ptr [EBX + EAX*0x1],0x0    ; 0056631f
    CALL FUN_0056da80                   ; 00566323
        ;   XREF to: 0056da80 (UNCONDITIONAL_CALL)  ; undefined FUN_0056da80()
    ADD ESP,0x4                         ; 00566328
    PUSH EDI                            ; 0056632b
    MOV EBX,EAX                         ; 0056632c
    CALL FUN_0056da80                   ; 0056632e
        ;   XREF to: 0056da80 (UNCONDITIONAL_CALL)  ; undefined FUN_0056da80()
    ADD ESP,0x4                         ; 00566333
    MOV DH,byte ptr [EAX]               ; 00566336
    MOV dword ptr [ESP + 0x24],EAX      ; 00566338
    TEST DH,DH                          ; 0056633c
    JNZ 0x005662f2                      ; 0056633e
        ;   XREF to: 005662f2 (CONDITIONAL_JUMP)  ; LAB_005662f2
    CMP dword ptr [ESP],0x0             ; 00566340
    JNZ 0x0056634d                      ; 00566344
        ;   XREF to: 0056634d (CONDITIONAL_JUMP)  ; LAB_0056634d
    MOV dword ptr [ESP],0x5c            ; 00566346
    PUSH EBX                            ; 0056634d
        ;   Label: LAB_0056634d
    MOV ESI,dword ptr [ESP + 0x8]       ; 0056634e
    PUSH ESI                            ; 00566352
    CALL FUN_0056dab0                   ; 00566353
        ;   XREF to: 0056dab0 (UNCONDITIONAL_CALL)  ; undefined FUN_0056dab0()
    ADD ESP,0x8                         ; 00566358
    MOV AL,byte ptr [EAX]               ; 0056635b
    MOV EDI,dword ptr [ESP]             ; 0056635d
    AND EAX,0xff                        ; 00566360
    CMP EAX,EDI                         ; 00566365
    JNZ 0x0056636c                      ; 00566367
        ;   XREF to: 0056636c (CONDITIONAL_JUMP)  ; LAB_0056636c
    DEC EBX                             ; 00566369
    JMP 0x00566371                      ; 0056636a
        ;   XREF to: 00566371 (UNCONDITIONAL_JUMP)  ; LAB_00566371
    MOV AL,byte ptr [ESP]               ; 0056636c
        ;   Label: LAB_0056636c
    MOV byte ptr [EBX],AL               ; 0056636f
    CMP dword ptr [ESP],0x0             ; 00566371
        ;   Label: LAB_00566371
    JNZ 0x0056637e                      ; 00566375
        ;   XREF to: 0056637e (CONDITIONAL_JUMP)  ; LAB_0056637e
    MOV dword ptr [ESP],0x5c            ; 00566377
    MOV ECX,dword ptr [ESP + 0x28]      ; 0056637e
        ;   Label: LAB_0056637e
    LEA ESI,[EBX + 0x1]                 ; 00566382
    TEST ECX,ECX                        ; 00566385
    JZ 0x00566406                       ; 00566387
        ;   XREF to: 00566406 (CONDITIONAL_JUMP)  ; LAB_00566406
    PUSH ECX                            ; 0056638d
    CALL FUN_0056d9f0                   ; 0056638e
        ;   XREF to: 0056d9f0 (UNCONDITIONAL_CALL)  ; undefined FUN_0056d9f0()
    ADD ESP,0x4                         ; 00566393
    MOV EDX,ESP                         ; 00566396
    PUSH EDX                            ; 00566398
    PUSH EAX                            ; 00566399
    CALL FUN_00566250                   ; 0056639a
        ;   XREF to: 00566250 (UNCONDITIONAL_CALL)  ; undefined FUN_00566250()
    ADD ESP,0x8                         ; 0056639f
    MOV EDX,dword ptr [ESP]             ; 005663a2
    CMP EAX,EDX                         ; 005663a5
    JZ 0x005663b3                       ; 005663a7
        ;   XREF to: 005663b3 (CONDITIONAL_JUMP)  ; LAB_005663b3
    XOR EAX,EAX                         ; 005663a9
    MOV AL,byte ptr [EBX]               ; 005663ab
    CMP EAX,EDX                         ; 005663ad
    JNZ 0x005663b3                      ; 005663af
        ;   XREF to: 005663b3 (CONDITIONAL_JUMP)  ; LAB_005663b3
    MOV EBX,ESI                         ; 005663b1
    MOV EAX,dword ptr [ESP + 0x28]      ; 005663b3
        ;   Label: LAB_005663b3
    CMP byte ptr [EAX],0x0              ; 005663b7
    JZ 0x00566413                       ; 005663ba
        ;   XREF to: 00566413 (CONDITIONAL_JUMP)  ; LAB_00566413
    MOV EAX,ESP                         ; 005663bc
    PUSH EAX                            ; 005663be
    MOV ESI,dword ptr [ESP + 0x2c]      ; 005663bf
    PUSH ESI                            ; 005663c3
    CALL FUN_0056d9f0                   ; 005663c4
        ;   XREF to: 0056d9f0 (UNCONDITIONAL_CALL)  ; undefined FUN_0056d9f0()
    ADD ESP,0x4                         ; 005663c9
    PUSH EAX                            ; 005663cc
    CALL FUN_00566250                   ; 005663cd
        ;   XREF to: 00566250 (UNCONDITIONAL_CALL)  ; undefined FUN_00566250()
    ADD ESP,0x8                         ; 005663d2
    PUSH EBX                            ; 005663d5
    PUSH EAX                            ; 005663d6
    CALL FUN_0056da30                   ; 005663d7
        ;   XREF to: 0056da30 (UNCONDITIONAL_CALL)  ; undefined FUN_0056da30()
    ADD ESP,0x8                         ; 005663dc
    PUSH EBX                            ; 005663df
    CALL FUN_0056da50                   ; 005663e0
        ;   XREF to: 0056da50 (UNCONDITIONAL_CALL)  ; undefined FUN_0056da50()
    ADD ESP,0x4                         ; 005663e5
    PUSH EBX                            ; 005663e8
    MOV byte ptr [EBX + EAX*0x1],0x0    ; 005663e9
    CALL FUN_0056da80                   ; 005663ed
        ;   XREF to: 0056da80 (UNCONDITIONAL_CALL)  ; undefined FUN_0056da80()
    ADD ESP,0x4                         ; 005663f2
    PUSH ESI                            ; 005663f5
    MOV EBX,EAX                         ; 005663f6
    CALL FUN_0056da80                   ; 005663f8
        ;   XREF to: 0056da80 (UNCONDITIONAL_CALL)  ; undefined FUN_0056da80()
    ADD ESP,0x4                         ; 005663fd
    MOV dword ptr [ESP + 0x28],EAX      ; 00566400
    JMP 0x005663b3                      ; 00566404
        ;   XREF to: 005663b3 (UNCONDITIONAL_JUMP)  ; LAB_005663b3
    XOR EAX,EAX                         ; 00566406
        ;   Label: LAB_00566406
    MOV EDI,dword ptr [ESP]             ; 00566408
    MOV AL,byte ptr [EBX]               ; 0056640b
    CMP EAX,EDI                         ; 0056640d
    JNZ 0x00566413                      ; 0056640f
        ;   XREF to: 00566413 (CONDITIONAL_JUMP)  ; LAB_00566413
    MOV EBX,ESI                         ; 00566411
    TEST EBP,EBP                        ; 00566413
        ;   Label: LAB_00566413
    JZ 0x00566435                       ; 00566415
        ;   XREF to: 00566435 (CONDITIONAL_JUMP)  ; LAB_00566435
    MOV CH,byte ptr [EBP]               ; 00566417
    TEST CH,CH                          ; 0056641a
    JZ 0x00566435                       ; 0056641c
        ;   XREF to: 00566435 (CONDITIONAL_JUMP)  ; LAB_00566435
    CMP CH,0x2e                         ; 0056641e
    JZ 0x00566427                       ; 00566421
        ;   XREF to: 00566427 (CONDITIONAL_JUMP)  ; LAB_00566427
    MOV byte ptr [EBX],0x2e             ; 00566423
    INC EBX                             ; 00566426
    MOV AH,byte ptr [EBP]               ; 00566427
        ;   Label: LAB_00566427
    TEST AH,AH                          ; 0056642a
    JZ 0x00566435                       ; 0056642c
        ;   XREF to: 00566435 (CONDITIONAL_JUMP)  ; LAB_00566435
    INC EBX                             ; 0056642e
    INC EBP                             ; 0056642f
    MOV byte ptr [EBX + -0x1],AH        ; 00566430
    JMP 0x00566427                      ; 00566433
        ;   XREF to: 00566427 (UNCONDITIONAL_JUMP)  ; LAB_00566427
    MOV byte ptr [EBX],0x0              ; 00566435
        ;   Label: LAB_00566435
    ADD ESP,0x8                         ; 00566438
    POP EBP                             ; 0056643b
    POP EDI                             ; 0056643c
    POP ESI                             ; 0056643d
    POP EBX                             ; 0056643e
    RET                                 ; 0056643f

