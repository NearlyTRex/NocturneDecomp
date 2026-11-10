; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_doc_cpp_FUN_00473160(CDemonActor *param_1)
;
; Local Variables:
; undefined        Stack[-0x6c]:1  local_6c
;
; XREF[1]:
;   core_doc.cpp_FUN_00469550 at 0046a2bd
;
; Referenced Globals:
;   TerminatedCString s_core_doc_cpp_005da304
;   TerminatedCString s_CDoc_aimLeftPistol_no_we_005da314
;   undefined4 DAT_005da33c
;   undefined4 DAT_005fecd0
;   undefined4 DAT_005fecd4
;   CDemonSet* g_CDemonSetPtr = 01e82168
;   undefined4 DAT_01b68820
;   undefined4 DAT_01d1d400
;   undefined4 DAT_01d1d404
;   CDemonSet g_CDemonSetInstance
;
; Called Functions:
;   core_actor.cpp_FUN_00408ac0
;   core_actor.cpp_FUN_00408b40
;   core_actor.cpp_FUN_00408bb0
;   core_actor.cpp_normalizeAngleToPi_FUN_0040cd60
;   core_main.c_FUN_005030e0
;   core_setcolid.cpp_CDemonSet_ignore_FUN_00559250
;   core_setcolid.cpp_CDemonSet_init_FUN_00559220
;   core_setcolid.cpp_CDemonSet_setRayTypeLaser_FUN_00559310
;   core_setcolid.cpp_FUN_00557300
;   core_skeleton.cpp_FUN_00569040
;   core_vecdir.cpp_convertDirectionVectorToEulerAngles_FUN_005a7520
;   crt_math.c_acos_FUN_005c1d04
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00473160
        ;   Label: core_doc.cpp_FUN_00473160
    PUSH ESI                            ; 00473161
    PUSH EDI                            ; 00473162
    PUSH EBP                            ; 00473163
    MOV EBP,ESP                         ; 00473164
    SUB ESP,0x164                       ; 00473166
    AND ESP,0xfffffff8                  ; 0047316c
    MOV EBX,dword ptr [EBP + 0x14]      ; 0047316f
    CMP dword ptr [EBX + 0x20004],0x0   ; 00473172
    JZ 0x0047360f                       ; 00473179
        ;   XREF to: 0047360f (CONDITIONAL_JUMP)  ; LAB_0047360f
    MOV EAX,dword ptr [EBX + 0x20004]   ; 0047317f
        ;   Label: LAB_0047317f
    PUSH EAX                            ; 00473185
    MOV EDX,dword ptr [EAX + 0x154]     ; 00473186
    LEA ESI,[ESP + 0x110]               ; 0047318c
    CALL dword ptr [EDX + 0xe0]         ; 00473193
    ADD ESP,0x4                         ; 00473199
    LEA EAX,[EBX + 0x1ffe0]             ; 0047319c
    LEA EDI,[ESP + 0x58]                ; 004731a2
    MOV dword ptr [ESP + 0x158],EAX     ; 004731a6
    MOV EAX,[0x01b68820]                ; 004731ad | DAT_01b68820
    LEA ESI,[ESP + 0x10c]               ; 004731b2
    MOV dword ptr [ESP + 0x14c],EAX     ; 004731b9
    MOV EAX,0x3f060a92                  ; 004731c0
    MOVSD ES:EDI,ESI                    ; 004731c5
    MOVSD ES:EDI,ESI                    ; 004731c6
    MOVSD ES:EDI,ESI                    ; 004731c7
    MOV dword ptr [ESP + 0x148],EAX     ; 004731c8
    LEA EAX,[ESP + 0x58]                ; 004731cf
    MOV EDI,0xbfa78d36                  ; 004731d3
    PUSH EAX                            ; 004731d8
    MOV EDX,dword ptr [EBX + 0x20004]   ; 004731d9
    LEA ESI,[ESP + 0xe0]                ; 004731df
    PUSH EDX                            ; 004731e6
    MOV dword ptr [ESP + 0x14c],EDI     ; 004731e7
    LEA EDI,[ESP + 0x90]                ; 004731ee
    CALL core_actor.cpp_FUN_00408b40    ; 004731f5
        ;   XREF to: 00408b40 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_FUN_00408b40()
    LEA ESI,[ESP + 0xe4]                ; 004731fa
    LEA EAX,[ESP + 0x54]                ; 00473201
    ADD ESP,0x8                         ; 00473205
    XOR ECX,ECX                         ; 00473208
    MOVSD ES:EDI,ESI                    ; 0047320a
    MOVSD ES:EDI,ESI                    ; 0047320b
    MOVSD ES:EDI,ESI                    ; 0047320c
    MOV dword ptr [ESP + 0x4c],ECX      ; 0047320d
    MOV EDI,0x447a0000                  ; 00473211
    MOV dword ptr [ESP + 0x50],ECX      ; 00473216
    MOV dword ptr [ESP + 0x54],EDI      ; 0047321a
    PUSH EAX                            ; 0047321e
    MOV EAX,dword ptr [EBX + 0x20004]   ; 0047321f
    PUSH EAX                            ; 00473225
    LEA ESI,[ESP + 0x3c]                ; 00473226
    LEA EDI,[ESP + 0x12c]               ; 0047322a
    CALL core_actor.cpp_FUN_00408ac0    ; 00473231
        ;   XREF to: 00408ac0 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_FUN_00408ac0()
    LEA ESI,[ESP + 0x3c]                ; 00473236
    ADD ESP,0x8                         ; 0047323a
    MOV EDX,dword ptr [0x00622c18]      ; 0047323d | g_CDemonSetPtr
    FLD float ptr [ESP + 0x88]          ; 00473243
    FLD float ptr [ESP + 0x8c]          ; 0047324a
    FLD float ptr [ESP + 0x90]          ; 00473251
    MOVSD ES:EDI,ESI                    ; 00473258
    MOVSD ES:EDI,ESI                    ; 00473259
    MOVSD ES:EDI,ESI                    ; 0047325a
    PUSH 0x0                            ; 0047325b
    LEA EDI,[ESP + 0x11c]               ; 0047325d
    LEA ESI,[ESP + 0x134]               ; 00473264
    PUSH 0x0                            ; 0047326b
    FXCH ST2                            ; 0047326d
    FADD float ptr [ESP + 0x12c]        ; 0047326f
    FXCH                                ; 00473276
    FADD float ptr [ESP + 0x130]        ; 00473278
    FXCH ST2                            ; 0047327f
    FADD float ptr [ESP + 0x134]        ; 00473281
    PUSH 0xff                           ; 00473288
    FXCH                                ; 0047328d
    FSTP float ptr [ESP + 0x13c]        ; 0047328f
    FXCH                                ; 00473296
    FSTP float ptr [ESP + 0x140]        ; 00473298
    PUSH 0x1                            ; 0047329f
    FSTP float ptr [ESP + 0x148]        ; 004732a1
    PUSH EDX                            ; 004732a8 | g_CDemonSetInstance
    MOVSD ES:EDI,ESI                    ; 004732a9
    MOVSD ES:EDI,ESI                    ; 004732aa
    MOVSD ES:EDI,ESI                    ; 004732ab
    CALL core_setcolid.cpp_CDemonSet_setRayTypeLaser_FUN_00559310 ; 004732ac
        ;   XREF to: 00559310 (UNCONDITIONAL_CALL)  ; void core_setcolid.cpp_CDemonSet_setRayTypeLaser_FUN_00559310(CDemonSet * this_ptr, int laser_type, int color_r, int color_g, ...)
    ADD ESP,0x14                        ; 004732b1
    MOV ECX,dword ptr [EBX + 0x20004]   ; 004732b4
    PUSH ECX                            ; 004732ba
    MOV ESI,dword ptr [0x00622c18]      ; 004732bb | g_CDemonSetPtr
    PUSH ESI                            ; 004732c1 | g_CDemonSetInstance
    CALL core_setcolid.cpp_CDemonSet_ignore_FUN_00559250 ; 004732c2
        ;   XREF to: 00559250 (UNCONDITIONAL_CALL)  ; void core_setcolid.cpp_CDemonSet_ignore_FUN_00559250(CDemonSet * this_ptr, CDemonActor * actor)
    ADD ESP,0x8                         ; 004732c7
    PUSH EBX                            ; 004732ca
    MOV EDI,dword ptr [0x00622c18]      ; 004732cb | g_CDemonSetPtr
    PUSH EDI                            ; 004732d1 | g_CDemonSetInstance
    CALL core_setcolid.cpp_CDemonSet_ignore_FUN_00559250 ; 004732d2
        ;   XREF to: 00559250 (UNCONDITIONAL_CALL)  ; void core_setcolid.cpp_CDemonSet_ignore_FUN_00559250(CDemonSet * this_ptr, CDemonActor * actor)
    ADD ESP,0x8                         ; 004732d7
    LEA EAX,[ESP + 0x118]               ; 004732da
    PUSH EAX                            ; 004732e1
    LEA EAX,[ESP + 0x8c]                ; 004732e2
    PUSH EAX                            ; 004732e9
    MOV EAX,[0x00622c18]                ; 004732ea | g_CDemonSetPtr
    PUSH EAX                            ; 004732ef | g_CDemonSetInstance
    CALL core_setcolid.cpp_FUN_00557300 ; 004732f0
        ;   XREF to: 00557300 (UNCONDITIONAL_CALL)  ; undefined core_setcolid.cpp_FUN_00557300()
    MOV dword ptr [ESP + 0x16c],EAX     ; 004732f5
    FLD float ptr [ESP + 0x16c]         ; 004732fc
    ADD ESP,0xc                         ; 00473303
    MOV EDX,dword ptr [0x00622c18]      ; 00473306 | g_CDemonSetPtr
    PUSH EDX                            ; 0047330c | g_CDemonSetInstance
    FSTP float ptr [ESP + 0x2c]         ; 0047330d
    CALL core_setcolid.cpp_CDemonSet_init_FUN_00559220 ; 00473311
        ;   XREF to: 00559220 (UNCONDITIONAL_CALL)  ; void core_setcolid.cpp_CDemonSet_init_FUN_00559220(CDemonSet * this_ptr)
    ADD ESP,0x4                         ; 00473316
    FLDZ                                ; 00473319
    FLD float ptr [ESP + 0x28]          ; 0047331b
    FSTP double ptr [ESP + 0x20]        ; 0047331f
    FCOMP double ptr [ESP + 0x20]       ; 00473323
    FNSTSW AX                           ; 00473327
    SAHF                                ; 00473329
    JBE 0x00473637                      ; 0047332a
        ;   XREF to: 00473637 (CONDITIONAL_JUMP)  ; LAB_00473637
    MOV dword ptr [ESP + 0x28],0x3f800000 ; 00473330
        ;   Label: LAB_00473330
    FLD float ptr [ESP + 0x28]          ; 00473338
        ;   Label: LAB_00473338
    FLD float ptr [ESP + 0x124]         ; 0047333c
    FMUL ST1                            ; 00473343
    FLD float ptr [ESP + 0x128]         ; 00473345
    FMUL ST2                            ; 0047334c
    FLD float ptr [ESP + 0x12c]         ; 0047334e
    FMULP ST3                           ; 00473355
    FLD float ptr [ESP + 0x88]          ; 00473357
    FLD float ptr [ESP + 0x8c]          ; 0047335e
    LEA EDI,[ESP + 0x40]                ; 00473365
    LEA ESI,[ESP + 0xd0]                ; 00473369
    FXCH ST3                            ; 00473370
    FSTP float ptr [ESP + 0xd0]         ; 00473372
    FXCH                                ; 00473379
    FSTP float ptr [ESP + 0xd4]         ; 0047337b
    FXCH ST2                            ; 00473382
    FSTP float ptr [ESP + 0xd8]         ; 00473384
    MOVSD ES:EDI,ESI                    ; 0047338b
    MOVSD ES:EDI,ESI                    ; 0047338c
    MOVSD ES:EDI,ESI                    ; 0047338d
    FLD float ptr [ESP + 0x90]          ; 0047338e
    LEA EDI,[ESP + 0x94]                ; 00473395
    LEA ESI,[ESP + 0x100]               ; 0047339c
    FXCH ST2                            ; 004733a3
    FADD float ptr [ESP + 0x40]         ; 004733a5
    FXCH                                ; 004733a9
    FADD float ptr [ESP + 0x44]         ; 004733ab
    FXCH ST2                            ; 004733af
    FADD float ptr [ESP + 0x48]         ; 004733b1
    FXCH                                ; 004733b5
    FSTP float ptr [ESP + 0x100]        ; 004733b7
    FXCH                                ; 004733be
    FSTP float ptr [ESP + 0x104]        ; 004733c0
    FSTP float ptr [ESP + 0x108]        ; 004733c7
    MOVSD ES:EDI,ESI                    ; 004733ce
    MOVSD ES:EDI,ESI                    ; 004733cf
    MOVSD ES:EDI,ESI                    ; 004733d0
    LEA EAX,[ESP + 0x94]                ; 004733d1
    LEA ESI,[ESP + 0x118]               ; 004733d8
    CMP ESI,EAX                         ; 004733df
    JZ 0x0047340d                       ; 004733e1
        ;   XREF to: 0047340d (CONDITIONAL_JUMP)  ; LAB_0047340d
    MOV EAX,dword ptr [ESP + 0x94]      ; 004733e3
    MOV dword ptr [ESP + 0x118],EAX     ; 004733ea
    MOV EAX,dword ptr [ESP + 0x98]      ; 004733f1
    MOV dword ptr [ESP + 0x11c],EAX     ; 004733f8
    MOV EAX,dword ptr [ESP + 0x9c]      ; 004733ff
    MOV dword ptr [ESP + 0x120],EAX     ; 00473406
    MOV ESI,dword ptr [ESP + 0x14c]     ; 0047340d
        ;   Label: LAB_0047340d
    PUSH ESI                            ; 00473414
    LEA EAX,[EBX + 0x158]               ; 00473415
    PUSH EAX                            ; 0047341b
    LEA ESI,[ESP + 0xa8]                ; 0047341c
    LEA EDI,[ESP + 0x6c]                ; 00473423
    CALL core_skeleton.cpp_FUN_00569040 ; 00473427
        ;   XREF to: 00569040 (UNCONDITIONAL_CALL)  ; undefined core_skeleton.cpp_FUN_00569040()
    ADD ESP,0x8                         ; 0047342c
    LEA EAX,[ESP + 0x118]               ; 0047342f
    LEA ESI,[ESP + 0xa0]                ; 00473436
    PUSH EAX                            ; 0047343d
    MOVSD ES:EDI,ESI                    ; 0047343e
    MOVSD ES:EDI,ESI                    ; 0047343f
    MOVSD ES:EDI,ESI                    ; 00473440
    PUSH EBX                            ; 00473441
    LEA ESI,[ESP + 0xc0]                ; 00473442
    LEA EDI,[ESP + 0xcc]                ; 00473449
    CALL core_actor.cpp_FUN_00408bb0    ; 00473450
        ;   XREF to: 00408bb0 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_FUN_00408bb0()
    LEA ESI,[ESP + 0xc0]                ; 00473455
    ADD ESP,0x8                         ; 0047345c
    MOVSD ES:EDI,ESI                    ; 0047345f
    MOVSD ES:EDI,ESI                    ; 00473460
    MOVSD ES:EDI,ESI                    ; 00473461
    LEA EAX,[ESP + 0xac]                ; 00473462
    FLD float ptr [ESP + 0xc4]          ; 00473469
    FLD float ptr [ESP + 0xc8]          ; 00473470
    FLD float ptr [ESP + 0xcc]          ; 00473477
    LEA EDI,[ESP + 0xac]                ; 0047347e
    LEA ESI,[ESP + 0xf4]                ; 00473485
    FXCH ST2                            ; 0047348c
    FSUB float ptr [ESP + 0x64]         ; 0047348e
    FXCH                                ; 00473492
    FSUB float ptr [ESP + 0x68]         ; 00473494
    FXCH ST2                            ; 00473498
    FSUB float ptr [ESP + 0x6c]         ; 0047349a
    FXCH                                ; 0047349e
    FSTP float ptr [ESP + 0xf4]         ; 004734a0
    FXCH                                ; 004734a7
    FSTP float ptr [ESP + 0xf8]         ; 004734a9
    FSTP float ptr [ESP + 0xfc]         ; 004734b0
    MOVSD ES:EDI,ESI                    ; 004734b7
    MOVSD ES:EDI,ESI                    ; 004734b8
    MOVSD ES:EDI,ESI                    ; 004734b9
    PUSH EAX                            ; 004734ba
    LEA ESI,[ESP + 0x80]                ; 004734bb
    CALL core_vecdir.cpp_convertDirectionVectorToEulerAngles_FUN_005a7520 ; 004734c2
        ;   XREF to: 005a7520 (UNCONDITIONAL_CALL)  ; undefined core_vecdir.cpp_convertDirectionVectorToEulerAngles_FUN_005a7520()
    ADD ESP,0x4                         ; 004734c7
    FLD float ptr [ESP + 0xb0]          ; 004734ca
    FMUL ST0                            ; 004734d1
    FLD float ptr [ESP + 0xac]          ; 004734d3
    FMUL ST0                            ; 004734da
    FADDP                               ; 004734dc
    FLD float ptr [ESP + 0xb4]          ; 004734de
    FMUL ST0                            ; 004734e5
    FADDP                               ; 004734e7
    FSQRT                               ; 004734e9
    LEA EDI,[ESP + 0xe8]                ; 004734eb
    LEA ESI,[ESP + 0x7c]                ; 004734f2
    MOVSD ES:EDI,ESI                    ; 004734f6
    MOVSD ES:EDI,ESI                    ; 004734f7
    MOVSD ES:EDI,ESI                    ; 004734f8
    FST float ptr [ESP + 0x30]          ; 004734f9
    MOV EAX,dword ptr [ESP + 0x30]      ; 004734fd
    FST double ptr [ESP + 0x10]         ; 00473501
    MOV dword ptr [ESP + 0x2c],EAX      ; 00473505
    FCOMP double ptr [0x005da33c]       ; 00473509 | DAT_005da33c
    FNSTSW AX                           ; 0047350f
    SAHF                                ; 00473511
    JBE 0x0047353e                      ; 00473512
        ;   XREF to: 0047353e (CONDITIONAL_JUMP)  ; LAB_0047353e
    FLD float ptr [ESP + 0x58]          ; 00473514
    FCHS                                ; 00473518
    FSTP float ptr [ESP + 0x150]        ; 0047351a
    JNC 0x0047364b                      ; 00473521
        ;   XREF to: 0047364b (CONDITIONAL_JUMP)  ; LAB_0047364b
    FLD float ptr [ESP + 0x2c]          ; 00473527
        ;   Label: LAB_00473527
    FST double ptr [ESP + 0x8]          ; 0047352b
    FCOMP double ptr [0x005da33c]       ; 0047352f | DAT_005da33c
    FNSTSW AX                           ; 00473535
    SAHF                                ; 00473537
    JNC 0x004736f4                      ; 00473538
        ;   XREF to: 004736f4 (CONDITIONAL_JUMP)  ; LAB_004736f4
    LEA EDI,[ESP + 0x70]                ; 0047353e
        ;   Label: LAB_0047353e
    LEA ESI,[ESP + 0xe8]                ; 00473542
    MOVSD ES:EDI,ESI                    ; 00473549
    MOVSD ES:EDI,ESI                    ; 0047354a
    MOVSD ES:EDI,ESI                    ; 0047354b
    MOV EAX,dword ptr [ESP + 0x74]      ; 0047354c
    MOV dword ptr [ESP + 0x15c],EAX     ; 00473550
    MOV EAX,dword ptr [ESP + 0x70]      ; 00473557
    FLD float ptr [ESP + 0x70]          ; 0047355b
    MOV dword ptr [ESP + 0x154],EAX     ; 0047355f
    FCOMP float ptr [0x005fecd0]        ; 00473566 | DAT_005fecd0
    FNSTSW AX                           ; 0047356c
    SAHF                                ; 0047356e
    JNC 0x0047357d                      ; 0047356f
        ;   XREF to: 0047357d (CONDITIONAL_JUMP)  ; LAB_0047357d
    MOV EAX,[0x005fecd0]                ; 00473571 | DAT_005fecd0
    MOV dword ptr [ESP + 0x154],EAX     ; 00473576
    FLD float ptr [ESP + 0x154]         ; 0047357d
        ;   Label: LAB_0047357d
    FCOMP float ptr [0x005fecd4]        ; 00473584 | DAT_005fecd4
    FNSTSW AX                           ; 0047358a
    SAHF                                ; 0047358c
    JBE 0x0047359b                      ; 0047358d
        ;   XREF to: 0047359b (CONDITIONAL_JUMP)  ; LAB_0047359b
    MOV EAX,[0x005fecd4]                ; 0047358f | DAT_005fecd4
    MOV dword ptr [ESP + 0x154],EAX     ; 00473594
    FLD float ptr [ESP + 0x15c]         ; 0047359b
        ;   Label: LAB_0047359b
    FCOMP float ptr [ESP + 0x144]       ; 004735a2
    FNSTSW AX                           ; 004735a9
    SAHF                                ; 004735ab
    JNC 0x004735bc                      ; 004735ac
        ;   XREF to: 004735bc (CONDITIONAL_JUMP)  ; LAB_004735bc
    MOV EAX,dword ptr [ESP + 0x144]     ; 004735ae
    MOV dword ptr [ESP + 0x15c],EAX     ; 004735b5
    FLD float ptr [ESP + 0x15c]         ; 004735bc
        ;   Label: LAB_004735bc
    FCOMP float ptr [ESP + 0x148]       ; 004735c3
    FNSTSW AX                           ; 004735ca
    SAHF                                ; 004735cc
    JA 0x00473793                       ; 004735cd
        ;   XREF to: 00473793 (CONDITIONAL_JUMP)  ; LAB_00473793
    MOV EDX,dword ptr [ESP + 0x158]     ; 004735d3
        ;   Label: LAB_004735d3
    MOV EAX,dword ptr [ESP + 0x15c]     ; 004735da
    MOV dword ptr [EDX + 0x14],0x3f800000 ; 004735e1
    MOV dword ptr [EDX + 0xc],EAX       ; 004735e8
    MOV EAX,dword ptr [ESP + 0x154]     ; 004735eb
    MOV dword ptr [EDX + 0x8],EAX       ; 004735f2
    MOV EAX,dword ptr [ESP + 0x15c]     ; 004735f5
    MOV dword ptr [EDX + 0x4],EAX       ; 004735fc
    MOV EAX,dword ptr [ESP + 0x154]     ; 004735ff
    MOV dword ptr [EDX],EAX             ; 00473606
    MOV ESP,EBP                         ; 00473608
    POP EBP                             ; 0047360a
    POP EDI                             ; 0047360b
    POP ESI                             ; 0047360c
    POP EBX                             ; 0047360d
    RET                                 ; 0047360e
    MOV ECX,0x5da304                    ; 0047360f | = "..\\core\\doc.cpp"
        ;   Label: LAB_0047360f
    MOV ESI,0x11e0                      ; 00473614
    PUSH 0x5da314                       ; 00473619 | = "CDoc::aimLeftPistol - no weapon?"
    MOV dword ptr [0x01d1d400],ECX      ; 0047361e | DAT_01d1d400
    MOV dword ptr [0x01d1d404],ESI      ; 00473624 | DAT_01d1d404
    CALL core_main.c_FUN_005030e0       ; 0047362a
        ;   XREF to: 005030e0 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_005030e0()
    ADD ESP,0x4                         ; 0047362f
    JMP 0x0047317f                      ; 00473632
        ;   XREF to: 0047317f (UNCONDITIONAL_JUMP)  ; LAB_0047317f
    FLD1                                ; 00473637
        ;   Label: LAB_00473637
    FCOMP double ptr [ESP + 0x20]       ; 00473639
    FNSTSW AX                           ; 0047363d
    SAHF                                ; 0047363f
    JC 0x00473330                       ; 00473640
        ;   XREF to: 00473330 (CONDITIONAL_JUMP)  ; LAB_00473330
    JMP 0x00473338                      ; 00473646
        ;   XREF to: 00473338 (UNCONDITIONAL_JUMP)  ; LAB_00473338
    FLD float ptr [ESP + 0x30]          ; 0047364b
        ;   Label: LAB_0047364b
    FMUL ST0                            ; 0047364f
    FLD float ptr [ESP + 0x150]         ; 00473651
    FMUL ST0                            ; 00473658
    FSUBP                               ; 0047365a
    FSQRT                               ; 0047365c
    FDIV double ptr [ESP + 0x10]        ; 0047365e
    FLD1                                ; 00473662
    FXCH                                ; 00473664
    FSTP double ptr [ESP + 0x18]        ; 00473666
    FCOMP double ptr [ESP + 0x18]       ; 0047366a
    FNSTSW AX                           ; 0047366e
    SAHF                                ; 00473670
    JBE 0x00473527                      ; 00473671
        ;   XREF to: 00473527 (CONDITIONAL_JUMP)  ; LAB_00473527
    FLDZ                                ; 00473677
    FCOMP double ptr [ESP + 0x18]       ; 00473679
    FNSTSW AX                           ; 0047367d
    SAHF                                ; 0047367f
    JA 0x00473527                       ; 00473680
        ;   XREF to: 00473527 (CONDITIONAL_JUMP)  ; LAB_00473527
    FLD double ptr [ESP + 0x18]         ; 00473686
    CALL crt_math.c_acos_FUN_005c1d04   ; 0047368a
        ;   XREF to: 005c1d04 (UNCONDITIONAL_CALL)  ; undefined crt_math.c_acos_FUN_005c1d04()
    FLDZ                                ; 0047368f
    FXCH                                ; 00473691
    FSTP float ptr [ESP + 0x140]        ; 00473693
    FCOMP float ptr [ESP + 0x150]       ; 0047369a
    FNSTSW AX                           ; 004736a1
    SAHF                                ; 004736a3
    JBE 0x004736e4                      ; 004736a4
        ;   XREF to: 004736e4 (CONDITIONAL_JUMP)  ; LAB_004736e4
    FLD float ptr [ESP + 0xec]          ; 004736a6
    FSUB float ptr [ESP + 0x140]        ; 004736ad
    FSTP float ptr [ESP + 0xec]         ; 004736b4
        ;   Label: LAB_004736b4
    PUSH dword ptr [ESP + 0xec]         ; 004736bb
    CALL core_actor.cpp_normalizeAngleToPi_FUN_0040cd60 ; 004736c2
        ;   XREF to: 0040cd60 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_normalizeAngleToPi_FUN_0040cd60()
    MOV dword ptr [ESP + 0x164],EAX     ; 004736c7
    FLD float ptr [ESP + 0x164]         ; 004736ce
    ADD ESP,0x4                         ; 004736d5
    FSTP float ptr [ESP + 0xec]         ; 004736d8
    JMP 0x00473527                      ; 004736df
        ;   XREF to: 00473527 (UNCONDITIONAL_JUMP)  ; LAB_00473527
    FLD float ptr [ESP + 0xec]          ; 004736e4
        ;   Label: LAB_004736e4
    FADD float ptr [ESP + 0x140]        ; 004736eb
    JMP 0x004736b4                      ; 004736f2
        ;   XREF to: 004736b4 (UNCONDITIONAL_JUMP)  ; LAB_004736b4
    FLD float ptr [ESP + 0x2c]          ; 004736f4
        ;   Label: LAB_004736f4
    FMUL ST0                            ; 004736f8
    FLD float ptr [ESP + 0x5c]          ; 004736fa
    FMUL ST0                            ; 004736fe
    FSUBP                               ; 00473700
    FSQRT                               ; 00473702
    FDIV double ptr [ESP + 0x8]         ; 00473704
    FLD1                                ; 00473708
    FXCH                                ; 0047370a
    FSTP double ptr [ESP]               ; 0047370c
    FCOMP double ptr [ESP]              ; 0047370f
    FNSTSW AX                           ; 00473712
    SAHF                                ; 00473714
    JBE 0x0047353e                      ; 00473715
        ;   XREF to: 0047353e (CONDITIONAL_JUMP)  ; LAB_0047353e
    FLDZ                                ; 0047371b
    FCOMP double ptr [ESP]              ; 0047371d
    FNSTSW AX                           ; 00473720
    SAHF                                ; 00473722
    JA 0x0047353e                       ; 00473723
        ;   XREF to: 0047353e (CONDITIONAL_JUMP)  ; LAB_0047353e
    FLD double ptr [ESP]                ; 00473729
    CALL crt_math.c_acos_FUN_005c1d04   ; 0047372c
        ;   XREF to: 005c1d04 (UNCONDITIONAL_CALL)  ; undefined crt_math.c_acos_FUN_005c1d04()
    FLDZ                                ; 00473731
    FXCH                                ; 00473733
    FSTP float ptr [ESP + 0x13c]        ; 00473735
    FCOMP float ptr [ESP + 0x5c]        ; 0047373c
    FNSTSW AX                           ; 00473740
    SAHF                                ; 00473742
    JBE 0x00473783                      ; 00473743
        ;   XREF to: 00473783 (CONDITIONAL_JUMP)  ; LAB_00473783
    FLD float ptr [ESP + 0xe8]          ; 00473745
    FSUB float ptr [ESP + 0x13c]        ; 0047374c
    FSTP float ptr [ESP + 0xe8]         ; 00473753
        ;   Label: LAB_00473753
    PUSH dword ptr [ESP + 0xe8]         ; 0047375a
    CALL core_actor.cpp_normalizeAngleToPi_FUN_0040cd60 ; 00473761
        ;   XREF to: 0040cd60 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_normalizeAngleToPi_FUN_0040cd60()
    MOV dword ptr [ESP + 0x164],EAX     ; 00473766
    FLD float ptr [ESP + 0x164]         ; 0047376d
    ADD ESP,0x4                         ; 00473774
    FSTP float ptr [ESP + 0xe8]         ; 00473777
    JMP 0x0047353e                      ; 0047377e
        ;   XREF to: 0047353e (UNCONDITIONAL_JUMP)  ; LAB_0047353e
    FLD float ptr [ESP + 0xe8]          ; 00473783
        ;   Label: LAB_00473783
    FADD float ptr [ESP + 0x13c]        ; 0047378a
    JMP 0x00473753                      ; 00473791
        ;   XREF to: 00473753 (UNCONDITIONAL_JUMP)  ; LAB_00473753
    MOV EAX,dword ptr [ESP + 0x148]     ; 00473793
        ;   Label: LAB_00473793
    MOV dword ptr [ESP + 0x15c],EAX     ; 0047379a
    JMP 0x004735d3                      ; 004737a1
        ;   XREF to: 004735d3 (UNCONDITIONAL_JUMP)  ; LAB_004735d3

