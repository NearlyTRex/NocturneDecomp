; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void * cockpit_ckptutil_c_traceConnectedEdges_FUN_0043806e(int param_1,int *param_2,void *param_3,int *param_4,int param_5,int param_6,int param_7,int param_8,int param_9)
;
;
; Referenced Globals:
;   undefined4 DAT_01d71de0
;   undefined4 DAT_01d71de4
;
; Called Functions:
;   core_main.c_FUN_004e4330
;   crt_memory.c_realloc_FUN_005a3e50
;   crt_unknown.c_sprintf_FUN_005a28c0
;
; *****************************************************************************

section .text

    MOV ECX,ECX                         ; 0043806e
        ;   Label: cockpit_ckptutil.c_traceConnectedEdges_FUN_0043806e
    PUSH EBX                            ; 00438070
    PUSH ESI                            ; 00438071
    PUSH EDI                            ; 00438072
    PUSH EBP                            ; 00438073
    SUB ESP,0x1e4                       ; 00438074
    MOV EDX,dword ptr [ESP + 0x1f8]     ; 0043807a
    XOR EBX,EBX                         ; 00438081
    TEST EDX,EDX                        ; 00438083
    JZ 0x0043839e                       ; 00438085
        ;   XREF to: 0043839e (CONDITIONAL_JUMP)  ; LAB_0043839e
    MOV EAX,dword ptr [ESP + 0x208]     ; 0043808b
    DEC EAX                             ; 00438092
    MOV dword ptr [ESP + 0x1ac],EAX     ; 00438093
    MOV EAX,dword ptr [ESP + 0x20c]     ; 0043809a
    DEC EAX                             ; 004380a1
    XOR EBP,EBP                         ; 004380a2
    MOV dword ptr [ESP + 0x108],EAX     ; 004380a4
    MOV EAX,dword ptr [ESP + 0x1fc]     ; 004380ab
    MOV ECX,dword ptr [ESP + 0x108]     ; 004380b2
    MOV dword ptr [ESP + 0x10c],EAX     ; 004380b9
    TEST ECX,ECX                        ; 004380c0
    JLE 0x004383d1                      ; 004380c2
        ;   XREF to: 004383d1 (CONDITIONAL_JUMP)  ; LAB_004383d1
    LEA EAX,[EBP + 0x1]                 ; 004380c8
        ;   Label: LAB_004380c8
    MOV dword ptr [ESP + 0x1c8],EAX     ; 004380cb
    MOV dword ptr [ESP + 0x18c],EAX     ; 004380d2
    IMUL EAX,EBP,0x84                   ; 004380d9
    MOV dword ptr [ESP + 0x128],EAX     ; 004380df
    MOV EAX,dword ptr [ESP + 0x1c8]     ; 004380e6
    MOV dword ptr [ESP + 0x184],EAX     ; 004380ed
    MOV dword ptr [ESP + 0x174],EAX     ; 004380f4
    MOV EDI,EAX                         ; 004380fb
    IMUL EAX,EAX,0x84                   ; 004380fd
    XOR ESI,ESI                         ; 00438103
    MOV EDX,dword ptr [ESP + 0x1fc]     ; 00438105
    MOV dword ptr [ESP + 0x114],ESI     ; 0043810c
    ADD EDX,EAX                         ; 00438113
    MOV EAX,EDI                         ; 00438115
    MOV dword ptr [ESP + 0x1d4],ESI     ; 00438117
    MOV dword ptr [ESP + 0x118],EAX     ; 0043811e
    MOV EAX,dword ptr [ESP + 0x10c]     ; 00438125
    MOV dword ptr [ESP + 0x1c0],EDX     ; 0043812c
    MOV dword ptr [ESP + 0x110],EAX     ; 00438133
    MOV EAX,dword ptr [ESP + 0x1fc]     ; 0043813a
        ;   Label: LAB_0043813a
    ADD EAX,dword ptr [ESP + 0x128]     ; 00438141
    MOV EDX,dword ptr [ESP + 0x1d4]     ; 00438148
    CMP EDX,dword ptr [EAX]             ; 0043814f
    JGE 0x004383ad                      ; 00438151
        ;   XREF to: 004383ad (CONDITIONAL_JUMP)  ; LAB_004383ad
    ADD EAX,dword ptr [ESP + 0x114]     ; 00438157
    MOV ESI,dword ptr [EAX + 0x4]       ; 0043815e
    MOV EDI,dword ptr [EAX + 0x44]      ; 00438161
    ADD EDI,ESI                         ; 00438164
    DEC EDI                             ; 00438166
    CMP EBX,0x200                       ; 00438167
    JL 0x004381a3                       ; 0043816d
        ;   XREF to: 004381a3 (CONDITIONAL_JUMP)  ; LAB_004381a3
    PUSH EBP                            ; 0043816f
    PUSH EBX                            ; 00438170
    PUSH 0x5b8d44                       ; 00438171
    LEA EAX,[ESP + 0xc]                 ; 00438176
    PUSH EAX                            ; 0043817a
    CALL crt_unknown.c_sprintf_FUN_005a28c0 ; 0043817b
        ;   XREF to: 005a28c0 (UNCONDITIONAL_CALL)  ; int crt_unknown.c_sprintf_FUN_005a28c0(char * buffer, char * format)
    MOV EAX,0x5b8d73                    ; 00438180
    ADD ESP,0x10                        ; 00438185
    MOV [0x01d71de0],EAX                ; 00438188 | DAT_01d71de0
    MOV EAX,ESP                         ; 0043818d
    MOV EDX,0x87d                       ; 0043818f
    PUSH EAX                            ; 00438194
    MOV dword ptr [0x01d71de4],EDX      ; 00438195 | DAT_01d71de4
    CALL core_main.c_FUN_004e4330       ; 0043819b
        ;   XREF to: 004e4330 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_004e4330()
    ADD ESP,0x4                         ; 004381a0
    TEST ESI,ESI                        ; 004381a3
        ;   Label: LAB_004381a3
    JLE 0x0043871b                      ; 004381a5
        ;   XREF to: 0043871b (CONDITIONAL_JUMP)  ; LAB_0043871b
    LEA EAX,[ESI + 0x1]                 ; 004381ab
    MOV dword ptr [ESP + 0x120],EAX     ; 004381ae
    LEA EAX,[ESI + -0x1]                ; 004381b5
    XOR ECX,ECX                         ; 004381b8
    MOV dword ptr [ESP + 0x11c],EAX     ; 004381ba
    MOV EAX,dword ptr [ESP + 0x110]     ; 004381c1
    MOV dword ptr [ESP + 0x130],ECX     ; 004381c8
    MOV dword ptr [ESP + 0x1d0],EAX     ; 004381cf
    MOV EAX,dword ptr [ESP + 0x1c0]     ; 004381d6
    MOV dword ptr [ESP + 0x148],ECX     ; 004381dd
        ;   Label: LAB_004381dd
    MOV dword ptr [ESP + 0x14c],EAX     ; 004381e4
    IMUL EAX,dword ptr [ESP + 0x1c8],0x84 ; 004381eb
    ADD EAX,dword ptr [ESP + 0x1fc]     ; 004381f6
    MOV EDX,dword ptr [ESP + 0x148]     ; 004381fd
    CMP EDX,dword ptr [EAX]             ; 00438204
    JGE 0x0043871b                      ; 00438206
        ;   XREF to: 0043871b (CONDITIONAL_JUMP)  ; LAB_0043871b
    ADD EAX,dword ptr [ESP + 0x130]     ; 0043820c
    MOV EDX,dword ptr [EAX + 0x4]       ; 00438213
    MOV EAX,dword ptr [EAX + 0x44]      ; 00438216
    ADD EAX,EDX                         ; 00438219
    DEC EAX                             ; 0043821b
    XOR ECX,ECX                         ; 0043821c
    MOV dword ptr [ESP + 0x180],EAX     ; 0043821e
    MOV EAX,dword ptr [ESP + 0x1d4]     ; 00438225
    MOV dword ptr [ESP + 0x1bc],ECX     ; 0043822c
    TEST EAX,EAX                        ; 00438233
    JLE 0x00438273                      ; 00438235
        ;   XREF to: 00438273 (CONDITIONAL_JUMP)  ; LAB_00438273
    MOV EAX,dword ptr [ESP + 0x1d0]     ; 00438237
    MOV EAX,dword ptr [EAX]             ; 0043823e
    MOV dword ptr [ESP + 0x1b0],EAX     ; 00438240
    MOV EAX,dword ptr [ESP + 0x1d0]     ; 00438247
    MOV ECX,dword ptr [ESP + 0x1b0]     ; 0043824e
    MOV EAX,dword ptr [EAX + 0x40]      ; 00438255
    ADD ECX,EAX                         ; 00438258
    LEA EAX,[ECX + -0x1]                ; 0043825a
    MOV dword ptr [ESP + 0x19c],EAX     ; 0043825d
    CMP EDX,EAX                         ; 00438264
    JGE 0x00438273                      ; 00438266
        ;   XREF to: 00438273 (CONDITIONAL_JUMP)  ; LAB_00438273
    MOV dword ptr [ESP + 0x1bc],0x1     ; 00438268
    CMP EDX,dword ptr [ESP + 0x11c]     ; 00438273
        ;   Label: LAB_00438273
    JGE 0x004384e0                      ; 0043827a
        ;   XREF to: 004384e0 (CONDITIONAL_JUMP)  ; LAB_004384e0
    CMP ESI,dword ptr [ESP + 0x180]     ; 00438280
    JG 0x004384e0                       ; 00438287
        ;   XREF to: 004384e0 (CONDITIONAL_JUMP)  ; LAB_004384e0
    LEA EAX,[EBX*0x8 + 0x0]             ; 0043828d
    LEA ECX,[EBX + 0x1]                 ; 00438294
    MOV dword ptr [ESP + 0x1d8],ECX     ; 00438297
    MOV ECX,dword ptr [ESP + 0x1bc]     ; 0043829e
    ADD EAX,0x7e2e84                    ; 004382a5
    TEST ECX,ECX                        ; 004382aa
    JZ 0x00438436                       ; 004382ac
        ;   XREF to: 00438436 (CONDITIONAL_JUMP)  ; LAB_00438436
    MOV ECX,ESI                         ; 004382b2
    SUB ECX,dword ptr [ESP + 0x19c]     ; 004382b4
    DEC ECX                             ; 004382bb
    CMP ECX,dword ptr [ESP + 0x210]     ; 004382bc
    JG 0x004384e0                       ; 004382c3
        ;   XREF to: 004384e0 (CONDITIONAL_JUMP)  ; LAB_004384e0
    XOR EBX,EBX                         ; 004382c9
    MOV EDX,dword ptr [ESP + 0x19c]     ; 004382cb
    MOV dword ptr [ESP + 0x15c],EBX     ; 004382d2
    MOV BX,word ptr [EAX]               ; 004382d9
    MOV ECX,EBP                         ; 004382dc
    AND EBX,0xffff0000                  ; 004382de
    MOV dword ptr [ESP + 0x154],ESI     ; 004382e4
    MOV word ptr [EAX],BX               ; 004382eb
    OR EBX,EDX                          ; 004382ee
    MOV DX,word ptr [EAX + 0x2]         ; 004382f0
    MOV dword ptr [ESP + 0x158],EBP     ; 004382f4
    AND EDX,0xffff0000                  ; 004382fb
    MOV word ptr [EAX],BX               ; 00438301
    MOV EBX,EDX                         ; 00438304
    MOV word ptr [EAX + 0x2],DX         ; 00438306
    OR EBX,ECX                          ; 0043830a
    MOV CX,word ptr [EAX + 0x4]         ; 0043830c
    MOV word ptr [EAX + 0x2],BX         ; 00438310
    AND ECX,0xffff0000                  ; 00438314
    MOV EDX,dword ptr [ESP + 0x154]     ; 0043831a
    MOV word ptr [EAX + 0x4],CX         ; 00438321
    MOV EBX,ECX                         ; 00438325
    MOV CX,word ptr [EAX + 0x6]         ; 00438327
    OR EBX,EDX                          ; 0043832b
    MOV EDX,dword ptr [ESP + 0x158]     ; 0043832d
    AND ECX,0xffff8000                  ; 00438334
    MOV word ptr [EAX + 0x4],BX         ; 0043833a
    AND DH,0x7f                         ; 0043833e
    MOV EBX,ECX                         ; 00438341
    MOV word ptr [EAX + 0x6],CX         ; 00438343
    OR EBX,EDX                          ; 00438347
    MOV word ptr [EAX + 0x6],BX         ; 00438349
    MOV EDX,dword ptr [ESP + 0x15c]     ; 0043834d
    MOV BL,byte ptr [EAX + 0x7]         ; 00438354
    XOR DH,DH                           ; 00438357
    AND BL,0x7f                         ; 00438359
    AND DL,0x1                          ; 0043835c
    MOV byte ptr [EAX + 0x7],BL         ; 0043835f
    SHL EDX,0xf                         ; 00438362
    MOV CX,word ptr [EAX + 0x6]         ; 00438365
    OR ECX,EDX                          ; 00438369
    MOV EBX,dword ptr [ESP + 0x1d8]     ; 0043836b
    MOV word ptr [EAX + 0x6],CX         ; 00438372
        ;   Label: LAB_00438372
    MOV EDX,dword ptr [ESP + 0x130]     ; 00438376
        ;   Label: LAB_00438376
    MOV ECX,dword ptr [ESP + 0x148]     ; 0043837d
    MOV EAX,dword ptr [ESP + 0x14c]     ; 00438384
    ADD EDX,0x4                         ; 0043838b
    INC ECX                             ; 0043838e
    ADD EAX,0x4                         ; 0043838f
    MOV dword ptr [ESP + 0x130],EDX     ; 00438392
    JMP 0x004381dd                      ; 00438399
        ;   XREF to: 004381dd (UNCONDITIONAL_JUMP)  ; LAB_004381dd
    XOR ESI,ESI                         ; 0043839e
        ;   Label: LAB_0043839e
    MOV EAX,ESI                         ; 004383a0
    ADD ESP,0x1e4                       ; 004383a2
    POP EBP                             ; 004383a8
    POP EDI                             ; 004383a9
    POP ESI                             ; 004383aa
    POP EBX                             ; 004383ab
    RET                                 ; 004383ac
    MOV ESI,dword ptr [ESP + 0x10c]     ; 004383ad
        ;   Label: LAB_004383ad
    MOV EDI,dword ptr [ESP + 0x108]     ; 004383b4
    ADD ESI,0x84                        ; 004383bb
    INC EBP                             ; 004383c1
    MOV dword ptr [ESP + 0x10c],ESI     ; 004383c2
    CMP EBP,EDI                         ; 004383c9
    JL 0x004380c8                       ; 004383cb
        ;   XREF to: 004380c8 (CONDITIONAL_JUMP)  ; LAB_004380c8
    TEST EBX,EBX                        ; 004383d1
        ;   Label: LAB_004383d1
    JNZ 0x00438a6d                      ; 004383d3
        ;   XREF to: 00438a6d (CONDITIONAL_JUMP)  ; LAB_00438a6d
    CMP dword ptr [ESP + 0x200],0x0     ; 004383d9
    JNZ 0x004383ec                      ; 004383e1
        ;   XREF to: 004383ec (CONDITIONAL_JUMP)  ; LAB_004383ec
    MOV EAX,dword ptr [ESP + 0x204]     ; 004383e3
    MOV dword ptr [EAX],EBX             ; 004383ea
    MOV ESI,dword ptr [ESP + 0x200]     ; 004383ec
        ;   Label: LAB_004383ec
    MOV EAX,ESI                         ; 004383f3
    ADD ESP,0x1e4                       ; 004383f5
    POP EBP                             ; 004383fb
    POP EDI                             ; 004383fc
    POP ESI                             ; 004383fd
    POP EBX                             ; 004383fe
    RET                                 ; 004383ff
    MOV EDI,dword ptr [ESP + 0x114]     ; 00438400
        ;   Label: LAB_00438400
    MOV EAX,dword ptr [ESP + 0x1d4]     ; 00438407
    MOV ESI,dword ptr [ESP + 0x110]     ; 0043840e
    ADD EDI,0x4                         ; 00438415
    INC EAX                             ; 00438418
    ADD ESI,0x4                         ; 00438419
    MOV dword ptr [ESP + 0x114],EDI     ; 0043841c
    MOV dword ptr [ESP + 0x1d4],EAX     ; 00438423
    MOV dword ptr [ESP + 0x110],ESI     ; 0043842a
    JMP 0x0043813a                      ; 00438431
        ;   XREF to: 0043813a (UNCONDITIONAL_JUMP)  ; LAB_0043813a
    MOV dword ptr [ESP + 0x134],EDX     ; 00438436
        ;   Label: LAB_00438436
    MOV EDX,dword ptr [ESP + 0x118]     ; 0043843d
    MOV EBX,EBP                         ; 00438444
    MOV dword ptr [ESP + 0x13c],EDX     ; 00438446
    MOV DX,word ptr [EAX]               ; 0043844d
    MOV dword ptr [ESP + 0x144],ECX     ; 00438450
    AND EDX,0xffff0000                  ; 00438457
    MOV CX,word ptr [EAX + 0x2]         ; 0043845d
    MOV word ptr [EAX],DX               ; 00438461
    OR EDX,ESI                          ; 00438464
    AND ECX,0xffff0000                  ; 00438466
    MOV word ptr [EAX],DX               ; 0043846c
    MOV EDX,ECX                         ; 0043846f
    MOV word ptr [EAX + 0x2],CX         ; 00438471
    OR EDX,EBX                          ; 00438475
    MOV BX,word ptr [EAX + 0x4]         ; 00438477
    MOV word ptr [EAX + 0x2],DX         ; 0043847b
    AND EBX,0xffff0000                  ; 0043847f
    MOV EDX,dword ptr [ESP + 0x134]     ; 00438485
    MOV word ptr [EAX + 0x4],BX         ; 0043848c
    MOV ECX,EBX                         ; 00438490
    MOV BX,word ptr [EAX + 0x6]         ; 00438492
    OR ECX,EDX                          ; 00438496
    MOV EDX,dword ptr [ESP + 0x13c]     ; 00438498
    AND EBX,0xffff8000                  ; 0043849f
    MOV word ptr [EAX + 0x4],CX         ; 004384a5
    AND DH,0x7f                         ; 004384a9
    MOV ECX,EBX                         ; 004384ac
    MOV word ptr [EAX + 0x6],BX         ; 004384ae
    OR ECX,EDX                          ; 004384b2
    MOV word ptr [EAX + 0x6],CX         ; 004384b4
    MOV EDX,dword ptr [ESP + 0x144]     ; 004384b8
    MOV BL,byte ptr [EAX + 0x7]         ; 004384bf
    XOR DH,DH                           ; 004384c2
    AND BL,0x7f                         ; 004384c4
    AND DL,0x1                          ; 004384c7
    MOV byte ptr [EAX + 0x7],BL         ; 004384ca
    SHL EDX,0xf                         ; 004384cd
    OR word ptr [EAX + 0x6],DX          ; 004384d0
    MOV EBX,dword ptr [ESP + 0x1d8]     ; 004384d4
    JMP 0x00438376                      ; 004384db
        ;   XREF to: 00438376 (UNCONDITIONAL_JUMP)  ; LAB_00438376
    XOR ECX,ECX                         ; 004384e0
        ;   Label: LAB_004384e0
    MOV EAX,dword ptr [ESP + 0x148]     ; 004384e2
    MOV dword ptr [ESP + 0x138],ECX     ; 004384e9
    TEST EAX,EAX                        ; 004384f0
    JLE 0x00438530                      ; 004384f2
        ;   XREF to: 00438530 (CONDITIONAL_JUMP)  ; LAB_00438530
    MOV EAX,dword ptr [ESP + 0x14c]     ; 004384f4
    MOV EAX,dword ptr [EAX]             ; 004384fb
    MOV dword ptr [ESP + 0x1b0],EAX     ; 004384fd
    MOV EAX,dword ptr [ESP + 0x14c]     ; 00438504
    MOV ECX,dword ptr [ESP + 0x1b0]     ; 0043850b
    MOV EAX,dword ptr [EAX + 0x40]      ; 00438512
    ADD ECX,EAX                         ; 00438515
    LEA EAX,[ECX + -0x1]                ; 00438517
    MOV dword ptr [ESP + 0x1dc],EAX     ; 0043851a
    CMP ESI,EAX                         ; 00438521
    JGE 0x00438530                      ; 00438523
        ;   XREF to: 00438530 (CONDITIONAL_JUMP)  ; LAB_00438530
    MOV dword ptr [ESP + 0x138],0x1     ; 00438525
    CMP EDX,dword ptr [ESP + 0x120]     ; 00438530
        ;   Label: LAB_00438530
    JLE 0x00438376                      ; 00438537
        ;   XREF to: 00438376 (CONDITIONAL_JUMP)  ; LAB_00438376
    CMP EDX,EDI                         ; 0043853d
    JG 0x00438376                       ; 0043853f
        ;   XREF to: 00438376 (CONDITIONAL_JUMP)  ; LAB_00438376
    CMP dword ptr [ESP + 0x138],0x0     ; 00438545
    JZ 0x0043864b                       ; 0043854d
        ;   XREF to: 0043864b (CONDITIONAL_JUMP)  ; LAB_0043864b
    CMP dword ptr [ESP + 0x138],0x0     ; 00438553
        ;   Label: LAB_00438553
    JZ 0x00438376                       ; 0043855b
        ;   XREF to: 00438376 (CONDITIONAL_JUMP)  ; LAB_00438376
    MOV ECX,dword ptr [ESP + 0x1dc]     ; 00438561
    MOV EAX,EDX                         ; 00438568
    SUB EAX,ECX                         ; 0043856a
    MOV ECX,dword ptr [ESP + 0x214]     ; 0043856c
    DEC EAX                             ; 00438573
    CMP EAX,ECX                         ; 00438574
    JG 0x00438376                       ; 00438576
        ;   XREF to: 00438376 (CONDITIONAL_JUMP)  ; LAB_00438376
    MOV EAX,dword ptr [ESP + 0x1dc]     ; 0043857c
    MOV dword ptr [ESP + 0x170],EAX     ; 00438583
    MOV EAX,dword ptr [ESP + 0x184]     ; 0043858a
    MOV dword ptr [ESP + 0x178],EDX     ; 00438591
    MOV dword ptr [ESP + 0x150],EAX     ; 00438598
    MOV EDX,EAX                         ; 0043859f
    MOV dword ptr [ESP + 0x17c],0x1     ; 004385a1
    LEA EAX,[EBX*0x8 + 0x0]             ; 004385ac
    MOV ECX,dword ptr [ESP + 0x170]     ; 004385b3
    ADD EAX,0x7e2e84                    ; 004385ba
    MOV dword ptr [ESP + 0x1e0],ECX     ; 004385bf
    AND word ptr [EAX],0x0              ; 004385c6
    MOV ECX,dword ptr [ESP + 0x1e0]     ; 004385ca
    OR word ptr [EAX],CX                ; 004385d1
    MOV ECX,dword ptr [ESP + 0x150]     ; 004385d4
    MOV dword ptr [ESP + 0x1e0],ECX     ; 004385db
    AND word ptr [EAX + 0x2],0x0        ; 004385e2
    MOV ECX,dword ptr [ESP + 0x1e0]     ; 004385e7
    OR word ptr [EAX + 0x2],CX          ; 004385ee
    MOV ECX,dword ptr [ESP + 0x178]     ; 004385f2
    MOV dword ptr [ESP + 0x1e0],ECX     ; 004385f9
    AND word ptr [EAX + 0x4],0x0        ; 00438600
    MOV ECX,dword ptr [ESP + 0x1e0]     ; 00438605
    OR word ptr [EAX + 0x4],CX          ; 0043860c
    MOV CX,word ptr [EAX + 0x6]         ; 00438610
    AND ECX,0xffff8000                  ; 00438614
    AND DH,0x7f                         ; 0043861a
    MOV word ptr [EAX + 0x6],CX         ; 0043861d
    OR ECX,EDX                          ; 00438621
    MOV word ptr [EAX + 0x6],CX         ; 00438623
    MOV EDX,dword ptr [ESP + 0x17c]     ; 00438627
    MOV CH,byte ptr [EAX + 0x7]         ; 0043862e
    XOR DH,DH                           ; 00438631
    AND CH,0x7f                         ; 00438633
    AND DL,0x1                          ; 00438636
    MOV byte ptr [EAX + 0x7],CH         ; 00438639
    SHL EDX,0xf                         ; 0043863c
    MOV CX,word ptr [EAX + 0x6]         ; 0043863f
    OR ECX,EDX                          ; 00438643
    INC EBX                             ; 00438645
    JMP 0x00438372                      ; 00438646
        ;   XREF to: 00438372 (UNCONDITIONAL_JUMP)  ; LAB_00438372
    MOV EAX,EDX                         ; 0043864b
        ;   Label: LAB_0043864b
    SUB EAX,ESI                         ; 0043864d
    MOV ECX,dword ptr [ESP + 0x218]     ; 0043864f
    INC EAX                             ; 00438656
    CMP EAX,ECX                         ; 00438657
    JG 0x00438553                       ; 00438659
        ;   XREF to: 00438553 (CONDITIONAL_JUMP)  ; LAB_00438553
    MOV EAX,dword ptr [ESP + 0x174]     ; 0043865f
    MOV dword ptr [ESP + 0x168],EAX     ; 00438666
    MOV dword ptr [ESP + 0x16c],0x1     ; 0043866d
    LEA EAX,[EBX*0x8 + 0x0]             ; 00438678
    ADD EAX,0x7e2e84                    ; 0043867f
    MOV dword ptr [ESP + 0x164],EDX     ; 00438684
    MOV DX,word ptr [EAX]               ; 0043868b
    MOV dword ptr [ESP + 0x160],EBP     ; 0043868e
    AND EDX,0xffff0000                  ; 00438695
    MOV CX,word ptr [EAX + 0x2]         ; 0043869b
    MOV word ptr [EAX],DX               ; 0043869f
    OR EDX,ESI                          ; 004386a2
    AND ECX,0xffff0000                  ; 004386a4
    MOV word ptr [EAX],DX               ; 004386aa
    MOV EDX,dword ptr [ESP + 0x160]     ; 004386ad
    MOV word ptr [EAX + 0x2],CX         ; 004386b4
    OR ECX,EDX                          ; 004386b8
    MOV word ptr [EAX + 0x2],CX         ; 004386ba
    MOV CX,word ptr [EAX + 0x4]         ; 004386be
    AND ECX,0xffff0000                  ; 004386c2
    MOV EDX,dword ptr [ESP + 0x164]     ; 004386c8
    MOV word ptr [EAX + 0x4],CX         ; 004386cf
    OR ECX,EDX                          ; 004386d3
    MOV word ptr [EAX + 0x4],CX         ; 004386d5
    MOV CX,word ptr [EAX + 0x6]         ; 004386d9
    MOV EDX,dword ptr [ESP + 0x168]     ; 004386dd
    AND ECX,0xffff8000                  ; 004386e4
    AND DH,0x7f                         ; 004386ea
    MOV word ptr [EAX + 0x6],CX         ; 004386ed
    OR ECX,EDX                          ; 004386f1
    MOV word ptr [EAX + 0x6],CX         ; 004386f3
    MOV EDX,dword ptr [ESP + 0x16c]     ; 004386f7
    MOV CL,byte ptr [EAX + 0x7]         ; 004386fe
    XOR DH,DH                           ; 00438701
    AND CL,0x7f                         ; 00438703
    AND DL,0x1                          ; 00438706
    MOV byte ptr [EAX + 0x7],CL         ; 00438709
    SHL EDX,0xf                         ; 0043870c
    MOV CX,word ptr [EAX + 0x6]         ; 0043870f
    OR ECX,EDX                          ; 00438713
    INC EBX                             ; 00438715
    JMP 0x00438372                      ; 00438716
        ;   XREF to: 00438372 (UNCONDITIONAL_JUMP)  ; LAB_00438372
    CMP EBX,0x200                       ; 0043871b
        ;   Label: LAB_0043871b
    JL 0x00438757                       ; 00438721
        ;   XREF to: 00438757 (CONDITIONAL_JUMP)  ; LAB_00438757
    PUSH EBP                            ; 00438723
    PUSH EBX                            ; 00438724
    PUSH 0x5b8d89                       ; 00438725
    LEA EAX,[ESP + 0xc]                 ; 0043872a
    PUSH EAX                            ; 0043872e
    CALL crt_unknown.c_sprintf_FUN_005a28c0 ; 0043872f
        ;   XREF to: 005a28c0 (UNCONDITIONAL_CALL)  ; int crt_unknown.c_sprintf_FUN_005a28c0(char * buffer, char * format)
    MOV EAX,0x5b8db8                    ; 00438734
    ADD ESP,0x10                        ; 00438739
    MOV [0x01d71de0],EAX                ; 0043873c | DAT_01d71de0
    MOV EAX,ESP                         ; 00438741
    MOV EDX,0x8b7                       ; 00438743
    PUSH EAX                            ; 00438748
    MOV dword ptr [0x01d71de4],EDX      ; 00438749 | DAT_01d71de4
    CALL core_main.c_FUN_004e4330       ; 0043874f
        ;   XREF to: 004e4330 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_004e4330()
    ADD ESP,0x4                         ; 00438754
    CMP EDI,dword ptr [ESP + 0x1ac]     ; 00438757
        ;   Label: LAB_00438757
    JGE 0x00438400                      ; 0043875e
        ;   XREF to: 00438400 (CONDITIONAL_JUMP)  ; LAB_00438400
    XOR EAX,EAX                         ; 00438764
    MOV dword ptr [ESP + 0x140],EAX     ; 00438766
    LEA EAX,[EDI + -0x1]                ; 0043876d
    MOV dword ptr [ESP + 0x1c4],EAX     ; 00438770
    LEA EAX,[EDI + 0x1]                 ; 00438777
    XOR EDX,EDX                         ; 0043877a
    MOV dword ptr [ESP + 0x124],EAX     ; 0043877c
    MOV EAX,dword ptr [ESP + 0x114]     ; 00438783
    MOV dword ptr [ESP + 0x1a4],EDX     ; 0043878a
    MOV dword ptr [ESP + 0x1cc],EAX     ; 00438791
    IMUL EAX,dword ptr [ESP + 0x1c8],0x84 ; 00438798
        ;   Label: LAB_00438798
    ADD EAX,dword ptr [ESP + 0x1fc]     ; 004387a3
    MOV EDX,dword ptr [ESP + 0x140]     ; 004387aa
    CMP EDX,dword ptr [EAX]             ; 004387b1
    JGE 0x00438400                      ; 004387b3
        ;   XREF to: 00438400 (CONDITIONAL_JUMP)  ; LAB_00438400
    ADD EAX,dword ptr [ESP + 0x1a4]     ; 004387b9
    MOV EDX,dword ptr [EAX + 0x4]       ; 004387c0
    MOV ECX,dword ptr [EAX + 0x44]      ; 004387c3
    MOV dword ptr [ESP + 0x1b4],EDX     ; 004387c6
    LEA EAX,[EDX + ECX*0x1]             ; 004387cd
    XOR EDX,EDX                         ; 004387d0
    MOV ECX,dword ptr [ESP + 0x128]     ; 004387d2
    MOV dword ptr [ESP + 0x194],EDX     ; 004387d9
    MOV EDX,dword ptr [ESP + 0x1fc]     ; 004387e0
    ADD EDX,ECX                         ; 004387e7
    MOV ECX,dword ptr [EDX]             ; 004387e9
    DEC ECX                             ; 004387eb
    MOV dword ptr [ESP + 0x1b0],ECX     ; 004387ec
    MOV ECX,dword ptr [ESP + 0x1d4]     ; 004387f3
    DEC EAX                             ; 004387fa
    CMP ECX,dword ptr [ESP + 0x1b0]     ; 004387fb
    JGE 0x0043881b                      ; 00438802
        ;   XREF to: 0043881b (CONDITIONAL_JUMP)  ; LAB_0043881b
    ADD EDX,dword ptr [ESP + 0x1cc]     ; 00438804
    CMP EAX,dword ptr [EDX + 0x8]       ; 0043880b
    JLE 0x0043881b                      ; 0043880e
        ;   XREF to: 0043881b (CONDITIONAL_JUMP)  ; LAB_0043881b
    MOV dword ptr [ESP + 0x194],0x1     ; 00438810
    CMP EAX,dword ptr [ESP + 0x124]     ; 0043881b
        ;   Label: LAB_0043881b
    JLE 0x0043883c                      ; 00438822
        ;   XREF to: 0043883c (CONDITIONAL_JUMP)  ; LAB_0043883c
    CMP EDI,dword ptr [ESP + 0x1b4]     ; 00438824
    JL 0x0043883c                       ; 0043882b
        ;   XREF to: 0043883c (CONDITIONAL_JUMP)  ; LAB_0043883c
    MOV ECX,dword ptr [ESP + 0x194]     ; 0043882d
    TEST ECX,ECX                        ; 00438834
    JZ 0x004388bc                       ; 00438836
        ;   XREF to: 004388bc (CONDITIONAL_JUMP)  ; LAB_004388bc
    XOR EDX,EDX                         ; 0043883c
        ;   Label: LAB_0043883c
    MOV ECX,dword ptr [ESP + 0x1c8]     ; 0043883e
    MOV dword ptr [ESP + 0x12c],EDX     ; 00438845
    IMUL EDX,ECX,0x84                   ; 0043884c
    ADD EDX,dword ptr [ESP + 0x1fc]     ; 00438852
    MOV ECX,dword ptr [EDX]             ; 00438859
    DEC ECX                             ; 0043885b
    MOV dword ptr [ESP + 0x1b0],ECX     ; 0043885c
    MOV ECX,dword ptr [ESP + 0x140]     ; 00438863
    CMP ECX,dword ptr [ESP + 0x1b0]     ; 0043886a
    JGE 0x0043888a                      ; 00438871
        ;   XREF to: 0043888a (CONDITIONAL_JUMP)  ; LAB_0043888a
    ADD EDX,dword ptr [ESP + 0x1a4]     ; 00438873
    CMP EDI,dword ptr [EDX + 0x8]       ; 0043887a
    JLE 0x0043888a                      ; 0043887d
        ;   XREF to: 0043888a (CONDITIONAL_JUMP)  ; LAB_0043888a
    MOV dword ptr [ESP + 0x12c],0x1     ; 0043887f
    CMP EAX,dword ptr [ESP + 0x1c4]     ; 0043888a
        ;   Label: LAB_0043888a
    JL 0x00438978                       ; 00438891
        ;   XREF to: 00438978 (CONDITIONAL_JUMP)  ; LAB_00438978
    MOV ECX,dword ptr [ESP + 0x140]     ; 00438897
        ;   Label: LAB_00438897
    MOV EDX,dword ptr [ESP + 0x1a4]     ; 0043889e
    INC ECX                             ; 004388a5
    ADD EDX,0x4                         ; 004388a6
    MOV dword ptr [ESP + 0x140],ECX     ; 004388a9
    MOV dword ptr [ESP + 0x1a4],EDX     ; 004388b0
    JMP 0x00438798                      ; 004388b7
        ;   XREF to: 00438798 (UNCONDITIONAL_JUMP)  ; LAB_00438798
    MOV dword ptr [ESP + 0x190],EAX     ; 004388bc
        ;   Label: LAB_004388bc
    MOV EAX,dword ptr [ESP + 0x18c]     ; 004388c3
    MOV dword ptr [ESP + 0x198],EAX     ; 004388ca
    LEA EAX,[EBX*0x8 + 0x0]             ; 004388d1
    ADD EAX,0x7e2e84                    ; 004388d8
    MOV dword ptr [ESP + 0x1a0],ECX     ; 004388dd
    MOV CX,word ptr [EAX]               ; 004388e4
    AND ECX,0xffff0000                  ; 004388e7
    MOV word ptr [EAX],CX               ; 004388ed
    OR ECX,EDI                          ; 004388f0
    MOV word ptr [EAX],CX               ; 004388f2
    MOV CX,word ptr [EAX + 0x2]         ; 004388f5
    MOV dword ptr [ESP + 0x188],EBP     ; 004388f9
    AND ECX,0xffff0000                  ; 00438900
    MOV EDX,dword ptr [ESP + 0x188]     ; 00438906
    MOV word ptr [EAX + 0x2],CX         ; 0043890d
    OR ECX,EDX                          ; 00438911
    MOV word ptr [EAX + 0x2],CX         ; 00438913
    MOV CX,word ptr [EAX + 0x4]         ; 00438917
    AND ECX,0xffff0000                  ; 0043891b
    MOV EDX,dword ptr [ESP + 0x190]     ; 00438921
    MOV word ptr [EAX + 0x4],CX         ; 00438928
    OR ECX,EDX                          ; 0043892c
    MOV word ptr [EAX + 0x4],CX         ; 0043892e
    MOV CX,word ptr [EAX + 0x6]         ; 00438932
    MOV EDX,dword ptr [ESP + 0x198]     ; 00438936
    AND ECX,0xffff8000                  ; 0043893d
    AND DH,0x7f                         ; 00438943
    MOV word ptr [EAX + 0x6],CX         ; 00438946
    OR ECX,EDX                          ; 0043894a
    MOV word ptr [EAX + 0x6],CX         ; 0043894c
    MOV EDX,dword ptr [ESP + 0x1a0]     ; 00438950
    MOV CL,byte ptr [EAX + 0x7]         ; 00438957
    XOR DH,DH                           ; 0043895a
    AND CL,0x7f                         ; 0043895c
    AND DL,0x1                          ; 0043895f
    MOV byte ptr [EAX + 0x7],CL         ; 00438962
    SHL EDX,0xf                         ; 00438965
    MOV CX,word ptr [EAX + 0x6]         ; 00438968
    OR ECX,EDX                          ; 0043896c
    INC EBX                             ; 0043896e
    MOV word ptr [EAX + 0x6],CX         ; 0043896f
    JMP 0x00438897                      ; 00438973
        ;   XREF to: 00438897 (UNCONDITIONAL_JUMP)  ; LAB_00438897
    CMP EAX,ESI                         ; 00438978
        ;   Label: LAB_00438978
    JL 0x00438897                       ; 0043897a
        ;   XREF to: 00438897 (CONDITIONAL_JUMP)  ; LAB_00438897
    CMP dword ptr [ESP + 0x12c],0x0     ; 00438980
    JNZ 0x00438897                      ; 00438988
        ;   XREF to: 00438897 (CONDITIONAL_JUMP)  ; LAB_00438897
    MOV EDX,EDI                         ; 0043898e
    SUB EDX,EAX                         ; 00438990
    MOV ECX,dword ptr [ESP + 0x218]     ; 00438992
    INC EDX                             ; 00438999
    CMP EDX,ECX                         ; 0043899a
    JG 0x00438897                       ; 0043899c
        ;   XREF to: 00438897 (CONDITIONAL_JUMP)  ; LAB_00438897
    MOV dword ptr [ESP + 0x1a8],EAX     ; 004389a2
    MOV EAX,0x1                         ; 004389a9
    MOV dword ptr [ESP + 0x100],EDI     ; 004389ae
    MOV dword ptr [ESP + 0x1b8],EAX     ; 004389b5
    LEA EAX,[EBX*0x8 + 0x0]             ; 004389bc
    MOV ECX,dword ptr [ESP + 0x100]     ; 004389c3
    ADD EAX,0x7e2e84                    ; 004389ca
    MOV dword ptr [ESP + 0x1e0],ECX     ; 004389cf
    AND word ptr [EAX],0x0              ; 004389d6
    MOV ECX,dword ptr [ESP + 0x1e0]     ; 004389da
    MOV dword ptr [ESP + 0x104],EBP     ; 004389e1
    OR word ptr [EAX],CX                ; 004389e8
    MOV ECX,dword ptr [ESP + 0x104]     ; 004389eb
    MOV dword ptr [ESP + 0x1e0],ECX     ; 004389f2
    AND word ptr [EAX + 0x2],0x0        ; 004389f9
    MOV ECX,dword ptr [ESP + 0x1e0]     ; 004389fe
    OR word ptr [EAX + 0x2],CX          ; 00438a05
    MOV ECX,dword ptr [ESP + 0x1a8]     ; 00438a09
    MOV dword ptr [ESP + 0x1e0],ECX     ; 00438a10
    AND word ptr [EAX + 0x4],0x0        ; 00438a17
    MOV ECX,dword ptr [ESP + 0x1e0]     ; 00438a1c
    OR word ptr [EAX + 0x4],CX          ; 00438a23
    MOV CX,word ptr [EAX + 0x6]         ; 00438a27
    MOV EDX,dword ptr [ESP + 0x1c8]     ; 00438a2b
    AND ECX,0xffff8000                  ; 00438a32
    AND DH,0x7f                         ; 00438a38
    MOV word ptr [EAX + 0x6],CX         ; 00438a3b
    OR ECX,EDX                          ; 00438a3f
    MOV word ptr [EAX + 0x6],CX         ; 00438a41
    MOV EDX,dword ptr [ESP + 0x1b8]     ; 00438a45
    MOV CH,byte ptr [EAX + 0x7]         ; 00438a4c
    XOR DH,DH                           ; 00438a4f
    AND CH,0x7f                         ; 00438a51
    AND DL,0x1                          ; 00438a54
    MOV byte ptr [EAX + 0x7],CH         ; 00438a57
    SHL EDX,0xf                         ; 00438a5a
    MOV CX,word ptr [EAX + 0x6]         ; 00438a5d
    OR ECX,EDX                          ; 00438a61
    INC EBX                             ; 00438a63
    MOV word ptr [EAX + 0x6],CX         ; 00438a64
    JMP 0x00438897                      ; 00438a68
        ;   XREF to: 00438897 (UNCONDITIONAL_JUMP)  ; LAB_00438897
    MOV EBP,dword ptr [ESP + 0x200]     ; 00438a6d
        ;   Label: LAB_00438a6d
    TEST EBP,EBP                        ; 00438a74
    JNZ 0x00438a81                      ; 00438a76
        ;   XREF to: 00438a81 (CONDITIONAL_JUMP)  ; LAB_00438a81
    MOV EAX,dword ptr [ESP + 0x204]     ; 00438a78
    MOV dword ptr [EAX],EBP             ; 00438a7f
    MOV EDI,dword ptr [ESP + 0x204]     ; 00438a81
        ;   Label: LAB_00438a81
    MOV EDI,dword ptr [EDI]             ; 00438a88
    LEA ESI,[EBX*0x8 + 0x0]             ; 00438a8a
    SHL EDI,0x3                         ; 00438a91
    ADD EDI,ESI                         ; 00438a94
    PUSH EDI                            ; 00438a96
    MOV EAX,dword ptr [ESP + 0x204]     ; 00438a97
    PUSH EAX                            ; 00438a9e
    CALL crt_memory.c_realloc_FUN_005a3e50 ; 00438a9f
        ;   XREF to: 005a3e50 (UNCONDITIONAL_CALL)  ; void * crt_memory.c_realloc_FUN_005a3e50(void * ptr, ulong new_size)
    ADD ESP,0x8                         ; 00438aa4
    MOV dword ptr [ESP + 0x200],EAX     ; 00438aa7
    TEST EAX,EAX                        ; 00438aae
    JNZ 0x00438ae6                      ; 00438ab0
        ;   XREF to: 00438ae6 (CONDITIONAL_JUMP)  ; LAB_00438ae6
    PUSH EDI                            ; 00438ab2
    PUSH 0x5b8dce                       ; 00438ab3
    LEA EAX,[ESP + 0x8]                 ; 00438ab8
    PUSH EAX                            ; 00438abc
    CALL crt_unknown.c_sprintf_FUN_005a28c0 ; 00438abd
        ;   XREF to: 005a28c0 (UNCONDITIONAL_CALL)  ; int crt_unknown.c_sprintf_FUN_005a28c0(char * buffer, char * format)
    MOV EDX,0x5b8df9                    ; 00438ac2
    ADD ESP,0xc                         ; 00438ac7
    MOV EAX,ESP                         ; 00438aca
    MOV ECX,0x8f6                       ; 00438acc
    PUSH EAX                            ; 00438ad1
    MOV dword ptr [0x01d71de0],EDX      ; 00438ad2 | DAT_01d71de0
    MOV dword ptr [0x01d71de4],ECX      ; 00438ad8 | DAT_01d71de4
    CALL core_main.c_FUN_004e4330       ; 00438ade
        ;   XREF to: 004e4330 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_004e4330()
    ADD ESP,0x4                         ; 00438ae3
    MOV EDI,dword ptr [ESP + 0x204]     ; 00438ae6
        ;   Label: LAB_00438ae6
    MOV EBP,dword ptr [ESP + 0x200]     ; 00438aed
    MOV EDI,dword ptr [EDI]             ; 00438af4
    MOV ECX,ESI                         ; 00438af6
    SHL EDI,0x3                         ; 00438af8
    MOV ESI,0x7e2e84                    ; 00438afb
    ADD EDI,EBP                         ; 00438b00
    PUSH EDI                            ; 00438b02
    MOV EAX,ECX                         ; 00438b03
    SHR ECX,0x2                         ; 00438b05
    MOVSD.REP ES:EDI,ESI                ; 00438b08
    MOV CL,AL                           ; 00438b0a
    AND CL,0x3                          ; 00438b0c
    MOVSB.REP ES:EDI,ESI                ; 00438b0f
    POP EDI                             ; 00438b11
    MOV EAX,dword ptr [ESP + 0x204]     ; 00438b12
    MOV EDX,dword ptr [EAX]             ; 00438b19
    ADD EDX,EBX                         ; 00438b1b
    MOV ESI,EBP                         ; 00438b1d
    MOV dword ptr [EAX],EDX             ; 00438b1f
    MOV EAX,ESI                         ; 00438b21
    ADD ESP,0x1e4                       ; 00438b23
    POP EBP                             ; 00438b29
    POP EDI                             ; 00438b2a
    POP ESI                             ; 00438b2b
    POP EBX                             ; 00438b2c
    RET                                 ; 00438b2d

