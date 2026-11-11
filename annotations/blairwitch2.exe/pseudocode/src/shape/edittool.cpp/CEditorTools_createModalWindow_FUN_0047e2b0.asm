; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl shape_edittool_cpp_CEditorTools_createModalWindow_FUN_0047e2b0(CEditorTools *this_ptr,int left,int top,int right,int bottom,char *text_content,uint window_flags)
;
; Parameters:
; CEditorTools *   Stack[0x4]:4   this_ptr
; int              Stack[0x8]:4   left
; int              Stack[0xc]:4   top
; int              Stack[0x10]:4   right
; int              Stack[0x14]:4   bottom
; char *           Stack[0x18]:4   text_content
; uint             Stack[0x1c]:4   window_flags
; Local Variables:
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
; XREF[1]:
;   shape_edittool.cpp_CEditorTools_createCenteredModal_FUN_0047e1d0 at 0047e274
;
; Referenced Globals:
;   TerminatedCString s_shape_edittool_cpp_005d1e6f
;   TerminatedCString s_gEdFont_must_be_set_by_t_005d1e85
;   TerminatedCString s_shape_edittool_cpp_005d2357
;   TerminatedCString s_Can_t_open_another_windo_005d236d
;   undefined4 DAT_005d2388
;   undefined4 DAT_005d238c
;   undefined4 DAT_006141b8
;   undefined4 DAT_006141bc
;   undefined4 DAT_006141c0
;   undefined4 DAT_01c25590
;   undefined4 DAT_01c2559c
;   undefined4 DAT_01c25f78
;   undefined4 DAT_01c25f7c
;   undefined4 DAT_01c25f84
;   undefined4 DAT_01c2a38c
;   ... and 12 more
;
; Called Functions:
;   core_main.c_FUN_004e4500
;   crt_memory.c_malloc_FUN_005b8580
;   crt_unknown.c_sprintf_FUN_005b7790
;   engine_2d.c_setupViewportAndClipping_FUN_00401810
;   engine_font.cpp_CBitFont_getCharHeight_FUN_004ab560
;   engine_font.cpp_CBitFont_getTextHeight_FUN_004aafb0
;   engine_font.cpp_FUN_004ab2b0
;   shape_edittool.cpp_CEditorTools_backupScreen_FUN_0047baf0
;   unkafter_minecar.cpp_getRenderViewport_FUN_004f2ba0
;   unkafter_minecar.cpp_setRenderViewport_FUN_004f2ac0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0047e2b0
        ;   Label: shape_edittool.cpp_CEditorTools_createModalWindow_FUN_0047e2b0
    PUSH ESI                            ; 0047e2b1
    PUSH EDI                            ; 0047e2b2
    PUSH EBP                            ; 0047e2b3
    SUB ESP,0x1c                        ; 0047e2b4
    MOV EDI,dword ptr [ESP + 0x44]      ; 0047e2b7
    CMP dword ptr [0x01c25590],0x0      ; 0047e2bb | DAT_01c25590
    JZ 0x0047e71e                       ; 0047e2c2
        ;   XREF to: 0047e71e (CONDITIONAL_JUMP)  ; LAB_0047e71e
    MOV EAX,[0x01c25590]                ; 0047e2c8 | DAT_01c25590
        ;   Label: LAB_0047e2c8
    PUSH 0x6a                           ; 0047e2cd
    MOV EDX,dword ptr [EAX + 0x41e8]    ; 0047e2cf
    PUSH EAX                            ; 0047e2d5
    MOV dword ptr [0x01c25f78],EDX      ; 0047e2d6 | DAT_01c25f78
    CALL engine_font.cpp_CBitFont_getCharHeight_FUN_004ab560 ; 0047e2dc
        ;   XREF to: 004ab560 (UNCONDITIONAL_CALL)  ; int engine_font.cpp_CBitFont_getCharHeight_FUN_004ab560(CBitFont * this_ptr, int char_code)
    MOV ESI,dword ptr [0x01c2559c]      ; 0047e2e1 | DAT_01c2559c
    ADD ESP,0x8                         ; 0047e2e7
    MOV [0x01c25f7c],EAX                ; 0047e2ea | DAT_01c25f7c
    CMP ESI,0x5                         ; 0047e2ef
    JL 0x0047e316                       ; 0047e2f2
        ;   XREF to: 0047e316 (CONDITIONAL_JUMP)  ; LAB_0047e316
    MOV EBP,0x5d2357                    ; 0047e2f4 | = "..\\shape\\edittool.cpp"
    MOV EAX,0x809                       ; 0047e2f9
    PUSH 0x5d236d                       ; 0047e2fe | = "Can't open another window!"
    MOV dword ptr [0x01d046a0],EBP      ; 0047e303 | DAT_01d046a0
    MOV [0x01d046a4],EAX                ; 0047e309 | DAT_01d046a4
    CALL core_main.c_FUN_004e4500       ; 0047e30e
        ;   XREF to: 004e4500 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_004e4500()
    ADD ESP,0x4                         ; 0047e313
    MOV EAX,[0x01c2559c]                ; 0047e316 | DAT_01c2559c
        ;   Label: LAB_0047e316
    SHL EAX,0x3                         ; 0047e31b
    MOV EDX,EAX                         ; 0047e31e
    SHL EAX,0x6                         ; 0047e320
    MOV EBX,0x1c255a0                   ; 0047e323
    SUB EAX,EDX                         ; 0047e328
    ADD EBX,EAX                         ; 0047e32a
    MOV EAX,[0x006141b8]                ; 0047e32c | DAT_006141b8
    MOV EDX,EAX                         ; 0047e331
    SAR EDX,0x1f                        ; 0047e333
    SHL EDX,0x7                         ; 0047e336
    SBB EAX,EDX                         ; 0047e339
    SAR EAX,0x7                         ; 0047e33b
    MOV dword ptr [ESP + 0x8],EAX       ; 0047e33e
    MOV EAX,[0x006141bc]                ; 0047e342 | DAT_006141bc
    MOV EDX,EAX                         ; 0047e347
    MOV ESI,0x60                        ; 0047e349
    SAR EDX,0x1f                        ; 0047e34e
    IDIV ESI                            ; 0047e351
    MOV ECX,dword ptr [ESP + 0x34]      ; 0047e353
    MOV EBP,dword ptr [ESP + 0x3c]      ; 0047e357
    MOV ESI,dword ptr [ESP + 0x38]      ; 0047e35b
    MOV EDX,dword ptr [0x01c2559c]      ; 0047e35f | DAT_01c2559c
    MOV dword ptr [ESP],EAX             ; 0047e365
    INC EDX                             ; 0047e368
    MOV EAX,dword ptr [ESP + 0x8]       ; 0047e369
    MOV dword ptr [0x01c2559c],EDX      ; 0047e36d | DAT_01c2559c
    SUB ECX,EAX                         ; 0047e373
    MOV EAX,dword ptr [ESP]             ; 0047e375
    MOV EDX,dword ptr [ESP + 0x40]      ; 0047e378
    SUB ESI,EAX                         ; 0047e37c
    MOV EAX,dword ptr [ESP + 0x8]       ; 0047e37e
    MOV dword ptr [ESP + 0x34],ECX      ; 0047e382
    ADD EBP,EAX                         ; 0047e386
    MOV EAX,dword ptr [ESP]             ; 0047e388
    MOV dword ptr [ESP + 0x38],ESI      ; 0047e38b
    ADD EDX,EAX                         ; 0047e38f
    MOV dword ptr [ESP + 0x3c],EBP      ; 0047e391
    MOV dword ptr [ESP + 0x40],EDX      ; 0047e395
    TEST ECX,ECX                        ; 0047e399
    JL 0x0047e746                       ; 0047e39b
        ;   XREF to: 0047e746 (CONDITIONAL_JUMP)  ; LAB_0047e746
    MOV EAX,dword ptr [ESP + 0x3c]      ; 0047e3a1
        ;   Label: LAB_0047e3a1
    MOV EBP,dword ptr [0x006141b8]      ; 0047e3a5 | DAT_006141b8
    CMP EAX,EBP                         ; 0047e3ab
    JLE 0x0047e3b3                      ; 0047e3ad
        ;   XREF to: 0047e3b3 (CONDITIONAL_JUMP)  ; LAB_0047e3b3
    MOV dword ptr [ESP + 0x3c],EBP      ; 0047e3af
    XOR EAX,EAX                         ; 0047e3b3
        ;   Label: LAB_0047e3b3
    MOV byte ptr [EBX + 0x48],0x0       ; 0047e3b5
    MOV dword ptr [ESP + 0x4],EAX       ; 0047e3b9
    TEST EDI,EDI                        ; 0047e3bd
    JZ 0x0047e4a4                       ; 0047e3bf
        ;   XREF to: 0047e4a4 (CONDITIONAL_JUMP)  ; LAB_0047e4a4
    MOV EDX,dword ptr [ESP + 0x3c]      ; 0047e3c5
    MOV ECX,dword ptr [ESP + 0x34]      ; 0047e3c9
    MOV EAX,dword ptr [ESP + 0x8]       ; 0047e3cd
    SUB EDX,ECX                         ; 0047e3d1
    ADD EAX,EAX                         ; 0047e3d3
    SUB EDX,EAX                         ; 0047e3d5
    PUSH EDX                            ; 0047e3d7
    PUSH 0xc8                           ; 0047e3d8
    PUSH 0x14                           ; 0047e3dd
    PUSH 0x1c245f0                      ; 0047e3df
    PUSH EDI                            ; 0047e3e4
    MOV ESI,dword ptr [0x01c25590]      ; 0047e3e5 | DAT_01c25590
    PUSH ESI                            ; 0047e3eb
    LEA EBP,[EBX + 0x48]                ; 0047e3ec
    CALL engine_font.cpp_FUN_004ab2b0   ; 0047e3ef
        ;   XREF to: 004ab2b0 (UNCONDITIONAL_CALL)  ; undefined engine_font.cpp_FUN_004ab2b0()
    ADD ESP,0x18                        ; 0047e3f4
    XOR EDI,EDI                         ; 0047e3f7
    MOV dword ptr [ESP + 0xc],EAX       ; 0047e3f9
    TEST EAX,EAX                        ; 0047e3fd
    JLE 0x0047e430                      ; 0047e3ff
        ;   XREF to: 0047e430 (CONDITIONAL_JUMP)  ; LAB_0047e430
    MOV ESI,0x1c245f0                   ; 0047e401
    PUSH ESI                            ; 0047e406
        ;   Label: LAB_0047e406
    PUSH 0x5d2388                       ; 0047e407 | DAT_005d2388
    PUSH EBP                            ; 0047e40c
    INC EDI                             ; 0047e40d
    CALL crt_unknown.c_sprintf_FUN_005b7790 ; 0047e40e
        ;   XREF to: 005b7790 (UNCONDITIONAL_CALL)  ; int crt_unknown.c_sprintf_FUN_005b7790(char * buffer, char * format)
    ADD ESP,0xc                         ; 0047e413
    ADD EBP,EAX                         ; 0047e416
    MOV EAX,dword ptr [ESP + 0xc]       ; 0047e418
    ADD ESI,0xc8                        ; 0047e41c
    CMP EDI,EAX                         ; 0047e422
    JL 0x0047e406                       ; 0047e424
        ;   XREF to: 0047e406 (CONDITIONAL_JUMP)  ; LAB_0047e406
    LEA EAX,[EAX]                       ; 0047e426
    LEA EDX,[EDX]                       ; 0047e42c
    CMP dword ptr [ESP + 0xc],0x0       ; 0047e430
        ;   Label: LAB_0047e430
    JLE 0x0047e4a4                      ; 0047e435
        ;   XREF to: 0047e4a4 (CONDITIONAL_JUMP)  ; LAB_0047e4a4
    LEA EAX,[EBX + 0x48]                ; 0047e437
    PUSH EAX                            ; 0047e43a
    MOV ECX,dword ptr [0x01c25590]      ; 0047e43b | DAT_01c25590
    DEC EBP                             ; 0047e441
    PUSH ECX                            ; 0047e442
    MOV byte ptr [EBP],0x0              ; 0047e443
    CALL engine_font.cpp_CBitFont_getTextHeight_FUN_004aafb0 ; 0047e447
        ;   XREF to: 004aafb0 (UNCONDITIONAL_CALL)  ; int engine_font.cpp_CBitFont_getTextHeight_FUN_004aafb0(CBitFont * this_ptr, char * text_string)
    ADD ESP,0x8                         ; 0047e44c
    MOV EDX,dword ptr [0x01c25f7c]      ; 0047e44f | DAT_01c25f7c
    PUSH 0x5d238c                       ; 0047e455 | DAT_005d238c
    MOV ESI,dword ptr [0x01c25590]      ; 0047e45a | DAT_01c25590
    ADD EDX,EAX                         ; 0047e460
    PUSH ESI                            ; 0047e462
    MOV dword ptr [ESP + 0xc],EDX       ; 0047e463
    CALL engine_font.cpp_CBitFont_getTextHeight_FUN_004aafb0 ; 0047e467
        ;   XREF to: 004aafb0 (UNCONDITIONAL_CALL)  ; int engine_font.cpp_CBitFont_getTextHeight_FUN_004aafb0(CBitFont * this_ptr, char * text_string)
    ADD ESP,0x8                         ; 0047e46c
    MOV EDI,dword ptr [0x01c25f7c]      ; 0047e46f | DAT_01c25f7c
    MOV EBP,dword ptr [ESP + 0x4]       ; 0047e475
    ADD EAX,EDI                         ; 0047e479
    CMP EAX,EBP                         ; 0047e47b
    JLE 0x0047e483                      ; 0047e47d
        ;   XREF to: 0047e483 (CONDITIONAL_JUMP)  ; LAB_0047e483
    MOV dword ptr [ESP + 0x4],EAX       ; 0047e47f
    MOV EAX,dword ptr [ESP + 0x4]       ; 0047e483
        ;   Label: LAB_0047e483
    MOV EDX,EAX                         ; 0047e487
    SAR EDX,0x1f                        ; 0047e489
    SUB EAX,EDX                         ; 0047e48c
    SAR EAX,0x1                         ; 0047e48e
    MOV ECX,dword ptr [ESP + 0x40]      ; 0047e490
    MOV EDX,dword ptr [ESP + 0x38]      ; 0047e494
    ADD ECX,EAX                         ; 0047e498
    SUB EDX,EAX                         ; 0047e49a
    MOV dword ptr [ESP + 0x40],ECX      ; 0047e49c
    MOV dword ptr [ESP + 0x38],EDX      ; 0047e4a0
    CMP dword ptr [ESP + 0x38],0x0      ; 0047e4a4
        ;   Label: LAB_0047e4a4
    JL 0x0047e751                       ; 0047e4a9
        ;   XREF to: 0047e751 (CONDITIONAL_JUMP)  ; LAB_0047e751
    MOV EAX,dword ptr [ESP + 0x40]      ; 0047e4af
        ;   Label: LAB_0047e4af
    MOV EBP,dword ptr [0x006141bc]      ; 0047e4b3 | DAT_006141bc
    CMP EAX,EBP                         ; 0047e4b9
    JLE 0x0047e4c1                      ; 0047e4bb
        ;   XREF to: 0047e4c1 (CONDITIONAL_JUMP)  ; LAB_0047e4c1
    MOV dword ptr [ESP + 0x40],EBP      ; 0047e4bd
    CMP dword ptr [0x01c25f84],0x0      ; 0047e4c1 | DAT_01c25f84
        ;   Label: LAB_0047e4c1
    JZ 0x0047e4cf                       ; 0047e4c8
        ;   XREF to: 0047e4cf (CONDITIONAL_JUMP)  ; LAB_0047e4cf
    OR byte ptr [ESP + 0x48],0x1        ; 0047e4ca
    MOV DL,byte ptr [ESP + 0x48]        ; 0047e4cf
        ;   Label: LAB_0047e4cf
    MOV dword ptr [EBX + 0x1d8],0x0     ; 0047e4d3
    TEST DL,0x1                         ; 0047e4dd
    JNZ 0x0047e5f0                      ; 0047e4e0
        ;   XREF to: 0047e5f0 (CONDITIONAL_JUMP)  ; LAB_0047e5f0
    CMP dword ptr [0x01c2559c],0x1      ; 0047e4e6 | DAT_01c2559c
    JNZ 0x0047e4fc                      ; 0047e4ed
        ;   XREF to: 0047e4fc (CONDITIONAL_JUMP)  ; LAB_0047e4fc
    MOV ECX,dword ptr [ESP + 0x30]      ; 0047e4ef
    PUSH ECX                            ; 0047e4f3
    CALL shape_edittool.cpp_CEditorTools_backupScreen_FUN_0047baf0 ; 0047e4f4
        ;   XREF to: 0047baf0 (UNCONDITIONAL_CALL)  ; void shape_edittool.cpp_CEditorTools_backupScreen_FUN_0047baf0(CEditorTools * this_ptr)
    ADD ESP,0x4                         ; 0047e4f9
    CMP dword ptr [0x01c2a38c],0x0      ; 0047e4fc | DAT_01c2a38c
        ;   Label: LAB_0047e4fc
    JZ 0x0047e5f0                       ; 0047e503
        ;   XREF to: 0047e5f0 (CONDITIONAL_JUMP)  ; LAB_0047e5f0
    MOV EAX,[0x006141b8]                ; 0047e509 | DAT_006141b8
    MOV dword ptr [EBX + 0x1e4],EAX     ; 0047e50e
    MOV EDI,dword ptr [0x006141c0]      ; 0047e514 | DAT_006141c0
    MOV EDX,dword ptr [EBX + 0x1e4]     ; 0047e51a
    IMUL EDX,EDI                        ; 0047e520
    MOV EAX,[0x006141bc]                ; 0047e523 | DAT_006141bc
    MOV dword ptr [EBX + 0x1e8],EAX     ; 0047e528
    MOV EAX,EDX                         ; 0047e52e
    SAR EDX,0x1f                        ; 0047e530
    SHL EDX,0x3                         ; 0047e533
    SBB EAX,EDX                         ; 0047e536
    SAR EAX,0x3                         ; 0047e538
    MOV dword ptr [ESP + 0x10],EAX      ; 0047e53b
    MOV EBP,dword ptr [ESP + 0x10]      ; 0047e53f
    MOV EAX,dword ptr [EBX + 0x1e8]     ; 0047e543
    IMUL EAX,EBP                        ; 0047e549
    MOV dword ptr [EBX + 0x1dc],0x0     ; 0047e54c
    PUSH EAX                            ; 0047e556
    MOV dword ptr [EBX + 0x1e0],0x0     ; 0047e557
    CALL crt_memory.c_malloc_FUN_005b8580 ; 0047e561
        ;   XREF to: 005b8580 (UNCONDITIONAL_CALL)  ; void * crt_memory.c_malloc_FUN_005b8580(ulong size)
    ADD ESP,0x4                         ; 0047e566
    MOV dword ptr [EBX + 0x1d8],EAX     ; 0047e569
    TEST EAX,EAX                        ; 0047e56f
    JZ 0x0047e5f0                       ; 0047e571
        ;   XREF to: 0047e5f0 (CONDITIONAL_JUMP)  ; LAB_0047e5f0
    MOV dword ptr [ESP + 0x14],EAX      ; 0047e577
    MOV EDX,dword ptr [EBX + 0x1e8]     ; 0047e57b
    XOR EBP,EBP                         ; 0047e581
    TEST EDX,EDX                        ; 0047e583
    JLE 0x0047e5f0                      ; 0047e585
        ;   XREF to: 0047e5f0 (CONDITIONAL_JUMP)  ; LAB_0047e5f0
    MOV ECX,dword ptr [0x006141c0]      ; 0047e587 | DAT_006141c0
        ;   Label: LAB_0047e587
    MOV EDX,dword ptr [EBX + 0x1dc]     ; 0047e58d
    IMUL EDX,ECX                        ; 0047e593
    MOV EAX,EDX                         ; 0047e596
    SAR EDX,0x1f                        ; 0047e598
    SHL EDX,0x3                         ; 0047e59b
    SBB EAX,EDX                         ; 0047e59e
    SAR EAX,0x3                         ; 0047e5a0
    MOV ESI,dword ptr [EBX + 0x1e0]     ; 0047e5a3
    ADD ESI,EBP                         ; 0047e5a9
    MOV EDI,dword ptr [ESP + 0x14]      ; 0047e5ab
    MOV ESI,dword ptr [ESI*0x4 + 0x1c2a38c] ; 0047e5af | DAT_01c2a38c
    MOV ECX,dword ptr [ESP + 0x10]      ; 0047e5b6
    ADD ESI,EAX                         ; 0047e5ba
    PUSH EDI                            ; 0047e5bc
    MOV EAX,ECX                         ; 0047e5bd
    SHR ECX,0x2                         ; 0047e5bf
    MOVSD.REP ES:EDI,ESI                ; 0047e5c2
    MOV CL,AL                           ; 0047e5c4
    AND CL,0x3                          ; 0047e5c6
    MOVSB.REP ES:EDI,ESI                ; 0047e5c9
    POP EDI                             ; 0047e5cb
    MOV EAX,dword ptr [ESP + 0x10]      ; 0047e5cc
    LEA ESI,[EDI + EAX*0x1]             ; 0047e5d0
    INC EBP                             ; 0047e5d3
    MOV EDI,dword ptr [EBX + 0x1e8]     ; 0047e5d4
    MOV dword ptr [ESP + 0x14],ESI      ; 0047e5da
    CMP EBP,EDI                         ; 0047e5de
    JL 0x0047e587                       ; 0047e5e0
        ;   XREF to: 0047e587 (CONDITIONAL_JUMP)  ; LAB_0047e587
    LEA EAX,[EAX]                       ; 0047e5e2
    LEA EDX,[EDX]                       ; 0047e5e8
    MOV EAX,EAX                         ; 0047e5ee
    MOV EAX,[0x01c35e48]                ; 0047e5f0 | DAT_01c35e48
        ;   Label: LAB_0047e5f0
    MOV dword ptr [EBX + 0x10],EAX      ; 0047e5f5
    MOV EAX,[0x01c35e4c]                ; 0047e5f8 | DAT_01c35e4c
    MOV dword ptr [EBX + 0x14],EAX      ; 0047e5fd
    MOV EAX,[0x01c35e50]                ; 0047e600 | DAT_01c35e50
    MOV dword ptr [EBX + 0x18],EAX      ; 0047e605
    MOV EAX,[0x01c35e54]                ; 0047e608 | DAT_01c35e54
    MOV dword ptr [EBX + 0x1c],EAX      ; 0047e60d
    MOV EAX,[0x01c35e38]                ; 0047e610 | DAT_01c35e38
    MOV dword ptr [EBX + 0x30],EAX      ; 0047e615
    MOV EAX,[0x01c35e3c]                ; 0047e618 | DAT_01c35e3c
    MOV dword ptr [EBX + 0x34],EAX      ; 0047e61d
    MOV EAX,[0x01c35e40]                ; 0047e620 | DAT_01c35e40
    MOV dword ptr [EBX + 0x38],EAX      ; 0047e625
    MOV EAX,[0x01c35e44]                ; 0047e628 | DAT_01c35e44
    MOV dword ptr [EBX + 0x3c],EAX      ; 0047e62d
    MOV EAX,[0x01c35e58]                ; 0047e630 | DAT_01c35e58
    MOV dword ptr [EBX + 0x40],EAX      ; 0047e635
    MOV EAX,[0x01c35e5c]                ; 0047e638 | DAT_01c35e5c
    MOV dword ptr [EBX + 0x44],EAX      ; 0047e63d
    LEA EAX,[EBX + 0x2c]                ; 0047e640
    PUSH EAX                            ; 0047e643
    LEA EAX,[EBX + 0x28]                ; 0047e644
    PUSH EAX                            ; 0047e647
    LEA EAX,[EBX + 0x24]                ; 0047e648
    PUSH EAX                            ; 0047e64b
    LEA EAX,[EBX + 0x20]                ; 0047e64c
    PUSH EAX                            ; 0047e64f
    CALL unkafter_minecar.cpp_getRenderViewport_FUN_004f2ba0 ; 0047e650
        ;   XREF to: 004f2ba0 (UNCONDITIONAL_CALL)  ; void unkafter_minecar.cpp_getRenderViewport_FUN_004f2ba0(float * left, float * top, float * right, float * bottom)
    ADD ESP,0x10                        ; 0047e655
    MOV EAX,dword ptr [ESP + 0x40]      ; 0047e658
    MOV dword ptr [ESP + 0x18],EAX      ; 0047e65c
    FILD dword ptr [ESP + 0x18]         ; 0047e660
    SUB ESP,0x4                         ; 0047e664
    MOV EAX,dword ptr [ESP + 0x40]      ; 0047e667
    MOV dword ptr [ESP + 0x1c],EAX      ; 0047e66b
    FSTP float ptr [ESP]                ; 0047e66f
    FILD dword ptr [ESP + 0x1c]         ; 0047e672
    SUB ESP,0x4                         ; 0047e676
    MOV EAX,dword ptr [ESP + 0x40]      ; 0047e679
    MOV dword ptr [ESP + 0x20],EAX      ; 0047e67d
    FSTP float ptr [ESP]                ; 0047e681
    FILD dword ptr [ESP + 0x20]         ; 0047e684
    SUB ESP,0x4                         ; 0047e688
    MOV EAX,dword ptr [ESP + 0x40]      ; 0047e68b
    MOV dword ptr [ESP + 0x24],EAX      ; 0047e68f
    FSTP float ptr [ESP]                ; 0047e693
    FILD dword ptr [ESP + 0x24]         ; 0047e696
    SUB ESP,0x4                         ; 0047e69a
    FSTP float ptr [ESP]                ; 0047e69d
    CALL unkafter_minecar.cpp_setRenderViewport_FUN_004f2ac0 ; 0047e6a0
        ;   XREF to: 004f2ac0 (UNCONDITIONAL_CALL)  ; void unkafter_minecar.cpp_setRenderViewport_FUN_004f2ac0(float left, float top, float right, float bottom)
    ADD ESP,0x10                        ; 0047e6a5
    MOV EAX,dword ptr [ESP + 0x34]      ; 0047e6a8
    MOV dword ptr [EBX],EAX             ; 0047e6ac
    MOV EAX,dword ptr [ESP + 0x38]      ; 0047e6ae
    MOV dword ptr [EBX + 0x4],EAX       ; 0047e6b2
    MOV EAX,dword ptr [ESP + 0x3c]      ; 0047e6b5
    MOV dword ptr [EBX + 0x8],EAX       ; 0047e6b9
    MOV EAX,dword ptr [ESP + 0x40]      ; 0047e6bc
    MOV EBP,dword ptr [ESP + 0x34]      ; 0047e6c0
    MOV dword ptr [EBX + 0xc],EAX       ; 0047e6c4
    MOV EAX,dword ptr [ESP + 0x8]       ; 0047e6c7
    MOV EDX,dword ptr [ESP + 0x38]      ; 0047e6cb
    ADD EBP,EAX                         ; 0047e6cf
    MOV EAX,dword ptr [ESP]             ; 0047e6d1
    MOV ECX,dword ptr [ESP + 0x3c]      ; 0047e6d4
    ADD EDX,EAX                         ; 0047e6d8
    MOV EAX,dword ptr [ESP + 0x8]       ; 0047e6da
    MOV EBX,dword ptr [ESP + 0x40]      ; 0047e6de
    SUB ECX,EAX                         ; 0047e6e2
    MOV EAX,dword ptr [ESP]             ; 0047e6e4
    MOV dword ptr [ESP + 0x38],EDX      ; 0047e6e7
    SUB EBX,EAX                         ; 0047e6eb
    MOV EAX,dword ptr [ESP + 0x4]       ; 0047e6ed
    MOV dword ptr [ESP + 0x40],EBX      ; 0047e6f1
    LEA ESI,[EDX + EAX*0x1]             ; 0047e6f5
    LEA EAX,[EBX + -0x1]                ; 0047e6f8
    PUSH EAX                            ; 0047e6fb
    MOV dword ptr [ESP + 0x40],ECX      ; 0047e6fc
    LEA EAX,[ECX + -0x1]                ; 0047e700
    PUSH EAX                            ; 0047e703
    PUSH ESI                            ; 0047e704
    PUSH EBP                            ; 0047e705
    MOV dword ptr [ESP + 0x44],EBP      ; 0047e706
    MOV dword ptr [ESP + 0x48],ESI      ; 0047e70a
    CALL engine_2d.c_setupViewportAndClipping_FUN_00401810 ; 0047e70e
        ;   XREF to: 00401810 (UNCONDITIONAL_CALL)  ; void engine_2d.c_setupViewportAndClipping_FUN_00401810(int left, int top, int right, int bottom)
    ADD ESP,0x10                        ; 0047e713
    ADD ESP,0x1c                        ; 0047e716
    POP EBP                             ; 0047e719
    POP EDI                             ; 0047e71a
    POP ESI                             ; 0047e71b
    POP EBX                             ; 0047e71c
    RET                                 ; 0047e71d
    MOV ECX,0x5d1e6f                    ; 0047e71e | = "..\\shape\\edittool.cpp"
        ;   Label: LAB_0047e71e
    MOV EBX,0xa0                        ; 0047e723
    PUSH 0x5d1e85                       ; 0047e728 | = "gEdFont must be set by the application."
    MOV dword ptr [0x01d046a0],ECX      ; 0047e72d | DAT_01d046a0
    MOV dword ptr [0x01d046a4],EBX      ; 0047e733 | DAT_01d046a4
    CALL core_main.c_FUN_004e4500       ; 0047e739
        ;   XREF to: 004e4500 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_004e4500()
    ADD ESP,0x4                         ; 0047e73e
    JMP 0x0047e2c8                      ; 0047e741
        ;   XREF to: 0047e2c8 (UNCONDITIONAL_JUMP)  ; LAB_0047e2c8
    XOR ESI,ESI                         ; 0047e746
        ;   Label: LAB_0047e746
    MOV dword ptr [ESP + 0x34],ESI      ; 0047e748
    JMP 0x0047e3a1                      ; 0047e74c
        ;   XREF to: 0047e3a1 (UNCONDITIONAL_JUMP)  ; LAB_0047e3a1
    XOR EDI,EDI                         ; 0047e751
        ;   Label: LAB_0047e751
    MOV dword ptr [ESP + 0x38],EDI      ; 0047e753
    JMP 0x0047e4af                      ; 0047e757
        ;   XREF to: 0047e4af (UNCONDITIONAL_JUMP)  ; LAB_0047e4af

