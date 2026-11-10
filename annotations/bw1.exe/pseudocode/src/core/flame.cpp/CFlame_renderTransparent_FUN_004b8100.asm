; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl core_flame_cpp_CFlame_renderTransparent_FUN_004b8100(CFlame *this_ptr)
;
; Parameters:
; CFlame *         Stack[0x4]:4   this_ptr
; Local Variables:
; undefined        Stack[-0x120]:1  local_120
; undefined        Stack[-0x108]:1  local_108
;
; XREF[4]:
;   core_bodypart.cpp_CBodyPart_renderTransparent_FUN_00419280 at 0041931d
;   core_crossbow.cpp_CCrossbow_renderTransparent_FUN_004499c0 at 004499d6
;   core_flamecan.cpp_CFlameCan_renderTransparent_FUN_004b9340 at 004b935d
;   core_vessel.cpp_CCryptVessel_renderTransparent_FUN_005a95c0 at 005a9721
;
; Referenced Globals:
;   undefined4 DAT_005df6c7
;   undefined4 DAT_005df6cf
;   undefined4 DAT_005df6d7
;   undefined4 DAT_00600380
;   undefined4 DAT_00612560
;   undefined4 DAT_0061cda8
;   undefined4 DAT_0061cdc0
;   undefined4 DAT_0061f650
;   CDemonSet* g_CDemonSetPtr = 01e82168
;   undefined4 DAT_0062902c
;   undefined4 DAT_00629030
;   undefined4 DAT_00629034
;   undefined4 DAT_00629038
;   undefined4 DAT_0062903c
;   undefined4 DAT_00629040
;   ... and 23 more
;
; Called Functions:
;   core_actor.cpp_CDemonActor_restoreRenderState_FUN_004087f0
;   core_actor.cpp_CDemonActor_setupRenderState_FUN_004087b0
;   core_actor.cpp_getRandomFloatFromRange_FUN_0040cc00
;   core_box.cpp_FUN_004207b0
;   core_set.cpp_CDemonSet_addQueuedCoronaGlobe_FUN_00551a00
;   crt_math.c_round_FUN_005c03a0
;   engine_drender.cpp_CDemonRenderer_applyDirectTransform_FUN_00483800
;   engine_drender.cpp_CDemonRenderer_applyScaledTransform_FUN_00483850
;   engine_drender.cpp_CDemonRenderer_captureTexture_FUN_00484f00
;   engine_drender.cpp_CDemonRenderer_isShadowPass_FUN_00483e60
;   engine_drender.cpp_CDemonRenderer_renderTexturedDirect_FUN_00482170
;   engine_drender.cpp_CDemonRenderer_renderVertexAlphaDirect_FUN_00482e30
;   engine_drender.cpp_CDemonRenderer_setBlendMode_FUN_00483dd0
;   engine_matrix.c_FUN_00483b50
;   engine_matrix.c_FUN_00483b70
;   ... and 3 more
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004b8100
        ;   Label: core_flame.cpp_CFlame_renderTransparent_FUN_004b8100
    PUSH ESI                            ; 004b8101
    PUSH EDI                            ; 004b8102
    PUSH EBP                            ; 004b8103
    MOV EBP,ESP                         ; 004b8104
    SUB ESP,0x15c                       ; 004b8106
    AND ESP,0xfffffff8                  ; 004b810c
    MOV EAX,dword ptr [EBP + 0x14]      ; 004b810f
    CMP dword ptr [EAX + 0x1b4],0x0     ; 004b8112
    JNZ 0x004b8132                      ; 004b8119
        ;   XREF to: 004b8132 (CONDITIONAL_JUMP)  ; LAB_004b8132
    MOV EAX,[0x0061f650]                ; 004b811b | DAT_0061f650
    CMP dword ptr [EAX + 0x1008],0x0    ; 004b8120 | DAT_01d2d908
    JNZ 0x004b8132                      ; 004b8127
        ;   XREF to: 004b8132 (CONDITIONAL_JUMP)  ; LAB_004b8132
    XOR EAX,EAX                         ; 004b8129
        ;   Label: LAB_004b8129
    MOV ESP,EBP                         ; 004b812b
    POP EBP                             ; 004b812d
    POP EDI                             ; 004b812e
    POP ESI                             ; 004b812f
    POP EBX                             ; 004b8130
    RET                                 ; 004b8131
    MOV EBX,dword ptr [0x00612560]      ; 004b8132 | DAT_00612560
        ;   Label: LAB_004b8132
    PUSH EBX                            ; 004b8138 | DAT_01bc120c
    CALL engine_drender.cpp_CDemonRenderer_isShadowPass_FUN_00483e60 ; 004b8139
        ;   XREF to: 00483e60 (UNCONDITIONAL_CALL)  ; int engine_drender.cpp_CDemonRenderer_isShadowPass_FUN_00483e60(CDemonRenderer * this_ptr)
    ADD ESP,0x4                         ; 004b813e
    TEST EAX,EAX                        ; 004b8141
    JNZ 0x004b8129                      ; 004b8143
        ;   XREF to: 004b8129 (CONDITIONAL_JUMP)  ; LAB_004b8129
    MOV ESI,dword ptr [EBP + 0x14]      ; 004b8145
    PUSH ESI                            ; 004b8148
    CALL core_actor.cpp_CDemonActor_setupRenderState_FUN_004087b0 ; 004b8149
        ;   XREF to: 004087b0 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_CDemonActor_setupRenderState_FUN_004087b0(CDemonActor * this_ptr)
    MOV EDI,dword ptr [ESI + 0x298]     ; 004b814e
    ADD ESP,0x4                         ; 004b8154
    TEST EDI,EDI                        ; 004b8157
    JZ 0x004b8193                       ; 004b8159
        ;   XREF to: 004b8193 (CONDITIONAL_JUMP)  ; LAB_004b8193
    PUSH 0x0                            ; 004b815b
    MOV EAX,dword ptr [ESI + 0x154]     ; 004b815d
    PUSH ESI                            ; 004b8163
    LEA ESI,[ESP + 0x58]                ; 004b8164
    LEA EDI,[ESP + 0x70]                ; 004b8168
    CALL dword ptr [EAX + 0x1c]         ; 004b816c
    MOV ECX,0x6                         ; 004b816f
    ADD ESP,0x4                         ; 004b8174
    LEA EAX,[ESP + 0x6c]                ; 004b8177
    LEA ESI,[ESP + 0x54]                ; 004b817b
    PUSH EAX                            ; 004b817f
    MOVSD.REP ES:EDI,ESI                ; 004b8180
    CALL core_box.cpp_FUN_004207b0      ; 004b8182
        ;   XREF to: 004207b0 (UNCONDITIONAL_CALL)  ; undefined core_box.cpp_FUN_004207b0()
    ADD ESP,0x8                         ; 004b8187
    MOV EDX,dword ptr [EBP + 0x14]      ; 004b818a
    MOV dword ptr [EDX + 0x290],EAX     ; 004b818d
    MOV EAX,dword ptr [EBP + 0x14]      ; 004b8193
        ;   Label: LAB_004b8193
    CMP dword ptr [EAX + 0x290],0x0     ; 004b8196
    JZ 0x004b81e7                       ; 004b819d
        ;   XREF to: 004b81e7 (CONDITIONAL_JUMP)  ; LAB_004b81e7
    FLD float ptr [EAX + 0x15c]         ; 004b819f
    FMUL ST0                            ; 004b81a5
    FLD float ptr [EAX + 0x158]         ; 004b81a7
    FMUL ST0                            ; 004b81ad
    FADDP                               ; 004b81af
    FLD float ptr [EAX + 0x160]         ; 004b81b1
    FMUL ST0                            ; 004b81b7
    FADDP                               ; 004b81b9
    FSQRT                               ; 004b81bb
    MOV EAX,dword ptr [EBP + 0x14]      ; 004b81bd
    FMUL float ptr [EAX + 0x1ac]        ; 004b81c0
    FLD1                                ; 004b81c6
    FCOMPP                              ; 004b81c8
    FNSTSW AX                           ; 004b81ca
    SAHF                                ; 004b81cc
    JNC 0x004b81e7                      ; 004b81cd
        ;   XREF to: 004b81e7 (CONDITIONAL_JUMP)  ; LAB_004b81e7
    MOV EAX,dword ptr [EBP + 0x14]      ; 004b81cf
    ADD EAX,0x168                       ; 004b81d2
    PUSH EAX                            ; 004b81d7
    MOV EBX,dword ptr [0x00622c18]      ; 004b81d8 | g_CDemonSetPtr
    PUSH EBX                            ; 004b81de | g_CDemonSetInstance
    CALL core_set.cpp_CDemonSet_addQueuedCoronaGlobe_FUN_00551a00 ; 004b81df
        ;   XREF to: 00551a00 (UNCONDITIONAL_CALL)  ; void core_set.cpp_CDemonSet_addQueuedCoronaGlobe_FUN_00551a00(CDemonSet * this_ptr, CDemonGlobe * globe)
    ADD ESP,0x8                         ; 004b81e4
    MOV EAX,dword ptr [EBP + 0x14]      ; 004b81e7
        ;   Label: LAB_004b81e7
    CMP dword ptr [EAX + 0x290],0x0     ; 004b81ea
    JZ 0x004b8678                       ; 004b81f1
        ;   XREF to: 004b8678 (CONDITIONAL_JUMP)  ; LAB_004b8678
    CMP dword ptr [EAX + 0x1a8],0x3     ; 004b81f7
    JZ 0x004b8678                       ; 004b81fe
        ;   XREF to: 004b8678 (CONDITIONAL_JUMP)  ; LAB_004b8678
    MOV EAX,[0x00612560]                ; 004b8204 | DAT_00612560
    PUSH EAX                            ; 004b8209 | DAT_01bc120c
    LEA ESI,[ESP + 0xe4]                ; 004b820a
    LEA EDI,[ESP + 0x114]               ; 004b8211
    CALL engine_matrix.c_FUN_00483b50   ; 004b8218
        ;   XREF to: 00483b50 (UNCONDITIONAL_CALL)  ; undefined engine_matrix.c_FUN_00483b50()
    LEA ESI,[ESP + 0xe4]                ; 004b821d
    LEA EAX,[ESP + 0x114]               ; 004b8224
    ADD ESP,0x4                         ; 004b822b
    XOR EDX,EDX                         ; 004b822e
    MOV EBX,dword ptr [0x00612560]      ; 004b8230 | DAT_00612560
    PUSH EDX                            ; 004b8236
    MOVSD ES:EDI,ESI                    ; 004b8237
    MOVSD ES:EDI,ESI                    ; 004b8238
    MOVSD ES:EDI,ESI                    ; 004b8239
    PUSH EAX                            ; 004b823a
    MOV ESI,0x1                         ; 004b823b
    MOV dword ptr [ESP + 0x118],EDX     ; 004b8240
    PUSH EBX                            ; 004b8247 | DAT_01bc120c
    MOV dword ptr [ESP + 0x120],EDX     ; 004b8248
    XOR EDI,EDI                         ; 004b824f
    CALL engine_drender.cpp_CDemonRenderer_applyDirectTransform_FUN_00483800 ; 004b8251
        ;   XREF to: 00483800 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_applyDirectTransform_FUN_00483800(CDemonRenderer * this_ptr, CVector3i * position, CVector3i * rotation)
    ADD ESP,0xc                         ; 004b8256
    MOV ECX,dword ptr [0x00612560]      ; 004b8259 | DAT_00612560
    MOV dword ptr [ESP + 0x150],ESI     ; 004b825f
    MOV dword ptr [ESP + 0xd4],EDI      ; 004b8266
    MOV dword ptr [ESP + 0xd8],EDI      ; 004b826d
    MOV dword ptr [ESP + 0xdc],EDI      ; 004b8274
    PUSH ECX                            ; 004b827b | DAT_01bc120c
    LEA ESI,[ESP + 0xa8]                ; 004b827c
    LEA EDI,[ESP + 0x114]               ; 004b8283
    CALL engine_matrix.c_FUN_00483b50   ; 004b828a
        ;   XREF to: 00483b50 (UNCONDITIONAL_CALL)  ; undefined engine_matrix.c_FUN_00483b50()
    LEA ESI,[ESP + 0xa8]                ; 004b828f
    ADD ESP,0x4                         ; 004b8296
    MOVSD ES:EDI,ESI                    ; 004b8299
    MOVSD ES:EDI,ESI                    ; 004b829a
    MOVSD ES:EDI,ESI                    ; 004b829b
    MOV EBX,dword ptr [ESP + 0x110]     ; 004b829c
    CMP EBX,0x2000                      ; 004b82a3
    JLE 0x004b8a5d                      ; 004b82a9
        ;   XREF to: 004b8a5d (CONDITIONAL_JUMP)  ; LAB_004b8a5d
    MOV dword ptr [ESP + 0x150],0x3     ; 004b82af
        ;   Label: LAB_004b82af
    MOV EAX,dword ptr [ESP + 0x150]     ; 004b82ba
        ;   Label: LAB_004b82ba
    XOR ESI,ESI                         ; 004b82c1
    TEST EAX,EAX                        ; 004b82c3
    JLE 0x004b8669                      ; 004b82c5
        ;   XREF to: 004b8669 (CONDITIONAL_JUMP)  ; LAB_004b8669
    MOV EDI,dword ptr [EBP + 0x14]      ; 004b82cb
    ADD EDI,0x20                        ; 004b82ce
    PUSH 0x0                            ; 004b82d1
        ;   Label: LAB_004b82d1
    LEA EAX,[ESP + 0xd8]                ; 004b82d3
    PUSH EAX                            ; 004b82da
    MOV EAX,[0x00612560]                ; 004b82db | DAT_00612560
    PUSH EAX                            ; 004b82e0 | DAT_01bc120c
    CALL engine_drender.cpp_CDemonRenderer_applyDirectTransform_FUN_00483800 ; 004b82e1
        ;   XREF to: 00483800 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_applyDirectTransform_FUN_00483800(CDemonRenderer * this_ptr, CVector3i * position, CVector3i * rotation)
    ADD ESP,0xc                         ; 004b82e6
    MOV EAX,dword ptr [EBP + 0x14]      ; 004b82e9
    FLD float ptr [EAX + 0x158]         ; 004b82ec
    FMUL float ptr [0x005df6c7]         ; 004b82f2 | DAT_005df6c7
    LEA EBX,[ESP + 0x8c]                ; 004b82f8
    XOR EDX,EDX                         ; 004b82ff
    LEA EAX,[ESP + 0x128]               ; 004b8301
    MOV dword ptr [ESP + 0x12c],EDX     ; 004b8308
    MOV dword ptr [ESP + 0x130],EDX     ; 004b830f
    MOV EDX,dword ptr [0x00612560]      ; 004b8316 | DAT_00612560
    FSTP float ptr [ESP + 0x128]        ; 004b831c
    FLD float ptr [EAX]                 ; 004b8323
    FMUL float ptr [0x00600380]         ; 004b8325 | DAT_00600380
    FISTP dword ptr [EBX]               ; 004b832b
    FLD float ptr [EAX + 0x4]           ; 004b832d
    FMUL float ptr [0x00600380]         ; 004b8330 | DAT_00600380
    FISTP dword ptr [EBX + 0x4]         ; 004b8336
    FLD float ptr [EAX + 0x8]           ; 004b8339
    FMUL float ptr [0x00600380]         ; 004b833c | DAT_00600380
    FISTP dword ptr [EBX + 0x8]         ; 004b8342
    LEA EAX,[ESP + 0x8c]                ; 004b8345
    PUSH EAX                            ; 004b834c
    MOV EAX,dword ptr [EDX]             ; 004b834d | DAT_01bc120c
    PUSH EAX                            ; 004b834f
    CALL engine_special.cpp_FUN_00580173 ; 004b8350
        ;   XREF to: 00580173 (UNCONDITIONAL_CALL)  ; void engine_special.cpp_FUN_00580173(SProjectedVertex * output, CVector3i * input)
    ADD ESP,0x8                         ; 004b8355
    MOV EAX,dword ptr [EBP + 0x14]      ; 004b8358
    MOV EAX,dword ptr [EAX + 0x15c]     ; 004b835b
    LEA EBX,[ESP + 0xb0]                ; 004b8361
    MOV dword ptr [ESP + 0x12c],EAX     ; 004b8368
    LEA EAX,[ESP + 0x128]               ; 004b836f
    MOV EDX,dword ptr [0x00612560]      ; 004b8376 | DAT_00612560
    FLD float ptr [EAX]                 ; 004b837c
    FMUL float ptr [0x00600380]         ; 004b837e | DAT_00600380
    FISTP dword ptr [EBX]               ; 004b8384
    FLD float ptr [EAX + 0x4]           ; 004b8386
    FMUL float ptr [0x00600380]         ; 004b8389 | DAT_00600380
    FISTP dword ptr [EBX + 0x4]         ; 004b838f
    FLD float ptr [EAX + 0x8]           ; 004b8392
    FMUL float ptr [0x00600380]         ; 004b8395 | DAT_00600380
    FISTP dword ptr [EBX + 0x8]         ; 004b839b
    LEA EAX,[ESP + 0xb0]                ; 004b839e
    PUSH EAX                            ; 004b83a5
    MOV EAX,dword ptr [EDX]             ; 004b83a6 | DAT_01bc120c
    ADD EAX,0x30                        ; 004b83a8
    PUSH EAX                            ; 004b83ab
    CALL engine_special.cpp_FUN_00580173 ; 004b83ac
        ;   XREF to: 00580173 (UNCONDITIONAL_CALL)  ; void engine_special.cpp_FUN_00580173(SProjectedVertex * output, CVector3i * input)
    ADD ESP,0x8                         ; 004b83b1
    MOV AH,byte ptr [ESP + 0x12b]       ; 004b83b4
    XOR AH,0x80                         ; 004b83bb
    LEA EBX,[ESP + 0xc8]                ; 004b83be
    MOV byte ptr [ESP + 0x12b],AH       ; 004b83c5
    LEA EAX,[ESP + 0x128]               ; 004b83cc
    MOV EDX,dword ptr [0x00612560]      ; 004b83d3 | DAT_00612560
    FLD float ptr [EAX]                 ; 004b83d9
    FMUL float ptr [0x00600380]         ; 004b83db | DAT_00600380
    FISTP dword ptr [EBX]               ; 004b83e1
    FLD float ptr [EAX + 0x4]           ; 004b83e3
    FMUL float ptr [0x00600380]         ; 004b83e6 | DAT_00600380
    FISTP dword ptr [EBX + 0x4]         ; 004b83ec
    FLD float ptr [EAX + 0x8]           ; 004b83ef
    FMUL float ptr [0x00600380]         ; 004b83f2 | DAT_00600380
    FISTP dword ptr [EBX + 0x8]         ; 004b83f8
    LEA EAX,[ESP + 0xc8]                ; 004b83fb
    PUSH EAX                            ; 004b8402
    MOV EAX,dword ptr [EDX]             ; 004b8403 | DAT_01bc120c
    ADD EAX,0x60                        ; 004b8405
    PUSH EAX                            ; 004b8408
    CALL engine_special.cpp_FUN_00580173 ; 004b8409
        ;   XREF to: 00580173 (UNCONDITIONAL_CALL)  ; void engine_special.cpp_FUN_00580173(SProjectedVertex * output, CVector3i * input)
    ADD ESP,0x8                         ; 004b840e
    XOR EBX,EBX                         ; 004b8411
    LEA EAX,[ESP + 0x128]               ; 004b8413
    MOV dword ptr [ESP + 0x12c],EBX     ; 004b841a
    LEA EBX,[ESP + 0xf8]                ; 004b8421
    MOV EDX,dword ptr [0x00612560]      ; 004b8428 | DAT_00612560
    FLD float ptr [EAX]                 ; 004b842e
    FMUL float ptr [0x00600380]         ; 004b8430 | DAT_00600380
    FISTP dword ptr [EBX]               ; 004b8436
    FLD float ptr [EAX + 0x4]           ; 004b8438
    FMUL float ptr [0x00600380]         ; 004b843b | DAT_00600380
    FISTP dword ptr [EBX + 0x4]         ; 004b8441
    FLD float ptr [EAX + 0x8]           ; 004b8444
    FMUL float ptr [0x00600380]         ; 004b8447 | DAT_00600380
    FISTP dword ptr [EBX + 0x8]         ; 004b844d
    LEA EAX,[ESP + 0xf8]                ; 004b8450
    PUSH EAX                            ; 004b8457
    MOV EAX,dword ptr [EDX]             ; 004b8458 | DAT_01bc120c
    ADD EAX,0x90                        ; 004b845a
    PUSH EAX                            ; 004b845f
    CALL engine_special.cpp_FUN_00580173 ; 004b8460
        ;   XREF to: 00580173 (UNCONDITIONAL_CALL)  ; void engine_special.cpp_FUN_00580173(SProjectedVertex * output, CVector3i * input)
    ADD ESP,0x8                         ; 004b8465
    PUSH 0x0                            ; 004b8468
    MOV EAX,[0x007c6120]                ; 004b846a | DAT_007c6120
    PUSH EDI                            ; 004b846f
    MOV EDX,dword ptr [EAX + 0x3c]      ; 004b8470
    PUSH EAX                            ; 004b8473
    CALL dword ptr [EDX + 0x4]          ; 004b8474
    MOV EDX,0xffff                      ; 004b8477
    ADD ESP,0xc                         ; 004b847c
    MOV EAX,[0x01c51cac]                ; 004b847f | DAT_01c51cac
    MOV ECX,dword ptr [ESP + 0x150]     ; 004b8484
    SUB EDX,EAX                         ; 004b848b
    CMP ECX,0x3                         ; 004b848d
    JNZ 0x004b849d                      ; 004b8490
        ;   XREF to: 004b849d (CONDITIONAL_JUMP)  ; LAB_004b849d
    MOV EAX,EDX                         ; 004b8492
    SAR EDX,0x1f                        ; 004b8494
    SUB EAX,EDX                         ; 004b8497
    SAR EAX,0x1                         ; 004b8499
    MOV EDX,EAX                         ; 004b849b
    MOV EAX,dword ptr [EBP + 0x14]      ; 004b849d
        ;   Label: LAB_004b849d
    MOV EBX,dword ptr [EAX + 0x1a8]     ; 004b84a0
    CMP EBX,0x4                         ; 004b84a6
    JNZ 0x004b84b4                      ; 004b84a9
        ;   XREF to: 004b84b4 (CONDITIONAL_JUMP)  ; LAB_004b84b4
    MOV EAX,EDX                         ; 004b84ab
    SAR EDX,0x1f                        ; 004b84ad
    IDIV EBX                            ; 004b84b0
    MOV EDX,EAX                         ; 004b84b2
    MOV EAX,dword ptr [EBP + 0x14]      ; 004b84b4
        ;   Label: LAB_004b84b4
    CMP dword ptr [EAX + 0x1a8],0x1     ; 004b84b7
    JNZ 0x004b84cb                      ; 004b84be
        ;   XREF to: 004b84cb (CONDITIONAL_JUMP)  ; LAB_004b84cb
    MOV EAX,EDX                         ; 004b84c0
    SAR EDX,0x1f                        ; 004b84c2
    SUB EAX,EDX                         ; 004b84c5
    SAR EAX,0x1                         ; 004b84c7
    MOV EDX,EAX                         ; 004b84c9
    MOV EBX,0xffff                      ; 004b84cb
        ;   Label: LAB_004b84cb
    MOV EAX,dword ptr [EBP + 0x14]      ; 004b84d0
    MOV dword ptr [0x00629070],EDX      ; 004b84d3 | DAT_00629070
    MOV dword ptr [0x006290a0],EDX      ; 004b84d9 | DAT_006290a0
    MOV dword ptr [0x006290d0],EDX      ; 004b84df | DAT_006290d0
    MOV dword ptr [0x00629034],EBX      ; 004b84e5 | DAT_00629034
    MOV dword ptr [0x00629038],EBX      ; 004b84eb | DAT_00629038
    MOV dword ptr [0x0062903c],EBX      ; 004b84f1 | DAT_0062903c
    MOV dword ptr [0x00629064],EBX      ; 004b84f7 | DAT_00629064
    MOV dword ptr [0x00629068],EBX      ; 004b84fd | DAT_00629068
    MOV dword ptr [0x0062906c],EBX      ; 004b8503 | DAT_0062906c
    MOV dword ptr [0x00629094],EBX      ; 004b8509 | DAT_00629094
    MOV dword ptr [0x00629098],EBX      ; 004b850f | DAT_00629098
    MOV dword ptr [0x0062909c],EBX      ; 004b8515 | DAT_0062909c
    MOV dword ptr [0x006290c4],EBX      ; 004b851b | DAT_006290c4
    MOV dword ptr [0x006290c8],EBX      ; 004b8521 | DAT_006290c8
    MOV dword ptr [0x006290cc],EBX      ; 004b8527 | DAT_006290cc
    MOV EBX,dword ptr [EAX + 0x294]     ; 004b852d
    MOV dword ptr [0x00629040],EDX      ; 004b8533 | DAT_00629040
    TEST EBX,EBX                        ; 004b8539
    JNZ 0x004b8a6e                      ; 004b853b
        ;   XREF to: 004b8a6e (CONDITIONAL_JUMP)  ; LAB_004b8a6e
    MOV EDX,0xf80000                    ; 004b8541
    MOV EAX,0x80000                     ; 004b8546
    MOV dword ptr [0x00629030],EDX      ; 004b854b | DAT_00629030
    MOV [0x0062905c],EAX                ; 004b8551 | DAT_0062905c
    MOV [0x00629060],EAX                ; 004b8556 | DAT_00629060
    MOV dword ptr [0x0062908c],EDX      ; 004b855b | DAT_0062908c
    MOV [0x00629090],EAX                ; 004b8561 | DAT_00629090
    MOV dword ptr [0x006290bc],EDX      ; 004b8566 | DAT_006290bc
    MOV dword ptr [0x006290c0],EDX      ; 004b856c | DAT_006290c0
    MOV [0x0062902c],EAX                ; 004b8572 | DAT_0062902c
        ;   Label: LAB_004b8572
    MOV EAX,dword ptr [EBP + 0x14]      ; 004b8577
    FLD float ptr [EAX + 0x164]         ; 004b857a
    CALL crt_math.c_round_FUN_005c03a0  ; 004b8580
        ;   XREF to: 005c03a0 (UNCONDITIONAL_CALL)  ; undefined crt_math.c_round_FUN_005c03a0()
    FISTP dword ptr [ESP + 0x158]       ; 004b8585
    MOV EAX,dword ptr [ESP + 0x158]     ; 004b858c
    MOV EDX,EAX                         ; 004b8593
    MOV ECX,0x8                         ; 004b8595
    SAR EDX,0x1f                        ; 004b859a
    IDIV ECX                            ; 004b859d
    MOV EAX,dword ptr [EBP + 0x14]      ; 004b859f
    IMUL EAX,dword ptr [EAX + 0x1a8],0xc0 ; 004b85a2
    MOV ECX,0x61cdc0                    ; 004b85ac | DAT_0061cdc0
    ADD ECX,EAX                         ; 004b85b1
    IMUL EAX,EDX,0x18                   ; 004b85b3
    ADD EAX,ECX                         ; 004b85b6
    PUSH EAX                            ; 004b85b8
    MOV EBX,dword ptr [0x00612560]      ; 004b85b9 | DAT_00612560
    PUSH EBX                            ; 004b85bf | DAT_01bc120c
    CALL engine_drender.cpp_CDemonRenderer_captureTexture_FUN_00484f00 ; 004b85c0
        ;   XREF to: 00484f00 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_captureTexture_FUN_00484f00(CDemonRenderer * this_ptr, SMRGLTextureBasic * texture)
    ADD ESP,0x8                         ; 004b85c5
    PUSH 0x1                            ; 004b85c8
    MOV EAX,[0x00612560]                ; 004b85ca | DAT_00612560
    PUSH EAX                            ; 004b85cf | DAT_01bc120c
    MOV EBX,0x1                         ; 004b85d0
    CALL engine_drender.cpp_CDemonRenderer_setBlendMode_FUN_00483dd0 ; 004b85d5
        ;   XREF to: 00483dd0 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_setBlendMode_FUN_00483dd0(CDemonRenderer * this_ptr, int blend_mode)
    MOV EDX,0x4                         ; 004b85da
    MOV EAX,0x2                         ; 004b85df
    ADD ESP,0x8                         ; 004b85e4
    XOR ECX,ECX                         ; 004b85e7
    MOV dword ptr [ESP + 0x2c],EDX      ; 004b85e9
    MOV dword ptr [ESP + 0x3c],ECX      ; 004b85ed
    MOV dword ptr [ESP + 0x38],ECX      ; 004b85f1
    MOV dword ptr [ESP + 0x34],ECX      ; 004b85f5
    MOV dword ptr [ESP + 0x30],ECX      ; 004b85f9
    MOV dword ptr [ESP + 0x48],EAX      ; 004b85fd
    LEA EAX,[ESP + 0x28]                ; 004b8601
    MOV dword ptr [ESP + 0x40],ECX      ; 004b8605
    PUSH EAX                            ; 004b8609
    MOV ECX,dword ptr [0x00612560]      ; 004b860a | DAT_00612560
    MOV EDX,0x3                         ; 004b8610
    PUSH ECX                            ; 004b8615 | DAT_01bc120c
    MOV dword ptr [ESP + 0x4c],EBX      ; 004b8616
    MOV dword ptr [ESP + 0x54],EDX      ; 004b861a
    CALL engine_drender.cpp_CDemonRenderer_renderVertexAlphaDirect_FUN_00482e30 ; 004b861e
        ;   XREF to: 00482e30 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_renderVertexAlphaDirect_FUN_00482e30(CDemonRenderer * this_ptr, SMRGLHeaderPrimitive * prim)
    ADD ESP,0x8                         ; 004b8623
    PUSH 0x0                            ; 004b8626
    MOV EBX,dword ptr [0x00612560]      ; 004b8628 | DAT_00612560
    PUSH EBX                            ; 004b862e | DAT_01bc120c
    CALL engine_drender.cpp_CDemonRenderer_setBlendMode_FUN_00483dd0 ; 004b862f
        ;   XREF to: 00483dd0 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_setBlendMode_FUN_00483dd0(CDemonRenderer * this_ptr, int blend_mode)
    ADD ESP,0x8                         ; 004b8634
    MOV EAX,[0x00612560]                ; 004b8637 | DAT_00612560
    PUSH EAX                            ; 004b863c | DAT_01bc120c
    CALL engine_matrix.c_pop_FUN_004839a0 ; 004b863d
        ;   XREF to: 004839a0 (UNCONDITIONAL_CALL)  ; void engine_matrix.c_pop_FUN_004839a0()
    ADD ESP,0x4                         ; 004b8642
    MOV EDX,dword ptr [ESP + 0xdc]      ; 004b8645
    INC ESI                             ; 004b864c
    ADD EDX,0x2aaa                      ; 004b864d
    MOV ECX,dword ptr [ESP + 0x150]     ; 004b8653
    MOV dword ptr [ESP + 0xdc],EDX      ; 004b865a
    CMP ESI,ECX                         ; 004b8661
    JL 0x004b82d1                       ; 004b8663
        ;   XREF to: 004b82d1 (CONDITIONAL_JUMP)  ; LAB_004b82d1
    MOV EBX,dword ptr [0x00612560]      ; 004b8669 | DAT_00612560
        ;   Label: LAB_004b8669
    PUSH EBX                            ; 004b866f | DAT_01bc120c
    CALL engine_matrix.c_pop_FUN_004839a0 ; 004b8670
        ;   XREF to: 004839a0 (UNCONDITIONAL_CALL)  ; void engine_matrix.c_pop_FUN_004839a0()
    ADD ESP,0x4                         ; 004b8675
    MOV ESI,dword ptr [EBP + 0x14]      ; 004b8678
        ;   Label: LAB_004b8678
    PUSH ESI                            ; 004b867b
    CALL core_actor.cpp_CDemonActor_restoreRenderState_FUN_004087f0 ; 004b867c
        ;   XREF to: 004087f0 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_CDemonActor_restoreRenderState_FUN_004087f0(CDemonActor * this_ptr)
    MOV EDI,dword ptr [ESI + 0x1a8]     ; 004b8681
    ADD ESP,0x4                         ; 004b8687
    CMP EDI,0x1                         ; 004b868a
    JNZ 0x004b8a4d                      ; 004b868d
        ;   XREF to: 004b8a4d (CONDITIONAL_JUMP)  ; LAB_004b8a4d
    FLD float ptr [ESI + 0x15c]         ; 004b8693
    FMUL double ptr [0x005df6cf]        ; 004b8699 | DAT_005df6cf
    MOV EDX,dword ptr [ESI + 0x290]     ; 004b869f
    FSTP float ptr [ESP + 0x14c]        ; 004b86a5
    TEST EDX,EDX                        ; 004b86ac
    JZ 0x004b8a4d                       ; 004b86ae
        ;   XREF to: 004b8a4d (CONDITIONAL_JUMP)  ; LAB_004b8a4d
    MOV ECX,dword ptr [0x00612560]      ; 004b86b4 | DAT_00612560
    PUSH ECX                            ; 004b86ba | DAT_01bc120c
    LEA ESI,[ESP + 0x108]               ; 004b86bb
    LEA EDI,[ESP + 0x144]               ; 004b86c2
    CALL engine_matrix.c_FUN_00483b70   ; 004b86c9
        ;   XREF to: 00483b70 (UNCONDITIONAL_CALL)  ; undefined engine_matrix.c_FUN_00483b70()
    ADD ESP,0x4                         ; 004b86ce
    LEA ESI,[ESP + 0x104]               ; 004b86d1
    MOV EAX,dword ptr [EBP + 0x14]      ; 004b86d8
    MOVSD ES:EDI,ESI                    ; 004b86db
    MOVSD ES:EDI,ESI                    ; 004b86dc
    MOVSD ES:EDI,ESI                    ; 004b86dd
    FLD float ptr [EAX + 0x15c]         ; 004b86de
    FMUL double ptr [0x005df6d7]        ; 004b86e4 | DAT_005df6d7
    FSTP float ptr [ESP + 0x158]        ; 004b86ea
    MOV EAX,dword ptr [ESP + 0x158]     ; 004b86f1
    MOV dword ptr [ESP + 0x9c],EAX      ; 004b86f8
    LEA EAX,[ESP + 0x98]                ; 004b86ff
    PUSH EAX                            ; 004b8706
    LEA EAX,[ESP + 0x144]               ; 004b8707
    PUSH EAX                            ; 004b870e
    MOV EDI,dword ptr [0x00612560]      ; 004b870f | DAT_00612560
    XOR EBX,EBX                         ; 004b8715
    PUSH EDI                            ; 004b8717 | DAT_01bc120c
    MOV dword ptr [ESP + 0xa4],EBX      ; 004b8718
    MOV dword ptr [ESP + 0xac],EBX      ; 004b871f
    CALL engine_drender.cpp_CDemonRenderer_applyScaledTransform_FUN_00483850 ; 004b8726
        ;   XREF to: 00483850 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_applyScaledTransform_FUN_00483850(CDemonRenderer * this_ptr, CVector3f * euler_angles, CVector3f * translation)
    ADD ESP,0xc                         ; 004b872b
    PUSH 0x3f828f5c                     ; 004b872e
    PUSH 0x3f7ae148                     ; 004b8733
    CALL core_actor.cpp_getRandomFloatFromRange_FUN_0040cc00 ; 004b8738
        ;   XREF to: 0040cc00 (UNCONDITIONAL_CALL)  ; float core_actor.cpp_getRandomFloatFromRange_FUN_0040cc00(float min_value, float max_value)
    MOV dword ptr [ESP + 0x160],EAX     ; 004b873d
    FLD float ptr [ESP + 0x160]         ; 004b8744
    ADD ESP,0x8                         ; 004b874b
    FMUL float ptr [ESP + 0x14c]        ; 004b874e
    MOV dword ptr [ESP + 0x88],EBX      ; 004b8755
    FSTP float ptr [ESP + 0x80]         ; 004b875c
    MOV EAX,dword ptr [ESP + 0x80]      ; 004b8763
    LEA EBX,[ESP + 0x11c]               ; 004b876a
    MOV dword ptr [ESP + 0x84],EAX      ; 004b8771
    LEA EAX,[ESP + 0x80]                ; 004b8778
    MOV EDX,dword ptr [0x00612560]      ; 004b877f | DAT_00612560
    FLD float ptr [EAX]                 ; 004b8785
    FMUL float ptr [0x00600380]         ; 004b8787 | DAT_00600380
    FISTP dword ptr [EBX]               ; 004b878d
    FLD float ptr [EAX + 0x4]           ; 004b878f
    FMUL float ptr [0x00600380]         ; 004b8792 | DAT_00600380
    FISTP dword ptr [EBX + 0x4]         ; 004b8798
    FLD float ptr [EAX + 0x8]           ; 004b879b
    FMUL float ptr [0x00600380]         ; 004b879e | DAT_00600380
    FISTP dword ptr [EBX + 0x8]         ; 004b87a4
    LEA EAX,[ESP + 0x11c]               ; 004b87a7
    PUSH EAX                            ; 004b87ae
    MOV EAX,dword ptr [EDX]             ; 004b87af | DAT_01bc120c
    PUSH EAX                            ; 004b87b1
    CALL engine_special.cpp_FUN_00580173 ; 004b87b2
        ;   XREF to: 00580173 (UNCONDITIONAL_CALL)  ; void engine_special.cpp_FUN_00580173(SProjectedVertex * output, CVector3i * input)
    ADD ESP,0x8                         ; 004b87b7
    MOV DL,byte ptr [ESP + 0x83]        ; 004b87ba
    LEA EBX,[ESP + 0x134]               ; 004b87c1
    XOR DL,0x80                         ; 004b87c8
    LEA EAX,[ESP + 0x80]                ; 004b87cb
    MOV byte ptr [ESP + 0x83],DL        ; 004b87d2
    MOV EDX,dword ptr [0x00612560]      ; 004b87d9 | DAT_00612560
    FLD float ptr [EAX]                 ; 004b87df
    FMUL float ptr [0x00600380]         ; 004b87e1 | DAT_00600380
    FISTP dword ptr [EBX]               ; 004b87e7
    FLD float ptr [EAX + 0x4]           ; 004b87e9
    FMUL float ptr [0x00600380]         ; 004b87ec | DAT_00600380
    FISTP dword ptr [EBX + 0x4]         ; 004b87f2
    FLD float ptr [EAX + 0x8]           ; 004b87f5
    FMUL float ptr [0x00600380]         ; 004b87f8 | DAT_00600380
    FISTP dword ptr [EBX + 0x8]         ; 004b87fe
    LEA EAX,[ESP + 0x134]               ; 004b8801
    PUSH EAX                            ; 004b8808
    MOV EAX,dword ptr [EDX]             ; 004b8809 | DAT_01bc120c
    ADD EAX,0x30                        ; 004b880b
    PUSH EAX                            ; 004b880e
    CALL engine_special.cpp_FUN_00580173 ; 004b880f
        ;   XREF to: 00580173 (UNCONDITIONAL_CALL)  ; void engine_special.cpp_FUN_00580173(SProjectedVertex * output, CVector3i * input)
    ADD ESP,0x8                         ; 004b8814
    MOV DH,byte ptr [ESP + 0x87]        ; 004b8817
    LEA EBX,[ESP + 0xbc]                ; 004b881e
    XOR DH,0x80                         ; 004b8825
    LEA EAX,[ESP + 0x80]                ; 004b8828
    MOV byte ptr [ESP + 0x87],DH        ; 004b882f
    MOV EDX,dword ptr [0x00612560]      ; 004b8836 | DAT_00612560
    FLD float ptr [EAX]                 ; 004b883c
    FMUL float ptr [0x00600380]         ; 004b883e | DAT_00600380
    FISTP dword ptr [EBX]               ; 004b8844
    FLD float ptr [EAX + 0x4]           ; 004b8846
    FMUL float ptr [0x00600380]         ; 004b8849 | DAT_00600380
    FISTP dword ptr [EBX + 0x4]         ; 004b884f
    FLD float ptr [EAX + 0x8]           ; 004b8852
    FMUL float ptr [0x00600380]         ; 004b8855 | DAT_00600380
    FISTP dword ptr [EBX + 0x8]         ; 004b885b
    LEA EAX,[ESP + 0xbc]                ; 004b885e
    PUSH EAX                            ; 004b8865
    MOV EAX,dword ptr [EDX]             ; 004b8866 | DAT_01bc120c
    ADD EAX,0x60                        ; 004b8868
    PUSH EAX                            ; 004b886b
    CALL engine_special.cpp_FUN_00580173 ; 004b886c
        ;   XREF to: 00580173 (UNCONDITIONAL_CALL)  ; void engine_special.cpp_FUN_00580173(SProjectedVertex * output, CVector3i * input)
    ADD ESP,0x8                         ; 004b8871
    MOV BL,byte ptr [ESP + 0x83]        ; 004b8874
    XOR BL,0x80                         ; 004b887b
    LEA EAX,[ESP + 0x80]                ; 004b887e
    MOV byte ptr [ESP + 0x83],BL        ; 004b8885
    LEA EBX,[ESP + 0xec]                ; 004b888c
    MOV EDX,dword ptr [0x00612560]      ; 004b8893 | DAT_00612560
    FLD float ptr [EAX]                 ; 004b8899
    FMUL float ptr [0x00600380]         ; 004b889b | DAT_00600380
    FISTP dword ptr [EBX]               ; 004b88a1
    FLD float ptr [EAX + 0x4]           ; 004b88a3
    FMUL float ptr [0x00600380]         ; 004b88a6 | DAT_00600380
    FISTP dword ptr [EBX + 0x4]         ; 004b88ac
    FLD float ptr [EAX + 0x8]           ; 004b88af
    FMUL float ptr [0x00600380]         ; 004b88b2 | DAT_00600380
    FISTP dword ptr [EBX + 0x8]         ; 004b88b8
    LEA EAX,[ESP + 0xec]                ; 004b88bb
    PUSH EAX                            ; 004b88c2
    MOV EAX,dword ptr [EDX]             ; 004b88c3 | DAT_01bc120c
    ADD EAX,0x90                        ; 004b88c5
    PUSH EAX                            ; 004b88ca
    CALL engine_special.cpp_FUN_00580173 ; 004b88cb
        ;   XREF to: 00580173 (UNCONDITIONAL_CALL)  ; void engine_special.cpp_FUN_00580173(SProjectedVertex * output, CVector3i * input)
    ADD ESP,0x8                         ; 004b88d0
    XOR EDX,EDX                         ; 004b88d3
    MOV dword ptr [ESP + 0x154],EDX     ; 004b88d5
    MOV ECX,dword ptr [0x00612560]      ; 004b88dc | DAT_00612560
        ;   Label: LAB_004b88dc
    MOV EBX,dword ptr [ESP + 0x154]     ; 004b88e2
    MOV ECX,dword ptr [ECX]             ; 004b88e9 | DAT_01bc120c
    ADD ECX,EBX                         ; 004b88eb
    MOV ESI,dword ptr [ECX + 0x8]       ; 004b88ed
    CMP ESI,0x200                       ; 004b88f0
    JLE 0x004b8926                      ; 004b88f6
        ;   XREF to: 004b8926 (CONDITIONAL_JUMP)  ; LAB_004b8926
    MOV EDI,ESI                         ; 004b88f8
    MOV EAX,dword ptr [ECX]             ; 004b88fa
    SUB ESI,0x100                       ; 004b88fc
    MOV EBX,EDI                         ; 004b8902
    MOV EDX,ESI                         ; 004b8904
    IMUL EDX                            ; 004b8906
    IDIV EBX                            ; 004b8908
    MOV EBX,EDI                         ; 004b890a
    MOV dword ptr [ECX],EAX             ; 004b890c
    MOV EDX,ESI                         ; 004b890e
    MOV EAX,dword ptr [ECX + 0x4]       ; 004b8910
    IMUL EDX                            ; 004b8913
    IDIV EBX                            ; 004b8915
    MOV dword ptr [ECX + 0x4],EAX       ; 004b8917
    PUSH ECX                            ; 004b891a
    MOV dword ptr [ECX + 0x8],ESI       ; 004b891b
    CALL engine_matrix.c_projectTransformedPoint_FUN_00507b50 ; 004b891e
        ;   XREF to: 00507b50 (UNCONDITIONAL_CALL)  ; undefined engine_matrix.c_projectTransformedPoint_FUN_00507b50()
    ADD ESP,0x4                         ; 004b8923
    MOV EDI,dword ptr [ESP + 0x154]     ; 004b8926
        ;   Label: LAB_004b8926
    ADD EDI,0x30                        ; 004b892d
    MOV dword ptr [ESP + 0x154],EDI     ; 004b8930
    CMP EDI,0xc0                        ; 004b8937
    JNZ 0x004b88dc                      ; 004b893d
        ;   XREF to: 004b88dc (CONDITIONAL_JUMP)  ; LAB_004b88dc
    MOV EAX,[0x00612560]                ; 004b893f | DAT_00612560
    MOV EDX,dword ptr [EAX]             ; 004b8944 | DAT_01bc120c
    MOV dword ptr [EDX + 0x2c],0x4000   ; 004b8946
    MOV EDX,dword ptr [EAX]             ; 004b894d | DAT_01bc120c
    MOV dword ptr [EDX + 0x5c],0x4000   ; 004b894f
    MOV EDX,dword ptr [EAX]             ; 004b8956 | DAT_01bc120c
    MOV dword ptr [EDX + 0x8c],0x4000   ; 004b8958
    MOV EDX,dword ptr [EAX]             ; 004b8962 | DAT_01bc120c
    MOV dword ptr [EDX + 0xbc],0x4000   ; 004b8964
    MOV EDX,dword ptr [EAX]             ; 004b896e | DAT_01bc120c
    MOV dword ptr [EDX + 0x18],0x80000  ; 004b8970
    MOV EDX,dword ptr [EAX]             ; 004b8977 | DAT_01bc120c
    MOV dword ptr [EDX + 0x1c],0xf80000 ; 004b8979
    MOV EDX,dword ptr [EAX]             ; 004b8980 | DAT_01bc120c
    MOV dword ptr [EDX + 0x48],0xf80000 ; 004b8982
    MOV EDX,dword ptr [EAX]             ; 004b8989 | DAT_01bc120c
    MOV dword ptr [EDX + 0x4c],0xf80000 ; 004b898b
    MOV EDX,dword ptr [EAX]             ; 004b8992 | DAT_01bc120c
    MOV dword ptr [EDX + 0x78],0xf80000 ; 004b8994
    MOV EDX,dword ptr [EAX]             ; 004b899b | DAT_01bc120c
    MOV dword ptr [EDX + 0x7c],0x80000  ; 004b899d
    MOV EDX,dword ptr [EAX]             ; 004b89a4 | DAT_01bc120c
    MOV EBX,0x2                         ; 004b89a6
    MOV ESI,0x3                         ; 004b89ab
    MOV dword ptr [EDX + 0xa8],0x80000  ; 004b89b0
    PUSH 0x61cda8                       ; 004b89ba | DAT_0061cda8
    MOV EDX,dword ptr [EAX]             ; 004b89bf | DAT_01bc120c
    XOR ECX,ECX                         ; 004b89c1
    PUSH EAX                            ; 004b89c3 | DAT_01bc120c
    MOV dword ptr [EDX + 0xac],0x80000  ; 004b89c4
    MOV EDX,0x4                         ; 004b89ce
    MOV dword ptr [ESP + 0x1c],ECX      ; 004b89d3
    MOV dword ptr [ESP + 0x18],ECX      ; 004b89d7
    MOV dword ptr [ESP + 0x14],ECX      ; 004b89db
    MOV dword ptr [ESP + 0x10],ECX      ; 004b89df
    MOV dword ptr [ESP + 0x20],ECX      ; 004b89e3
    MOV dword ptr [ESP + 0x28],EBX      ; 004b89e7
    MOV dword ptr [ESP + 0x2c],ESI      ; 004b89eb
    MOV ECX,0x1                         ; 004b89ef
    MOV dword ptr [ESP + 0xc],EDX       ; 004b89f4
    MOV dword ptr [ESP + 0x24],ECX      ; 004b89f8
    CALL engine_drender.cpp_CDemonRenderer_captureTexture_FUN_00484f00 ; 004b89fc
        ;   XREF to: 00484f00 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_captureTexture_FUN_00484f00(CDemonRenderer * this_ptr, SMRGLTextureBasic * texture)
    ADD ESP,0x8                         ; 004b8a01
    PUSH 0x1                            ; 004b8a04
    MOV EDI,dword ptr [0x00612560]      ; 004b8a06 | DAT_00612560
    PUSH EDI                            ; 004b8a0c | DAT_01bc120c
    CALL engine_drender.cpp_CDemonRenderer_setBlendMode_FUN_00483dd0 ; 004b8a0d
        ;   XREF to: 00483dd0 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_setBlendMode_FUN_00483dd0(CDemonRenderer * this_ptr, int blend_mode)
    ADD ESP,0x8                         ; 004b8a12
    PUSH 0x163                          ; 004b8a15
    LEA EAX,[ESP + 0x4]                 ; 004b8a1a
    PUSH EAX                            ; 004b8a1e
    MOV EAX,[0x00612560]                ; 004b8a1f | DAT_00612560
    PUSH EAX                            ; 004b8a24 | DAT_01bc120c
    CALL engine_drender.cpp_CDemonRenderer_renderTexturedDirect_FUN_00482170 ; 004b8a25
        ;   XREF to: 00482170 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_renderTexturedDirect_FUN_00482170(CDemonRenderer * this_ptr, SMRGLHeaderPrimitive * prim, int render_flags)
    ADD ESP,0xc                         ; 004b8a2a
    PUSH 0x0                            ; 004b8a2d
    MOV EDX,dword ptr [0x00612560]      ; 004b8a2f | DAT_00612560
    PUSH EDX                            ; 004b8a35 | DAT_01bc120c
    CALL engine_drender.cpp_CDemonRenderer_setBlendMode_FUN_00483dd0 ; 004b8a36
        ;   XREF to: 00483dd0 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_setBlendMode_FUN_00483dd0(CDemonRenderer * this_ptr, int blend_mode)
    ADD ESP,0x8                         ; 004b8a3b
    MOV ECX,dword ptr [0x00612560]      ; 004b8a3e | DAT_00612560
    PUSH ECX                            ; 004b8a44 | DAT_01bc120c
    CALL engine_matrix.c_pop_FUN_004839a0 ; 004b8a45
        ;   XREF to: 004839a0 (UNCONDITIONAL_CALL)  ; void engine_matrix.c_pop_FUN_004839a0()
    ADD ESP,0x4                         ; 004b8a4a
    MOV EAX,dword ptr [EBP + 0x14]      ; 004b8a4d
        ;   Label: LAB_004b8a4d
    MOV EAX,dword ptr [EAX + 0x290]     ; 004b8a50
    MOV ESP,EBP                         ; 004b8a56
    POP EBP                             ; 004b8a58
    POP EDI                             ; 004b8a59
    POP ESI                             ; 004b8a5a
    POP EBX                             ; 004b8a5b
    RET                                 ; 004b8a5c
    CMP EBX,0xffffe000                  ; 004b8a5d
        ;   Label: LAB_004b8a5d
    JL 0x004b82af                       ; 004b8a63
        ;   XREF to: 004b82af (CONDITIONAL_JUMP)  ; LAB_004b82af
    JMP 0x004b82ba                      ; 004b8a69
        ;   XREF to: 004b82ba (UNCONDITIONAL_JUMP)  ; LAB_004b82ba
    MOV EAX,0xf80000                    ; 004b8a6e
        ;   Label: LAB_004b8a6e
    MOV EBX,0x80000                     ; 004b8a73
    MOV [0x00629030],EAX                ; 004b8a78 | DAT_00629030
    MOV [0x0062905c],EAX                ; 004b8a7d | DAT_0062905c
    MOV dword ptr [0x00629060],EBX      ; 004b8a82 | DAT_00629060
    MOV dword ptr [0x0062908c],EBX      ; 004b8a88 | DAT_0062908c
    MOV dword ptr [0x00629090],EBX      ; 004b8a8e | DAT_00629090
    MOV dword ptr [0x006290bc],EBX      ; 004b8a94 | DAT_006290bc
    MOV [0x006290c0],EAX                ; 004b8a9a | DAT_006290c0
    JMP 0x004b8572                      ; 004b8a9f
        ;   XREF to: 004b8572 (UNCONDITIONAL_JUMP)  ; LAB_004b8572

