; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int FUN_00448060(int param_1)
;
;
; XREF[1]:
;   FUN_00448360 at 00448374
;
; Referenced Globals:
;   undefined4 DAT_005dde50
;   undefined4 DAT_005f2afc
;   undefined4 DAT_00603b28
;   undefined4 DAT_01c6e2d4
;
; Called Functions:
;   FUN_004087f0
;   FUN_00408830
;   FUN_0041daf0
;   FUN_0041e9b0
;   FUN_0046c800
;   FUN_0046d460
;   FUN_0046d4c0
;   FUN_0046d540
;   FUN_0046e5e0
;   FUN_00538ad0
;   FUN_00538dd0
;   FUN_0053ab80
;
; *****************************************************************************

section .text

    PUSH ESI                            ; 00448060
        ;   Label: FUN_00448060
    PUSH EDI                            ; 00448061
    PUSH EBP                            ; 00448062
    SUB ESP,0x64                        ; 00448063
    MOV EBP,dword ptr [ESP + 0x74]      ; 00448066
    PUSH EBP                            ; 0044806a
    CALL FUN_004087f0                   ; 0044806b
        ;   XREF to: 004087f0 (UNCONDITIONAL_CALL)  ; undefined FUN_004087f0()
    ADD ESP,0x4                         ; 00448070
    PUSH 0x0                            ; 00448073
    MOV EAX,dword ptr [EBP + 0x154]     ; 00448075
    PUSH EBP                            ; 0044807b
    LEA ESI,[ESP + 0x8]                 ; 0044807c
    LEA EDI,[ESP + 0x20]                ; 00448080
    CALL dword ptr [EAX + 0x1c]         ; 00448084
    MOV ECX,0x6                         ; 00448087
    ADD ESP,0x4                         ; 0044808c
    LEA EAX,[ESP + 0x1c]                ; 0044808f
    LEA ESI,[ESP + 0x4]                 ; 00448093
    PUSH EAX                            ; 00448097
    MOVSD.REP ES:EDI,ESI                ; 00448098
    CALL FUN_0041daf0                   ; 0044809a
        ;   XREF to: 0041daf0 (UNCONDITIONAL_CALL)  ; undefined FUN_0041daf0()
    ADD ESP,0x8                         ; 0044809f
    MOV dword ptr [ESP + 0x60],EAX      ; 004480a2
    TEST EAX,EAX                        ; 004480a6
    JZ 0x0044834a                       ; 004480a8
        ;   XREF to: 0044834a (CONDITIONAL_JUMP)  ; LAB_0044834a
    MOV EDX,dword ptr [0x005f2afc]      ; 004480ae | DAT_005f2afc
    PUSH EDX                            ; 004480b4
    MOV dword ptr [EBP + 0x65b30],0x1   ; 004480b5
    CALL FUN_0046d540                   ; 004480bf
        ;   XREF to: 0046d540 (UNCONDITIONAL_CALL)  ; undefined FUN_0046d540()
    ADD ESP,0x4                         ; 004480c4
    TEST EAX,EAX                        ; 004480c7
    JZ 0x004480e1                       ; 004480c9
        ;   XREF to: 004480e1 (CONDITIONAL_JUMP)  ; LAB_004480e1
    CMP dword ptr [EBP + 0x180],0x0     ; 004480cb
    JZ 0x004480e1                       ; 004480d2
        ;   XREF to: 004480e1 (CONDITIONAL_JUMP)  ; LAB_004480e1
    CMP dword ptr [EBP + 0x65b34],0x0   ; 004480d4
    JZ 0x0044822f                       ; 004480db
        ;   XREF to: 0044822f (CONDITIONAL_JUMP)  ; LAB_0044822f
    PUSH EBX                            ; 004480e1
        ;   Label: LAB_004480e1
    MOV ESI,dword ptr [EBP + 0x17c]     ; 004480e2
    PUSH ESI                            ; 004480e8
    MOV EDI,dword ptr [0x005f2afc]      ; 004480e9 | DAT_005f2afc
    PUSH EDI                            ; 004480ef
    CALL FUN_0046d4c0                   ; 004480f0
        ;   XREF to: 0046d4c0 (UNCONDITIONAL_CALL)  ; undefined FUN_0046d4c0()
    ADD ESP,0x8                         ; 004480f5
    LEA EAX,[EBP + 0x164]               ; 004480f8
    PUSH EAX                            ; 004480fe
    MOV EAX,[0x005f2afc]                ; 004480ff | DAT_005f2afc
    PUSH EAX                            ; 00448104
    XOR ESI,ESI                         ; 00448105
    CALL FUN_0046e5e0                   ; 00448107
        ;   XREF to: 0046e5e0 (UNCONDITIONAL_CALL)  ; undefined FUN_0046e5e0()
    LEA EDX,[EBP + 0x208]               ; 0044810c
    ADD ESP,0x8                         ; 00448112
    LEA EDI,[EBP + 0x1c734]             ; 00448115
    MOV EBX,dword ptr [EBP + 0x204]     ; 0044811b
    MOV ECX,EDI                         ; 00448121
    TEST EBX,EBX                        ; 00448123
    JLE 0x00448160                      ; 00448125
        ;   XREF to: 00448160 (CONDITIONAL_JUMP)  ; LAB_00448160
    MOV EBX,ECX                         ; 00448127
        ;   Label: LAB_00448127
    MOV EAX,EDX                         ; 00448129
    FLD float ptr [EAX]                 ; 0044812b
    FMUL float ptr [0x005dde50]         ; 0044812d | DAT_005dde50
    FISTP dword ptr [EBX]               ; 00448133
    FLD float ptr [EAX + 0x4]           ; 00448135
    FMUL float ptr [0x005dde50]         ; 00448138 | DAT_005dde50
    FISTP dword ptr [EBX + 0x4]         ; 0044813e
    FLD float ptr [EAX + 0x8]           ; 00448141
    FMUL float ptr [0x005dde50]         ; 00448144 | DAT_005dde50
    FISTP dword ptr [EBX + 0x8]         ; 0044814a
    INC ESI                             ; 0044814d
    ADD EDX,0x74                        ; 0044814e
    MOV EAX,dword ptr [EBP + 0x204]     ; 00448151
    ADD ECX,0xc                         ; 00448157
    CMP ESI,EAX                         ; 0044815a
    JL 0x00448127                       ; 0044815c
        ;   XREF to: 00448127 (CONDITIONAL_JUMP)  ; LAB_00448127
    MOV EAX,EAX                         ; 0044815e
    PUSH EDI                            ; 00448160
        ;   Label: LAB_00448160
    MOV EDX,dword ptr [EBP + 0x204]     ; 00448161
    PUSH EDX                            ; 00448167
    MOV ECX,dword ptr [0x00603b28]      ; 00448168 | DAT_00603b28
    PUSH ECX                            ; 0044816e
    CALL FUN_00538ad0                   ; 0044816f
        ;   XREF to: 00538ad0 (UNCONDITIONAL_CALL)  ; undefined FUN_00538ad0()
    ADD ESP,0xc                         ; 00448174
    PUSH 0x1                            ; 00448177
    MOV EBX,dword ptr [0x005f2afc]      ; 00448179 | DAT_005f2afc
    PUSH EBX                            ; 0044817f
    CALL FUN_0046d460                   ; 00448180
        ;   XREF to: 0046d460 (UNCONDITIONAL_CALL)  ; undefined FUN_0046d460()
    MOV ESI,dword ptr [0x01c6e2d4]      ; 00448185 | DAT_01c6e2d4
    ADD ESP,0x8                         ; 0044818b
    XOR EDX,EDX                         ; 0044818e
    TEST ESI,ESI                        ; 00448190
    SETL AL                             ; 00448192
    MOV DL,AL                           ; 00448195
    TEST ESI,ESI                        ; 00448197
    SETG AL                             ; 00448199
    MOVZX EDI,AL                        ; 0044819c
    CMP dword ptr [EBP + 0x180],0x0     ; 0044819f
    JZ 0x00448271                       ; 004481a6
        ;   XREF to: 00448271 (CONDITIONAL_JUMP)  ; LAB_00448271
    TEST EDX,EDX                        ; 004481ac
    JZ 0x0044829d                       ; 004481ae
        ;   XREF to: 0044829d (CONDITIONAL_JUMP)  ; LAB_0044829d
    MOV EDX,dword ptr [EBP + 0x1c72c]   ; 004481b4
        ;   Label: LAB_004481b4
    IMUL EDX,dword ptr [EBP + 0x1c730]  ; 004481ba
    PUSH 0x0                            ; 004481c1
    PUSH 0x4                            ; 004481c3
    LEA EAX,[EBP + 0x1c734]             ; 004481c5
    PUSH EAX                            ; 004481cb
    LEA EBX,[EBP + 0x1f614]             ; 004481cc
    PUSH EBX                            ; 004481d2
    LEA EAX,[EDX + EDX*0x1]             ; 004481d3
    PUSH EAX                            ; 004481d6
    MOV ESI,dword ptr [EBP + 0x204]     ; 004481d7
    PUSH ESI                            ; 004481dd
    MOV EAX,[0x00603b28]                ; 004481de | DAT_00603b28
    PUSH EAX                            ; 004481e3
    CALL FUN_00538dd0                   ; 004481e4
        ;   XREF to: 00538dd0 (UNCONDITIONAL_CALL)  ; undefined FUN_00538dd0()
    MOV EDX,dword ptr [EBP + 0x17c]     ; 004481e9
    ADD ESP,0x1c                        ; 004481ef
    CMP EDX,0xfde8                      ; 004481f2
    JG 0x0044827b                       ; 004481f8
        ;   XREF to: 0044827b (CONDITIONAL_JUMP)  ; LAB_0044827b
    XOR ESI,ESI                         ; 004481fe
    MOV EAX,dword ptr [EBP + 0x1c730]   ; 00448200
        ;   Label: LAB_00448200
    MOV EDX,dword ptr [EBP + 0x1c72c]   ; 00448206
    IMUL EDX,EAX                        ; 0044820c
    ADD EDX,EDX                         ; 0044820f
    CMP ESI,EDX                         ; 00448211
    JGE 0x0044829d                      ; 00448213
        ;   XREF to: 0044829d (CONDITIONAL_JUMP)  ; LAB_0044829d
    PUSH EBX                            ; 00448219
    MOV EDX,dword ptr [0x005f2afc]      ; 0044821a | DAT_005f2afc
    PUSH EDX                            ; 00448220
    INC ESI                             ; 00448221
    CALL FUN_0046c800                   ; 00448222
        ;   XREF to: 0046c800 (UNCONDITIONAL_CALL)  ; undefined FUN_0046c800()
    ADD EBX,0x48                        ; 00448227
    ADD ESP,0x8                         ; 0044822a
    JMP 0x00448200                      ; 0044822d
        ;   XREF to: 00448200 (UNCONDITIONAL_JUMP)  ; LAB_00448200
    PUSH EBP                            ; 0044822f
        ;   Label: LAB_0044822f
    MOV EAX,dword ptr [EBP + 0x154]     ; 00448230
    LEA ESI,[ESP + 0x34]                ; 00448236
    LEA EDI,[ESP + 0x4c]                ; 0044823a
    CALL dword ptr [EAX + 0x1c]         ; 0044823e
    MOV ECX,0x6                         ; 00448241
    ADD ESP,0x4                         ; 00448246
    LEA EAX,[ESP + 0x48]                ; 00448249
    LEA ESI,[ESP + 0x30]                ; 0044824d
    PUSH EAX                            ; 00448251
    MOVSD.REP ES:EDI,ESI                ; 00448252
    CALL FUN_0041e9b0                   ; 00448254
        ;   XREF to: 0041e9b0 (UNCONDITIONAL_CALL)  ; undefined FUN_0041e9b0()
    ADD ESP,0x4                         ; 00448259
    PUSH EBP                            ; 0044825c
    CALL FUN_00408830                   ; 0044825d
        ;   XREF to: 00408830 (UNCONDITIONAL_CALL)  ; undefined FUN_00408830()
    MOV EAX,0x1                         ; 00448262
    ADD ESP,0x4                         ; 00448267
    ADD ESP,0x64                        ; 0044826a
    POP EBP                             ; 0044826d
    POP EDI                             ; 0044826e
    POP ESI                             ; 0044826f
    RET                                 ; 00448270
    MOV EDI,0x1                         ; 00448271
        ;   Label: LAB_00448271
    JMP 0x004481b4                      ; 00448276
        ;   XREF to: 004481b4 (UNCONDITIONAL_JUMP)  ; LAB_004481b4
    MOV EDX,dword ptr [EBP + 0x1c72c]   ; 0044827b
        ;   Label: LAB_0044827b
    IMUL EDX,dword ptr [EBP + 0x1c730]  ; 00448281
    PUSH -0x1                           ; 00448288
    ADD EDX,EDX                         ; 0044828a
    PUSH EDX                            ; 0044828c
    PUSH EBX                            ; 0044828d
    MOV EBX,dword ptr [0x00603b28]      ; 0044828e | DAT_00603b28
    PUSH EBX                            ; 00448294
    CALL FUN_0053ab80                   ; 00448295
        ;   XREF to: 0053ab80 (UNCONDITIONAL_CALL)  ; undefined FUN_0053ab80()
    ADD ESP,0x10                        ; 0044829a
    TEST EDI,EDI                        ; 0044829d
        ;   Label: LAB_0044829d
    JZ 0x00448338                       ; 0044829f
        ;   XREF to: 00448338 (CONDITIONAL_JUMP)  ; LAB_00448338
    MOV EDX,dword ptr [EBP + 0x1c72c]   ; 004482a5
    IMUL EDX,dword ptr [EBP + 0x1c730]  ; 004482ab
    PUSH 0x0                            ; 004482b2
    PUSH 0x4                            ; 004482b4
    LEA EAX,[EBP + 0x1c734]             ; 004482b6
    PUSH EAX                            ; 004482bc
    LEA EBX,[EBP + 0x42894]             ; 004482bd
    PUSH EBX                            ; 004482c3
    ADD EDX,EDX                         ; 004482c4
    PUSH EDX                            ; 004482c6
    MOV ESI,dword ptr [EBP + 0x204]     ; 004482c7
    PUSH ESI                            ; 004482cd
    MOV EDI,dword ptr [0x00603b28]      ; 004482ce | DAT_00603b28
    PUSH EDI                            ; 004482d4
    CALL FUN_00538dd0                   ; 004482d5
        ;   XREF to: 00538dd0 (UNCONDITIONAL_CALL)  ; undefined FUN_00538dd0()
    MOV EAX,dword ptr [EBP + 0x17c]     ; 004482da
    ADD ESP,0x1c                        ; 004482e0
    CMP EAX,0xfde8                      ; 004482e3
    JG 0x00448316                       ; 004482e8
        ;   XREF to: 00448316 (CONDITIONAL_JUMP)  ; LAB_00448316
    XOR ESI,ESI                         ; 004482ea
    MOV EDI,dword ptr [EBP + 0x1c730]   ; 004482ec
        ;   Label: LAB_004482ec
    MOV EDX,dword ptr [EBP + 0x1c72c]   ; 004482f2
    IMUL EDX,EDI                        ; 004482f8
    ADD EDX,EDX                         ; 004482fb
    CMP ESI,EDX                         ; 004482fd
    JGE 0x00448338                      ; 004482ff
        ;   XREF to: 00448338 (CONDITIONAL_JUMP)  ; LAB_00448338
    PUSH EBX                            ; 00448301
    MOV EAX,[0x005f2afc]                ; 00448302 | DAT_005f2afc
    PUSH EAX                            ; 00448307
    INC ESI                             ; 00448308
    CALL FUN_0046c800                   ; 00448309
        ;   XREF to: 0046c800 (UNCONDITIONAL_CALL)  ; undefined FUN_0046c800()
    ADD EBX,0x48                        ; 0044830e
    ADD ESP,0x8                         ; 00448311
    JMP 0x004482ec                      ; 00448314
        ;   XREF to: 004482ec (UNCONDITIONAL_JUMP)  ; LAB_004482ec
    MOV EDX,dword ptr [EBP + 0x1c72c]   ; 00448316
        ;   Label: LAB_00448316
    IMUL EDX,dword ptr [EBP + 0x1c730]  ; 0044831c
    PUSH -0x1                           ; 00448323
    ADD EDX,EDX                         ; 00448325
    PUSH EDX                            ; 00448327
    PUSH EBX                            ; 00448328
    MOV EBX,dword ptr [0x00603b28]      ; 00448329 | DAT_00603b28
    PUSH EBX                            ; 0044832f
    CALL FUN_0053ab80                   ; 00448330
        ;   XREF to: 0053ab80 (UNCONDITIONAL_CALL)  ; undefined FUN_0053ab80()
    ADD ESP,0x10                        ; 00448335
    PUSH 0x0                            ; 00448338
        ;   Label: LAB_00448338
    MOV EDX,dword ptr [0x005f2afc]      ; 0044833a | DAT_005f2afc
    PUSH EDX                            ; 00448340
    CALL FUN_0046d460                   ; 00448341
        ;   XREF to: 0046d460 (UNCONDITIONAL_CALL)  ; undefined FUN_0046d460()
    ADD ESP,0x8                         ; 00448346
    POP EBX                             ; 00448349
    PUSH EBP                            ; 0044834a
        ;   Label: LAB_0044834a
    CALL FUN_00408830                   ; 0044834b
        ;   XREF to: 00408830 (UNCONDITIONAL_CALL)  ; undefined FUN_00408830()
    ADD ESP,0x4                         ; 00448350
    MOV EAX,dword ptr [ESP + 0x60]      ; 00448353
    ADD ESP,0x64                        ; 00448357
    POP EBP                             ; 0044835a
    POP EDI                             ; 0044835b
    POP ESI                             ; 0044835c
    RET                                 ; 0044835d

