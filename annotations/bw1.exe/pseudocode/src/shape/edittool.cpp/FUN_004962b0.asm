; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void shape_edittool_cpp_FUN_004962b0(undefined4 param_1,float param_2,float param_3)
;
; Local Variables:
; undefined8       Stack[-0x60]:8  local_60
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
; XREF[4]:
;   core_dtrace.cpp_FUN_0048aaf0 at 0048ac37
;   core_netgame.cpp_CNetGame_disconnect_FUN_0052cab0 at 0052cc69
;   engine_pod.cpp_FUN_0053bfc0 at 0053c18f
;   shape_edittool.cpp_CEditorTools_showCenteredProgressDialog_FUN_004961b0 at 00496270
;
; Referenced Globals:
;   undefined4 DAT_00480000
;   TerminatedCString s_shape_edittool_cpp_005dc044
;   TerminatedCString s_CEditorTools_updatePerce_005dc05a
;   TerminatedCString s_d_complete_005dc091
;   TerminatedCString s_d_02d_elapsed_approximat_005dc09f
;   undefined4 DAT_005dc0d0
;   undefined4 DAT_005dc0d8
;   undefined4 DAT_005dc0e0
;   undefined4 DAT_005dc0e8
;   undefined4 DAT_01c3eb50
;   undefined4 DAT_01c3eb5c
;   undefined4 DAT_01c3f53c
;   undefined4 DAT_01c3f544
;   undefined4 DAT_01c3f578
;   undefined4 DAT_01c3f584
;   ... and 13 more
;
; Called Functions:
;   core_main.c_FUN_005030e0
;   crt_math.c_round_FUN_005c03a0
;   engine_2d.c_drawHLine_FUN_00402f30
;   engine_2d.c_drawVLine_FUN_00403040
;   engine_2d.c_fillRectColor_FUN_004031c0
;   engine_2d.c_fillRectWithBorder_FUN_00403250
;   engine_3d.c_setRenderAlpha_FUN_00406bd0
;   engine_font.cpp_CBitFont_drawTextCenterInBoundsF_FUN_004c23a0
;   engine_mini3d.cpp_drawHLine_FUN_005182e0
;   engine_mini3d.cpp_drawRect_FUN_00518290
;   engine_mini3d.cpp_drawVLine_FUN_00518300
;   engine_mini3d.cpp_fillRect_FUN_00518010
;   engine_mini3d.cpp_setAlpha_FUN_00512320
;   engine_mini3d.cpp_setColor_FUN_00517d50
;   shape_edittool.cpp_FUN_00496ee0
;   ... and 2 more
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004962b0
        ;   Label: shape_edittool.cpp_FUN_004962b0
    PUSH ESI                            ; 004962b1
    PUSH EDI                            ; 004962b2
    PUSH EBP                            ; 004962b3
    MOV EBP,ESP                         ; 004962b4
    SUB ESP,0x4c                        ; 004962b6
    AND ESP,0xfffffff8                  ; 004962b9
    CMP dword ptr [0x01c3eb5c],0x1      ; 004962bc | DAT_01c3eb5c
    JL 0x0049678f                       ; 004962c3
        ;   XREF to: 0049678f (CONDITIONAL_JUMP)  ; LAB_0049678f
    FLD float ptr [EBP + 0x1c]          ; 004962c9
        ;   Label: LAB_004962c9
    XOR ESI,ESI                         ; 004962cc
    FLDZ                                ; 004962ce
    MOV dword ptr [ESP + 0xc],ESI       ; 004962d0
    FCOMPP                              ; 004962d4
    FNSTSW AX                           ; 004962d6
    SAHF                                ; 004962d8
    JNC 0x00496305                      ; 004962d9
        ;   XREF to: 00496305 (CONDITIONAL_JUMP)  ; LAB_00496305
    FLD float ptr [EBP + 0x18]          ; 004962db
    FLDZ                                ; 004962de
    FCOMPP                              ; 004962e0
    FNSTSW AX                           ; 004962e2
    SAHF                                ; 004962e4
    JBE 0x004962ea                      ; 004962e5
        ;   XREF to: 004962ea (CONDITIONAL_JUMP)  ; LAB_004962ea
    MOV dword ptr [EBP + 0x18],ESI      ; 004962e7
    FLD float ptr [EBP + 0x18]          ; 004962ea
        ;   Label: LAB_004962ea
    FCOMP float ptr [EBP + 0x1c]        ; 004962ed
    FNSTSW AX                           ; 004962f0
    SAHF                                ; 004962f2
    JBE 0x004962fb                      ; 004962f3
        ;   XREF to: 004962fb (CONDITIONAL_JUMP)  ; LAB_004962fb
    MOV EAX,dword ptr [EBP + 0x1c]      ; 004962f5
    MOV dword ptr [EBP + 0x18],EAX      ; 004962f8
    FLD float ptr [EBP + 0x18]          ; 004962fb
        ;   Label: LAB_004962fb
    FDIV float ptr [EBP + 0x1c]         ; 004962fe
    FSTP float ptr [ESP + 0xc]          ; 00496301
    FLD float ptr [ESP + 0xc]           ; 00496305
        ;   Label: LAB_00496305
    FMUL double ptr [0x005dc0d0]        ; 00496309 | DAT_005dc0d0
    FADD double ptr [0x005dc0d8]        ; 0049630f | DAT_005dc0d8
    CALL crt_math.c_round_FUN_005c03a0  ; 00496315
        ;   XREF to: 005c03a0 (UNCONDITIONAL_CALL)  ; undefined crt_math.c_round_FUN_005c03a0()
    FISTP dword ptr [ESP + 0x3c]        ; 0049631a
    CALL wincore_winrun.cpp_getTime_FUN_005b2420 ; 0049631e
        ;   XREF to: 005b2420 (UNCONDITIONAL_CALL)  ; int wincore_winrun.cpp_getTime_FUN_005b2420()
    MOV EBX,EAX                         ; 00496323
    MOV dword ptr [ESP + 0x30],EAX      ; 00496325
    MOV EAX,[0x01c3eb5c]                ; 00496329 | DAT_01c3eb5c
    DEC EAX                             ; 0049632e
    SHL EAX,0x3                         ; 0049632f
    MOV EDX,EAX                         ; 00496332
    SHL EDX,0x6                         ; 00496334
    SUB EDX,EAX                         ; 00496337
    MOV EAX,dword ptr [ESP + 0x3c]      ; 00496339
    CMP EAX,dword ptr [EDX + 0x1c3ed50] ; 0049633d
    JNZ 0x00496357                      ; 00496343
        ;   XREF to: 00496357 (CONDITIONAL_JUMP)  ; LAB_00496357
    SUB EBX,dword ptr [EDX + 0x1c3ed54] ; 00496345
    CMP EBX,0x480000                    ; 0049634b | DAT_00480000
    JL 0x00496788                       ; 00496351
        ;   XREF to: 00496788 (CONDITIONAL_JUMP)  ; LAB_00496788
    MOV EDI,dword ptr [EBP + 0x14]      ; 00496357
        ;   Label: LAB_00496357
    PUSH EDI                            ; 0049635a
    CALL shape_edittool.cpp_FUN_00496ee0 ; 0049635b
        ;   XREF to: 00496ee0 (UNCONDITIONAL_CALL)  ; undefined shape_edittool.cpp_FUN_00496ee0()
    ADD ESP,0x4                         ; 00496360
    PUSH 0xffff                         ; 00496363
    CALL engine_3d.c_setRenderAlpha_FUN_00406bd0 ; 00496368
        ;   XREF to: 00406bd0 (UNCONDITIONAL_CALL)  ; int engine_3d.c_setRenderAlpha_FUN_00406bd0(int alpha_color_value)
    ADD ESP,0x4                         ; 0049636d
    PUSH 0x3f800000                     ; 00496370
    CALL engine_mini3d.cpp_setAlpha_FUN_00512320 ; 00496375
        ;   XREF to: 00512320 (UNCONDITIONAL_CALL)  ; void engine_mini3d.cpp_setAlpha_FUN_00512320(float alpha)
    ADD ESP,0x4                         ; 0049637a
    MOV EAX,dword ptr [ESP + 0x3c]      ; 0049637d
    PUSH EAX                            ; 00496381
    PUSH 0x5dc091                       ; 00496382 | = "%d%% complete"
    PUSH -0x1                           ; 00496387
    MOV EDX,dword ptr [0x01c3f578]      ; 00496389 | DAT_01c3f578
    PUSH EDX                            ; 0049638f
    MOV ECX,dword ptr [0x01c4f00c]      ; 00496390 | DAT_01c4f00c
    PUSH ECX                            ; 00496396
    MOV EBX,dword ptr [0x01c4f010]      ; 00496397 | DAT_01c4f010
    PUSH EBX                            ; 0049639d
    MOV ESI,dword ptr [0x01c4f008]      ; 0049639e | DAT_01c4f008
    PUSH ESI                            ; 004963a4
    MOV EDI,dword ptr [0x01c3eb50]      ; 004963a5 | DAT_01c3eb50
    PUSH EDI                            ; 004963ab
    CALL engine_font.cpp_CBitFont_drawTextCenterInBoundsF_FUN_004c23a0 ; 004963ac
        ;   XREF to: 004c23a0 (UNCONDITIONAL_CALL)  ; int engine_font.cpp_CBitFont_drawTextCenterInBoundsF_FUN_004c23a0(CBitFont * this_ptr, int left_x, int right_x, int y, ...)
    MOV EBX,dword ptr [0x01c4f008]      ; 004963b1 | DAT_01c4f008
    MOV EAX,[0x01c3f53c]                ; 004963b7 | DAT_01c3f53c
    MOV EDX,dword ptr [0x01c4f00c]      ; 004963bc | DAT_01c4f00c
    ADD EAX,EAX                         ; 004963c2
    MOV ESI,dword ptr [0x01c4f010]      ; 004963c4 | DAT_01c4f010
    ADD EAX,EDX                         ; 004963ca
    ADD ESP,0x20                        ; 004963cc
    LEA EDI,[EAX + 0x1]                 ; 004963cf
    INC EBX                             ; 004963d2
    MOV EAX,[0x01c3f53c]                ; 004963d3 | DAT_01c3f53c
    DEC ESI                             ; 004963d8
    SHL EAX,0x2                         ; 004963d9
    MOV dword ptr [ESP + 0x2c],EBX      ; 004963dc
    ADD EAX,EDX                         ; 004963e0
    MOV dword ptr [ESP + 0x34],ESI      ; 004963e2
    DEC EAX                             ; 004963e6
    MOV dword ptr [ESP + 0x28],EDI      ; 004963e7
    MOV dword ptr [ESP + 0x44],EAX      ; 004963eb
    MOV dword ptr [ESP + 0x24],EAX      ; 004963ef
    MOV EAX,[0x01c3f584]                ; 004963f3 | DAT_01c3f584
    MOV EDX,dword ptr [0x01c3f544]      ; 004963f8 | DAT_01c3f544
    MOV dword ptr [ESP + 0x38],EAX      ; 004963fe
    MOV EAX,[0x01c3f58c]                ; 00496402 | DAT_01c3f58c
    TEST EDX,EDX                        ; 00496407
    JZ 0x004967cf                       ; 00496409
        ;   XREF to: 004967cf (CONDITIONAL_JUMP)  ; LAB_004967cf
    JZ 0x004967b7                       ; 0049640f
        ;   XREF to: 004967b7 (CONDITIONAL_JUMP)  ; LAB_004967b7
    AND EAX,0xff                        ; 00496415
    MOV EDX,EAX                         ; 0049641a
    SHL EAX,0x2                         ; 0049641c
    SUB EAX,EDX                         ; 0049641f
    XOR ECX,ECX                         ; 00496421
    XOR EDX,EDX                         ; 00496423
    MOV CL,byte ptr [EAX + 0x1c4e9f8]   ; 00496425 | DAT_01c4e9f8
    MOV DL,byte ptr [EAX + 0x1c4e9f9]   ; 0049642b | DAT_01c4e9f9
    SHL EDX,0x8                         ; 00496431
    SHL ECX,0x10                        ; 00496434
    MOV AL,byte ptr [EAX + 0x1c4e9fa]   ; 00496437 | DAT_01c4e9fa
    OR EDX,ECX                          ; 0049643d
    AND EAX,0xff                        ; 0049643f
    OR EDX,EAX                          ; 00496444
    PUSH EDX                            ; 00496446
    CALL engine_mini3d.cpp_setColor_FUN_00517d50 ; 00496447
        ;   XREF to: 00517d50 (UNCONDITIONAL_CALL)  ; void engine_mini3d.cpp_setColor_FUN_00517d50(uint rgb)
    ADD ESP,0x4                         ; 0049644c
    MOV EAX,dword ptr [ESP + 0x24]      ; 0049644f
        ;   Label: LAB_0049644f
    INC EAX                             ; 00496453
    PUSH EAX                            ; 00496454
    MOV EAX,dword ptr [ESP + 0x38]      ; 00496455
    INC EAX                             ; 00496459
    PUSH EAX                            ; 0049645a
    MOV EAX,dword ptr [ESP + 0x30]      ; 0049645b
    DEC EAX                             ; 0049645f
    PUSH EAX                            ; 00496460
    MOV EAX,dword ptr [ESP + 0x38]      ; 00496461
    DEC EAX                             ; 00496465
    PUSH EAX                            ; 00496466
    CALL engine_mini3d.cpp_drawRect_FUN_00518290 ; 00496467
        ;   XREF to: 00518290 (UNCONDITIONAL_CALL)  ; void engine_mini3d.cpp_drawRect_FUN_00518290(int x1, int y1, int x2, int y2)
    MOV EAX,[0x01c3f544]                ; 0049646c | DAT_01c3f544
    ADD ESP,0x10                        ; 00496471
    TEST EAX,EAX                        ; 00496474
    JZ 0x004967c1                       ; 00496476
        ;   XREF to: 004967c1 (CONDITIONAL_JUMP)  ; LAB_004967c1
    MOV EDX,dword ptr [ESP + 0x38]      ; 0049647c
    AND EDX,0xff                        ; 00496480
    LEA EAX,[EDX*0x4 + 0x0]             ; 00496486
    SUB EAX,EDX                         ; 0049648d
    XOR EDX,EDX                         ; 0049648f
    MOV DL,byte ptr [EAX + 0x1c4e9f9]   ; 00496491 | DAT_01c4e9f9
    SHL EDX,0x8                         ; 00496497
    MOV dword ptr [ESP + 0x48],EDX      ; 0049649a
    XOR EDX,EDX                         ; 0049649e
    MOV DL,byte ptr [EAX + 0x1c4e9f8]   ; 004964a0 | DAT_01c4e9f8
    MOV ECX,dword ptr [ESP + 0x48]      ; 004964a6
    SHL EDX,0x10                        ; 004964aa
    MOV AL,byte ptr [EAX + 0x1c4e9fa]   ; 004964ad | DAT_01c4e9fa
    OR EDX,ECX                          ; 004964b3
    AND EAX,0xff                        ; 004964b5
    OR EDX,EAX                          ; 004964ba
    PUSH EDX                            ; 004964bc
    CALL engine_mini3d.cpp_setColor_FUN_00517d50 ; 004964bd
        ;   XREF to: 00517d50 (UNCONDITIONAL_CALL)  ; void engine_mini3d.cpp_setColor_FUN_00517d50(uint rgb)
    ADD ESP,0x4                         ; 004964c2
    MOV EAX,dword ptr [ESP + 0x24]      ; 004964c5
        ;   Label: LAB_004964c5
    PUSH EAX                            ; 004964c9
    MOV EDX,dword ptr [ESP + 0x38]      ; 004964ca
    PUSH EDX                            ; 004964ce
    MOV ECX,dword ptr [ESP + 0x30]      ; 004964cf
    PUSH ECX                            ; 004964d3
    MOV EAX,dword ptr [ESP + 0x38]      ; 004964d4
    PUSH EAX                            ; 004964d8
    CALL engine_mini3d.cpp_fillRect_FUN_00518010 ; 004964d9
        ;   XREF to: 00518010 (UNCONDITIONAL_CALL)  ; void engine_mini3d.cpp_fillRect_FUN_00518010(int x1, int y1, int x2, int y2)
    ADD ESP,0x10                        ; 004964de
    MOV EDX,dword ptr [0x01c3f544]      ; 004964e1 | DAT_01c3f544
        ;   Label: LAB_004964e1
    MOV EAX,[0x01c3f590]                ; 004964e7 | DAT_01c3f590
    TEST EDX,EDX                        ; 004964ec
    JZ 0x004967ea                       ; 004964ee
        ;   XREF to: 004967ea (CONDITIONAL_JUMP)  ; LAB_004967ea
    AND EAX,0xff                        ; 004964f4
    MOV EDX,EAX                         ; 004964f9
    SHL EAX,0x2                         ; 004964fb
    SUB EAX,EDX                         ; 004964fe
    XOR EDX,EDX                         ; 00496500
    MOV DL,byte ptr [EAX + 0x1c4e9f9]   ; 00496502 | DAT_01c4e9f9
    SHL EDX,0x8                         ; 00496508
    MOV dword ptr [ESP + 0x48],EDX      ; 0049650b
    XOR EDX,EDX                         ; 0049650f
    MOV DL,byte ptr [EAX + 0x1c4e9f8]   ; 00496511 | DAT_01c4e9f8
    MOV ECX,dword ptr [ESP + 0x48]      ; 00496517
    SHL EDX,0x10                        ; 0049651b
    MOV AL,byte ptr [EAX + 0x1c4e9fa]   ; 0049651e | DAT_01c4e9fa
    OR EDX,ECX                          ; 00496524
    AND EAX,0xff                        ; 00496526
    OR EAX,EDX                          ; 0049652b
    PUSH EAX                            ; 0049652d
    CALL engine_mini3d.cpp_setColor_FUN_00517d50 ; 0049652e
        ;   XREF to: 00517d50 (UNCONDITIONAL_CALL)  ; void engine_mini3d.cpp_setColor_FUN_00517d50(uint rgb)
    ADD ESP,0x4                         ; 00496533
    MOV ECX,dword ptr [0x01c3f544]      ; 00496536 | DAT_01c3f544
        ;   Label: LAB_00496536
    LEA EAX,[EDI + -0x1]                ; 0049653c
    LEA EDX,[EBX + -0x1]                ; 0049653f
    TEST ECX,ECX                        ; 00496542
    JZ 0x004967f4                       ; 00496544
        ;   XREF to: 004967f4 (CONDITIONAL_JUMP)  ; LAB_004967f4
    PUSH ESI                            ; 0049654a
    PUSH EAX                            ; 0049654b
    PUSH EDX                            ; 0049654c
    CALL engine_mini3d.cpp_drawHLine_FUN_005182e0 ; 0049654d
        ;   XREF to: 005182e0 (UNCONDITIONAL_CALL)  ; void engine_mini3d.cpp_drawHLine_FUN_005182e0(int x1, int y, int x2)
    ADD ESP,0xc                         ; 00496552
        ;   Label: LAB_00496552
    MOV ECX,dword ptr [0x01c3f544]      ; 00496555 | DAT_01c3f544
    LEA EDX,[EDI + -0x1]                ; 0049655b
    LEA EAX,[EBX + -0x1]                ; 0049655e
    TEST ECX,ECX                        ; 00496561
    JZ 0x00496801                       ; 00496563
        ;   XREF to: 00496801 (CONDITIONAL_JUMP)  ; LAB_00496801
    MOV ECX,dword ptr [ESP + 0x44]      ; 00496569
    PUSH ECX                            ; 0049656d
    PUSH EDX                            ; 0049656e
    PUSH EAX                            ; 0049656f
    CALL engine_mini3d.cpp_drawVLine_FUN_00518300 ; 00496570
        ;   XREF to: 00518300 (UNCONDITIONAL_CALL)  ; void engine_mini3d.cpp_drawVLine_FUN_00518300(int x, int y1, int y2)
    ADD ESP,0xc                         ; 00496575
        ;   Label: LAB_00496575
    MOV EAX,ESI                         ; 00496578
    SUB EAX,EBX                         ; 0049657a
    INC EAX                             ; 0049657c
    MOV dword ptr [ESP + 0x48],EAX      ; 0049657d
    FILD dword ptr [ESP + 0x48]         ; 00496581
    FMUL float ptr [ESP + 0xc]          ; 00496585
    FADD double ptr [0x005dc0d8]        ; 00496589 | DAT_005dc0d8
    CALL crt_math.c_round_FUN_005c03a0  ; 0049658f
        ;   XREF to: 005c03a0 (UNCONDITIONAL_CALL)  ; undefined crt_math.c_round_FUN_005c03a0()
    FISTP dword ptr [ESP + 0x48]        ; 00496594
    MOV EAX,dword ptr [ESP + 0x48]      ; 00496598
    ADD EAX,EBX                         ; 0049659c
    CMP EAX,EBX                         ; 0049659e
    JLE 0x00496636                      ; 004965a0
        ;   XREF to: 00496636 (CONDITIONAL_JUMP)  ; LAB_00496636
    CMP EAX,ESI                         ; 004965a6
    JL 0x004965ad                       ; 004965a8
        ;   XREF to: 004965ad (CONDITIONAL_JUMP)  ; LAB_004965ad
    LEA EAX,[ESI + -0x1]                ; 004965aa
    MOV EDX,dword ptr [ESP + 0x44]      ; 004965ad
        ;   Label: LAB_004965ad
    MOV ESI,dword ptr [0x01c3f588]      ; 004965b1 | DAT_01c3f588
    MOV dword ptr [ESP + 0x1c],EDI      ; 004965b7
    MOV dword ptr [ESP + 0x20],EAX      ; 004965bb
    MOV dword ptr [ESP + 0x18],EDX      ; 004965bf
    MOV EDX,dword ptr [0x01c3f544]      ; 004965c3 | DAT_01c3f544
    MOV dword ptr [ESP + 0x14],EBX      ; 004965c9
    TEST EDX,EDX                        ; 004965cd
    JZ 0x0049681d                       ; 004965cf
        ;   XREF to: 0049681d (CONDITIONAL_JUMP)  ; LAB_0049681d
    JZ 0x00496812                       ; 004965d5
        ;   XREF to: 00496812 (CONDITIONAL_JUMP)  ; LAB_00496812
    MOV EDX,ESI                         ; 004965db
    AND EDX,0xff                        ; 004965dd
    LEA EAX,[EDX*0x4 + 0x0]             ; 004965e3
    SUB EAX,EDX                         ; 004965ea
    XOR EBX,EBX                         ; 004965ec
    XOR EDX,EDX                         ; 004965ee
    MOV BL,byte ptr [EAX + 0x1c4e9f9]   ; 004965f0 | DAT_01c4e9f9
    MOV DL,byte ptr [EAX + 0x1c4e9f8]   ; 004965f6 | DAT_01c4e9f8
    SHL EBX,0x8                         ; 004965fc
    SHL EDX,0x10                        ; 004965ff
    MOV AL,byte ptr [EAX + 0x1c4e9fa]   ; 00496602 | DAT_01c4e9fa
    OR EDX,EBX                          ; 00496608
    AND EAX,0xff                        ; 0049660a
    OR EAX,EDX                          ; 0049660f
    PUSH EAX                            ; 00496611
    CALL engine_mini3d.cpp_setColor_FUN_00517d50 ; 00496612
        ;   XREF to: 00517d50 (UNCONDITIONAL_CALL)  ; void engine_mini3d.cpp_setColor_FUN_00517d50(uint rgb)
    ADD ESP,0x4                         ; 00496617
    MOV ESI,dword ptr [ESP + 0x18]      ; 0049661a
        ;   Label: LAB_0049661a
    PUSH ESI                            ; 0049661e
    MOV EDI,dword ptr [ESP + 0x24]      ; 0049661f
    PUSH EDI                            ; 00496623
    MOV EAX,dword ptr [ESP + 0x24]      ; 00496624
    PUSH EAX                            ; 00496628
    MOV EDX,dword ptr [ESP + 0x20]      ; 00496629
    PUSH EDX                            ; 0049662d
    CALL engine_mini3d.cpp_fillRect_FUN_00518010 ; 0049662e
        ;   XREF to: 00518010 (UNCONDITIONAL_CALL)  ; void engine_mini3d.cpp_fillRect_FUN_00518010(int x1, int y1, int x2, int y2)
    ADD ESP,0x10                        ; 00496633
    CMP dword ptr [ESP + 0x3c],0x0      ; 00496636
        ;   Label: LAB_00496636
    JLE 0x0049675d                      ; 0049663b
        ;   XREF to: 0049675d (CONDITIONAL_JUMP)  ; LAB_0049675d
    MOV EAX,[0x01c3eb5c]                ; 00496641 | DAT_01c3eb5c
    DEC EAX                             ; 00496646
    SHL EAX,0x3                         ; 00496647
    MOV EBX,EAX                         ; 0049664a
    SHL EAX,0x6                         ; 0049664c
    SUB EAX,EBX                         ; 0049664f
    MOV EDX,dword ptr [ESP + 0x30]      ; 00496651
    MOV EBX,dword ptr [EAX + 0x1c3ed4c] ; 00496655
    MOV EAX,EDX                         ; 0049665b
    SUB EAX,EBX                         ; 0049665d
    MOV dword ptr [ESP + 0x48],EAX      ; 0049665f
    FILD dword ptr [ESP + 0x48]         ; 00496663
    FMUL double ptr [0x005dc0e0]        ; 00496667 | DAT_005dc0e0
    FST float ptr [ESP + 0x8]           ; 0049666d
    FST double ptr [ESP]                ; 00496671
    FCOMP double ptr [0x005dc0e8]       ; 00496674 | DAT_005dc0e8
    FNSTSW AX                           ; 0049667a
    SAHF                                ; 0049667c
    JBE 0x0049675d                      ; 0049667d
        ;   XREF to: 0049675d (CONDITIONAL_JUMP)  ; LAB_0049675d
    FLD float ptr [EBP + 0x18]          ; 00496683
    FLD float ptr [EBP + 0x1c]          ; 00496686
    FSUB ST0,ST1                        ; 00496689
    FMUL float ptr [ESP + 0x8]          ; 0049668b
    FDIVRP                              ; 0049668f
    FADD double ptr [0x005dc0d8]        ; 00496691 | DAT_005dc0d8
    CALL crt_math.c_round_FUN_005c03a0  ; 00496697
        ;   XREF to: 005c03a0 (UNCONDITIONAL_CALL)  ; undefined crt_math.c_round_FUN_005c03a0()
    FISTP dword ptr [ESP + 0x40]        ; 0049669c
    MOV ESI,dword ptr [ESP + 0x40]      ; 004966a0
    TEST ESI,ESI                        ; 004966a4
    JLE 0x0049675d                      ; 004966a6
        ;   XREF to: 0049675d (CONDITIONAL_JUMP)  ; LAB_0049675d
    MOV EBX,0x3c                        ; 004966ac
    MOV EDX,ESI                         ; 004966b1
    MOV EAX,ESI                         ; 004966b3
    SAR EDX,0x1f                        ; 004966b5
    IDIV EBX                            ; 004966b8
    MOV ESI,EAX                         ; 004966ba
    MOV EAX,dword ptr [ESP + 0x40]      ; 004966bc
    MOV EDX,EAX                         ; 004966c0
    SAR EDX,0x1f                        ; 004966c2
    IDIV EBX                            ; 004966c5
    FLD double ptr [ESP]                ; 004966c7
    FADD double ptr [0x005dc0d8]        ; 004966ca | DAT_005dc0d8
    CALL crt_math.c_round_FUN_005c03a0  ; 004966d0
        ;   XREF to: 005c03a0 (UNCONDITIONAL_CALL)  ; undefined crt_math.c_round_FUN_005c03a0()
    FISTP dword ptr [ESP + 0x10]        ; 004966d5
    MOV EAX,dword ptr [ESP + 0x10]      ; 004966d9
    MOV dword ptr [ESP + 0x40],EDX      ; 004966dd
    MOV EDX,EAX                         ; 004966e1
    SAR EDX,0x1f                        ; 004966e3
    IDIV EBX                            ; 004966e6
    MOV EBX,EAX                         ; 004966e8
    MOV EAX,dword ptr [ESP + 0x10]      ; 004966ea
    MOV EDX,EAX                         ; 004966ee
    MOV EDI,0x3c                        ; 004966f0
    SAR EDX,0x1f                        ; 004966f5
    IDIV EDI                            ; 004966f8
    PUSH 0xffff                         ; 004966fa
    MOV dword ptr [ESP + 0x14],EDX      ; 004966ff
    CALL engine_3d.c_setRenderAlpha_FUN_00406bd0 ; 00496703
        ;   XREF to: 00406bd0 (UNCONDITIONAL_CALL)  ; int engine_3d.c_setRenderAlpha_FUN_00406bd0(int alpha_color_value)
    ADD ESP,0x4                         ; 00496708
    PUSH 0x3f800000                     ; 0049670b
    CALL engine_mini3d.cpp_setAlpha_FUN_00512320 ; 00496710
        ;   XREF to: 00512320 (UNCONDITIONAL_CALL)  ; void engine_mini3d.cpp_setAlpha_FUN_00512320(float alpha)
    ADD ESP,0x4                         ; 00496715
    MOV EDI,dword ptr [ESP + 0x40]      ; 00496718
    PUSH EDI                            ; 0049671c
    PUSH ESI                            ; 0049671d
    MOV EAX,dword ptr [ESP + 0x18]      ; 0049671e
    PUSH EAX                            ; 00496722
    PUSH EBX                            ; 00496723
    PUSH 0x5dc09f                       ; 00496724 | = "%d:%02d elapsed, approximately %d:%02..."
    MOV EDX,dword ptr [0x01c3f578]      ; 00496729 | DAT_01c3f578
    PUSH -0x1                           ; 0049672f
    MOV ECX,dword ptr [0x01c3f53c]      ; 00496731 | DAT_01c3f53c
    MOV EAX,[0x01c4f014]                ; 00496737 | DAT_01c4f014
    PUSH EDX                            ; 0049673c
    SUB EAX,ECX                         ; 0049673d
    PUSH EAX                            ; 0049673f
    MOV EBX,dword ptr [0x01c4f010]      ; 00496740 | DAT_01c4f010
    PUSH EBX                            ; 00496746
    MOV ESI,dword ptr [0x01c4f008]      ; 00496747 | DAT_01c4f008
    PUSH ESI                            ; 0049674d
    MOV EDI,dword ptr [0x01c3eb50]      ; 0049674e | DAT_01c3eb50
    PUSH EDI                            ; 00496754
    CALL engine_font.cpp_CBitFont_drawTextCenterInBoundsF_FUN_004c23a0 ; 00496755
        ;   XREF to: 004c23a0 (UNCONDITIONAL_CALL)  ; int engine_font.cpp_CBitFont_drawTextCenterInBoundsF_FUN_004c23a0(CBitFont * this_ptr, int left_x, int right_x, int y, ...)
    ADD ESP,0x2c                        ; 0049675a
    CALL wincore_wddvmem.cpp_swapBuffers_FUN_005acff0 ; 0049675d
        ;   XREF to: 005acff0 (UNCONDITIONAL_CALL)  ; void wincore_wddvmem.cpp_swapBuffers_FUN_005acff0()
        ;   Label: LAB_0049675d
    MOV EAX,[0x01c3eb5c]                ; 00496762 | DAT_01c3eb5c
    DEC EAX                             ; 00496767
    SHL EAX,0x3                         ; 00496768
    MOV EBX,EAX                         ; 0049676b
    SHL EAX,0x6                         ; 0049676d
    SUB EAX,EBX                         ; 00496770
    MOV EBX,EAX                         ; 00496772
    MOV EAX,dword ptr [ESP + 0x3c]      ; 00496774
    MOV dword ptr [EBX + 0x1c3ed50],EAX ; 00496778
    MOV EAX,dword ptr [ESP + 0x30]      ; 0049677e
    MOV dword ptr [EBX + 0x1c3ed54],EAX ; 00496782
    MOV ESP,EBP                         ; 00496788
        ;   Label: LAB_00496788
    POP EBP                             ; 0049678a
    POP EDI                             ; 0049678b
    POP ESI                             ; 0049678c
    POP EBX                             ; 0049678d
    RET                                 ; 0049678e
    MOV ECX,0x5dc044                    ; 0049678f | = "..\\shape\\edittool.cpp"
        ;   Label: LAB_0049678f
    MOV EBX,0x7ed                       ; 00496794
    PUSH 0x5dc05a                       ; 00496799 | = "CEditorTools::updatePercentageWindow ..."
    MOV dword ptr [0x01d1d400],ECX      ; 0049679e | DAT_01d1d400
    MOV dword ptr [0x01d1d404],EBX      ; 004967a4 | DAT_01d1d404
    CALL core_main.c_FUN_005030e0       ; 004967aa
        ;   XREF to: 005030e0 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_005030e0()
    ADD ESP,0x4                         ; 004967af
    JMP 0x004962c9                      ; 004967b2
        ;   XREF to: 004962c9 (UNCONDITIONAL_JUMP)  ; LAB_004962c9
    MOV [0x01c4f020],EAX                ; 004967b7 | DAT_01c4f020
        ;   Label: LAB_004967b7
    JMP 0x0049644f                      ; 004967bc
        ;   XREF to: 0049644f (UNCONDITIONAL_JUMP)  ; LAB_0049644f
    MOV EAX,dword ptr [ESP + 0x38]      ; 004967c1
        ;   Label: LAB_004967c1
    MOV [0x01c4f020],EAX                ; 004967c5 | DAT_01c4f020
    JMP 0x004964c5                      ; 004967ca
        ;   XREF to: 004964c5 (UNCONDITIONAL_JUMP)  ; LAB_004964c5
    PUSH EAX                            ; 004967cf
        ;   Label: LAB_004967cf
    MOV ECX,dword ptr [ESP + 0x3c]      ; 004967d0
    PUSH ECX                            ; 004967d4
    MOV EAX,dword ptr [ESP + 0x4c]      ; 004967d5
    PUSH EAX                            ; 004967d9
    PUSH ESI                            ; 004967da
    PUSH EDI                            ; 004967db
    PUSH EBX                            ; 004967dc
    CALL engine_2d.c_fillRectWithBorder_FUN_00403250 ; 004967dd
        ;   XREF to: 00403250 (UNCONDITIONAL_CALL)  ; void engine_2d.c_fillRectWithBorder_FUN_00403250(int x1, int y1, int x2, int y2, ...)
    ADD ESP,0x18                        ; 004967e2
    JMP 0x004964e1                      ; 004967e5
        ;   XREF to: 004964e1 (UNCONDITIONAL_JUMP)  ; LAB_004964e1
    MOV [0x01c4f020],EAX                ; 004967ea | DAT_01c4f020
        ;   Label: LAB_004967ea
    JMP 0x00496536                      ; 004967ef
        ;   XREF to: 00496536 (UNCONDITIONAL_JUMP)  ; LAB_00496536
    PUSH ESI                            ; 004967f4
        ;   Label: LAB_004967f4
    PUSH EAX                            ; 004967f5
    PUSH EDX                            ; 004967f6
    CALL engine_2d.c_drawHLine_FUN_00402f30 ; 004967f7
        ;   XREF to: 00402f30 (UNCONDITIONAL_CALL)  ; void engine_2d.c_drawHLine_FUN_00402f30(int x1, int y, int x2)
    JMP 0x00496552                      ; 004967fc
        ;   XREF to: 00496552 (UNCONDITIONAL_JUMP)  ; LAB_00496552
    MOV ECX,dword ptr [ESP + 0x44]      ; 00496801
        ;   Label: LAB_00496801
    PUSH ECX                            ; 00496805
    PUSH EDX                            ; 00496806
    PUSH EAX                            ; 00496807
    CALL engine_2d.c_drawVLine_FUN_00403040 ; 00496808
        ;   XREF to: 00403040 (UNCONDITIONAL_CALL)  ; void engine_2d.c_drawVLine_FUN_00403040(int x, int y1, int y2)
    JMP 0x00496575                      ; 0049680d
        ;   XREF to: 00496575 (UNCONDITIONAL_JUMP)  ; LAB_00496575
    MOV dword ptr [0x01c4f020],ESI      ; 00496812 | DAT_01c4f020
        ;   Label: LAB_00496812
    JMP 0x0049661a                      ; 00496818
        ;   XREF to: 0049661a (UNCONDITIONAL_JUMP)  ; LAB_0049661a
    PUSH ESI                            ; 0049681d
        ;   Label: LAB_0049681d
    MOV ECX,dword ptr [ESP + 0x48]      ; 0049681e
    PUSH ECX                            ; 00496822
    PUSH EAX                            ; 00496823
    PUSH EDI                            ; 00496824
    PUSH EBX                            ; 00496825
    CALL engine_2d.c_fillRectColor_FUN_004031c0 ; 00496826
        ;   XREF to: 004031c0 (UNCONDITIONAL_CALL)  ; void engine_2d.c_fillRectColor_FUN_004031c0(int x1, int y1, int x2, int y2, ...)
    ADD ESP,0x14                        ; 0049682b
    JMP 0x00496636                      ; 0049682e
        ;   XREF to: 00496636 (UNCONDITIONAL_JUMP)  ; LAB_00496636

