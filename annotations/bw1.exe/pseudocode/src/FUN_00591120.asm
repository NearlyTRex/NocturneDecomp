; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_00591120(int param_1)
;
; Local Variables:
; undefined4       Stack[-0x14]:4  local_14
; undefined4       Stack[-0x10]:4  local_10
;
; XREF[1]:
;   FUN_00585b00 at 00586635
;
; Referenced Globals:
;   void* switchdataD_005910fc = 005911a9
;   undefined4 s_eDoorMoveNone_returned_b_005f7020+1
;   TerminatedCString s_eDoorMoveNone_returned_b_005f705e
;   TerminatedCString s_CBodyPart_005f709b
;   TerminatedCString s_CBodyPart_005f70a6
;   undefined4 DAT_005f70b1
;   undefined4 DAT_005f70b9
;   undefined4 DAT_0061abc0
;
; Called Functions:
;   FUN_00434590
;   FUN_004943a0
;   FUN_004eb090
;   FUN_004eb240
;   FUN_004eb3e0
;   FUN_004eb5e0
;   FUN_004eb660
;   FUN_004eb890
;   FUN_004ebc40
;   FUN_005247c0
;   FUN_00524a40
;   FUN_0058c260
;   FUN_0058ce80
;   FUN_0058d3c0
;   FUN_0058d910
;   ... and 1 more
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00591120
        ;   Label: FUN_00591120
    PUSH ESI                            ; 00591121
    PUSH EDI                            ; 00591122
    SUB ESP,0x8                         ; 00591123
    MOV EBX,dword ptr [ESP + 0x18]      ; 00591126
    CMP dword ptr [EBX + 0xc1e4],0x0    ; 0059112a
    JZ 0x0059113c                       ; 00591131
        ;   XREF to: 0059113c (CONDITIONAL_JUMP)  ; LAB_0059113c
    CMP dword ptr [EBX + 0x1ff5c],0x0   ; 00591133
    JZ 0x00591143                       ; 0059113a
        ;   XREF to: 00591143 (CONDITIONAL_JUMP)  ; LAB_00591143
    ADD ESP,0x8                         ; 0059113c
        ;   Label: LAB_0059113c
    POP EDI                             ; 0059113f
    POP ESI                             ; 00591140
    POP EBX                             ; 00591141
    RET                                 ; 00591142
    PUSH EBX                            ; 00591143
        ;   Label: LAB_00591143
    CALL FUN_00591410                   ; 00591144
        ;   XREF to: 00591410 (UNCONDITIONAL_CALL)  ; undefined FUN_00591410()
    ADD ESP,0x4                         ; 00591149
    TEST EAX,EAX                        ; 0059114c
    JNZ 0x0059113c                      ; 0059114e
        ;   XREF to: 0059113c (CONDITIONAL_JUMP)  ; LAB_0059113c
    CMP dword ptr [EBX + 0x1ffac],0x0   ; 00591150
    JNZ 0x0059113c                      ; 00591157
        ;   XREF to: 0059113c (CONDITIONAL_JUMP)  ; LAB_0059113c
    PUSH EAX                            ; 00591159
    LEA ESI,[EBX + 0x158]               ; 0059115a
    PUSH ESI                            ; 00591160
    CALL FUN_00524a40                   ; 00591161
        ;   XREF to: 00524a40 (UNCONDITIONAL_CALL)  ; undefined FUN_00524a40()
    MOV dword ptr [ESP + 0x8],EAX       ; 00591166
    ADD ESP,0x8                         ; 0059116a
    PUSH 0x1                            ; 0059116d
    PUSH ESI                            ; 0059116f
    CALL FUN_00524a40                   ; 00591170
        ;   XREF to: 00524a40 (UNCONDITIONAL_CALL)  ; undefined FUN_00524a40()
    MOV dword ptr [ESP + 0xc],EAX       ; 00591175
    FLD float ptr [ESP + 0xc]           ; 00591179
    ADD ESP,0x8                         ; 0059117d
    FADD float ptr [ESP]                ; 00591180
    FCOMP double ptr [0x005f70b1]       ; 00591183 | DAT_005f70b1
    FNSTSW AX                           ; 00591189
    SAHF                                ; 0059118b
    JBE 0x005911c8                      ; 0059118c
        ;   XREF to: 005911c8 (CONDITIONAL_JUMP)  ; LAB_005911c8
    PUSH 0x0                            ; 0059118e
    PUSH EBX                            ; 00591190
    CALL FUN_004eb3e0                   ; 00591191
        ;   XREF to: 004eb3e0 (UNCONDITIONAL_CALL)  ; undefined FUN_004eb3e0()
    ADD ESP,0x8                         ; 00591196
    CMP EAX,0x5                         ; 00591199
    JA 0x005912a8                       ; 0059119c
        ;   XREF to: 005912a8 (CONDITIONAL_JUMP)  ; default
    JMP dword ptr [EAX*0x4 + 0x5910fc]  ; 005911a2 | caseD_0 | caseD_1 | caseD_3
        ;   Label: switchD
    MOV EDX,dword ptr [EBX + 0x1ff74]   ; 005911a9
        ;   Label: caseD_0
    TEST EDX,EDX                        ; 005911af
    JZ 0x005911c8                       ; 005911b1
        ;   XREF to: 005911c8 (CONDITIONAL_JUMP)  ; LAB_005911c8
    PUSH EDX                            ; 005911b3
    PUSH 0x5f705e                       ; 005911b4 | = "eDoorMoveNone returned by checkDoorOp..."
    MOV ESI,dword ptr [0x0061abc0]      ; 005911b9 | DAT_0061abc0
    PUSH ESI                            ; 005911bf
    CALL FUN_004943a0                   ; 005911c0
        ;   XREF to: 004943a0 (UNCONDITIONAL_CALL)  ; undefined FUN_004943a0()
    ADD ESP,0xc                         ; 005911c5
    PUSH EBX                            ; 005911c8
        ;   Label: LAB_005911c8
    CALL FUN_0058d910                   ; 005911c9
        ;   XREF to: 0058d910 (UNCONDITIONAL_CALL)  ; undefined FUN_0058d910()
    ADD ESP,0x4                         ; 005911ce
    TEST EAX,EAX                        ; 005911d1
    JZ 0x005912c2                       ; 005911d3
        ;   XREF to: 005912c2 (CONDITIONAL_JUMP)  ; LAB_005912c2
    MOV dword ptr [EBX + 0xc1e4],0x0    ; 005911d9
    ADD ESP,0x8                         ; 005911e3
    POP EDI                             ; 005911e6
    POP ESI                             ; 005911e7
    POP EBX                             ; 005911e8
    RET                                 ; 005911e9
    MOV EDI,dword ptr [EBX + 0x1ff74]   ; 005911ea
        ;   Label: caseD_1
    TEST EDI,EDI                        ; 005911f0
    JNZ 0x00591205                      ; 005911f2
        ;   XREF to: 00591205 (CONDITIONAL_JUMP)  ; LAB_00591205
    MOV dword ptr [EBX + 0xc1e4],0x0    ; 005911f4
    ADD ESP,0x8                         ; 005911fe
    POP EDI                             ; 00591201
    POP ESI                             ; 00591202
    POP EBX                             ; 00591203
    RET                                 ; 00591204
    PUSH EDI                            ; 00591205
        ;   Label: LAB_00591205
    PUSH 0x5f7021                       ; 00591206 | s_eDoorMoveNone_returned_b_005f7020+1
    MOV EAX,[0x0061abc0]                ; 0059120b | DAT_0061abc0
    PUSH EAX                            ; 00591210
    CALL FUN_004943a0                   ; 00591211
        ;   XREF to: 004943a0 (UNCONDITIONAL_CALL)  ; undefined FUN_004943a0()
    ADD ESP,0xc                         ; 00591216
    MOV dword ptr [EBX + 0xc1e4],0x0    ; 00591219
    ADD ESP,0x8                         ; 00591223
    POP EDI                             ; 00591226
    POP ESI                             ; 00591227
    POP EBX                             ; 00591228
    RET                                 ; 00591229
    PUSH 0x1                            ; 0059122a
        ;   Label: caseD_2
    PUSH 0x27                           ; 0059122c
    LEA EAX,[EBX + 0x158]               ; 0059122e
    PUSH EAX                            ; 00591234
    CALL FUN_005247c0                   ; 00591235
        ;   XREF to: 005247c0 (UNCONDITIONAL_CALL)  ; undefined FUN_005247c0()
    MOV dword ptr [EBX + 0x1ff5c],0x5   ; 0059123a
    ADD ESP,0xc                         ; 00591244
    MOV dword ptr [EBX + 0xc1e4],0x0    ; 00591247
    ADD ESP,0x8                         ; 00591251
    POP EDI                             ; 00591254
    POP ESI                             ; 00591255
    POP EBX                             ; 00591256
    RET                                 ; 00591257
    PUSH 0x1                            ; 00591258
        ;   Label: caseD_4
    PUSH 0x28                           ; 0059125a
    PUSH ESI                            ; 0059125c
    CALL FUN_005247c0                   ; 0059125d
        ;   XREF to: 005247c0 (UNCONDITIONAL_CALL)  ; undefined FUN_005247c0()
    MOV dword ptr [EBX + 0x1ff5c],0x5   ; 00591262
    ADD ESP,0xc                         ; 0059126c
    MOV dword ptr [EBX + 0xc1e4],0x0    ; 0059126f
    ADD ESP,0x8                         ; 00591279
    POP EDI                             ; 0059127c
    POP ESI                             ; 0059127d
    POP EBX                             ; 0059127e
    RET                                 ; 0059127f
    PUSH 0x1                            ; 00591280
        ;   Label: caseD_5
    PUSH 0x29                           ; 00591282
    PUSH ESI                            ; 00591284
    CALL FUN_005247c0                   ; 00591285
        ;   XREF to: 005247c0 (UNCONDITIONAL_CALL)  ; undefined FUN_005247c0()
    MOV dword ptr [EBX + 0x1ff5c],0x5   ; 0059128a
    ADD ESP,0xc                         ; 00591294
    MOV dword ptr [EBX + 0xc1e4],0x0    ; 00591297
    ADD ESP,0x8                         ; 005912a1
    POP EDI                             ; 005912a4
    POP ESI                             ; 005912a5
    POP EBX                             ; 005912a6
    RET                                 ; 005912a7
    PUSH EBX                            ; 005912a8
        ;   Label: default
    CALL FUN_004eb5e0                   ; 005912a9
        ;   XREF to: 004eb5e0 (UNCONDITIONAL_CALL)  ; undefined FUN_004eb5e0()
    ADD ESP,0x4                         ; 005912ae
    MOV dword ptr [EBX + 0xc1e4],0x0    ; 005912b1
    ADD ESP,0x8                         ; 005912bb
    POP EDI                             ; 005912be
    POP ESI                             ; 005912bf
    POP EBX                             ; 005912c0
    RET                                 ; 005912c1
    PUSH 0x5f709b                       ; 005912c2 | = "!CBodyPart"
        ;   Label: LAB_005912c2
    PUSH EBX                            ; 005912c7
    CALL FUN_0058c260                   ; 005912c8
        ;   XREF to: 0058c260 (UNCONDITIONAL_CALL)  ; undefined FUN_0058c260()
    ADD ESP,0x8                         ; 005912cd
    TEST EAX,EAX                        ; 005912d0
    JZ 0x005912e5                       ; 005912d2
        ;   XREF to: 005912e5 (CONDITIONAL_JUMP)  ; LAB_005912e5
    MOV dword ptr [EBX + 0xc1e4],0x0    ; 005912d4
    ADD ESP,0x8                         ; 005912de
    POP EDI                             ; 005912e1
    POP ESI                             ; 005912e2
    POP EBX                             ; 005912e3
    RET                                 ; 005912e4
    PUSH EBX                            ; 005912e5
        ;   Label: LAB_005912e5
    CALL FUN_004eb090                   ; 005912e6
        ;   XREF to: 004eb090 (UNCONDITIONAL_CALL)  ; undefined FUN_004eb090()
    ADD ESP,0x4                         ; 005912eb
    TEST EAX,EAX                        ; 005912ee
    JNZ 0x0059113c                      ; 005912f0
        ;   XREF to: 0059113c (CONDITIONAL_JUMP)  ; LAB_0059113c
    PUSH EBX                            ; 005912f6
    CALL FUN_004eb240                   ; 005912f7
        ;   XREF to: 004eb240 (UNCONDITIONAL_CALL)  ; undefined FUN_004eb240()
    ADD ESP,0x4                         ; 005912fc
    TEST EAX,EAX                        ; 005912ff
    JZ 0x00591314                       ; 00591301
        ;   XREF to: 00591314 (CONDITIONAL_JUMP)  ; LAB_00591314
    MOV dword ptr [EBX + 0xc1e4],0x0    ; 00591303
    ADD ESP,0x8                         ; 0059130d
    POP EDI                             ; 00591310
    POP ESI                             ; 00591311
    POP EBX                             ; 00591312
    RET                                 ; 00591313
    PUSH EBX                            ; 00591314
        ;   Label: LAB_00591314
    CALL FUN_004eb890                   ; 00591315
        ;   XREF to: 004eb890 (UNCONDITIONAL_CALL)  ; undefined FUN_004eb890()
    ADD ESP,0x4                         ; 0059131a
    LEA ESI,[EBX + 0x158]               ; 0059131d
    TEST EAX,EAX                        ; 00591323
    JNZ 0x00591342                      ; 00591325
        ;   XREF to: 00591342 (CONDITIONAL_JUMP)  ; LAB_00591342
    MOV EDI,dword ptr [EBX + 0x2628]    ; 00591327
    TEST EDI,EDI                        ; 0059132d
    JZ 0x00591356                       ; 0059132f
        ;   XREF to: 00591356 (CONDITIONAL_JUMP)  ; LAB_00591356
    MOV dword ptr [EBX + 0xc1e4],0x0    ; 00591331
        ;   Label: LAB_00591331
    ADD ESP,0x8                         ; 0059133b
    POP EDI                             ; 0059133e
    POP ESI                             ; 0059133f
    POP EBX                             ; 00591340
    RET                                 ; 00591341
    PUSH 0x1                            ; 00591342
        ;   Label: LAB_00591342
    PUSH 0x11                           ; 00591344
    PUSH ESI                            ; 00591346
    CALL FUN_005247c0                   ; 00591347
        ;   XREF to: 005247c0 (UNCONDITIONAL_CALL)  ; undefined FUN_005247c0()
    ADD ESP,0xc                         ; 0059134c
    ADD ESP,0x8                         ; 0059134f
    POP EDI                             ; 00591352
    POP ESI                             ; 00591353
    POP EBX                             ; 00591354
    RET                                 ; 00591355
    PUSH EAX                            ; 00591356
        ;   Label: LAB_00591356
    PUSH EBX                            ; 00591357
    CALL FUN_00434590                   ; 00591358
        ;   XREF to: 00434590 (UNCONDITIONAL_CALL)  ; undefined FUN_00434590()
    MOV dword ptr [ESP + 0xc],EAX       ; 0059135d
    FLD float ptr [ESP + 0xc]           ; 00591361
    ADD ESP,0x8                         ; 00591365
    FCOMP double ptr [0x005f70b9]       ; 00591368 | DAT_005f70b9
    FNSTSW AX                           ; 0059136e
    SAHF                                ; 00591370
    JBE 0x00591331                      ; 00591371
        ;   XREF to: 00591331 (CONDITIONAL_JUMP)  ; LAB_00591331
    PUSH EBX                            ; 00591373
    CALL FUN_004eb660                   ; 00591374
        ;   XREF to: 004eb660 (UNCONDITIONAL_CALL)  ; undefined FUN_004eb660()
    ADD ESP,0x4                         ; 00591379
    TEST EAX,EAX                        ; 0059137c
    JNZ 0x0059139a                      ; 0059137e
        ;   XREF to: 0059139a (CONDITIONAL_JUMP)  ; LAB_0059139a
    PUSH EBX                            ; 00591380
    CALL FUN_0058ce80                   ; 00591381
        ;   XREF to: 0058ce80 (UNCONDITIONAL_CALL)  ; undefined FUN_0058ce80()
    ADD ESP,0x4                         ; 00591386
    TEST EAX,EAX                        ; 00591389
    JZ 0x005913b4                       ; 0059138b
        ;   XREF to: 005913b4 (CONDITIONAL_JUMP)  ; LAB_005913b4
    MOV dword ptr [EBX + 0xc1e4],EDI    ; 0059138d
    ADD ESP,0x8                         ; 00591393
    POP EDI                             ; 00591396
    POP ESI                             ; 00591397
    POP EBX                             ; 00591398
    RET                                 ; 00591399
    PUSH 0x1                            ; 0059139a
        ;   Label: LAB_0059139a
    PUSH 0x2c                           ; 0059139c
    PUSH ESI                            ; 0059139e
    MOV dword ptr [EBX + 0xc1e4],EDI    ; 0059139f
    CALL FUN_005247c0                   ; 005913a5
        ;   XREF to: 005247c0 (UNCONDITIONAL_CALL)  ; undefined FUN_005247c0()
    ADD ESP,0xc                         ; 005913aa
    ADD ESP,0x8                         ; 005913ad
    POP EDI                             ; 005913b0
    POP ESI                             ; 005913b1
    POP EBX                             ; 005913b2
    RET                                 ; 005913b3
    PUSH EBX                            ; 005913b4
        ;   Label: LAB_005913b4
    CALL FUN_0058d3c0                   ; 005913b5
        ;   XREF to: 0058d3c0 (UNCONDITIONAL_CALL)  ; undefined FUN_0058d3c0()
    ADD ESP,0x4                         ; 005913ba
    TEST EAX,EAX                        ; 005913bd
    JZ 0x005913ce                       ; 005913bf
        ;   XREF to: 005913ce (CONDITIONAL_JUMP)  ; LAB_005913ce
    MOV dword ptr [EBX + 0xc1e4],EDI    ; 005913c1
    ADD ESP,0x8                         ; 005913c7
    POP EDI                             ; 005913ca
    POP ESI                             ; 005913cb
    POP EBX                             ; 005913cc
    RET                                 ; 005913cd
    PUSH EBX                            ; 005913ce
        ;   Label: LAB_005913ce
    CALL FUN_004ebc40                   ; 005913cf
        ;   XREF to: 004ebc40 (UNCONDITIONAL_CALL)  ; undefined FUN_004ebc40()
    ADD ESP,0x4                         ; 005913d4
    TEST EAX,EAX                        ; 005913d7
    JZ 0x005913e8                       ; 005913d9
        ;   XREF to: 005913e8 (CONDITIONAL_JUMP)  ; LAB_005913e8
    MOV dword ptr [EBX + 0xc1e4],EDI    ; 005913db
    ADD ESP,0x8                         ; 005913e1
    POP EDI                             ; 005913e4
    POP ESI                             ; 005913e5
    POP EBX                             ; 005913e6
    RET                                 ; 005913e7
    PUSH 0x5f70a6                       ; 005913e8 | = "CBodyPart"
        ;   Label: LAB_005913e8
    PUSH EBX                            ; 005913ed
    CALL FUN_0058c260                   ; 005913ee
        ;   XREF to: 0058c260 (UNCONDITIONAL_CALL)  ; undefined FUN_0058c260()
    ADD ESP,0x8                         ; 005913f3
    TEST EAX,EAX                        ; 005913f6
    JZ 0x00591331                       ; 005913f8
        ;   XREF to: 00591331 (CONDITIONAL_JUMP)  ; LAB_00591331
    MOV dword ptr [EBX + 0xc1e4],EDI    ; 005913fe
    ADD ESP,0x8                         ; 00591404
    POP EDI                             ; 00591407
    POP ESI                             ; 00591408
    POP EBX                             ; 00591409
    RET                                 ; 0059140a

