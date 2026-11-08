; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int FUN_005030c0(int param_1,float *param_2)
;
; Local Variables:
; undefined4       Stack[-0xbc]:4  local_bc
; undefined8       Stack[-0xb8]:8  local_b8
; undefined4       Stack[-0xb0]:4  local_b0
; undefined4       Stack[-0xac]:4  local_ac
; undefined        Stack[-0xa8]:1  local_a8
; undefined        Stack[-0x44]:1  local_44
; undefined4       Stack[-0x40]:4  local_40
; undefined4       Stack[-0x3c]:4  local_3c
; undefined4       Stack[-0x38]:4  local_38
; undefined4       Stack[-0x30]:4  local_30
; undefined4       Stack[-0x2c]:4  local_2c
; undefined4       Stack[-0x28]:4  local_28
; undefined4       Stack[-0x24]:4  local_24
; undefined4       Stack[-0x20]:4  local_20
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[44]:
;   FUN_0040ef00 at 0040eff2
;   FUN_00410590 at 004105a6
;   FUN_00411a10 at 00411c76
;   FUN_00412f40 at 004131c7
;   FUN_00414a80 at 00414ad8
;   FUN_00414e50 at 004150b4
;   FUN_004186c0 at 00418a83
;   FUN_0041dbe0 at 0041dd79
;   FUN_00436420 at 00436436
;   FUN_00436e80 at 00437324
;   ... and 34 more
;
; Referenced Globals:
;   void* switchdataD_00503094 = 005031d0
;   void* switchdataD_005030a4 = 005033af
;   TerminatedCString s_core_motion_cpp_005dfb66
;   TerminatedCString s_CMotionController_advanc_005dfb79
;   TerminatedCString s_core_motion_cpp_005dfbbf
;   TerminatedCString s_Invalid_transition_comma_005dfbd2
;   TerminatedCString s_signal_d_005dfc1e
;   undefined4 DAT_005dfc28
;   undefined4 DAT_005dfc30
;   undefined4 DAT_005dfc38
;   undefined4 DAT_005dfc40
;   undefined4 DAT_006141f0
;   undefined4 DAT_01d046a0
;   undefined4 DAT_01d046a4
;
; Called Functions:
;   FUN_004894f0
;   FUN_004e4500
;   FUN_00503470
;   FUN_00503560
;   FUN_005035c0
;   FUN_005036e0
;   FUN_005039e0
;   FUN_00503a10
;   FUN_00503bd0
;   FUN_00503d80
;   FUN_005b7790
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005030c0
        ;   Label: FUN_005030c0
    PUSH ESI                            ; 005030c1
    PUSH EDI                            ; 005030c2
    PUSH EBP                            ; 005030c3
    MOV EBP,ESP                         ; 005030c4
    SUB ESP,0xa8                        ; 005030c6
    AND ESP,0xfffffff8                  ; 005030cc
    MOV EBX,dword ptr [EBP + 0x14]      ; 005030cf
    MOV EDI,dword ptr [EBP + 0x18]      ; 005030d2
    LEA EAX,[EBX + 0x1c]                ; 005030d5
    MOV dword ptr [ESP + 0x8c],EAX      ; 005030d8
    LEA EAX,[EBX + 0x18]                ; 005030df
    MOV dword ptr [ESP + 0x94],EAX      ; 005030e2
    LEA EAX,[EBX + 0x8]                 ; 005030e9
    XOR EDX,EDX                         ; 005030ec
    MOV dword ptr [ESP + 0x98],EAX      ; 005030ee
    LEA EAX,[EBX + 0x4]                 ; 005030f5
    MOV dword ptr [ESP + 0xa0],EDX      ; 005030f8
    MOV dword ptr [ESP + 0x90],EAX      ; 005030ff
    FLD float ptr [EDI]                 ; 00503106
        ;   Label: LAB_00503106
    FCOMP double ptr [0x005dfc28]       ; 00503108 | DAT_005dfc28
    FNSTSW AX                           ; 0050310e
    SAHF                                ; 00503110
    JA 0x00503138                       ; 00503111
        ;   XREF to: 00503138 (CONDITIONAL_JUMP)  ; LAB_00503138
    MOV dword ptr [EDI],0x0             ; 00503113
        ;   Label: LAB_00503113
    XOR EAX,EAX                         ; 00503119
    MOV ESP,EBP                         ; 0050311b
    POP EBP                             ; 0050311d
    POP EDI                             ; 0050311e
    POP ESI                             ; 0050311f
    POP EBX                             ; 00503120
    RET                                 ; 00503121
    MOV ESI,dword ptr [ESP + 0xa0]      ; 00503122
        ;   Label: LAB_00503122
    INC ESI                             ; 00503129
    MOV dword ptr [ESP + 0xa0],ESI      ; 0050312a
    CMP ESI,0x5                         ; 00503131
    JL 0x00503106                       ; 00503134
        ;   XREF to: 00503106 (CONDITIONAL_JUMP)  ; LAB_00503106
    JMP 0x00503113                      ; 00503136
        ;   XREF to: 00503113 (UNCONDITIONAL_JUMP)  ; LAB_00503113
    PUSH EBX                            ; 00503138
        ;   Label: LAB_00503138
    CALL FUN_00503470                   ; 00503139
        ;   XREF to: 00503470 (UNCONDITIONAL_CALL)  ; undefined FUN_00503470()
    ADD ESP,0x4                         ; 0050313e
    TEST EAX,EAX                        ; 00503141
    JNZ 0x00503122                      ; 00503143
        ;   XREF to: 00503122 (CONDITIONAL_JUMP)  ; LAB_00503122
    MOV EAX,dword ptr [EDI]             ; 00503145
    FLDZ                                ; 00503147
    MOV dword ptr [ESP + 0x8],EAX       ; 00503149
    XOR ESI,ESI                         ; 0050314d
    FLD float ptr [EBX + 0x14]          ; 0050314f
    FSTP double ptr [ESP]               ; 00503152
    FCOMP double ptr [ESP]              ; 00503155
    FNSTSW AX                           ; 00503158
    SAHF                                ; 0050315a
    JA 0x00503421                       ; 0050315b
        ;   XREF to: 00503421 (CONDITIONAL_JUMP)  ; LAB_00503421
    CMP dword ptr [EBX + 0x20],0x0      ; 00503161
    JZ 0x005032b7                       ; 00503165
        ;   XREF to: 005032b7 (CONDITIONAL_JUMP)  ; LAB_005032b7
    FLD float ptr [EBX + 0x14]          ; 0050316b
    FDIV float ptr [EBX + 0x10]         ; 0050316e
        ;   Label: LAB_0050316e
    FSTP float ptr [ESP + 0xc]          ; 00503171
    FLD float ptr [ESP + 0xc]           ; 00503175
    FLDZ                                ; 00503179
    FCOMPP                              ; 0050317b
    FNSTSW AX                           ; 0050317d
    SAHF                                ; 0050317f
    JBE 0x00503188                      ; 00503180
        ;   XREF to: 00503188 (CONDITIONAL_JUMP)  ; LAB_00503188
    XOR ECX,ECX                         ; 00503182
    MOV dword ptr [ESP + 0xc],ECX       ; 00503184
    FLD float ptr [ESP + 0xc]           ; 00503188
        ;   Label: LAB_00503188
    FCOMP float ptr [ESP + 0x8]         ; 0050318c
    FNSTSW AX                           ; 00503190
    SAHF                                ; 00503192
    JNC 0x0050319d                      ; 00503193
        ;   XREF to: 0050319d (CONDITIONAL_JUMP)  ; LAB_0050319d
    MOV EAX,dword ptr [ESP + 0xc]       ; 00503195
    MOV dword ptr [ESP + 0x8],EAX       ; 00503199
    FLD float ptr [ESP + 0x8]           ; 0050319d
        ;   Label: LAB_0050319d
    XOR EAX,EAX                         ; 005031a1
    FLDZ                                ; 005031a3
    MOV dword ptr [ESP + 0x9c],EAX      ; 005031a5
    MOV dword ptr [ESP + 0xa4],EAX      ; 005031ac
    FCOMPP                              ; 005031b3
    FNSTSW AX                           ; 005031b5
    SAHF                                ; 005031b7
    JNC 0x005031d0                      ; 005031b8
        ;   XREF to: 005031d0 (CONDITIONAL_JUMP)  ; caseD_3
    MOV EAX,dword ptr [EBX + 0xc]       ; 005031ba
    SUB EAX,0x3                         ; 005031bd
    CMP EAX,0x3                         ; 005031c0
    JA 0x00503340                       ; 005031c3
        ;   XREF to: 00503340 (CONDITIONAL_JUMP)  ; default
    JMP dword ptr [EAX*0x4 + 0x503094]  ; 005031c9 | caseD_3 | caseD_4 | caseD_5
        ;   Label: switchD
    CMP dword ptr [ESP + 0x9c],0x0      ; 005031d0
        ;   Label: caseD_3
    JZ 0x005031fc                       ; 005031d8
        ;   XREF to: 005031fc (CONDITIONAL_JUMP)  ; LAB_005031fc
    PUSH dword ptr [EBX + 0x14]         ; 005031da
        ;   Label: LAB_005031da
    MOV ECX,dword ptr [ESP + 0x9c]      ; 005031dd
    PUSH dword ptr [ESP + 0xc]          ; 005031e4
    PUSH ECX                            ; 005031e8
    MOV ESI,dword ptr [ESP + 0x9c]      ; 005031e9
    PUSH ESI                            ; 005031f0
    PUSH EBX                            ; 005031f1
    CALL FUN_00503a10                   ; 005031f2
        ;   XREF to: 00503a10 (UNCONDITIONAL_CALL)  ; undefined FUN_00503a10()
    ADD ESP,0x14                        ; 005031f7
    MOV ESI,EAX                         ; 005031fa
    CMP dword ptr [ESP + 0xa4],0x0      ; 005031fc
        ;   Label: LAB_005031fc
    JZ 0x00503236                       ; 00503204
        ;   XREF to: 00503236 (CONDITIONAL_JUMP)  ; LAB_00503236
    SUB ESP,0x4                         ; 00503206
    FLD float ptr [EBX + 0x14]          ; 00503209
    FLD1                                ; 0050320c
    FSUBRP                              ; 0050320e
    MOV EDX,dword ptr [ESP + 0x90]      ; 00503210
    FSTP float ptr [ESP]                ; 00503217
    PUSH dword ptr [ESP + 0xc]          ; 0050321a
    PUSH EDX                            ; 0050321e
    MOV ECX,dword ptr [ESP + 0xa0]      ; 0050321f
    PUSH ECX                            ; 00503226
    PUSH EBX                            ; 00503227
    CALL FUN_00503a10                   ; 00503228
        ;   XREF to: 00503a10 (UNCONDITIONAL_CALL)  ; undefined FUN_00503a10()
    ADD ESP,0x14                        ; 0050322d
    TEST ESI,ESI                        ; 00503230
    JNZ 0x00503236                      ; 00503232
        ;   XREF to: 00503236 (CONDITIONAL_JUMP)  ; LAB_00503236
    MOV ESI,EAX                         ; 00503234
    CMP dword ptr [EBX + 0x20],0x0      ; 00503236
        ;   Label: LAB_00503236
    JZ 0x0050336b                       ; 0050323a
        ;   XREF to: 0050336b (CONDITIONAL_JUMP)  ; LAB_0050336b
    FLD float ptr [ESP + 0x8]           ; 00503240
    FMUL float ptr [EBX + 0x10]         ; 00503244
    FSUBR float ptr [EBX + 0x14]        ; 00503247
    FST float ptr [EBX + 0x14]          ; 0050324a
    FCOMP double ptr [0x005dfc40]       ; 0050324d | DAT_005dfc40
    FNSTSW AX                           ; 00503253
    SAHF                                ; 00503255
    JNC 0x00503261                      ; 00503256
        ;   XREF to: 00503261 (CONDITIONAL_JUMP)  ; LAB_00503261
    PUSH EBX                            ; 00503258
    CALL FUN_005039e0                   ; 00503259
        ;   XREF to: 005039e0 (UNCONDITIONAL_CALL)  ; undefined FUN_005039e0()
    ADD ESP,0x4                         ; 0050325e
    FLD float ptr [EDI]                 ; 00503261
        ;   Label: LAB_00503261
    FSUB float ptr [ESP + 0x8]          ; 00503263
    FSTP float ptr [EDI]                ; 00503267
    MOV ECX,dword ptr [EBX + 0x2c]      ; 00503269
    TEST ECX,ECX                        ; 0050326c
    JZ 0x0050327f                       ; 0050326e
        ;   XREF to: 0050327f (CONDITIONAL_JUMP)  ; LAB_0050327f
    MOV EAX,dword ptr [ECX + 0x8]       ; 00503270
    CMP EAX,dword ptr [EBX + 0x4]       ; 00503273
    JNZ 0x0050327f                      ; 00503276
        ;   XREF to: 0050327f (CONDITIONAL_JUMP)  ; LAB_0050327f
    MOV dword ptr [EBX + 0x2c],0x0      ; 00503278
    TEST ESI,ESI                        ; 0050327f
        ;   Label: LAB_0050327f
    JZ 0x00503122                       ; 00503281
        ;   XREF to: 00503122 (CONDITIONAL_JUMP)  ; LAB_00503122
    PUSH ESI                            ; 00503287
    PUSH 0x5dfc1e                       ; 00503288 | = "signal%d"
    LEA EAX,[ESP + 0x18]                ; 0050328d
    PUSH EAX                            ; 00503291
    CALL FUN_005b7790                   ; 00503292
        ;   XREF to: 005b7790 (UNCONDITIONAL_CALL)  ; undefined FUN_005b7790()
    ADD ESP,0xc                         ; 00503297
    LEA EAX,[ESP + 0x10]                ; 0050329a
    PUSH EAX                            ; 0050329e
    MOV ECX,dword ptr [0x006141f0]      ; 0050329f | DAT_006141f0
    PUSH ECX                            ; 005032a5
    CALL FUN_004894f0                   ; 005032a6
        ;   XREF to: 004894f0 (UNCONDITIONAL_CALL)  ; undefined FUN_004894f0()
    ADD ESP,0x8                         ; 005032ab
    MOV EAX,ESI                         ; 005032ae
    MOV ESP,EBP                         ; 005032b0
    POP EBP                             ; 005032b2
    POP EDI                             ; 005032b3
    POP ESI                             ; 005032b4
    POP EBX                             ; 005032b5
    RET                                 ; 005032b6
    FLD double ptr [0x005dfc30]         ; 005032b7 | DAT_005dfc30
        ;   Label: LAB_005032b7
    FSUB double ptr [ESP]               ; 005032bd
    JMP 0x0050316e                      ; 005032c0
        ;   XREF to: 0050316e (UNCONDITIONAL_JUMP)  ; LAB_0050316e
    LEA EAX,[ESP + 0x8]                 ; 005032c5
        ;   Label: caseD_4
    PUSH EAX                            ; 005032c9
    MOV ECX,dword ptr [EBX + 0x18]      ; 005032ca
    PUSH dword ptr [EBX + 0x1c]         ; 005032cd
    PUSH ECX                            ; 005032d0
    PUSH EBX                            ; 005032d1
    CALL FUN_00503d80                   ; 005032d2
        ;   XREF to: 00503d80 (UNCONDITIONAL_CALL)  ; undefined FUN_00503d80()
    MOV EAX,0x1                         ; 005032d7
    ADD ESP,0x10                        ; 005032dc
    MOV dword ptr [ESP + 0xa4],EAX      ; 005032df
    JMP 0x005031d0                      ; 005032e6
        ;   XREF to: 005031d0 (UNCONDITIONAL_JUMP)  ; caseD_3
    LEA EAX,[ESP + 0x8]                 ; 005032eb
        ;   Label: caseD_5
    PUSH EAX                            ; 005032ef
    MOV EDX,dword ptr [EBX + 0x4]       ; 005032f0
    PUSH dword ptr [EBX + 0x8]          ; 005032f3
    PUSH EDX                            ; 005032f6
    PUSH EBX                            ; 005032f7
    CALL FUN_00503d80                   ; 005032f8
        ;   XREF to: 00503d80 (UNCONDITIONAL_CALL)  ; undefined FUN_00503d80()
    ADD ESP,0x10                        ; 005032fd
    JMP 0x005031da                      ; 00503300
        ;   XREF to: 005031da (UNCONDITIONAL_JUMP)  ; LAB_005031da
    LEA EAX,[ESP + 0x8]                 ; 00503305
        ;   Label: caseD_6
    PUSH EAX                            ; 00503309
    MOV ECX,dword ptr [EBX + 0x4]       ; 0050330a
    PUSH dword ptr [EBX + 0x8]          ; 0050330d
    PUSH ECX                            ; 00503310
    PUSH EBX                            ; 00503311
    CALL FUN_00503d80                   ; 00503312
        ;   XREF to: 00503d80 (UNCONDITIONAL_CALL)  ; undefined FUN_00503d80()
    ADD ESP,0x10                        ; 00503317
    LEA EAX,[ESP + 0x8]                 ; 0050331a
    PUSH EAX                            ; 0050331e
    MOV ESI,dword ptr [EBX + 0x18]      ; 0050331f
    PUSH dword ptr [EBX + 0x1c]         ; 00503322
    PUSH ESI                            ; 00503325
    PUSH EBX                            ; 00503326
    CALL FUN_00503d80                   ; 00503327
        ;   XREF to: 00503d80 (UNCONDITIONAL_CALL)  ; undefined FUN_00503d80()
    MOV EAX,0x1                         ; 0050332c
    ADD ESP,0x10                        ; 00503331
    MOV dword ptr [ESP + 0xa4],EAX      ; 00503334
    JMP 0x005031da                      ; 0050333b
        ;   XREF to: 005031da (UNCONDITIONAL_JUMP)  ; LAB_005031da
    MOV EDX,dword ptr [EBX + 0xc]       ; 00503340
        ;   Label: default
    PUSH EDX                            ; 00503343
    MOV ECX,0x5dfb66                    ; 00503344 | = "..\\core\\motion.cpp"
    MOV EAX,0x1a9                       ; 00503349
    PUSH 0x5dfb79                       ; 0050334e | = "CMotionController::advance: Tweening ..."
    MOV dword ptr [0x01d046a0],ECX      ; 00503353 | DAT_01d046a0
    MOV [0x01d046a4],EAX                ; 00503359 | DAT_01d046a4
    CALL FUN_004e4500                   ; 0050335e
        ;   XREF to: 004e4500 (UNCONDITIONAL_CALL)  ; undefined FUN_004e4500()
    ADD ESP,0x8                         ; 00503363
    JMP 0x005031d0                      ; 00503366
        ;   XREF to: 005031d0 (UNCONDITIONAL_JUMP)  ; caseD_3
    FLD float ptr [ESP + 0x8]           ; 0050336b
        ;   Label: LAB_0050336b
    FMUL float ptr [EBX + 0x10]         ; 0050336f
    FADD float ptr [EBX + 0x14]         ; 00503372
    FST float ptr [EBX + 0x14]          ; 00503375
    FCOMP double ptr [0x005dfc38]       ; 00503378 | DAT_005dfc38
    FNSTSW AX                           ; 0050337e
    SAHF                                ; 00503380
    JBE 0x00503261                      ; 00503381
        ;   XREF to: 00503261 (CONDITIONAL_JUMP)  ; LAB_00503261
    PUSH EBX                            ; 00503387
    CALL FUN_00503560                   ; 00503388
        ;   XREF to: 00503560 (UNCONDITIONAL_CALL)  ; undefined FUN_00503560()
    MOV EDX,dword ptr [EBX + 0x24]      ; 0050338d
    ADD ESP,0x4                         ; 00503390
    TEST EDX,EDX                        ; 00503393
    JZ 0x00503261                       ; 00503395
        ;   XREF to: 00503261 (CONDITIONAL_JUMP)  ; LAB_00503261
    PUSH EBX                            ; 0050339b
    CALL FUN_005035c0                   ; 0050339c
        ;   XREF to: 005035c0 (UNCONDITIONAL_CALL)  ; undefined FUN_005035c0()
    MOV EAX,dword ptr [EAX + 0x24]      ; 005033a1
    ADD ESP,0x4                         ; 005033a4
    MOV dword ptr [EBX + 0x28],EAX      ; 005033a7
    JMP 0x00503261                      ; 005033aa
        ;   XREF to: 00503261 (UNCONDITIONAL_JUMP)  ; LAB_00503261
    MOV EAX,dword ptr [ESP + 0x7c]      ; 005033af
        ;   Label: caseD_1
    MOV dword ptr [EBX + 0x4],EAX       ; 005033b3
    MOV EAX,dword ptr [ESP + 0x80]      ; 005033b6
    MOV dword ptr [EBX + 0x8],EAX       ; 005033bd
    CMP dword ptr [ESP + 0x88],0x0      ; 005033c0
    JZ 0x00503261                       ; 005033c8
        ;   XREF to: 00503261 (CONDITIONAL_JUMP)  ; LAB_00503261
    PUSH EBX                            ; 005033ce
    CALL FUN_005035c0                   ; 005033cf
        ;   XREF to: 005035c0 (UNCONDITIONAL_CALL)  ; undefined FUN_005035c0()
    MOV EAX,dword ptr [EAX + 0x24]      ; 005033d4
    ADD ESP,0x4                         ; 005033d7
    MOV dword ptr [EBX + 0x28],EAX      ; 005033da
    JMP 0x00503261                      ; 005033dd
        ;   XREF to: 00503261 (UNCONDITIONAL_JUMP)  ; LAB_00503261
    LEA EAX,[ESP + 0x74]                ; 005033e2
        ;   Label: caseD_3
    PUSH EAX                            ; 005033e6
    PUSH EBX                            ; 005033e7
    CALL FUN_005036e0                   ; 005033e8
        ;   XREF to: 005036e0 (UNCONDITIONAL_CALL)  ; undefined FUN_005036e0()
    ADD ESP,0x8                         ; 005033ed
    JMP 0x00503261                      ; 005033f0
        ;   XREF to: 00503261 (UNCONDITIONAL_JUMP)  ; LAB_00503261
    MOV ECX,dword ptr [ESP + 0x78]      ; 005033f5
        ;   Label: default
    PUSH ECX                            ; 005033f9
    MOV EAX,0x5dfbbf                    ; 005033fa | = "..\\core\\motion.cpp"
    MOV EDX,0x1e2                       ; 005033ff
    PUSH 0x5dfbd2                       ; 00503404 | = "Invalid transition command returned b..."
    MOV [0x01d046a0],EAX                ; 00503409 | DAT_01d046a0
    MOV dword ptr [0x01d046a4],EDX      ; 0050340e | DAT_01d046a4
    CALL FUN_004e4500                   ; 00503414
        ;   XREF to: 004e4500 (UNCONDITIONAL_CALL)  ; undefined FUN_004e4500()
    ADD ESP,0x8                         ; 00503419
    JMP 0x00503261                      ; 0050341c
        ;   XREF to: 00503261 (UNCONDITIONAL_JUMP)  ; LAB_00503261
    LEA EAX,[ESP + 0x74]                ; 00503421
        ;   Label: LAB_00503421
    PUSH EAX                            ; 00503425
    LEA EAX,[ESP + 0xc]                 ; 00503426
    PUSH EAX                            ; 0050342a
    MOV ECX,dword ptr [EBX + 0x4]       ; 0050342b
    PUSH dword ptr [EBX + 0x8]          ; 0050342e
    PUSH ECX                            ; 00503431
    PUSH EBX                            ; 00503432
    CALL FUN_00503bd0                   ; 00503433
        ;   XREF to: 00503bd0 (UNCONDITIONAL_CALL)  ; undefined FUN_00503bd0()
    ADD ESP,0x14                        ; 00503438
    MOV ESI,EAX                         ; 0050343b
    MOV EAX,dword ptr [ESP + 0x78]      ; 0050343d
    DEC EAX                             ; 00503441
    CMP EAX,0x5                         ; 00503442
    JA 0x005033f5                       ; 00503445
        ;   XREF to: 005033f5 (CONDITIONAL_JUMP)  ; default
    JMP dword ptr [EAX*0x4 + 0x5030a4]  ; 00503447 | caseD_2 | caseD_6 | switchdataD_005030a4
        ;   Label: switchD

