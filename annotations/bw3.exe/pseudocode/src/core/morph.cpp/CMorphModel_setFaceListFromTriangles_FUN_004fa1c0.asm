; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_morph_cpp_CMorphModel_setFaceListFromTriangles_FUN_004fa1c0(CMorphModel *this_ptr,int part_index,SInputFace *face_data,STextureSet *texture_sets ,int *index_data,int start_face,int face_count)
;
; Parameters:
; CMorphModel *    Stack[0x4]:4   this_ptr
; int              Stack[0x8]:4   part_index
; SInputFace *     Stack[0xc]:4   face_data
; STextureSet *    Stack[0x10]:4   texture_sets
; int *            Stack[0x14]:4   index_data
; int              Stack[0x18]:4   start_face
; int              Stack[0x1c]:4   face_count
; Local Variables:
; undefined4       Stack[-0x28]:4  local_28
; undefined4       Stack[-0x24]:4  local_24
; undefined4       Stack[-0x20]:4  local_20
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[1]:
;   core_morph.cpp_CMorphModel_addPartFromVertexBuffer_FUN_004f9c40 at 004f9d77
;
; Referenced Globals:
;   TerminatedCString s_core_morph_cpp_005c95d5
;   TerminatedCString s_CMorphModel_setFaceList_005c95e7
;   TerminatedCString s_core_morph_cpp_005c9615
;   TerminatedCString s_CMorphModel_setFaceList_005c9627
;   undefined4 DAT_01d71de0
;   undefined4 DAT_01d71de4
;   undefined4 DAT_01d8e408
;
; Called Functions:
;   core_main.c_FUN_004e4330
;   core_morph.cpp_CMorphModel_findOrAddTexture_FUN_004fa380
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004fa1c0
        ;   Label: core_morph.cpp_CMorphModel_setFaceListFromTriangles_FUN_004fa1c0
    PUSH ESI                            ; 004fa1c1
    PUSH EDI                            ; 004fa1c2
    PUSH EBP                            ; 004fa1c3
    SUB ESP,0x18                        ; 004fa1c4
    MOV EBX,dword ptr [ESP + 0x2c]      ; 004fa1c7
    MOV ESI,dword ptr [ESP + 0x30]      ; 004fa1cb
    MOV EDI,dword ptr [ESP + 0x40]      ; 004fa1cf
    TEST ESI,ESI                        ; 004fa1d3
    JL 0x004fa1db                       ; 004fa1d5
        ;   XREF to: 004fa1db (CONDITIONAL_JUMP)  ; LAB_004fa1db
    CMP ESI,dword ptr [EBX]             ; 004fa1d7
    JL 0x004fa1fe                       ; 004fa1d9
        ;   XREF to: 004fa1fe (CONDITIONAL_JUMP)  ; LAB_004fa1fe
    MOV ECX,0x5c95d5                    ; 004fa1db | = "..\\core\\morph.cpp"
        ;   Label: LAB_004fa1db
    MOV EBP,0x191                       ; 004fa1e0
    PUSH 0x5c95e7                       ; 004fa1e5 | = "CMorphModel::setFaceList - invalid pa..."
    MOV dword ptr [0x01d71de0],ECX      ; 004fa1ea | DAT_01d71de0
    MOV dword ptr [0x01d71de4],EBP      ; 004fa1f0 | DAT_01d71de4
    CALL core_main.c_FUN_004e4330       ; 004fa1f6
        ;   XREF to: 004e4330 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_004e4330()
    ADD ESP,0x4                         ; 004fa1fb
    MOV EAX,ESI                         ; 004fa1fe
        ;   Label: LAB_004fa1fe
    SHL EAX,0x4                         ; 004fa200
    MOV EDX,dword ptr [EBX + EAX*0x1 + 0x10] ; 004fa203
    MOV ECX,dword ptr [EBX + EAX*0x1 + 0x8] ; 004fa207
    MOV EAX,dword ptr [ESP + 0x44]      ; 004fa20b
    ADD EDI,EDX                         ; 004fa20f
    ADD EDX,ECX                         ; 004fa211
    ADD EAX,EDI                         ; 004fa213
    CMP EAX,EDX                         ; 004fa215
    JLE 0x004fa23b                      ; 004fa217
        ;   XREF to: 004fa23b (CONDITIONAL_JUMP)  ; LAB_004fa23b
    MOV EBP,0x5c9615                    ; 004fa219 | = "..\\core\\morph.cpp"
    MOV EAX,0x198                       ; 004fa21e
    PUSH 0x5c9627                       ; 004fa223 | = "CMorphModel::setFaceList - invalid ve..."
    MOV dword ptr [0x01d71de0],EBP      ; 004fa228 | DAT_01d71de0
    MOV [0x01d71de4],EAX                ; 004fa22e | DAT_01d71de4
    CALL core_main.c_FUN_004e4330       ; 004fa233
        ;   XREF to: 004e4330 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_004e4330()
    ADD ESP,0x4                         ; 004fa238
    MOV EAX,dword ptr [ESP + 0x34]      ; 004fa23b
        ;   Label: LAB_004fa23b
    XOR EDX,EDX                         ; 004fa23f
    MOV ECX,dword ptr [ESP + 0x44]      ; 004fa241
    MOV dword ptr [ESP + 0xc],EDX       ; 004fa245
    MOV dword ptr [ESP + 0x4],EAX       ; 004fa249
    TEST ECX,ECX                        ; 004fa24d
    JLE 0x004fa370                      ; 004fa24f
        ;   XREF to: 004fa370 (CONDITIONAL_JUMP)  ; LAB_004fa370
    SHL ESI,0x4                         ; 004fa255
    LEA EAX,[EBX + ESI*0x1]             ; 004fa258
    MOV dword ptr [ESP + 0x10],EAX      ; 004fa25b
    LEA EAX,[EDI*0x4 + 0x0]             ; 004fa25f
    MOV EDX,EAX                         ; 004fa266
    SHL EAX,0x4                         ; 004fa268
    SUB EAX,EDX                         ; 004fa26b
    MOV dword ptr [ESP + 0x14],EAX      ; 004fa26d
    MOV EAX,dword ptr [ESP + 0x3c]      ; 004fa271
    MOV dword ptr [ESP + 0x8],EAX       ; 004fa275
    MOV EAX,dword ptr [ESP + 0x8]       ; 004fa279
        ;   Label: LAB_004fa279
    IMUL EAX,dword ptr [EAX],0x48       ; 004fa27d
    ADD EAX,dword ptr [ESP + 0x38]      ; 004fa280
    ADD EAX,0x8                         ; 004fa284
    PUSH EAX                            ; 004fa287
    PUSH EBX                            ; 004fa288
    CALL core_morph.cpp_CMorphModel_findOrAddTexture_FUN_004fa380 ; 004fa289
        ;   XREF to: 004fa380 (UNCONDITIONAL_CALL)  ; int core_morph.cpp_CMorphModel_findOrAddTexture_FUN_004fa380(CMorphModel * this_ptr, char * filename)
    ADD ESP,0x8                         ; 004fa28e
    MOV EDI,dword ptr [ESP + 0x14]      ; 004fa291
    MOV dword ptr [ESP],EAX             ; 004fa295
    MOV EAX,dword ptr [EBX + 0x60]      ; 004fa298
    ADD EAX,EDI                         ; 004fa29b
    XOR EDX,EDX                         ; 004fa29d
    MOV ESI,EDI                         ; 004fa29f
    MOV dword ptr [EAX + 0x4],0x3       ; 004fa2a1
    MOV EAX,dword ptr [ESP + 0x4]       ; 004fa2a8
    CMP dword ptr [0x01d8e408],0x0      ; 004fa2ac | DAT_01d8e408
        ;   Label: LAB_004fa2ac
    JZ 0x004fa378                       ; 004fa2b3
        ;   XREF to: 004fa378 (CONDITIONAL_JUMP)  ; LAB_004fa378
    MOV ECX,0x2                         ; 004fa2b9
    SUB ECX,EDX                         ; 004fa2be
    IMUL ECX,ECX,0xc                    ; 004fa2c0
        ;   Label: LAB_004fa2c0
    MOV EDI,dword ptr [EBX + 0x60]      ; 004fa2c3
    ADD EDI,ESI                         ; 004fa2c6
    MOVZX EBP,word ptr [EAX]            ; 004fa2c8
    MOV dword ptr [ECX + EDI*0x1 + 0x18],EBP ; 004fa2cb
    ADD EAX,0x2                         ; 004fa2cf
    MOV EDI,dword ptr [EBX + 0x60]      ; 004fa2d2
    MOVZX EBP,word ptr [EAX + 0x4]      ; 004fa2d5
    ADD EDI,ESI                         ; 004fa2d9
    SHL EBP,0x8                         ; 004fa2db
    INC EDX                             ; 004fa2de
    MOV dword ptr [ECX + EDI*0x1 + 0x1c],EBP ; 004fa2df
    MOV EBP,dword ptr [EBX + 0x60]      ; 004fa2e3
    XOR EDI,EDI                         ; 004fa2e6
    ADD EBP,ESI                         ; 004fa2e8
    MOV DI,word ptr [EAX + 0xa]         ; 004fa2ea
    ADD ECX,EBP                         ; 004fa2ee
    SHL EDI,0x8                         ; 004fa2f0
    MOV dword ptr [ECX + 0x20],EDI      ; 004fa2f3
    CMP EDX,0x3                         ; 004fa2f6
    JL 0x004fa2ac                       ; 004fa2f9
        ;   XREF to: 004fa2ac (CONDITIONAL_JUMP)  ; LAB_004fa2ac
    MOV EAX,dword ptr [EBX + 0x60]      ; 004fa2fb
    MOV EDX,dword ptr [ESP]             ; 004fa2fe
    MOV dword ptr [ESI + EAX*0x1],EDX   ; 004fa301
    MOV EDX,dword ptr [ESP + 0x10]      ; 004fa304
    MOV EAX,dword ptr [EBX + 0x60]      ; 004fa308
    MOV EDX,dword ptr [EDX + 0xc]       ; 004fa30b
    ADD dword ptr [ESI + EAX*0x1 + 0x18],EDX ; 004fa30e
    MOV EDX,dword ptr [ESP + 0x10]      ; 004fa312
    MOV EAX,dword ptr [EBX + 0x60]      ; 004fa316
    MOV ECX,dword ptr [ESP + 0x14]      ; 004fa319
    MOV EDX,dword ptr [EDX + 0xc]       ; 004fa31d
    MOV EBP,dword ptr [ESI + EAX*0x1 + 0x24] ; 004fa320
    ADD ECX,0x3c                        ; 004fa324
    ADD EBP,EDX                         ; 004fa327
    MOV dword ptr [ESP + 0x14],ECX      ; 004fa329
    MOV dword ptr [ESI + EAX*0x1 + 0x24],EBP ; 004fa32d
    MOV EDI,dword ptr [ESP + 0x8]       ; 004fa331
    MOV EAX,dword ptr [EBX + 0x60]      ; 004fa335
    ADD EDI,0x4                         ; 004fa338
    ADD ESI,EAX                         ; 004fa33b
    MOV EAX,dword ptr [ESP + 0x10]      ; 004fa33d
    MOV dword ptr [ESP + 0x8],EDI       ; 004fa341
    MOV EDX,dword ptr [ESI + 0x30]      ; 004fa345
    MOV EAX,dword ptr [EAX + 0xc]       ; 004fa348
    MOV EBP,dword ptr [ESP + 0xc]       ; 004fa34b
    ADD EDX,EAX                         ; 004fa34f
    INC EBP                             ; 004fa351
    MOV dword ptr [ESI + 0x30],EDX      ; 004fa352
    MOV ESI,dword ptr [ESP + 0x4]       ; 004fa355
    MOV dword ptr [ESP + 0xc],EBP       ; 004fa359
    ADD ESI,0x12                        ; 004fa35d
    MOV EDX,dword ptr [ESP + 0x44]      ; 004fa360
    MOV dword ptr [ESP + 0x4],ESI       ; 004fa364
    CMP EBP,EDX                         ; 004fa368
    JL 0x004fa279                       ; 004fa36a
        ;   XREF to: 004fa279 (CONDITIONAL_JUMP)  ; LAB_004fa279
    ADD ESP,0x18                        ; 004fa370
        ;   Label: LAB_004fa370
    POP EBP                             ; 004fa373
    POP EDI                             ; 004fa374
    POP ESI                             ; 004fa375
    POP EBX                             ; 004fa376
    RET                                 ; 004fa377
    MOV ECX,EDX                         ; 004fa378
        ;   Label: LAB_004fa378
    JMP 0x004fa2c0                      ; 004fa37a
        ;   XREF to: 004fa2c0 (UNCONDITIONAL_JUMP)  ; LAB_004fa2c0

