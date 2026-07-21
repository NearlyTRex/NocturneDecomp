; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_morph_cpp_CMorphModel_addPartFromPolygon_FUN_004df2f0(int *param_1,int param_2,int param_3,int param_4,int param_5,int param_6,undefined4 param_7,undefined4 param_8)
;
;
; XREF[2]:
;   core_morph.cpp_CMorphModel_addPartFromKeyFramedModel_FUN_004df610 at 004df64e
;   core_morph.cpp_CMorph_setupModelFromTriPolygons_FUN_004e00b0 at 004e00f9
;
; Referenced Globals:
;   string s_..\\core\\morph.cpp_0058aa7c
;   string s_CMorphModel::addPart_-_too_many_p_0058aa8e
;   string s_..\\core\\morph.cpp_0058aab5
;   string s_CMorphModel::setup_-_out_of_memo_0058aac7
;   undefined4 DAT_01cc4800
;   undefined4 DAT_01cc4804
;
; Called Functions:
;   core_morph.cpp_CMorphModel_animateFromVertexBuffer_FUN_004df660
;   crt_memory.c_realloc_FUN_00564a70
;   FUN_004c8440
;   FUN_004df800
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004df2f0
        ;   Label: core_morph.cpp_CMorphModel_addPartFromPolygon_FUN_004df2f0
    PUSH ESI                            ; 004df2f1
    PUSH EDI                            ; 004df2f2
    PUSH EBP                            ; 004df2f3
    MOV ESI,dword ptr [ESP + 0x14]      ; 004df2f4
    MOV EBP,dword ptr [ESP + 0x24]      ; 004df2f8
    CMP dword ptr [ESI],0x5             ; 004df2fc
    JGE 0x004df406                      ; 004df2ff
        ;   XREF to: 004df406 (CONDITIONAL_JUMP)  ; LAB_004df406
    MOV EDI,dword ptr [ESP + 0x28]      ; 004df305
        ;   Label: LAB_004df305
    MOV EAX,dword ptr [ESP + 0x20]      ; 004df309
    MOV EDX,EBP                         ; 004df30d
    XOR ECX,ECX                         ; 004df30f
    TEST EAX,EAX                        ; 004df311
    JLE 0x004df330                      ; 004df313
        ;   XREF to: 004df330 (CONDITIONAL_JUMP)  ; LAB_004df330
    MOV EBX,dword ptr [EDX + 0x4]       ; 004df315
        ;   Label: LAB_004df315
    DEC EAX                             ; 004df318
    SUB EBX,0x2                         ; 004df319
    ADD EDX,EDI                         ; 004df31c
    ADD ECX,EBX                         ; 004df31e
    TEST EAX,EAX                        ; 004df320
    JG 0x004df315                       ; 004df322
        ;   XREF to: 004df315 (CONDITIONAL_JUMP)  ; LAB_004df315
    LEA EAX,[EAX]                       ; 004df324
    LEA EDX,[EDX]                       ; 004df32a
    MOV EAX,dword ptr [ESI]             ; 004df330
        ;   Label: LAB_004df330
    SHL EAX,0x4                         ; 004df332
    LEA EDX,[ESI + EAX*0x1]             ; 004df335
    MOV EAX,dword ptr [ESI + 0x54]      ; 004df338
    MOV dword ptr [EDX + 0xc],EAX       ; 004df33b
    MOV EAX,dword ptr [ESI]             ; 004df33e
    SHL EAX,0x4                         ; 004df340
    MOV EDX,dword ptr [ESP + 0x18]      ; 004df343
    MOV dword ptr [ESI + EAX*0x1 + 0x4],EDX ; 004df347
    MOV EAX,dword ptr [ESI]             ; 004df34b
    SHL EAX,0x4                         ; 004df34d
    MOV EDX,dword ptr [ESI + 0x5c]      ; 004df350
    MOV dword ptr [ESI + EAX*0x1 + 0x10],EDX ; 004df353
    MOV EAX,dword ptr [ESI]             ; 004df357
    SHL EAX,0x4                         ; 004df359
    MOV dword ptr [ESI + EAX*0x1 + 0x8],ECX ; 004df35c
    MOV EAX,dword ptr [ESI]             ; 004df360
    SHL EAX,0x4                         ; 004df362
    MOV EDI,dword ptr [ESI + 0x54]      ; 004df365
    ADD EDI,dword ptr [ESI + EAX*0x1 + 0x4] ; 004df368
    MOV EAX,dword ptr [ESI]             ; 004df36c
    MOV dword ptr [ESI + 0x54],EDI      ; 004df36e
    SHL EAX,0x4                         ; 004df371
    MOV EDX,dword ptr [ESI + 0x5c]      ; 004df374
    ADD EDX,dword ptr [ESI + EAX*0x1 + 0x8] ; 004df377
    MOV EAX,dword ptr [ESI + 0x54]      ; 004df37b
    SHL EAX,0x4                         ; 004df37e
    PUSH EAX                            ; 004df381
    MOV ECX,dword ptr [ESI + 0x58]      ; 004df382
    PUSH ECX                            ; 004df385
    MOV dword ptr [ESI + 0x5c],EDX      ; 004df386
    CALL crt_memory.c_realloc_FUN_00564a70 ; 004df389
        ;   XREF to: 00564a70 (UNCONDITIONAL_CALL)  ; undefined crt_memory.c_realloc_FUN_00564a70()
    MOV dword ptr [ESI + 0x58],EAX      ; 004df38e
    MOV EAX,dword ptr [ESI + 0x5c]      ; 004df391
    SHL EAX,0x2                         ; 004df394
    MOV EDX,EAX                         ; 004df397
    SHL EAX,0x4                         ; 004df399
    ADD ESP,0x8                         ; 004df39c
    SUB EAX,EDX                         ; 004df39f
    PUSH EAX                            ; 004df3a1
    MOV EBX,dword ptr [ESI + 0x60]      ; 004df3a2
    PUSH EBX                            ; 004df3a5
    CALL crt_memory.c_realloc_FUN_00564a70 ; 004df3a6
        ;   XREF to: 00564a70 (UNCONDITIONAL_CALL)  ; undefined crt_memory.c_realloc_FUN_00564a70()
    ADD ESP,0x8                         ; 004df3ab
    MOV EDI,dword ptr [ESI]             ; 004df3ae
    MOV dword ptr [ESI + 0x60],EAX      ; 004df3b0
    INC EDI                             ; 004df3b3
    MOV EAX,dword ptr [ESI + 0x58]      ; 004df3b4
    MOV dword ptr [ESI],EDI             ; 004df3b7
    TEST EAX,EAX                        ; 004df3b9
    JNZ 0x004df42e                      ; 004df3bb
        ;   XREF to: 004df42e (CONDITIONAL_JUMP)  ; LAB_004df42e
    MOV ECX,0x58aab5                    ; 004df3bd | = "..\\core\\morph.cpp"
        ;   Label: LAB_004df3bd
    MOV EBX,0x90                        ; 004df3c2
    PUSH 0x58aac7                       ; 004df3c7 | = "CMorphModel::setup - out of memory!"
    MOV dword ptr [0x01cc4800],ECX      ; 004df3cc | DAT_01cc4800
    MOV dword ptr [0x01cc4804],EBX      ; 004df3d2 | DAT_01cc4804
    CALL FUN_004c8440                   ; 004df3d8
        ;   XREF to: 004c8440 (UNCONDITIONAL_CALL)  ; undefined FUN_004c8440()
    ADD ESP,0x4                         ; 004df3dd
    MOV EDI,dword ptr [ESP + 0x1c]      ; 004df3e0
        ;   Label: LAB_004df3e0
    TEST EDI,EDI                        ; 004df3e4
    JZ 0x004df3fd                       ; 004df3e6
        ;   XREF to: 004df3fd (CONDITIONAL_JUMP)  ; LAB_004df3fd
    MOV EAX,dword ptr [ESP + 0x18]      ; 004df3e8
    PUSH EAX                            ; 004df3ec
    PUSH 0x0                            ; 004df3ed
    MOV EAX,dword ptr [ESI]             ; 004df3ef
    PUSH EDI                            ; 004df3f1
    DEC EAX                             ; 004df3f2
    PUSH EAX                            ; 004df3f3
    PUSH ESI                            ; 004df3f4
    CALL core_morph.cpp_CMorphModel_animateFromVertexBuffer_FUN_004df660 ; 004df3f5
        ;   XREF to: 004df660 (UNCONDITIONAL_CALL)  ; undefined core_morph.cpp_CMorphModel_animateFromVertexBuffer_FUN_004df660()
    ADD ESP,0x14                        ; 004df3fa
    TEST EBP,EBP                        ; 004df3fd
        ;   Label: LAB_004df3fd
    JNZ 0x004df436                      ; 004df3ff
        ;   XREF to: 004df436 (CONDITIONAL_JUMP)  ; LAB_004df436
    POP EBP                             ; 004df401
    POP EDI                             ; 004df402
    POP ESI                             ; 004df403
    POP EBX                             ; 004df404
    RET                                 ; 004df405
    MOV ECX,0x58aa7c                    ; 004df406 | = "..\\core\\morph.cpp"
        ;   Label: LAB_004df406
    MOV EBX,0x77                        ; 004df40b
    PUSH 0x58aa8e                       ; 004df410 | = "CMorphModel::addPart - too many parts!"
    MOV dword ptr [0x01cc4800],ECX      ; 004df415 | DAT_01cc4800
    MOV dword ptr [0x01cc4804],EBX      ; 004df41b | DAT_01cc4804
    CALL FUN_004c8440                   ; 004df421
        ;   XREF to: 004c8440 (UNCONDITIONAL_CALL)  ; undefined FUN_004c8440()
    ADD ESP,0x4                         ; 004df426
    JMP 0x004df305                      ; 004df429
        ;   XREF to: 004df305 (UNCONDITIONAL_JUMP)  ; LAB_004df305
    CMP dword ptr [ESI + 0x60],0x0      ; 004df42e
        ;   Label: LAB_004df42e
    JZ 0x004df3bd                       ; 004df432
        ;   XREF to: 004df3bd (CONDITIONAL_JUMP)  ; LAB_004df3bd
    JMP 0x004df3e0                      ; 004df434
        ;   XREF to: 004df3e0 (UNCONDITIONAL_JUMP)  ; LAB_004df3e0
    MOV ECX,dword ptr [ESP + 0x20]      ; 004df436
        ;   Label: LAB_004df436
    PUSH ECX                            ; 004df43a
    PUSH 0x0                            ; 004df43b
    MOV EBX,dword ptr [ESP + 0x38]      ; 004df43d
    PUSH EBX                            ; 004df441
    MOV EDI,dword ptr [ESP + 0x38]      ; 004df442
    PUSH EDI                            ; 004df446
    MOV EAX,dword ptr [ESP + 0x38]      ; 004df447
    PUSH EAX                            ; 004df44b
    MOV EAX,dword ptr [ESI]             ; 004df44c
    PUSH EBP                            ; 004df44e
    DEC EAX                             ; 004df44f
    PUSH EAX                            ; 004df450
    PUSH ESI                            ; 004df451
    CALL FUN_004df800                   ; 004df452
        ;   XREF to: 004df800 (UNCONDITIONAL_CALL)  ; undefined FUN_004df800()
    ADD ESP,0x20                        ; 004df457
    POP EBP                             ; 004df45a
    POP EDI                             ; 004df45b
    POP ESI                             ; 004df45c
    POP EBX                             ; 004df45d
    RET                                 ; 004df45e

