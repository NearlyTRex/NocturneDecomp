; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_dlight_cpp_CDemonLight_renderShadowMapDebugView_FUN_00473390(CDemonLight *this_ptr,int screen_x,int screen_y,int display_size)
;
; Parameters:
; CDemonLight *    Stack[0x4]:4   this_ptr
; int              Stack[0x8]:4   screen_x
; int              Stack[0xc]:4   screen_y
; int              Stack[0x10]:4   display_size
; Local Variables:
; undefined4       Stack[-0x2c]:4  local_2c
; undefined4       Stack[-0x28]:4  local_28
; undefined4       Stack[-0x24]:4  local_24
; undefined4       Stack[-0x20]:4  local_20
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[3]:
;   core_set.cpp_CDemonSet_FUN_0056d190 at 0056d1c6
;   core_setedit.cpp_CDemonSet_FUN_0057ae50 at 0057b09c
;   core_setedit.cpp_CDemonSet_showLightEditor_FUN_0057c5d0 at 0057c687
;
; Referenced Globals:
;   int g_WindowWidth = 0x140
;   int g_WindowHeight = 0xc8
;   CGame* g_CGamePtr = 02d81a9c
;   void*[1200] g_ScreenBufferArray
;   CGame g_CGameInstance
;   undefined4 DAT_02d81c80
;
; Called Functions:
;   engine_2d.c_drawTextCenteredXYColor_FUN_00402700
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00473390
        ;   Label: core_dlight.cpp_CDemonLight_renderShadowMapDebugView_FUN_00473390
    PUSH ESI                            ; 00473391
    PUSH EDI                            ; 00473392
    PUSH EBP                            ; 00473393
    SUB ESP,0x1c                        ; 00473394
    MOV EBX,dword ptr [ESP + 0x30]      ; 00473397
    MOV EDX,dword ptr [ESP + 0x34]      ; 0047339b
    TEST EDX,EDX                        ; 0047339f
    JL 0x00473583                       ; 004733a1
        ;   XREF to: 00473583 (CONDITIONAL_JUMP)  ; LAB_00473583
    MOV ECX,dword ptr [ESP + 0x38]      ; 004733a7
    TEST ECX,ECX                        ; 004733ab
    JL 0x00473583                       ; 004733ad
        ;   XREF to: 00473583 (CONDITIONAL_JUMP)  ; LAB_00473583
    MOV ESI,dword ptr [ESP + 0x3c]      ; 004733b3
    MOV EDI,dword ptr [0x00679394]      ; 004733b7 | g_WindowWidth
    LEA EAX,[EDX + ESI*0x1]             ; 004733bd
    CMP EAX,EDI                         ; 004733c0
    JG 0x00473583                       ; 004733c2
        ;   XREF to: 00473583 (CONDITIONAL_JUMP)  ; LAB_00473583
    MOV EDX,dword ptr [0x00679398]      ; 004733c8 | g_WindowHeight
    LEA EAX,[ECX + ESI*0x1]             ; 004733ce
    CMP EAX,EDX                         ; 004733d1
    JG 0x00473583                       ; 004733d3
        ;   XREF to: 00473583 (CONDITIONAL_JUMP)  ; LAB_00473583
    MOV EDX,dword ptr [EBX + 0x1cc0]    ; 004733d9
    SHL EDX,0x8                         ; 004733df
    MOV EAX,EDX                         ; 004733e2
    SAR EDX,0x1f                        ; 004733e4
    IDIV ESI                            ; 004733e7
    MOV dword ptr [ESP + 0x18],0x20000  ; 004733e9
    XOR ESI,ESI                         ; 004733f1
    MOV EBP,EAX                         ; 004733f3
    MOV dword ptr [ESP + 0x8],ESI       ; 004733f5
    MOV EAX,dword ptr [EBX + 0x1cc4]    ; 004733f9
        ;   Label: LAB_004733f9
    MOV EDX,dword ptr [ESP + 0x8]       ; 004733ff
    SHL EAX,0x8                         ; 00473403
    CMP EAX,EDX                         ; 00473406
    JG 0x00473461                       ; 00473408
        ;   XREF to: 00473461 (CONDITIONAL_JUMP)  ; LAB_00473461
    MOV ECX,dword ptr [ESP + 0x18]      ; 0047340a
    CMP ESI,ECX                         ; 0047340e
    JZ 0x004734cf                       ; 00473410
        ;   XREF to: 004734cf (CONDITIONAL_JUMP)  ; LAB_004734cf
    SUB ESI,dword ptr [ESP + 0x18]      ; 00473416
        ;   Label: LAB_00473416
    XOR EDI,EDI                         ; 0047341a
    MOV dword ptr [ESP + 0xc],ESI       ; 0047341c
    MOV EAX,dword ptr [EBX + 0x1cc4]    ; 00473420
        ;   Label: LAB_00473420
    SHL EAX,0x8                         ; 00473426
    CMP EDI,EAX                         ; 00473429
    JGE 0x00473575                      ; 0047342b
        ;   XREF to: 00473575 (CONDITIONAL_JUMP)  ; LAB_00473575
    MOV EDX,EDI                         ; 00473431
    MOV EAX,EDI                         ; 00473433
    SAR EDX,0x1f                        ; 00473435
    SHL EDX,0x8                         ; 00473438
    SBB EAX,EDX                         ; 0047343b
    SAR EAX,0x8                         ; 0047343d
    XOR ECX,ECX                         ; 00473440
    MOV dword ptr [ESP + 0x10],EAX      ; 00473442
    MOV EAX,dword ptr [EBX + 0x1cc0]    ; 00473446
        ;   Label: LAB_00473446
    SHL EAX,0x8                         ; 0047344c
    CMP ECX,EAX                         ; 0047344f
    JL 0x004734d7                       ; 00473451
        ;   XREF to: 004734d7 (CONDITIONAL_JUMP)  ; LAB_004734d7
    ADD EDI,EBP                         ; 00473457
    JMP 0x00473420                      ; 00473459
        ;   XREF to: 00473420 (UNCONDITIONAL_JUMP)  ; LAB_00473420
    ADD dword ptr [ESP + 0x8],EBP       ; 0047345b
        ;   Label: LAB_0047345b
    JMP 0x004733f9                      ; 0047345f
        ;   XREF to: 004733f9 (UNCONDITIONAL_JUMP)  ; LAB_004733f9
    MOV EAX,EDX                         ; 00473461
        ;   Label: LAB_00473461
    SAR EDX,0x1f                        ; 00473463
    SHL EDX,0x8                         ; 00473466
    SBB EAX,EDX                         ; 00473469
    SAR EAX,0x8                         ; 0047346b
    XOR ECX,ECX                         ; 0047346e
    MOV dword ptr [ESP + 0x14],EAX      ; 00473470
    MOV EAX,dword ptr [EBX + 0x1cc0]    ; 00473474
        ;   Label: LAB_00473474
    SHL EAX,0x8                         ; 0047347a
    CMP ECX,EAX                         ; 0047347d
    JGE 0x0047345b                      ; 0047347f
        ;   XREF to: 0047345b (CONDITIONAL_JUMP)  ; LAB_0047345b
    MOV EDI,dword ptr [ESP + 0x14]      ; 00473481
    IMUL EDI,dword ptr [EBX + 0x1cc0]   ; 00473485
    MOV EDX,ECX                         ; 0047348c
    SAR EDX,0x1f                        ; 0047348e
    MOV EAX,ECX                         ; 00473491
    SHL EDX,0x8                         ; 00473493
    SBB EAX,EDX                         ; 00473496
    SAR EAX,0x8                         ; 00473498
    MOV EDX,dword ptr [EBX + 0x2f94]    ; 0047349b
    ADD EAX,EDI                         ; 004734a1
    MOV AX,word ptr [EDX + EAX*0x2]     ; 004734a3
    AND EAX,0xffff                      ; 004734a7
    TEST EAX,EAX                        ; 004734ac
    JLE 0x004734b7                      ; 004734ae
        ;   XREF to: 004734b7 (CONDITIONAL_JUMP)  ; LAB_004734b7
    CMP EAX,0xffff                      ; 004734b0
    JL 0x004734bb                       ; 004734b5
        ;   XREF to: 004734bb (CONDITIONAL_JUMP)  ; LAB_004734bb
    ADD ECX,EBP                         ; 004734b7
        ;   Label: LAB_004734b7
    JMP 0x00473474                      ; 004734b9
        ;   XREF to: 00473474 (UNCONDITIONAL_JUMP)  ; LAB_00473474
    CMP EAX,dword ptr [ESP + 0x18]      ; 004734bb
        ;   Label: LAB_004734bb
    JGE 0x004734c5                      ; 004734bf
        ;   XREF to: 004734c5 (CONDITIONAL_JUMP)  ; LAB_004734c5
    MOV dword ptr [ESP + 0x18],EAX      ; 004734c1
    CMP EAX,ESI                         ; 004734c5
        ;   Label: LAB_004734c5
    JLE 0x004734b7                      ; 004734c7
        ;   XREF to: 004734b7 (CONDITIONAL_JUMP)  ; LAB_004734b7
    MOV ESI,EAX                         ; 004734c9
    ADD ECX,EBP                         ; 004734cb
    JMP 0x00473474                      ; 004734cd
        ;   XREF to: 00473474 (UNCONDITIONAL_JUMP)  ; LAB_00473474
    LEA ESI,[ECX + 0x1]                 ; 004734cf
        ;   Label: LAB_004734cf
    JMP 0x00473416                      ; 004734d2
        ;   XREF to: 00473416 (UNCONDITIONAL_JUMP)  ; LAB_00473416
    MOV ESI,dword ptr [ESP + 0x10]      ; 004734d7
        ;   Label: LAB_004734d7
    IMUL ESI,dword ptr [EBX + 0x1cc0]   ; 004734db
    MOV EDX,ECX                         ; 004734e2
    SAR EDX,0x1f                        ; 004734e4
    MOV EAX,ECX                         ; 004734e7
    SHL EDX,0x8                         ; 004734e9
    SBB EAX,EDX                         ; 004734ec
    SAR EAX,0x8                         ; 004734ee
    ADD EAX,ESI                         ; 004734f1
    LEA EDX,[EAX + EAX*0x1]             ; 004734f3
    MOV EAX,dword ptr [EBX + 0x2f94]    ; 004734f6
    MOV AX,word ptr [EDX + EAX*0x1]     ; 004734fc
    AND EAX,0xffff                      ; 00473500
    CMP EAX,0xffff                      ; 00473505
    JGE 0x0047356e                      ; 0047350a
        ;   XREF to: 0047356e (CONDITIONAL_JUMP)  ; LAB_0047356e
    TEST EAX,EAX                        ; 0047350c
    JLE 0x0047356e                      ; 0047350e
        ;   XREF to: 0047356e (CONDITIONAL_JUMP)  ; LAB_0047356e
    SUB EAX,dword ptr [ESP + 0x18]      ; 00473510
    IMUL EDX,EAX,0xff                   ; 00473514
    MOV ESI,dword ptr [ESP + 0xc]       ; 0047351a
    MOV EAX,EDX                         ; 0047351e
    SAR EDX,0x1f                        ; 00473520
    IDIV ESI                            ; 00473523
    MOV ESI,EAX                         ; 00473525
    MOV EDX,EDI                         ; 00473527
    MOV EAX,EDI                         ; 00473529
    SAR EDX,0x1f                        ; 0047352b
    IDIV EBP                            ; 0047352e
    MOV EDX,dword ptr [ESP + 0x38]      ; 00473530
    ADD EDX,EAX                         ; 00473534
    MOV dword ptr [ESP],EDX             ; 00473536
    MOV EDX,ECX                         ; 00473539
    MOV EAX,ECX                         ; 0047353b
    SAR EDX,0x1f                        ; 0047353d
    IDIV EBP                            ; 00473540
    MOV EDX,dword ptr [ESP + 0x34]      ; 00473542
    ADD EDX,EAX                         ; 00473546
    MOV EAX,dword ptr [ESP]             ; 00473548
    SHL EDX,0x2                         ; 0047354b
    MOV EAX,dword ptr [EAX*0x4 + 0x2cf6a9c] ; 0047354e | g_ScreenBufferArray
    ADD EDX,EAX                         ; 00473555
    MOV EAX,ESI                         ; 00473557
    SHL EAX,0x8                         ; 00473559
    ADD EAX,ESI                         ; 0047355c
    SHL ESI,0x10                        ; 0047355e
    MOV dword ptr [ESP + 0x4],EDX       ; 00473561
    LEA EDX,[ESI + EAX*0x1]             ; 00473565
    MOV EAX,dword ptr [ESP + 0x4]       ; 00473568
    MOV dword ptr [EAX],EDX             ; 0047356c
    ADD ECX,EBP                         ; 0047356e
        ;   Label: LAB_0047356e
    JMP 0x00473446                      ; 00473570
        ;   XREF to: 00473446 (UNCONDITIONAL_JUMP)  ; LAB_00473446
    MOV EAX,[0x0067b654]                ; 00473575 | g_CGameInstance | g_CGamePtr
        ;   Label: LAB_00473575
    CMP dword ptr [EAX + 0x1e4],0x0     ; 0047357a | DAT_02d81c80
    JNZ 0x0047358b                      ; 00473581
        ;   XREF to: 0047358b (CONDITIONAL_JUMP)  ; LAB_0047358b
    ADD ESP,0x1c                        ; 00473583
        ;   Label: LAB_00473583
    POP EBP                             ; 00473586
        ;   Label: LAB_00473586
    POP EDI                             ; 00473587
    POP ESI                             ; 00473588
    POP EBX                             ; 00473589
    RET                                 ; 0047358a
    ADD EBX,0x40                        ; 0047358b
        ;   Label: LAB_0047358b
    MOV EAX,dword ptr [ESP + 0x38]      ; 0047358e
    PUSH EBX                            ; 00473592
    MOV EBX,dword ptr [ESP + 0x40]      ; 00473593
    ADD EAX,EBX                         ; 00473597
    SUB EAX,0xb                         ; 00473599
    PUSH EAX                            ; 0047359c
    MOV EAX,dword ptr [ESP + 0x3c]      ; 0047359d
    ADD EAX,EBX                         ; 004735a1
    PUSH EAX                            ; 004735a3
    MOV EDI,dword ptr [ESP + 0x40]      ; 004735a4
    PUSH EDI                            ; 004735a8
    CALL engine_2d.c_drawTextCenteredXYColor_FUN_00402700 ; 004735a9
        ;   XREF to: 00402700 (UNCONDITIONAL_CALL)  ; void engine_2d.c_drawTextCenteredXYColor_FUN_00402700(int left_x, int right_x, int y, char * text)
    ADD ESP,0x10                        ; 004735ae
    ADD ESP,0x1c                        ; 004735b1
    POP EBP                             ; 004735b4
    POP EDI                             ; 004735b5
    POP ESI                             ; 004735b6
    POP EBX                             ; 004735b7
    RET                                 ; 004735b8

