; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_spike_cpp_FUN_00566fd0(CSpike *this_ptr)
;
; Parameters:
; CSpike *         Stack[0x4]:4   this_ptr
;
; XREF[1]:
;   core_spike.cpp_FUN_00566a80 at 00566d9e
;
; Referenced Globals:
;   undefined4 DAT_005d5be6
;   undefined4 DAT_005d5bea
;   undefined4 DAT_005d5bee
;   undefined4 DAT_005d5bf2
;   CDemonSet* g_CDemonSetPtr = 01ed78c8
;
; Called Functions:
;   core_actor.cpp_FUN_00408b00
;   core_actor.cpp_FUN_00408b80
;   core_actor.cpp_FUN_00408bf0
;   core_actor.cpp_FUN_004091b0
;   core_box.cpp_CBoundingBox3D_expand_FUN_0041d840
;   core_box.cpp_CBoundingBox3D_reset_FUN_0041e8b0
;   core_box.cpp_FUN_0041d8b0
;   core_charactr.cpp_SDamageInfo_ctor_FUN_0042abb0
;   core_setcolid.cpp_SCollisionInfo_ctor_FUN_0053ed80
;   crt_memory.c___arrinit_FUN_005a30d7
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00566fd0
        ;   Label: core_spike.cpp_FUN_00566fd0
    PUSH ESI                            ; 00566fd1
    PUSH EDI                            ; 00566fd2
    PUSH EBP                            ; 00566fd3
    MOV EBP,ESP                         ; 00566fd4
    SUB ESP,0x238                       ; 00566fd6
    AND ESP,0xfffffff8                  ; 00566fdc
    MOV EDX,dword ptr [EBP + 0x14]      ; 00566fdf
    MOV EAX,dword ptr [EBP + 0x14]      ; 00566fe2
    PUSH EDX                            ; 00566fe5
    MOV EAX,dword ptr [EAX + 0x154]     ; 00566fe6
    LEA ESI,[ESP + 0x10c]               ; 00566fec
    LEA EDI,[ESP + 0xf4]                ; 00566ff3
    CALL dword ptr [EAX + 0x1c]         ; 00566ffa
    MOV ECX,0x6                         ; 00566ffd
    LEA ESI,[ESP + 0x10c]               ; 00567002
    ADD ESP,0x4                         ; 00567009
    LEA EAX,[ESP + 0x120]               ; 0056700c
    MOVSD.REP ES:EDI,ESI                ; 00567013
    PUSH EAX                            ; 00567015
    FLD float ptr [ESP + 0xf4]          ; 00567016
    FLD float ptr [ESP + 0xf8]          ; 0056701d
    FLD float ptr [ESP + 0x100]         ; 00567024
    FLD float ptr [ESP + 0x104]         ; 0056702b
    FXCH ST3                            ; 00567032
    FLD float ptr [0x005d5be6]          ; 00567034 | DAT_005d5be6
    FXCH                                ; 0056703a
    FADD ST0,ST1                        ; 0056703c
    FXCH ST3                            ; 0056703e
    FADDP                               ; 00567040
    FXCH                                ; 00567042
    FLD float ptr [0x005d5bea]          ; 00567044 | DAT_005d5bea
    FXCH                                ; 0056704a
    FADD ST0,ST1                        ; 0056704c
    FXCH ST4                            ; 0056704e
    FADDP                               ; 00567050
    FXCH ST2                            ; 00567052
    FSTP float ptr [ESP + 0xf4]         ; 00567054
    FSTP float ptr [ESP + 0xf8]         ; 0056705b
    FXCH                                ; 00567062
    FSTP float ptr [ESP + 0x100]        ; 00567064
    FSTP float ptr [ESP + 0x104]        ; 0056706b
    CALL core_box.cpp_CBoundingBox3D_reset_FUN_0041e8b0 ; 00567072
        ;   XREF to: 0041e8b0 (UNCONDITIONAL_CALL)  ; void core_box.cpp_CBoundingBox3D_reset_FUN_0041e8b0(CBoundingBox3D * this_ptr)
    ADD ESP,0x4                         ; 00567077
    PUSH 0x5db0f0                       ; 0056707a
    PUSH 0x8                            ; 0056707f
    LEA EAX,[ESP + 0x18]                ; 00567081
    PUSH EAX                            ; 00567085
    CALL crt_memory.c___arrinit_FUN_005a30d7 ; 00567086
        ;   XREF to: 005a30d7 (UNCONDITIONAL_CALL)  ; undefined crt_memory.c___arrinit_FUN_005a30d7()
    ADD ESP,0xc                         ; 0056708b
    XOR ECX,ECX                         ; 0056708e
    LEA EBX,[ESP + 0x10]                ; 00567090
    MOV dword ptr [ESP + 0x230],ECX     ; 00567094
    MOV ESI,dword ptr [ESP + 0x230]     ; 0056709b
        ;   Label: LAB_0056709b
    PUSH ESI                            ; 005670a2
    LEA EAX,[ESP + 0xf4]                ; 005670a3
    PUSH EAX                            ; 005670aa
    LEA ESI,[ESP + 0x1ac]               ; 005670ab
    LEA EDI,[ESP + 0x200]               ; 005670b2
    CALL core_box.cpp_FUN_0041d8b0      ; 005670b9
        ;   XREF to: 0041d8b0 (UNCONDITIONAL_CALL)  ; undefined core_box.cpp_FUN_0041d8b0()
    LEA ESI,[ESP + 0x1ac]               ; 005670be
    ADD ESP,0x8                         ; 005670c5
    LEA EAX,[ESP + 0x1f8]               ; 005670c8
    MOVSD ES:EDI,ESI                    ; 005670cf
    MOVSD ES:EDI,ESI                    ; 005670d0
    MOVSD ES:EDI,ESI                    ; 005670d1
    PUSH EAX                            ; 005670d2
    MOV EDI,dword ptr [EBP + 0x14]      ; 005670d3
    PUSH EDI                            ; 005670d6
    LEA ESI,[ESP + 0x1f4]               ; 005670d7
    CALL core_actor.cpp_FUN_00408b80    ; 005670de
        ;   XREF to: 00408b80 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_FUN_00408b80()
    LEA EDI,[ESP + 0x1dc]               ; 005670e3
    LEA ESI,[ESP + 0x1f4]               ; 005670ea
    ADD ESP,0x8                         ; 005670f1
    LEA EAX,[ESP + 0x1d4]               ; 005670f4
    MOVSD ES:EDI,ESI                    ; 005670fb
    MOVSD ES:EDI,ESI                    ; 005670fc
    MOVSD ES:EDI,ESI                    ; 005670fd
    CMP EBX,EAX                         ; 005670fe
    JZ 0x0056711f                       ; 00567100
        ;   XREF to: 0056711f (CONDITIONAL_JUMP)  ; LAB_0056711f
    MOV EAX,dword ptr [ESP + 0x1d4]     ; 00567102
    MOV dword ptr [EBX],EAX             ; 00567109
    MOV EAX,dword ptr [ESP + 0x1d8]     ; 0056710b
    MOV dword ptr [EBX + 0x4],EAX       ; 00567112
    MOV EAX,dword ptr [ESP + 0x1dc]     ; 00567115
    MOV dword ptr [EBX + 0x8],EAX       ; 0056711c
    PUSH EBX                            ; 0056711f
        ;   Label: LAB_0056711f
    LEA EAX,[ESP + 0x124]               ; 00567120
    PUSH EAX                            ; 00567127
    CALL core_box.cpp_CBoundingBox3D_expand_FUN_0041d840 ; 00567128
        ;   XREF to: 0041d840 (UNCONDITIONAL_CALL)  ; void core_box.cpp_CBoundingBox3D_expand_FUN_0041d840(CBoundingBox3D * this_ptr, CVector3f * point)
    ADD ESP,0x8                         ; 0056712d
    MOV EAX,dword ptr [ESP + 0x230]     ; 00567130
    INC EAX                             ; 00567137
    ADD EBX,0xc                         ; 00567138
    MOV dword ptr [ESP + 0x230],EAX     ; 0056713b
    CMP EAX,0x8                         ; 00567142
    JL 0x0056709b                       ; 00567145
        ;   XREF to: 0056709b (CONDITIONAL_JUMP)  ; LAB_0056709b
    FLD float ptr [ESP + 0xf4]          ; 0056714b
    FMUL ST0                            ; 00567152
    FLD float ptr [ESP + 0xf0]          ; 00567154
    FMUL ST0                            ; 0056715b
    FADDP                               ; 0056715d
    FLD float ptr [ESP + 0xf8]          ; 0056715f
    FMUL ST0                            ; 00567166
    FADDP                               ; 00567168
    FSQRT                               ; 0056716a
    FLD float ptr [ESP + 0xfc]          ; 0056716c
    FMUL ST0                            ; 00567173
    FLD float ptr [ESP + 0x100]         ; 00567175
    FMUL ST0                            ; 0056717c
    FADDP                               ; 0056717e
    FLD float ptr [ESP + 0x104]         ; 00567180
    FMUL ST0                            ; 00567187
    FADDP                               ; 00567189
    FSTP float ptr [ESP + 0xc]          ; 0056718b
    FSTP float ptr [ESP + 0x210]        ; 0056718f
    MOV EAX,dword ptr [ESP + 0x210]     ; 00567196
    FLD float ptr [ESP + 0xc]           ; 0056719d
    MOV dword ptr [ESP + 0x218],EAX     ; 005671a1
    FSQRT                               ; 005671a8
    FST float ptr [ESP + 0x214]         ; 005671aa
    FCOMP float ptr [ESP + 0x210]       ; 005671b1
    FNSTSW AX                           ; 005671b8
    SAHF                                ; 005671ba
    JA 0x005672de                       ; 005671bb
        ;   XREF to: 005672de (CONDITIONAL_JUMP)  ; LAB_005672de
    FLD float ptr [ESP + 0x218]         ; 005671c1
        ;   Label: LAB_005671c1
    FMUL float ptr [0x005d5bee]         ; 005671c8 | DAT_005d5bee
    FADD float ptr [0x005d5bf2]         ; 005671ce | DAT_005d5bf2
    FST float ptr [ESP + 0x218]         ; 005671d4
    FMUL float ptr [ESP + 0x218]        ; 005671db
    FLD float ptr [ESP + 0x104]         ; 005671e2
    FSUB float ptr [ESP + 0xf8]         ; 005671e9
    MOV ESI,dword ptr [EBP + 0x14]      ; 005671f0
    FSTP float ptr [ESP + 0x234]        ; 005671f3
    MOV EAX,dword ptr [ESP + 0x234]     ; 005671fa
    LEA EDI,[ESP + 0x198]               ; 00567201
    MOV dword ptr [ESP + 0x14c],EAX     ; 00567208
    LEA EAX,[ESP + 0x144]               ; 0056720f
    XOR ECX,ECX                         ; 00567216
    PUSH EAX                            ; 00567218
    MOV dword ptr [ESP + 0x148],ECX     ; 00567219
    MOV dword ptr [ESP + 0x14c],ECX     ; 00567220
    PUSH ESI                            ; 00567227
    LEA ESI,[ESP + 0x158]               ; 00567228
    FSTP float ptr [ESP + 0x224]        ; 0056722f
    CALL core_actor.cpp_FUN_00408b00    ; 00567236
        ;   XREF to: 00408b00 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_FUN_00408b00()
    LEA ESI,[ESP + 0x158]               ; 0056723b
    ADD ESP,0x8                         ; 00567242
    MOVSD ES:EDI,ESI                    ; 00567245
    MOVSD ES:EDI,ESI                    ; 00567246
    MOVSD ES:EDI,ESI                    ; 00567247
    MOV EAX,dword ptr [EBP + 0x14]      ; 00567248
    XOR EDI,EDI                         ; 0056724b
    ADD EAX,0x20                        ; 0056724d
    MOV dword ptr [ESP + 0x22c],EDI     ; 00567250
    MOV dword ptr [ESP + 0x224],EAX     ; 00567257
    MOV dword ptr [ESP + 0x228],EDI     ; 0056725e
    MOV EAX,[0x00603b28]                ; 00567265 | g_CDemonSetPtr
        ;   Label: LAB_00567265
    MOV EDX,dword ptr [ESP + 0x22c]     ; 0056726a
    CMP EDX,dword ptr [EAX + 0x14f0a8]  ; 00567271
    JGE 0x005675d4                      ; 00567277
        ;   XREF to: 005675d4 (CONDITIONAL_JUMP)  ; LAB_005675d4
    ADD EAX,dword ptr [ESP + 0x228]     ; 0056727d
    MOV EBX,dword ptr [EAX + 0x14f0ac]  ; 00567284
    MOV EAX,dword ptr [ESP + 0x224]     ; 0056728a
    LEA ESI,[EBX + 0x20]                ; 00567291
    FLD float ptr [EAX]                 ; 00567294
    FSUB float ptr [ESI]                ; 00567296
    FMUL ST0                            ; 00567298
    FLD float ptr [EAX + 0x4]           ; 0056729a
    FSUB float ptr [ESI + 0x4]          ; 0056729d
    FMUL ST0                            ; 005672a0
    FLD float ptr [EAX + 0x8]           ; 005672a2
    FXCH                                ; 005672a5
    FADDP ST2,ST0                       ; 005672a7
    FSUB float ptr [ESI + 0x8]          ; 005672a9
    FMUL ST0                            ; 005672ac
    FADDP                               ; 005672ae
    FCOMP float ptr [ESP + 0x21c]       ; 005672b0
    FNSTSW AX                           ; 005672b7
    SAHF                                ; 005672b9
    JBE 0x005672f1                      ; 005672ba
        ;   XREF to: 005672f1 (CONDITIONAL_JUMP)  ; LAB_005672f1
    MOV ECX,dword ptr [ESP + 0x22c]     ; 005672bc
        ;   Label: LAB_005672bc
    MOV EDX,dword ptr [ESP + 0x228]     ; 005672c3
    INC ECX                             ; 005672ca
    ADD EDX,0x4                         ; 005672cb
    MOV dword ptr [ESP + 0x22c],ECX     ; 005672ce
    MOV dword ptr [ESP + 0x228],EDX     ; 005672d5
    JMP 0x00567265                      ; 005672dc
        ;   XREF to: 00567265 (UNCONDITIONAL_JUMP)  ; LAB_00567265
    MOV EAX,dword ptr [ESP + 0x214]     ; 005672de
        ;   Label: LAB_005672de
    MOV dword ptr [ESP + 0x218],EAX     ; 005672e5
    JMP 0x005671c1                      ; 005672ec
        ;   XREF to: 005671c1 (UNCONDITIONAL_JUMP)  ; LAB_005671c1
    LEA EAX,[ESP + 0xac]                ; 005672f1
        ;   Label: LAB_005672f1
    PUSH EAX                            ; 005672f8
    CALL core_setcolid.cpp_SCollisionInfo_ctor_FUN_0053ed80 ; 005672f9
        ;   XREF to: 0053ed80 (UNCONDITIONAL_CALL)  ; SCollisionInfo * core_setcolid.cpp_SCollisionInfo_ctor_FUN_0053ed80(SCollisionInfo * this_ptr)
    ADD ESP,0x4                         ; 005672fe
    LEA EDX,[ESP + 0xac]                ; 00567301
    XOR EDI,EDI                         ; 00567308
    PUSH EDX                            ; 0056730a
    MOV dword ptr [ESP + 0xb0],EDI      ; 0056730b
    PUSH EBX                            ; 00567312
    MOV EAX,dword ptr [EBX + 0x154]     ; 00567313
    CALL dword ptr [EAX + 0x3c]         ; 00567319
    ADD ESP,0x8                         ; 0056731c
    MOV dword ptr [ESP + 0x220],EAX     ; 0056731f
    TEST EAX,EAX                        ; 00567326
    JZ 0x005672bc                       ; 00567328
        ;   XREF to: 005672bc (CONDITIONAL_JUMP)  ; LAB_005672bc
    PUSH ESI                            ; 0056732a
    MOV EDX,dword ptr [EBP + 0x14]      ; 0056732b
    MOV dword ptr [ESP + 0xc4],EDI      ; 0056732e
    PUSH EDX                            ; 00567335
    LEA ESI,[ESP + 0x1e8]               ; 00567336
    LEA EDI,[ESP + 0x164]               ; 0056733d
    CALL core_actor.cpp_FUN_00408bf0    ; 00567344
        ;   XREF to: 00408bf0 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_FUN_00408bf0()
    LEA ESI,[ESP + 0x1e8]               ; 00567349
    ADD ESP,0x8                         ; 00567350
    MOVSD ES:EDI,ESI                    ; 00567353
    MOVSD ES:EDI,ESI                    ; 00567354
    MOVSD ES:EDI,ESI                    ; 00567355
    FLD float ptr [ESP + 0x15c]         ; 00567356
    FCOMP float ptr [ESP + 0xf0]        ; 0056735d
    FNSTSW AX                           ; 00567364
    SAHF                                ; 00567366
    JNC 0x00567377                      ; 00567367
        ;   XREF to: 00567377 (CONDITIONAL_JUMP)  ; LAB_00567377
    MOV EAX,dword ptr [ESP + 0xf0]      ; 00567369
    MOV dword ptr [ESP + 0x15c],EAX     ; 00567370
    FLD float ptr [ESP + 0x15c]         ; 00567377
        ;   Label: LAB_00567377
    FCOMP float ptr [ESP + 0xfc]        ; 0056737e
    FNSTSW AX                           ; 00567385
    SAHF                                ; 00567387
    JBE 0x00567398                      ; 00567388
        ;   XREF to: 00567398 (CONDITIONAL_JUMP)  ; LAB_00567398
    MOV EAX,dword ptr [ESP + 0xfc]      ; 0056738a
    MOV dword ptr [ESP + 0x15c],EAX     ; 00567391
    FLD float ptr [ESP + 0x160]         ; 00567398
        ;   Label: LAB_00567398
    FCOMP float ptr [ESP + 0xf4]        ; 0056739f
    FNSTSW AX                           ; 005673a6
    SAHF                                ; 005673a8
    JNC 0x005673b9                      ; 005673a9
        ;   XREF to: 005673b9 (CONDITIONAL_JUMP)  ; LAB_005673b9
    MOV EAX,dword ptr [ESP + 0xf4]      ; 005673ab
    MOV dword ptr [ESP + 0x160],EAX     ; 005673b2
    FLD float ptr [ESP + 0x160]         ; 005673b9
        ;   Label: LAB_005673b9
    FCOMP float ptr [ESP + 0x100]       ; 005673c0
    FNSTSW AX                           ; 005673c7
    SAHF                                ; 005673c9
    JBE 0x005673da                      ; 005673ca
        ;   XREF to: 005673da (CONDITIONAL_JUMP)  ; LAB_005673da
    MOV EAX,dword ptr [ESP + 0x100]     ; 005673cc
    MOV dword ptr [ESP + 0x160],EAX     ; 005673d3
    LEA EAX,[ESP + 0x15c]               ; 005673da
        ;   Label: LAB_005673da
    MOV ESI,dword ptr [EBP + 0x14]      ; 005673e1
    PUSH EAX                            ; 005673e4
    LEA EDI,[ESP + 0x1b4]               ; 005673e5
    XOR ECX,ECX                         ; 005673ec
    PUSH ESI                            ; 005673ee
    LEA ESI,[ESP + 0x1d0]               ; 005673ef
    MOV dword ptr [ESP + 0x16c],ECX     ; 005673f6
    CALL core_actor.cpp_FUN_00408b80    ; 005673fd
        ;   XREF to: 00408b80 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_FUN_00408b80()
    LEA ESI,[ESP + 0x1d0]               ; 00567402
    ADD ESP,0x8                         ; 00567409
    LEA EAX,[ESP + 0x120]               ; 0056740c
    MOVSD ES:EDI,ESI                    ; 00567413
    MOVSD ES:EDI,ESI                    ; 00567414
    MOVSD ES:EDI,ESI                    ; 00567415
    PUSH EAX                            ; 00567416
    MOV EDI,dword ptr [ESP + 0x224]     ; 00567417
    PUSH EDI                            ; 0056741e
    LEA EAX,[ESP + 0xb4]                ; 0056741f
    PUSH EAX                            ; 00567426
    LEA EAX,[ESP + 0xe0]                ; 00567427
    PUSH EAX                            ; 0056742e
    LEA EAX,[ESP + 0x1a8]               ; 0056742f
    PUSH EAX                            ; 00567436
    LEA EAX,[ESP + 0x1c4]               ; 00567437
    PUSH EAX                            ; 0056743e
    PUSH EBX                            ; 0056743f
    CALL core_actor.cpp_FUN_004091b0    ; 00567440
        ;   XREF to: 004091b0 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_FUN_004091b0()
    MOV dword ptr [ESP + 0x250],EAX     ; 00567445
    FLD float ptr [ESP + 0x250]         ; 0056744c
    ADD ESP,0x1c                        ; 00567453
    FLDZ                                ; 00567456
    FXCH                                ; 00567458
    FST float ptr [ESP + 0x8]           ; 0056745a
    FSTP double ptr [ESP]               ; 0056745e
    FCOMP double ptr [ESP]              ; 00567461
    FNSTSW AX                           ; 00567464
    SAHF                                ; 00567466
    JA 0x005672bc                       ; 00567467
        ;   XREF to: 005672bc (CONDITIONAL_JUMP)  ; LAB_005672bc
    FLD1                                ; 0056746d
    FCOMP double ptr [ESP]              ; 0056746f
    FNSTSW AX                           ; 00567472
    SAHF                                ; 00567474
    JC 0x005672bc                       ; 00567475
        ;   XREF to: 005672bc (CONDITIONAL_JUMP)  ; LAB_005672bc
    FLD float ptr [ESP + 0x8]           ; 0056747b
    FLD float ptr [ESP + 0x198]         ; 0056747f
    FMUL ST1                            ; 00567486
    FLD float ptr [ESP + 0x19c]         ; 00567488
    FMUL ST2                            ; 0056748f
    FLD float ptr [ESP + 0x1a0]         ; 00567491
    FMULP ST3                           ; 00567498
    FLD float ptr [ESP + 0x1b0]         ; 0056749a
    FLD float ptr [ESP + 0x1b4]         ; 005674a1
    FLD float ptr [ESP + 0x1b8]         ; 005674a8
    LEA EDI,[ESP + 0x180]               ; 005674af
    LEA ESI,[ESP + 0x168]               ; 005674b6
    LEA EAX,[ESP + 0x174]               ; 005674bd
    FXCH ST4                            ; 005674c4
    FSTP float ptr [ESP + 0x168]        ; 005674c6
    FXCH ST2                            ; 005674cd
    FSTP float ptr [ESP + 0x16c]        ; 005674cf
    FXCH ST3                            ; 005674d6
    FSTP float ptr [ESP + 0x170]        ; 005674d8
    MOVSD ES:EDI,ESI                    ; 005674df
    MOVSD ES:EDI,ESI                    ; 005674e0
    MOVSD ES:EDI,ESI                    ; 005674e1
    PUSH EAX                            ; 005674e2
    LEA EDI,[ESP + 0x178]               ; 005674e3
    LEA ESI,[ESP + 0x1c0]               ; 005674ea
    FXCH ST2                            ; 005674f1
    FADD float ptr [ESP + 0x184]        ; 005674f3
    FXCH ST2                            ; 005674fa
    FADD float ptr [ESP + 0x188]        ; 005674fc
    FXCH                                ; 00567503
    FADD float ptr [ESP + 0x18c]        ; 00567505
    FXCH ST2                            ; 0056750c
    FSTP float ptr [ESP + 0x1c0]        ; 0056750e
    FSTP float ptr [ESP + 0x1c4]        ; 00567515
    FSTP float ptr [ESP + 0x1c8]        ; 0056751c
    MOVSD ES:EDI,ESI                    ; 00567523
    MOVSD ES:EDI,ESI                    ; 00567524
    MOVSD ES:EDI,ESI                    ; 00567525
    PUSH EBX                            ; 00567526
    LEA ESI,[ESP + 0x194]               ; 00567527
    LEA EDI,[ESP + 0x140]               ; 0056752e
    CALL core_actor.cpp_FUN_00408bf0    ; 00567535
        ;   XREF to: 00408bf0 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_FUN_00408bf0()
    ADD ESP,0x8                         ; 0056753a
    LEA EAX,[ESP + 0x70]                ; 0056753d
    LEA ESI,[ESP + 0x18c]               ; 00567541
    PUSH EAX                            ; 00567548
    MOVSD ES:EDI,ESI                    ; 00567549
    MOVSD ES:EDI,ESI                    ; 0056754a
    MOVSD ES:EDI,ESI                    ; 0056754b
    CALL core_charactr.cpp_SDamageInfo_ctor_FUN_0042abb0 ; 0056754c
        ;   XREF to: 0042abb0 (UNCONDITIONAL_CALL)  ; SDamageInfo * core_charactr.cpp_SDamageInfo_ctor_FUN_0042abb0(SDamageInfo * this_ptr)
    ADD ESP,0x4                         ; 00567551
    MOV EAX,dword ptr [EBP + 0x14]      ; 00567554
    MOV EAX,dword ptr [EAX + 0x558]     ; 00567557
    MOV dword ptr [ESP + 0x74],EAX      ; 0056755d
    MOV EAX,0x67                        ; 00567561
    LEA EDX,[ESP + 0x138]               ; 00567566
    MOV dword ptr [ESP + 0xa0],EAX      ; 0056756d
    LEA EAX,[ESP + 0x8c]                ; 00567574
    CMP EAX,EDX                         ; 0056757b
    JZ 0x005675a9                       ; 0056757d
        ;   XREF to: 005675a9 (CONDITIONAL_JUMP)  ; LAB_005675a9
    MOV EAX,dword ptr [ESP + 0x138]     ; 0056757f
    MOV dword ptr [ESP + 0x8c],EAX      ; 00567586
    MOV EAX,dword ptr [ESP + 0x13c]     ; 0056758d
    MOV dword ptr [ESP + 0x90],EAX      ; 00567594
    MOV EAX,dword ptr [ESP + 0x140]     ; 0056759b
    MOV dword ptr [ESP + 0x94],EAX      ; 005675a2
    LEA EDX,[ESP + 0x70]                ; 005675a9
        ;   Label: LAB_005675a9
    MOV EAX,dword ptr [EBP + 0x14]      ; 005675ad
    PUSH EDX                            ; 005675b0
    MOV dword ptr [ESP + 0xa8],EAX      ; 005675b1
    MOV dword ptr [ESP + 0xac],EAX      ; 005675b8
    PUSH EBX                            ; 005675bf
    MOV EAX,dword ptr [EBX + 0x154]     ; 005675c0
    CALL dword ptr [EAX + 0x108]        ; 005675c6
    ADD ESP,0x8                         ; 005675cc
    JMP 0x005672bc                      ; 005675cf
        ;   XREF to: 005672bc (UNCONDITIONAL_JUMP)  ; LAB_005672bc
    MOV ESP,EBP                         ; 005675d4
        ;   Label: LAB_005675d4
    POP EBP                             ; 005675d6
    POP EDI                             ; 005675d7
    POP ESI                             ; 005675d8
    POP EBX                             ; 005675d9
    RET                                 ; 005675da

