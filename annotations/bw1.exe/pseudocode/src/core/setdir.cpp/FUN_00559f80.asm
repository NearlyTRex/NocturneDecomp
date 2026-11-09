; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 core_setdir_cpp_FUN_00559f80(CDemonSet *param_1,CDemonActor *param_2,int param_3)
;
; Local Variables:
; undefined        Stack[-0x200]:1  local_200
; undefined4       Stack[-0xcc]:4  local_cc
; undefined4       Stack[-0xc0]:4  local_c0
; undefined4       Stack[-0x6c]:4  local_6c
;
; XREF[4]:
;   core_game.cpp_CGame_processHotkeys_FUN_004d1a80 at 004d2030
;   core_game.cpp_FUN_004cf5e0 at 004cf921
;   core_game.cpp_FUN_004d8060 at 004d8562
;   core_script.cpp_CScript_step_FUN_00544460 at 00547e54
;
; Referenced Globals:
;   undefined4 DAT_005f0fdd
;   undefined4 DAT_005f0fe5
;   undefined4 DAT_005f0fed
;   undefined4 DAT_005f0ff5
;   undefined4 DAT_005f0ffd
;   undefined4 DAT_005f1005
;   undefined4 DAT_005f100d
;   undefined4 DAT_00605120
;   undefined4 DAT_00605138
;   undefined4 DAT_0060513c
;   undefined4 DAT_00612560
;   CGame* g_CGamePtr = 01ccf390
;   CDemonSet* g_CDemonSetPtr = 01e82168
;   undefined4 DAT_00622fdc
;   undefined4 DAT_00622fe4
;   ... and 27 more
;
; Called Functions:
;   core_actor.cpp_CDemonActor_restoreRenderState_FUN_004087f0
;   core_actor.cpp_CDemonActor_setupRenderState_FUN_004087b0
;   core_actor.cpp_FUN_00408b40
;   core_box.cpp_CBoundingBox3D_getMaximumBound_FUN_00421620
;   core_box.cpp_FUN_00420570
;   core_set.cpp_CDemonSet_setCameraView_FUN_0054f0d0
;   core_setdir.cpp_FUN_0055c060
;   core_setutil.cpp_FUN_0055c6f0
;   crt_math.c_round_FUN_005c03a0
;   engine_drender.cpp_CDemonRenderer_applyScaledTransform_FUN_00483850
;   engine_drender.cpp_CDemonRenderer_countVisiblePixelsPoly_FUN_00481db0
;   engine_drender.cpp_CDemonRenderer_enableFaceCapture_FUN_00483e20
;   engine_drender.cpp_CDemonRenderer_isShadowPass_FUN_00483e60
;   engine_drender.cpp_CDemonRenderer_processCameraRelativeVertex_FUN_004837b0
;   engine_drender.cpp_CDemonRenderer_renderSolidColorDepthDirect_FUN_00481b80
;   ... and 10 more
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00559f80
        ;   Label: core_setdir.cpp_FUN_00559f80
    PUSH ESI                            ; 00559f81
    PUSH EDI                            ; 00559f82
    PUSH EBP                            ; 00559f83
    MOV EBP,ESP                         ; 00559f84
    SUB ESP,0x398                       ; 00559f86
    AND ESP,0xfffffff8                  ; 00559f8c
    XOR EDX,EDX                         ; 00559f8f
    MOV ECX,dword ptr [EBP + 0x18]      ; 00559f91
    MOV dword ptr [ESP + 0x2dc],EDX     ; 00559f94
    TEST ECX,ECX                        ; 00559f9b
    JNZ 0x00559fc3                      ; 00559f9d
        ;   XREF to: 00559fc3 (CONDITIONAL_JUMP)  ; LAB_00559fc3
    MOV EAX,dword ptr [EBP + 0x14]      ; 00559f9f
    CMP dword ptr [EAX + 0x15aeb8],0x0  ; 00559fa2
    JL 0x00559fb7                       ; 00559fa9
        ;   XREF to: 00559fb7 (CONDITIONAL_JUMP)  ; LAB_00559fb7
    MOV EAX,0x1                         ; 00559fab
        ;   Label: LAB_00559fab
    MOV ESP,EBP                         ; 00559fb0
    POP EBP                             ; 00559fb2
    POP EDI                             ; 00559fb3
    POP ESI                             ; 00559fb4
    POP EBX                             ; 00559fb5
    RET                                 ; 00559fb6
    PUSH EDX                            ; 00559fb7
        ;   Label: LAB_00559fb7
    PUSH EAX                            ; 00559fb8
    CALL core_set.cpp_CDemonSet_setCameraView_FUN_0054f0d0 ; 00559fb9
        ;   XREF to: 0054f0d0 (UNCONDITIONAL_CALL)  ; void core_set.cpp_CDemonSet_setCameraView_FUN_0054f0d0(CDemonSet * this_ptr, int index)
    ADD ESP,0x8                         ; 00559fbe
    JMP 0x00559fab                      ; 00559fc1
        ;   XREF to: 00559fab (UNCONDITIONAL_JUMP)  ; LAB_00559fab
    MOV EAX,dword ptr [EBP + 0x14]      ; 00559fc3
        ;   Label: LAB_00559fc3
    CMP dword ptr [EAX + 0x15aeb8],0x0  ; 00559fc6
    JL 0x0055a5f9                       ; 00559fcd
        ;   XREF to: 0055a5f9 (CONDITIONAL_JUMP)  ; LAB_0055a5f9
    CMP dword ptr [EBP + 0x1c],0x2      ; 00559fd3
    JGE 0x00559fef                      ; 00559fd7
        ;   XREF to: 00559fef (CONDITIONAL_JUMP)  ; LAB_00559fef
    MOV EAX,dword ptr [EBP + 0x14]      ; 00559fd9
        ;   Label: LAB_00559fd9
    FLD float ptr [EAX + 0x15aecc]      ; 00559fdc
    FLDZ                                ; 00559fe2
    FCOMPP                              ; 00559fe4
    FNSTSW AX                           ; 00559fe6
    SAHF                                ; 00559fe8
    JC 0x0055a616                       ; 00559fe9
        ;   XREF to: 0055a616 (CONDITIONAL_JUMP)  ; LAB_0055a616
    MOV EAX,dword ptr [EBP + 0x14]      ; 00559fef
        ;   Label: LAB_00559fef
    MOV ECX,dword ptr [0x00612560]      ; 00559ff2 | DAT_00612560
    XOR EDX,EDX                         ; 00559ff8
    MOV dword ptr [EAX + 0x15aecc],0x0  ; 00559ffa
    MOV EAX,[0x01c50948]                ; 0055a004 | DAT_01c50948
    PUSH ECX                            ; 0055a009 | DAT_01bc120c
    MOV dword ptr [ESP + 0x2ec],EAX     ; 0055a00a
    MOV dword ptr [0x01c50948],EDX      ; 0055a011 | DAT_01c50948
    CALL engine_drender.cpp_CDemonRenderer_isShadowPass_FUN_00483e60 ; 0055a017
        ;   XREF to: 00483e60 (UNCONDITIONAL_CALL)  ; int engine_drender.cpp_CDemonRenderer_isShadowPass_FUN_00483e60(CDemonRenderer * this_ptr)
    ADD ESP,0x4                         ; 0055a01c
    PUSH 0x0                            ; 0055a01f
    MOV EBX,dword ptr [0x00612560]      ; 0055a021 | DAT_00612560
    PUSH EBX                            ; 0055a027 | DAT_01bc120c
    MOV dword ptr [ESP + 0x344],EAX     ; 0055a028
    CALL engine_drender.cpp_CDemonRenderer_setShadowPass_FUN_00483e40 ; 0055a02f
        ;   XREF to: 00483e40 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_setShadowPass_FUN_00483e40(CDemonRenderer * this_ptr, int value)
    ADD ESP,0x8                         ; 0055a034
    PUSH 0x30                           ; 0055a037
    PUSH 0x40                           ; 0055a039
    PUSH 0x0                            ; 0055a03b
    PUSH 0x0                            ; 0055a03d
    MOV ESI,dword ptr [0x00612560]      ; 0055a03f | DAT_00612560
    PUSH ESI                            ; 0055a045 | DAT_01bc120c
    CALL engine_matrix.c_FUN_00483c10   ; 0055a046
        ;   XREF to: 00483c10 (UNCONDITIONAL_CALL)  ; undefined engine_matrix.c_FUN_00483c10()
    ADD ESP,0x14                        ; 0055a04b
    MOV EDI,dword ptr [EBP + 0x18]      ; 0055a04e
    MOV EAX,dword ptr [EBP + 0x18]      ; 0055a051
    PUSH EDI                            ; 0055a054
    MOV EAX,dword ptr [EAX + 0x154]     ; 0055a055
    LEA ESI,[ESP + 0x1ac]               ; 0055a05b
    CALL dword ptr [EAX + 0x1c]         ; 0055a062
    MOV ECX,0x6                         ; 0055a065
    LEA EDI,[ESP + 0x194]               ; 0055a06a
    ADD ESP,0x4                         ; 0055a071
    XOR EAX,EAX                         ; 0055a074
    LEA ESI,[ESP + 0x1a8]               ; 0055a076
    MOV dword ptr [ESP + 0x390],EAX     ; 0055a07d
    LEA EAX,[ESP + 0xcc]                ; 0055a084
    MOVSD.REP ES:EDI,ESI                ; 0055a08b
    MOV dword ptr [ESP + 0x374],EAX     ; 0055a08d
    MOV EDX,dword ptr [ESP + 0x390]     ; 0055a094
        ;   Label: LAB_0055a094
    PUSH EDX                            ; 0055a09b
    LEA EAX,[ESP + 0x194]               ; 0055a09c
    PUSH EAX                            ; 0055a0a3
    LEA ESI,[ESP + 0x2b8]               ; 0055a0a4
    LEA EDI,[ESP + 0x2d0]               ; 0055a0ab
    CALL core_box.cpp_FUN_00420570      ; 0055a0b2
        ;   XREF to: 00420570 (UNCONDITIONAL_CALL)  ; undefined core_box.cpp_FUN_00420570()
    LEA ESI,[ESP + 0x2b8]               ; 0055a0b7
    ADD ESP,0x8                         ; 0055a0be
    LEA EAX,[ESP + 0x2c8]               ; 0055a0c1
    MOV EBX,dword ptr [ESP + 0x374]     ; 0055a0c8
    MOVSD ES:EDI,ESI                    ; 0055a0cf
    MOVSD ES:EDI,ESI                    ; 0055a0d0
    MOVSD ES:EDI,ESI                    ; 0055a0d1
    FLD float ptr [EAX]                 ; 0055a0d2
    FMUL float ptr [0x00605120]         ; 0055a0d4 | DAT_00605120
    FISTP dword ptr [EBX]               ; 0055a0da
    FLD float ptr [EAX + 0x4]           ; 0055a0dc
    FMUL float ptr [0x00605120]         ; 0055a0df | DAT_00605120
    FISTP dword ptr [EBX + 0x4]         ; 0055a0e5
    FLD float ptr [EAX + 0x8]           ; 0055a0e8
    FMUL float ptr [0x00605120]         ; 0055a0eb | DAT_00605120
    FISTP dword ptr [EBX + 0x8]         ; 0055a0f1
    LEA ECX,[EBX + 0xc]                 ; 0055a0f4
    MOV EBX,dword ptr [ESP + 0x390]     ; 0055a0f7
    INC EBX                             ; 0055a0fe
    MOV dword ptr [ESP + 0x374],ECX     ; 0055a0ff
    MOV dword ptr [ESP + 0x390],EBX     ; 0055a106
    CMP EBX,0x8                         ; 0055a10d
    JL 0x0055a094                       ; 0055a110
        ;   XREF to: 0055a094 (CONDITIONAL_JUMP)  ; LAB_0055a094
    FLD float ptr [ESP + 0x190]         ; 0055a112
    FLD float ptr [ESP + 0x194]         ; 0055a119
    FLD float ptr [ESP + 0x198]         ; 0055a120
    LEA EDI,[ESP + 0x244]               ; 0055a127
    LEA ESI,[ESP + 0x268]               ; 0055a12e
    FXCH ST2                            ; 0055a135
    FADD float ptr [ESP + 0x19c]        ; 0055a137
    FXCH                                ; 0055a13e
    FADD float ptr [ESP + 0x1a0]        ; 0055a140
    FXCH ST2                            ; 0055a147
    FADD float ptr [ESP + 0x1a4]        ; 0055a149
    FXCH                                ; 0055a150
    FSTP float ptr [ESP + 0x268]        ; 0055a152
    FXCH                                ; 0055a159
    FSTP float ptr [ESP + 0x26c]        ; 0055a15b
    FSTP float ptr [ESP + 0x270]        ; 0055a162
    MOVSD ES:EDI,ESI                    ; 0055a169
    MOVSD ES:EDI,ESI                    ; 0055a16a
    MOVSD ES:EDI,ESI                    ; 0055a16b
    FLD float ptr [0x005f0fdd]          ; 0055a16c | DAT_005f0fdd
    FLD float ptr [ESP + 0x244]         ; 0055a172
    FMUL ST1                            ; 0055a179
    FLD float ptr [ESP + 0x248]         ; 0055a17b
    FMUL ST2                            ; 0055a182
    FLD float ptr [ESP + 0x24c]         ; 0055a184
    FMULP ST3                           ; 0055a18b
    LEA EBX,[ESP + 0x12c]               ; 0055a18d
    LEA EAX,[ESP + 0x2a4]               ; 0055a194
    LEA EDI,[ESP + 0x2a4]               ; 0055a19b
    LEA ESI,[ESP + 0x238]               ; 0055a1a2
    FXCH                                ; 0055a1a9
    FSTP float ptr [ESP + 0x238]        ; 0055a1ab
    FSTP float ptr [ESP + 0x23c]        ; 0055a1b2
    FSTP float ptr [ESP + 0x240]        ; 0055a1b9
    MOVSD ES:EDI,ESI                    ; 0055a1c0
    MOVSD ES:EDI,ESI                    ; 0055a1c1
    MOVSD ES:EDI,ESI                    ; 0055a1c2
    FLD float ptr [EAX]                 ; 0055a1c3
    FMUL float ptr [0x00605120]         ; 0055a1c5 | DAT_00605120
    FISTP dword ptr [EBX]               ; 0055a1cb
    FLD float ptr [EAX + 0x4]           ; 0055a1cd
    FMUL float ptr [0x00605120]         ; 0055a1d0 | DAT_00605120
    FISTP dword ptr [EBX + 0x4]         ; 0055a1d6
    FLD float ptr [EAX + 0x8]           ; 0055a1d9
    FMUL float ptr [0x00605120]         ; 0055a1dc | DAT_00605120
    FISTP dword ptr [EBX + 0x8]         ; 0055a1e2
    MOV EAX,0x622fdc                    ; 0055a1e5 | DAT_00622fdc
    LEA ESI,[EAX + 0x1b0]               ; 0055a1ea | DAT_0062318c
    IMUL ECX,dword ptr [EAX + 0x18],0xc ; 0055a1f0 | DAT_00622ff4 | DAT_0062303c
        ;   Label: LAB_0055a1f0
    LEA EDX,[ESP + 0xcc]                ; 0055a1f4
    ADD EDX,ECX                         ; 0055a1fb
    MOV ECX,dword ptr [EAX + 0xc]       ; 0055a1fd | DAT_00622fe8 | DAT_00623030
    MOV EBX,dword ptr [EDX + 0x4]       ; 0055a200
    IMUL EBX,ECX                        ; 0055a203
    MOV EDI,dword ptr [EDX]             ; 0055a206
    MOV ECX,dword ptr [EAX + 0x8]       ; 0055a208 | DAT_00622fe4 | DAT_0062302c
    IMUL ECX,EDI                        ; 0055a20b
    MOV EDI,dword ptr [EDX + 0x8]       ; 0055a20e
    ADD EBX,ECX                         ; 0055a211
    MOV ECX,dword ptr [EAX + 0x10]      ; 0055a213 | DAT_00622fec | DAT_00623034
    IMUL ECX,EDI                        ; 0055a216
    ADD EAX,0x48                        ; 0055a219
    ADD EBX,ECX                         ; 0055a21c
    MOV dword ptr [EAX + -0x34],EBX     ; 0055a21e | DAT_00622ff0 | DAT_00623038
    CMP EAX,ESI                         ; 0055a221
    JNZ 0x0055a1f0                      ; 0055a223
        ;   XREF to: 0055a1f0 (CONDITIONAL_JUMP)  ; LAB_0055a1f0
    CMP dword ptr [EBP + 0x1c],0x0      ; 0055a225
    JZ 0x0055a685                       ; 0055a229
        ;   XREF to: 0055a685 (CONDITIONAL_JUMP)  ; LAB_0055a685
    MOV EAX,dword ptr [EBP + 0x14]      ; 0055a22f
    MOV EAX,dword ptr [EAX]             ; 0055a232
    MOV dword ptr [ESP + 0x2e0],EAX     ; 0055a234
    MOV EAX,dword ptr [EBP + 0x14]      ; 0055a23b
    XOR ESI,ESI                         ; 0055a23e
    MOV dword ptr [EAX + 0x15aebc],0xffffffff ; 0055a240
    MOV dword ptr [0x020b28ec],ESI      ; 0055a24a | DAT_020b28ec
    MOV dword ptr [EAX + 0x15aec0],ESI  ; 0055a250
    MOV EDI,dword ptr [EBP + 0x18]      ; 0055a256
        ;   Label: LAB_0055a256
    MOV EAX,dword ptr [EBP + 0x18]      ; 0055a259
    PUSH EDI                            ; 0055a25c
    MOV EAX,dword ptr [EAX + 0x154]     ; 0055a25d
    LEA ESI,[ESP + 0x1dc]               ; 0055a263
    CALL dword ptr [EAX + 0x1c]         ; 0055a26a
    MOV ECX,0x6                         ; 0055a26d
    LEA EDI,[ESP + 0x1f4]               ; 0055a272
    ADD ESP,0x4                         ; 0055a279
    LEA EAX,[ESP + 0x1f0]               ; 0055a27c
    LEA ESI,[ESP + 0x1d8]               ; 0055a283
    PUSH EAX                            ; 0055a28a
    MOVSD.REP ES:EDI,ESI                ; 0055a28b
    CALL core_box.cpp_CBoundingBox3D_getMaximumBound_FUN_00421620 ; 0055a28d
        ;   XREF to: 00421620 (UNCONDITIONAL_CALL)  ; float core_box.cpp_CBoundingBox3D_getMaximumBound_FUN_00421620(CBoundingBox3D * this_ptr)
    MOV dword ptr [ESP + 0x398],EAX     ; 0055a292
    FLD float ptr [ESP + 0x398]         ; 0055a299
    FMUL double ptr [0x005f0fe5]        ; 0055a2a0 | DAT_005f0fe5
    LEA EDI,[ESP + 0x20c]               ; 0055a2a6
    LEA EAX,[ESP + 0x20c]               ; 0055a2ad
    ADD ESP,0x4                         ; 0055a2b4
    FLD1                                ; 0055a2b7
    MOV ESI,dword ptr [EBP + 0x18]      ; 0055a2b9
    PUSH EAX                            ; 0055a2bc
    MOV EAX,dword ptr [EBP + 0x14]      ; 0055a2bd
    FADDP                               ; 0055a2c0
    LEA ESI,[ESI + 0x20]                ; 0055a2c2
    FSTP float ptr [ESP + 0x344]        ; 0055a2c5
    MOVSD ES:EDI,ESI                    ; 0055a2cc
    MOVSD ES:EDI,ESI                    ; 0055a2cd
    MOVSD ES:EDI,ESI                    ; 0055a2ce
    PUSH EAX                            ; 0055a2cf
    FLD float ptr [ESP + 0x214]         ; 0055a2d0
    FADD float ptr [0x005f0fed]         ; 0055a2d7 | DAT_005f0fed
    LEA EDI,[ESP + 0x294]               ; 0055a2dd
    FSTP float ptr [ESP + 0x214]        ; 0055a2e4
    CALL core_setdir.cpp_FUN_0055c060   ; 0055a2eb
        ;   XREF to: 0055c060 (UNCONDITIONAL_CALL)  ; undefined core_setdir.cpp_FUN_0055c060()
    ADD ESP,0x8                         ; 0055a2f0
    LEA ESI,[ESP + 0x250]               ; 0055a2f3
    FLD float ptr [ESP + 0x1f0]         ; 0055a2fa
    FLD float ptr [ESP + 0x1f4]         ; 0055a301
    FLD float ptr [ESP + 0x1f8]         ; 0055a308
    FXCH ST2                            ; 0055a30f
    FADD float ptr [ESP + 0x1fc]        ; 0055a311
    FXCH                                ; 0055a318
    FADD float ptr [ESP + 0x200]        ; 0055a31a
    FXCH ST2                            ; 0055a321
    FADD float ptr [ESP + 0x204]        ; 0055a323
    FXCH                                ; 0055a32a
    FSTP float ptr [ESP + 0x250]        ; 0055a32c
    FXCH                                ; 0055a333
    FSTP float ptr [ESP + 0x254]        ; 0055a335
    FSTP float ptr [ESP + 0x258]        ; 0055a33c
    MOVSD ES:EDI,ESI                    ; 0055a343
    MOVSD ES:EDI,ESI                    ; 0055a344
    MOVSD ES:EDI,ESI                    ; 0055a345
    FLD float ptr [0x005f0fdd]          ; 0055a346 | DAT_005f0fdd
    FLD float ptr [ESP + 0x28c]         ; 0055a34c
    FMUL ST1                            ; 0055a353
    FLD float ptr [ESP + 0x290]         ; 0055a355
    FMUL ST2                            ; 0055a35c
    FLD float ptr [ESP + 0x294]         ; 0055a35e
    FMULP ST3                           ; 0055a365
    MOV dword ptr [ESP + 0x2e4],EAX     ; 0055a367
    LEA EAX,[ESP + 0x2bc]               ; 0055a36e
    MOV EDX,dword ptr [EBP + 0x18]      ; 0055a375
    PUSH EAX                            ; 0055a378
    LEA EDI,[ESP + 0x2c0]               ; 0055a379
    LEA ESI,[ESP + 0x29c]               ; 0055a380
    FXCH                                ; 0055a387
    FSTP float ptr [ESP + 0x29c]        ; 0055a389
    FSTP float ptr [ESP + 0x2a0]        ; 0055a390
    FSTP float ptr [ESP + 0x2a4]        ; 0055a397
    MOVSD ES:EDI,ESI                    ; 0055a39e
    MOVSD ES:EDI,ESI                    ; 0055a39f
    MOVSD ES:EDI,ESI                    ; 0055a3a0
    PUSH EDX                            ; 0055a3a1
    LEA ESI,[ESP + 0x21c]               ; 0055a3a2
    LEA EDI,[ESP + 0x264]               ; 0055a3a9
    CALL core_actor.cpp_FUN_00408b40    ; 0055a3b0
        ;   XREF to: 00408b40 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_FUN_00408b40()
    LEA ESI,[ESP + 0x21c]               ; 0055a3b5
    LEA EDX,[ESP + 0x264]               ; 0055a3bc
    ADD ESP,0x8                         ; 0055a3c3
    LEA EAX,[ESP + 0x208]               ; 0055a3c6
    MOVSD ES:EDI,ESI                    ; 0055a3cd
    MOVSD ES:EDI,ESI                    ; 0055a3ce
    MOVSD ES:EDI,ESI                    ; 0055a3cf
    CMP EAX,EDX                         ; 0055a3d0
    JZ 0x0055a3fe                       ; 0055a3d2
        ;   XREF to: 0055a3fe (CONDITIONAL_JUMP)  ; LAB_0055a3fe
    MOV EAX,dword ptr [ESP + 0x25c]     ; 0055a3d4
    MOV dword ptr [ESP + 0x208],EAX     ; 0055a3db
    MOV EAX,dword ptr [ESP + 0x260]     ; 0055a3e2
    MOV dword ptr [ESP + 0x20c],EAX     ; 0055a3e9
    MOV EAX,dword ptr [ESP + 0x264]     ; 0055a3f0
    MOV dword ptr [ESP + 0x210],EAX     ; 0055a3f7
    MOV EAX,dword ptr [ESP + 0x2e4]     ; 0055a3fe
        ;   Label: LAB_0055a3fe
    CMP EAX,dword ptr [0x020b28f0]      ; 0055a405 | DAT_020b28f0
    JNZ 0x0055a72a                      ; 0055a40b
        ;   XREF to: 0055a72a (CONDITIONAL_JUMP)  ; LAB_0055a72a
    MOV EAX,dword ptr [ESP + 0x2e4]     ; 0055a411
        ;   Label: LAB_0055a411
    MOV [0x020b28f0],EAX                ; 0055a418 | DAT_020b28f0
    CMP EAX,-0x1                        ; 0055a41d
    SETZ AL                             ; 0055a420
    AND EAX,0xff                        ; 0055a423
    MOV [0x0269c7ac],EAX                ; 0055a428 | DAT_0269c7ac
    XOR EAX,EAX                         ; 0055a42d
    ADD EAX,0x4                         ; 0055a42f
        ;   Label: LAB_0055a42f
    MOV EDX,dword ptr [EAX + 0x1c44808] ; 0055a432 | DAT_01c4480c | DAT_01c44810
    MOV dword ptr [ESP + EAX*0x1 + 0x8],EDX ; 0055a438
    CMP EAX,0xc0                        ; 0055a43c
    JNZ 0x0055a42f                      ; 0055a441
        ;   XREF to: 0055a42f (CONDITIONAL_JUMP)  ; LAB_0055a42f
    FLD float ptr [0x0060513c]          ; 0055a443 | DAT_0060513c
    FMUL ST0                            ; 0055a449
    XOR EAX,EAX                         ; 0055a44b
    XOR ECX,ECX                         ; 0055a44d
    MOV [0x0268ece8],EAX                ; 0055a44f | DAT_0268ece8
    MOV dword ptr [ESP + 0x388],EAX     ; 0055a454
    MOV EAX,dword ptr [EBP + 0x18]      ; 0055a45b
    MOV dword ptr [ESP + 0x378],ECX     ; 0055a45e
    ADD EAX,0x20                        ; 0055a465
    FSTP float ptr [ESP + 0x2f0]        ; 0055a468
    MOV dword ptr [ESP + 0x2ec],EAX     ; 0055a46f
    MOV EAX,[0x00622c18]                ; 0055a476 | g_CDemonSetPtr
        ;   Label: LAB_0055a476
    MOV EDX,dword ptr [ESP + 0x388]     ; 0055a47b
    CMP EDX,dword ptr [EAX + 0x14d164]  ; 0055a482 | g_CDemonSetInstance.field1364324_0x14d164
    JL 0x0055a75e                       ; 0055a488
        ;   XREF to: 0055a75e (CONDITIONAL_JUMP)  ; LAB_0055a75e
    FLD float ptr [0x0060513c]          ; 0055a48e | DAT_0060513c
    FMUL ST0                            ; 0055a494
    MOV EAX,dword ptr [EBP + 0x18]      ; 0055a496
    FLD float ptr [0x00605138]          ; 0055a499 | DAT_00605138
    FLD ST0                             ; 0055a49f
    ADD EAX,0x20                        ; 0055a4a1
    FMULP                               ; 0055a4a4
    MOV dword ptr [ESP + 0x370],EAX     ; 0055a4a6
    MOV EAX,dword ptr [EBP + 0x14]      ; 0055a4ad
    FXCH                                ; 0055a4b0
    FSTP float ptr [ESP + 0x358]        ; 0055a4b2
    ADD EAX,0x4                         ; 0055a4b9
    FSTP float ptr [ESP + 0x32c]        ; 0055a4bc
    MOV dword ptr [ESP + 0x300],EAX     ; 0055a4c3
    CMP dword ptr [ESP + 0x2e0],0x0     ; 0055a4ca
        ;   Label: LAB_0055a4ca
    JLE 0x0055a4e4                      ; 0055a4d2
        ;   XREF to: 0055a4e4 (CONDITIONAL_JUMP)  ; LAB_0055a4e4
    MOV EDX,dword ptr [EBP + 0x14]      ; 0055a4d4
    MOV EAX,[0x020b28ec]                ; 0055a4d7 | DAT_020b28ec
    CMP EAX,dword ptr [EDX]             ; 0055a4dc
    JL 0x0055a870                       ; 0055a4de
        ;   XREF to: 0055a870 (CONDITIONAL_JUMP)  ; LAB_0055a870
    XOR EAX,EAX                         ; 0055a4e4
        ;   Label: LAB_0055a4e4
    ADD EAX,0x4                         ; 0055a4e6
        ;   Label: LAB_0055a4e6
    MOV EDX,dword ptr [ESP + EAX*0x1 + 0x8] ; 0055a4e9
    MOV dword ptr [EAX + 0x1c44808],EDX ; 0055a4ed | DAT_01c4480c | DAT_01c44810
    CMP EAX,0xc0                        ; 0055a4f3
    JNZ 0x0055a4e6                      ; 0055a4f8
        ;   XREF to: 0055a4e6 (CONDITIONAL_JUMP)  ; LAB_0055a4e6
    MOV EAX,[0x00612560]                ; 0055a4fa | DAT_00612560
    PUSH EAX                            ; 0055a4ff | DAT_01bc120c
    CALL engine_matrix.c_popViewport_FUN_00483c40 ; 0055a500
        ;   XREF to: 00483c40 (UNCONDITIONAL_CALL)  ; void engine_matrix.c_popViewport_FUN_00483c40()
    ADD ESP,0x4                         ; 0055a505
    MOV EDX,dword ptr [ESP + 0x33c]     ; 0055a508
    PUSH EDX                            ; 0055a50f
    MOV ECX,dword ptr [0x00612560]      ; 0055a510 | DAT_00612560
    PUSH ECX                            ; 0055a516 | DAT_01bc120c
    CALL engine_drender.cpp_CDemonRenderer_setShadowPass_FUN_00483e40 ; 0055a517
        ;   XREF to: 00483e40 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_setShadowPass_FUN_00483e40(CDemonRenderer * this_ptr, int value)
    ADD ESP,0x8                         ; 0055a51c
    MOV EAX,dword ptr [ESP + 0x2e8]     ; 0055a51f
    MOV EDX,dword ptr [EBP + 0x14]      ; 0055a526
    MOV [0x01c50948],EAX                ; 0055a529 | DAT_01c50948
    MOV EBX,dword ptr [EDX]             ; 0055a52e
    CMP EBX,dword ptr [0x020b28ec]      ; 0055a530 | DAT_020b28ec
    JG 0x0055a5eb                       ; 0055a536
        ;   XREF to: 0055a5eb (CONDITIONAL_JUMP)  ; LAB_0055a5eb
    MOV ESI,0xbf800000                  ; 0055a53c
    MOV EAX,dword ptr [EBP + 0x14]      ; 0055a541
    MOV EBX,0xffffffff                  ; 0055a544
    XOR EDX,EDX                         ; 0055a549
    MOV EDI,dword ptr [EAX]             ; 0055a54b
    MOV dword ptr [ESP + 0x4],ESI       ; 0055a54d
    TEST EDI,EDI                        ; 0055a551
    JLE 0x0055a57f                      ; 0055a553
        ;   XREF to: 0055a57f (CONDITIONAL_JUMP)  ; LAB_0055a57f
    XOR ECX,ECX                         ; 0055a555
    FLD float ptr [ECX + 0x268e900]     ; 0055a557
        ;   Label: LAB_0055a557
    FCOMP float ptr [ESP + 0x4]         ; 0055a55d
    FNSTSW AX                           ; 0055a561
    SAHF                                ; 0055a563
    JBE 0x0055a572                      ; 0055a564
        ;   XREF to: 0055a572 (CONDITIONAL_JUMP)  ; LAB_0055a572
    MOV EAX,dword ptr [ECX + 0x268e900] ; 0055a566
    MOV EBX,EDX                         ; 0055a56c
    MOV dword ptr [ESP + 0x4],EAX       ; 0055a56e
    MOV EAX,dword ptr [EBP + 0x14]      ; 0055a572
        ;   Label: LAB_0055a572
    INC EDX                             ; 0055a575
    MOV ESI,dword ptr [EAX]             ; 0055a576
    ADD ECX,0x4                         ; 0055a578
    CMP EDX,ESI                         ; 0055a57b
    JL 0x0055a557                       ; 0055a57d
        ;   XREF to: 0055a557 (CONDITIONAL_JUMP)  ; LAB_0055a557
    TEST EBX,EBX                        ; 0055a57f
        ;   Label: LAB_0055a57f
    JL 0x0055a5e3                       ; 0055a581
        ;   XREF to: 0055a5e3 (CONDITIONAL_JUMP)  ; LAB_0055a5e3
    FLD float ptr [ESP + 0x4]           ; 0055a583
    MOV EDX,0x1                         ; 0055a587
    FLDZ                                ; 0055a58c
    FCOMPP                              ; 0055a58e
    FNSTSW AX                           ; 0055a590
    SAHF                                ; 0055a592
    JC 0x0055a597                       ; 0055a593
        ;   XREF to: 0055a597 (CONDITIONAL_JUMP)  ; LAB_0055a597
    XOR EDX,EDX                         ; 0055a595
    MOV EAX,dword ptr [EBP + 0x14]      ; 0055a597
        ;   Label: LAB_0055a597
    CMP EBX,dword ptr [EAX + 0x15aeb8]  ; 0055a59a
    JNZ 0x0055a5a4                      ; 0055a5a0
        ;   XREF to: 0055a5a4 (CONDITIONAL_JUMP)  ; LAB_0055a5a4
    XOR EDX,EDX                         ; 0055a5a2
    CMP dword ptr [EBP + 0x1c],0x1      ; 0055a5a4
        ;   Label: LAB_0055a5a4
    JLE 0x0055a5af                      ; 0055a5a8
        ;   XREF to: 0055a5af (CONDITIONAL_JUMP)  ; LAB_0055a5af
    MOV EDX,0x1                         ; 0055a5aa
    MOV EAX,dword ptr [EBP + 0x14]      ; 0055a5af
        ;   Label: LAB_0055a5af
    CMP dword ptr [EAX + 0x15aeb8],0x0  ; 0055a5b2
    JL 0x0055a5bf                       ; 0055a5b9
        ;   XREF to: 0055a5bf (CONDITIONAL_JUMP)  ; LAB_0055a5bf
    TEST EDX,EDX                        ; 0055a5bb
    JZ 0x0055a5e3                       ; 0055a5bd
        ;   XREF to: 0055a5e3 (CONDITIONAL_JUMP)  ; LAB_0055a5e3
    PUSH EBX                            ; 0055a5bf
        ;   Label: LAB_0055a5bf
    MOV EDX,dword ptr [EBP + 0x14]      ; 0055a5c0
    MOV EAX,[0x0269c7ac]                ; 0055a5c3 | DAT_0269c7ac
    PUSH EDX                            ; 0055a5c8
    MOV ESI,0x1                         ; 0055a5c9
    MOV dword ptr [EDX + 0x15ae5c],EAX  ; 0055a5ce
    CALL core_set.cpp_CDemonSet_setCameraView_FUN_0054f0d0 ; 0055a5d4
        ;   XREF to: 0054f0d0 (UNCONDITIONAL_CALL)  ; void core_set.cpp_CDemonSet_setCameraView_FUN_0054f0d0(CDemonSet * this_ptr, int index)
    ADD ESP,0x8                         ; 0055a5d9
    MOV dword ptr [ESP + 0x2dc],ESI     ; 0055a5dc
    XOR EDI,EDI                         ; 0055a5e3
        ;   Label: LAB_0055a5e3
    MOV dword ptr [0x020b28ec],EDI      ; 0055a5e5 | DAT_020b28ec
    MOV EAX,dword ptr [ESP + 0x2dc]     ; 0055a5eb
        ;   Label: LAB_0055a5eb
    MOV ESP,EBP                         ; 0055a5f2
    POP EBP                             ; 0055a5f4
    POP EDI                             ; 0055a5f5
    POP ESI                             ; 0055a5f6
    POP EBX                             ; 0055a5f7
    RET                                 ; 0055a5f8
    MOV dword ptr [EAX + 0x15aec8],0xffffffff ; 0055a5f9
        ;   Label: LAB_0055a5f9
    MOV EDI,0x1                         ; 0055a603
    MOV dword ptr [EAX + 0x15aecc],EDX  ; 0055a608
    MOV dword ptr [EBP + 0x1c],EDI      ; 0055a60e
    JMP 0x00559fd9                      ; 0055a611
        ;   XREF to: 00559fd9 (UNCONDITIONAL_JUMP)  ; LAB_00559fd9
    MOV EDX,dword ptr [0x0061d95c]      ; 0055a616 | g_CGamePtr
        ;   Label: LAB_0055a616
    MOV EAX,dword ptr [EBP + 0x14]      ; 0055a61c
    FLD float ptr [EDX + 0x294]         ; 0055a61f | g_CGameInstance.field660_0x294
    FSUBR float ptr [EAX + 0x15aecc]    ; 0055a625
    FST float ptr [EAX + 0x15aecc]      ; 0055a62b
    FLDZ                                ; 0055a631
    FCOMPP                              ; 0055a633
    FNSTSW AX                           ; 0055a635
    SAHF                                ; 0055a637
    JNC 0x0055a679                      ; 0055a638
        ;   XREF to: 0055a679 (CONDITIONAL_JUMP)  ; LAB_0055a679
    MOV EAX,dword ptr [EBP + 0x14]      ; 0055a63a
    MOV EDX,dword ptr [EAX + 0x15aec8]  ; 0055a63d
    TEST EDX,EDX                        ; 0055a643
    JL 0x0055a654                       ; 0055a645
        ;   XREF to: 0055a654 (CONDITIONAL_JUMP)  ; LAB_0055a654
    MOV EAX,EDX                         ; 0055a647
    MOV EDX,dword ptr [EBP + 0x14]      ; 0055a649
    CMP EAX,dword ptr [EDX + 0x15aeb8]  ; 0055a64c
    JNZ 0x0055a65d                      ; 0055a652
        ;   XREF to: 0055a65d (CONDITIONAL_JUMP)  ; LAB_0055a65d
    XOR EAX,EAX                         ; 0055a654
        ;   Label: LAB_0055a654
    MOV ESP,EBP                         ; 0055a656
    POP EBP                             ; 0055a658
    POP EDI                             ; 0055a659
    POP ESI                             ; 0055a65a
    POP EBX                             ; 0055a65b
    RET                                 ; 0055a65c
    MOV EBX,dword ptr [EDX + 0x15aec8]  ; 0055a65d
        ;   Label: LAB_0055a65d
    PUSH EBX                            ; 0055a663
    PUSH EDX                            ; 0055a664
    CALL core_set.cpp_CDemonSet_setCameraView_FUN_0054f0d0 ; 0055a665
        ;   XREF to: 0054f0d0 (UNCONDITIONAL_CALL)  ; void core_set.cpp_CDemonSet_setCameraView_FUN_0054f0d0(CDemonSet * this_ptr, int index)
    MOV EAX,0x1                         ; 0055a66a
    ADD ESP,0x8                         ; 0055a66f
    MOV ESP,EBP                         ; 0055a672
    POP EBP                             ; 0055a674
    POP EDI                             ; 0055a675
    POP ESI                             ; 0055a676
    POP EBX                             ; 0055a677
    RET                                 ; 0055a678
    MOV dword ptr [EBP + 0x1c],0x1      ; 0055a679
        ;   Label: LAB_0055a679
    JMP 0x00559fef                      ; 0055a680
        ;   XREF to: 00559fef (UNCONDITIONAL_JUMP)  ; LAB_00559fef
    MOV EDX,dword ptr [EBP + 0x14]      ; 0055a685
        ;   Label: LAB_0055a685
    MOV EDX,dword ptr [EDX]             ; 0055a688
    LEA EAX,[EDX*0x4 + 0x0]             ; 0055a68a
    ADD EAX,EDX                         ; 0055a691
    ADD EAX,EAX                         ; 0055a693
    MOV dword ptr [ESP + 0x394],EAX     ; 0055a695
    MOV EAX,[0x0061d95c]                ; 0055a69c | g_CGamePtr
    FILD dword ptr [ESP + 0x394]        ; 0055a6a1
    FMUL float ptr [EAX + 0x294]        ; 0055a6a8 | g_CGameInstance.field660_0x294
    CALL crt_math.c_round_FUN_005c03a0  ; 0055a6ae
        ;   XREF to: 005c03a0 (UNCONDITIONAL_CALL)  ; undefined crt_math.c_round_FUN_005c03a0()
    FISTP dword ptr [ESP + 0x2e0]       ; 0055a6b3
    CMP dword ptr [ESP + 0x2e0],0x3     ; 0055a6ba
    JGE 0x0055a6cf                      ; 0055a6c2
        ;   XREF to: 0055a6cf (CONDITIONAL_JUMP)  ; LAB_0055a6cf
    MOV dword ptr [ESP + 0x2e0],0x3     ; 0055a6c4
    MOV EDX,dword ptr [EBP + 0x14]      ; 0055a6cf
        ;   Label: LAB_0055a6cf
    MOV EAX,dword ptr [ESP + 0x2e0]     ; 0055a6d2
    MOV EBX,dword ptr [EDX]             ; 0055a6d9
    CMP EAX,EBX                         ; 0055a6db
    JLE 0x0055a6e6                      ; 0055a6dd
        ;   XREF to: 0055a6e6 (CONDITIONAL_JUMP)  ; LAB_0055a6e6
    MOV dword ptr [ESP + 0x2e0],EBX     ; 0055a6df
    MOV EDX,dword ptr [0x0061d95c]      ; 0055a6e6 | g_CGamePtr
        ;   Label: LAB_0055a6e6
    MOV EAX,dword ptr [EBP + 0x14]      ; 0055a6ec
    FLD float ptr [EDX + 0x294]         ; 0055a6ef | g_CGameInstance.field660_0x294
    FSUBR float ptr [EAX + 0x15aec0]    ; 0055a6f5
    FST float ptr [EAX + 0x15aec0]      ; 0055a6fb
    FLDZ                                ; 0055a701
    FCOMPP                              ; 0055a703
    FNSTSW AX                           ; 0055a705
    SAHF                                ; 0055a707
    JC 0x0055a256                       ; 0055a708
        ;   XREF to: 0055a256 (CONDITIONAL_JUMP)  ; LAB_0055a256
    MOV EAX,dword ptr [EBP + 0x14]      ; 0055a70e
    MOV dword ptr [EAX + 0x15aebc],0xffffffff ; 0055a711
    MOV dword ptr [EAX + 0x15aec0],0x0  ; 0055a71b
    JMP 0x0055a256                      ; 0055a725
        ;   XREF to: 0055a256 (UNCONDITIONAL_JUMP)  ; LAB_0055a256
    MOV EAX,dword ptr [EBP + 0x14]      ; 0055a72a
        ;   Label: LAB_0055a72a
    MOV EAX,dword ptr [EAX]             ; 0055a72d
    MOV ESI,0x1                         ; 0055a72f
    MOV dword ptr [ESP + 0x2e0],EAX     ; 0055a734
    MOV EAX,dword ptr [EBP + 0x14]      ; 0055a73b
    XOR EBX,EBX                         ; 0055a73e
    MOV dword ptr [EBP + 0x1c],ESI      ; 0055a740
    MOV dword ptr [EAX + 0x15aebc],0xffffffff ; 0055a743
    MOV dword ptr [0x020b28ec],EBX      ; 0055a74d | DAT_020b28ec
    MOV dword ptr [EAX + 0x15aec0],EBX  ; 0055a753
    JMP 0x0055a411                      ; 0055a759
        ;   XREF to: 0055a411 (UNCONDITIONAL_JUMP)  ; LAB_0055a411
    ADD EAX,dword ptr [ESP + 0x378]     ; 0055a75e
        ;   Label: LAB_0055a75e
    MOV EBX,dword ptr [EAX + 0x14d168]  ; 0055a765
    PUSH EBX                            ; 0055a76b
    MOV EAX,dword ptr [EBX + 0x154]     ; 0055a76c
    CALL dword ptr [EAX + 0x48]         ; 0055a772
    ADD ESP,0x4                         ; 0055a775
    TEST EAX,EAX                        ; 0055a778
    JZ 0x0055a84b                       ; 0055a77a
        ;   XREF to: 0055a84b (CONDITIONAL_JUMP)  ; LAB_0055a84b
    CMP EBX,dword ptr [EBP + 0x18]      ; 0055a780
    JZ 0x0055a84b                       ; 0055a783
        ;   XREF to: 0055a84b (CONDITIONAL_JUMP)  ; LAB_0055a84b
    LEA EAX,[EBX + 0x20]                ; 0055a789
    MOV EDX,dword ptr [ESP + 0x2ec]     ; 0055a78c
    FLD float ptr [EAX]                 ; 0055a793
    FSUB float ptr [EDX]                ; 0055a795
    FMUL ST0                            ; 0055a797
    FLD float ptr [EAX + 0x4]           ; 0055a799
    FSUB float ptr [EDX + 0x4]          ; 0055a79c
    FMUL ST0                            ; 0055a79f
    FLD float ptr [EAX + 0x8]           ; 0055a7a1
    FXCH                                ; 0055a7a4
    FADDP ST2,ST0                       ; 0055a7a6
    FSUB float ptr [EDX + 0x8]          ; 0055a7a8
    FMUL ST0                            ; 0055a7ab
    FADDP                               ; 0055a7ad
    FCOMP float ptr [ESP + 0x2f0]       ; 0055a7af
    FNSTSW AX                           ; 0055a7b6
    SAHF                                ; 0055a7b8
    JA 0x0055a84b                       ; 0055a7b9
        ;   XREF to: 0055a84b (CONDITIONAL_JUMP)  ; LAB_0055a84b
    MOV EAX,[0x0268ece8]                ; 0055a7bf | DAT_0268ece8
    MOV dword ptr [EAX*0x4 + 0x268ecec],EBX ; 0055a7c4 | DAT_0268ecec
    PUSH EBX                            ; 0055a7cb
    MOV EAX,dword ptr [EBX + 0x154]     ; 0055a7cc
    LEA ESI,[ESP + 0x164]               ; 0055a7d2
    CALL dword ptr [EAX + 0x1c]         ; 0055a7d9
    IMUL EDX,dword ptr [0x0268ece8],0x18 ; 0055a7dc | DAT_0268ece8
    LEA EDI,[ESP + 0x17c]               ; 0055a7e3
    MOV ECX,0x6                         ; 0055a7ea
    LEA ESI,[ESP + 0x164]               ; 0055a7ef
    ADD ESP,0x4                         ; 0055a7f6
    MOVSD.REP ES:EDI,ESI                ; 0055a7f9
    ADD EDX,0x2690c2c                   ; 0055a7fb
    LEA EBX,[ESP + 0x178]               ; 0055a801
    MOV ECX,EDX                         ; 0055a808
    CMP EDX,EBX                         ; 0055a80a
    JZ 0x0055a82b                       ; 0055a80c
        ;   XREF to: 0055a82b (CONDITIONAL_JUMP)  ; LAB_0055a82b
    MOV EAX,dword ptr [ESP + 0x178]     ; 0055a80e
    MOV dword ptr [EDX],EAX             ; 0055a815
    MOV EAX,dword ptr [ESP + 0x17c]     ; 0055a817
    MOV dword ptr [EDX + 0x4],EAX       ; 0055a81e
    MOV EAX,dword ptr [ESP + 0x180]     ; 0055a821
    MOV dword ptr [EDX + 0x8],EAX       ; 0055a828
    LEA EDX,[EBX + 0xc]                 ; 0055a82b
        ;   Label: LAB_0055a82b
    LEA EAX,[ECX + 0xc]                 ; 0055a82e
    CMP EAX,EDX                         ; 0055a831
    JZ 0x0055a845                       ; 0055a833
        ;   XREF to: 0055a845 (CONDITIONAL_JUMP)  ; LAB_0055a845
    MOV ECX,dword ptr [EDX]             ; 0055a835
    MOV dword ptr [EAX],ECX             ; 0055a837
    MOV ECX,dword ptr [EDX + 0x4]       ; 0055a839
    MOV dword ptr [EAX + 0x4],ECX       ; 0055a83c
    MOV ECX,dword ptr [EDX + 0x8]       ; 0055a83f
    MOV dword ptr [EAX + 0x8],ECX       ; 0055a842
    INC dword ptr [0x0268ece8]          ; 0055a845 | DAT_0268ece8
        ;   Label: LAB_0055a845
    MOV EBX,dword ptr [ESP + 0x388]     ; 0055a84b
        ;   Label: LAB_0055a84b
    MOV ECX,dword ptr [ESP + 0x378]     ; 0055a852
    INC EBX                             ; 0055a859
    ADD ECX,0x4                         ; 0055a85a
    MOV dword ptr [ESP + 0x388],EBX     ; 0055a85d
    MOV dword ptr [ESP + 0x378],ECX     ; 0055a864
    JMP 0x0055a476                      ; 0055a86b
        ;   XREF to: 0055a476 (UNCONDITIONAL_JUMP)  ; LAB_0055a476
    IMUL EBX,EAX,0x1a4                  ; 0055a870
        ;   Label: LAB_0055a870
    MOV EAX,EDX                         ; 0055a876
    MOV EDX,dword ptr [ESP + 0x2e4]     ; 0055a878
    MOV ECX,dword ptr [EBX + EAX*0x1 + 0x1a0] ; 0055a87f
    CMP EDX,ECX                         ; 0055a886
    JNZ 0x0055b173                      ; 0055a888
        ;   XREF to: 0055b173 (CONDITIONAL_JUMP)  ; LAB_0055b173
    MOV EAX,dword ptr [EBP + 0x18]      ; 0055a88e
    MOV ESI,dword ptr [ESP + 0x300]     ; 0055a891
    MOV EDI,0x622fdc                    ; 0055a898 | DAT_00622fdc
    MOV dword ptr [ESP + 0x304],EAX     ; 0055a89d
    ADD EBX,ESI                         ; 0055a8a4
    MOV EAX,[0x020b28ec]                ; 0055a8a6 | DAT_020b28ec
    MOV dword ptr [ESP + 0x308],EDI     ; 0055a8ab | DAT_00622fdc
    MOV dword ptr [ESP + 0x30c],EAX     ; 0055a8b2
    MOV EAX,dword ptr [EBX + 0x1a0]     ; 0055a8b9
    MOV dword ptr [ESP + 0x310],EBX     ; 0055a8bf
    TEST EAX,EAX                        ; 0055a8c6
    JZ 0x0055a8ff                       ; 0055a8c8
        ;   XREF to: 0055a8ff (CONDITIONAL_JUMP)  ; LAB_0055a8ff
    LEA ESI,[EBX + 0x100]               ; 0055a8ca
    MOV EAX,dword ptr [ESP + 0x370]     ; 0055a8d0
    FLD float ptr [ESI]                 ; 0055a8d7
    FSUB float ptr [EAX]                ; 0055a8d9
    FMUL ST0                            ; 0055a8db
    FLD float ptr [ESI + 0x4]           ; 0055a8dd
    FSUB float ptr [EAX + 0x4]          ; 0055a8e0
    FMUL ST0                            ; 0055a8e3
    FLD float ptr [ESI + 0x8]           ; 0055a8e5
    FXCH                                ; 0055a8e8
    FADDP ST2,ST0                       ; 0055a8ea
    FSUB float ptr [EAX + 0x8]          ; 0055a8ec
    FMUL ST0                            ; 0055a8ef
    FADDP                               ; 0055a8f1
    FCOMP float ptr [ESP + 0x32c]       ; 0055a8f3
    FNSTSW AX                           ; 0055a8fa
    SAHF                                ; 0055a8fc
    JBE 0x0055a948                      ; 0055a8fd
        ;   XREF to: 0055a948 (CONDITIONAL_JUMP)  ; LAB_0055a948
    XOR EDX,ECX                         ; 0055a8ff
        ;   Label: LAB_0055a8ff
    MOV dword ptr [ESP + 0x314],EDX     ; 0055a901
    MOV EAX,dword ptr [ESP + 0x314]     ; 0055a908
        ;   Label: LAB_0055a908
    MOV dword ptr [ESP],EAX             ; 0055a90f
    CMP dword ptr [EBP + 0x1c],0x0      ; 0055a912
        ;   Label: LAB_0055a912
    JZ 0x0055b17f                       ; 0055a916
        ;   XREF to: 0055b17f (CONDITIONAL_JUMP)  ; LAB_0055b17f
    MOV EDX,dword ptr [ESP]             ; 0055a91c
        ;   Label: LAB_0055a91c
    MOV EAX,[0x020b28ec]                ; 0055a91f | DAT_020b28ec
    MOV EDI,dword ptr [ESP + 0x2e0]     ; 0055a924
    LEA ESI,[EAX + 0x1]                 ; 0055a92b
    DEC EDI                             ; 0055a92e
    MOV dword ptr [EAX*0x4 + 0x268e900],EDX ; 0055a92f | DAT_0268e900
    MOV dword ptr [0x020b28ec],ESI      ; 0055a936 | DAT_020b28ec
    MOV dword ptr [ESP + 0x2e0],EDI     ; 0055a93c
    JMP 0x0055a4ca                      ; 0055a943
        ;   XREF to: 0055a4ca (UNCONDITIONAL_JUMP)  ; LAB_0055a4ca
    MOV ECX,dword ptr [ESP + 0x370]     ; 0055a948
        ;   Label: LAB_0055a948
    PUSH dword ptr [ESP + 0x340]        ; 0055a94f
    PUSH ECX                            ; 0055a956
    PUSH EBX                            ; 0055a957
    CALL core_setutil.cpp_FUN_0055c6f0  ; 0055a958
        ;   XREF to: 0055c6f0 (UNCONDITIONAL_CALL)  ; undefined core_setutil.cpp_FUN_0055c6f0()
    ADD ESP,0xc                         ; 0055a95d
    TEST EAX,EAX                        ; 0055a960
    JZ 0x0055aef9                       ; 0055a962
        ;   XREF to: 0055aef9 (CONDITIONAL_JUMP)  ; LAB_0055aef9
    PUSH ESI                            ; 0055a968
    MOV ESI,dword ptr [0x00612560]      ; 0055a969 | DAT_00612560
    PUSH ESI                            ; 0055a96f | DAT_01bc120c
    CALL engine_drender.cpp_FUN_004834b0 ; 0055a970
        ;   XREF to: 004834b0 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_FUN_004834b0(CDemonRenderer * this_ptr, CVector3f * point_ptr)
    ADD ESP,0x8                         ; 0055a975
    MOV EDI,dword ptr [0x00612560]      ; 0055a978 | DAT_00612560
    PUSH dword ptr [EBX + 0x144]        ; 0055a97e
    PUSH EDI                            ; 0055a984 | DAT_01bc120c
    CALL engine_matrix.c_FUN_004839b0   ; 0055a985
        ;   XREF to: 004839b0 (UNCONDITIONAL_CALL)  ; undefined engine_matrix.c_FUN_004839b0()
    ADD ESP,0x8                         ; 0055a98a
    LEA EAX,[EBX + 0x10c]               ; 0055a98d
    PUSH EAX                            ; 0055a993
    MOV EAX,[0x00612560]                ; 0055a994 | DAT_00612560
    PUSH EAX                            ; 0055a999 | DAT_01bc120c
    CALL engine_drender.cpp_CDemonRenderer_setupSceneRendering_FUN_00483530 ; 0055a99a
        ;   XREF to: 00483530 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_setupSceneRendering_FUN_00483530(CDemonRenderer * this_ptr, CVector3f * euler_angles)
    ADD ESP,0x8                         ; 0055a99f
    MOV ESI,dword ptr [ESP + 0x370]     ; 0055a9a2
    MOV EDX,0x800000ff                  ; 0055a9a9
    PUSH ESI                            ; 0055a9ae
    MOV EDI,dword ptr [0x00612560]      ; 0055a9af | DAT_00612560
    XOR ECX,ECX                         ; 0055a9b5
    PUSH EDI                            ; 0055a9b7 | DAT_01bc120c
    MOV dword ptr [ESP + 0x320],EDX     ; 0055a9b8
    MOV dword ptr [ESP + 0x324],ECX     ; 0055a9bf
    CALL engine_drender.cpp_CDemonRenderer_processCameraRelativeVertex_FUN_004837b0 ; 0055a9c6
        ;   XREF to: 004837b0 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_processCameraRelativeVertex_FUN_004837b0(CDemonRenderer * this_ptr, CVector3f * world_position)
    ADD ESP,0x8                         ; 0055a9cb
    MOV EAX,dword ptr [EBP + 0x18]      ; 0055a9ce
    MOV EAX,dword ptr [EAX + 0x30]      ; 0055a9d1
    MOV dword ptr [ESP + 0x274],EAX     ; 0055a9d4
    MOV EAX,dword ptr [EBP + 0x18]      ; 0055a9db
    MOV EAX,dword ptr [EAX + 0x38]      ; 0055a9de
    MOV dword ptr [ESP + 0x27c],EAX     ; 0055a9e1
    MOV EAX,dword ptr [EBX + 0x110]     ; 0055a9e8
    PUSH 0x0                            ; 0055a9ee
    MOV dword ptr [ESP + 0x27c],EAX     ; 0055a9f0
    LEA EAX,[ESP + 0x278]               ; 0055a9f7
    PUSH EAX                            ; 0055a9fe
    MOV EAX,[0x00612560]                ; 0055a9ff | DAT_00612560
    PUSH EAX                            ; 0055aa04 | DAT_01bc120c
    XOR ESI,ESI                         ; 0055aa05
    LEA EDI,[ESP + 0xd8]                ; 0055aa07
    CALL engine_drender.cpp_CDemonRenderer_applyScaledTransform_FUN_00483850 ; 0055aa0e
        ;   XREF to: 00483850 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_applyScaledTransform_FUN_00483850(CDemonRenderer * this_ptr, CVector3f * euler_angles, CVector3f * translation)
    ADD ESP,0xc                         ; 0055aa13
    MOV EAX,[0x00612560]                ; 0055aa16 | DAT_00612560
        ;   Label: LAB_0055aa16
    MOV EAX,dword ptr [EAX]             ; 0055aa1b | DAT_01bc120c
    PUSH EDI                            ; 0055aa1d
    ADD EAX,ESI                         ; 0055aa1e
    PUSH EAX                            ; 0055aa20
    CALL engine_special.cpp_FUN_00580173 ; 0055aa21
        ;   XREF to: 00580173 (UNCONDITIONAL_CALL)  ; void engine_special.cpp_FUN_00580173(SProjectedVertex * output, CVector3i * input)
    MOV EAX,[0x00612560]                ; 0055aa26 | DAT_00612560
    ADD ESI,0x30                        ; 0055aa2b
    ADD ESP,0x8                         ; 0055aa2e
    MOV EAX,dword ptr [EAX]             ; 0055aa31 | DAT_01bc120c
    ADD EDI,0xc                         ; 0055aa33
    MOV ECX,dword ptr [ESP + 0x318]     ; 0055aa36
    MOV EDX,dword ptr [ESI + EAX*0x1 + -0x20] ; 0055aa3d
    MOV EBX,dword ptr [ESP + 0x31c]     ; 0055aa41
    AND ECX,EDX                         ; 0055aa48
    OR EBX,EDX                          ; 0055aa4a
    MOV dword ptr [ESP + 0x318],ECX     ; 0055aa4c
    MOV dword ptr [ESP + 0x31c],EBX     ; 0055aa53
    CMP ESI,0x180                       ; 0055aa5a
    JNZ 0x0055aa16                      ; 0055aa60
        ;   XREF to: 0055aa16 (CONDITIONAL_JUMP)  ; LAB_0055aa16
    TEST byte ptr [ESP + 0x31b],0x80    ; 0055aa62
    JNZ 0x0055af05                      ; 0055aa6a
        ;   XREF to: 0055af05 (CONDITIONAL_JUMP)  ; LAB_0055af05
    MOV EAX,dword ptr [ESP + 0x308]     ; 0055aa70
        ;   Label: LAB_0055aa70
    XOR ESI,ESI                         ; 0055aa77
    XOR EDX,EDX                         ; 0055aa79
    LEA ECX,[EAX + 0x1b0]               ; 0055aa7b | DAT_0062318c
    MOV dword ptr [ESP + 0x320],ESI     ; 0055aa81
    MOV EBX,dword ptr [ESP + 0x320]     ; 0055aa88
        ;   Label: LAB_0055aa88
    MOV dword ptr [ESP + EDX*0x1 + 0x1c0],EAX ; 0055aa8f | DAT_00622fdc | DAT_00623024
    ADD EDX,0x4                         ; 0055aa96
    INC EBX                             ; 0055aa99
    ADD EAX,0x48                        ; 0055aa9a
    MOV dword ptr [ESP + 0x320],EBX     ; 0055aa9d
    CMP EAX,ECX                         ; 0055aaa4
    JNZ 0x0055aa88                      ; 0055aaa6
        ;   XREF to: 0055aa88 (CONDITIONAL_JUMP)  ; LAB_0055aa88
    MOV ESI,dword ptr [ESP + 0x304]     ; 0055aaa8
    PUSH ESI                            ; 0055aaaf
    XOR EDI,EDI                         ; 0055aab0
    CALL core_actor.cpp_CDemonActor_restoreRenderState_FUN_004087f0 ; 0055aab2
        ;   XREF to: 004087f0 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_CDemonActor_restoreRenderState_FUN_004087f0(CDemonActor * this_ptr)
    ADD ESP,0x4                         ; 0055aab7
    MOV EAX,[0x00612560]                ; 0055aaba | DAT_00612560
        ;   Label: LAB_0055aaba
    MOV ESI,dword ptr [EAX]             ; 0055aabf | DAT_01bc120c
    ADD ESI,EDI                         ; 0055aac1
    MOV EAX,dword ptr [ESI + 0x8]       ; 0055aac3
    TEST EAX,EAX                        ; 0055aac6
    JLE 0x0055aaf7                      ; 0055aac8
        ;   XREF to: 0055aaf7 (CONDITIONAL_JUMP)  ; LAB_0055aaf7
    LEA ECX,[EAX + 0x80]                ; 0055aaca
    MOV EBX,EAX                         ; 0055aad0
    MOV EDX,ECX                         ; 0055aad2
    MOV EAX,dword ptr [ESI]             ; 0055aad4
    IMUL EDX                            ; 0055aad6
    IDIV EBX                            ; 0055aad8
    MOV dword ptr [ESI],EAX             ; 0055aada
    MOV EDX,ECX                         ; 0055aadc
    MOV EBX,dword ptr [ESI + 0x8]       ; 0055aade
    MOV EAX,dword ptr [ESI + 0x4]       ; 0055aae1
    IMUL EDX                            ; 0055aae4
    IDIV EBX                            ; 0055aae6
    MOV dword ptr [ESI + 0x4],EAX       ; 0055aae8
    PUSH ESI                            ; 0055aaeb
    MOV dword ptr [ESI + 0x8],ECX       ; 0055aaec
    CALL engine_matrix.c_projectTransformedPoint_FUN_00507b50 ; 0055aaef
        ;   XREF to: 00507b50 (UNCONDITIONAL_CALL)  ; undefined engine_matrix.c_projectTransformedPoint_FUN_00507b50()
    ADD ESP,0x4                         ; 0055aaf4
    ADD EDI,0x30                        ; 0055aaf7
        ;   Label: LAB_0055aaf7
    CMP EDI,0x180                       ; 0055aafa
    JNZ 0x0055aaba                      ; 0055ab00
        ;   XREF to: 0055aaba (CONDITIONAL_JUMP)  ; LAB_0055aaba
    MOV EDX,0x3f800000                  ; 0055ab02
    XOR EAX,EAX                         ; 0055ab07
    MOV dword ptr [ESP + 0x8],EDX       ; 0055ab09
    MOV EDX,dword ptr [0x00612560]      ; 0055ab0d | DAT_00612560
        ;   Label: LAB_0055ab0d
    MOV EDX,dword ptr [EDX]             ; 0055ab13 | DAT_01bc120c
    ADD EDX,EAX                         ; 0055ab15
    TEST byte ptr [EDX + 0x13],0x80     ; 0055ab17
    JZ 0x0055ab35                       ; 0055ab1b
        ;   XREF to: 0055ab35 (CONDITIONAL_JUMP)  ; LAB_0055ab35
    CMP dword ptr [EDX + 0x8],0x0       ; 0055ab1d
    JLE 0x0055af31                      ; 0055ab21
        ;   XREF to: 0055af31 (CONDITIONAL_JUMP)  ; LAB_0055af31
    FLD float ptr [ESP + 0x8]           ; 0055ab27
    FMUL double ptr [0x005f0ff5]        ; 0055ab2b | DAT_005f0ff5
    FSTP float ptr [ESP + 0x8]          ; 0055ab31
        ;   Label: LAB_0055ab31
    ADD EAX,0x30                        ; 0055ab35
        ;   Label: LAB_0055ab35
    CMP EAX,0x180                       ; 0055ab38
    JNZ 0x0055ab0d                      ; 0055ab3d
        ;   XREF to: 0055ab0d (CONDITIONAL_JUMP)  ; LAB_0055ab0d
    XOR EBX,EBX                         ; 0055ab3f
    MOV EDI,dword ptr [0x0268ece8]      ; 0055ab41 | DAT_0268ece8
    MOV dword ptr [ESP + 0x38c],EBX     ; 0055ab47
    MOV dword ptr [ESP + 0x324],EBX     ; 0055ab4e
    TEST EDI,EDI                        ; 0055ab55
    JLE 0x0055ad65                      ; 0055ab57
        ;   XREF to: 0055ad65 (CONDITIONAL_JUMP)  ; LAB_0055ad65
    IMUL EAX,dword ptr [ESP + 0x30c],0x3000 ; 0055ab5d
    MOV EDX,0x20b28f4                   ; 0055ab68
    MOV ESI,0x2690c2c                   ; 0055ab6d
    MOV dword ptr [ESP + 0x380],EBX     ; 0055ab72
    ADD EDX,EAX                         ; 0055ab79
    MOV EAX,dword ptr [ESP + 0x310]     ; 0055ab7b
    MOV dword ptr [ESP + 0x384],ESI     ; 0055ab82
    ADD EAX,0x100                       ; 0055ab89
    MOV dword ptr [ESP + 0x36c],EDX     ; 0055ab8e
    MOV dword ptr [ESP + 0x354],EAX     ; 0055ab95
    MOV EAX,dword ptr [ESP + 0x380]     ; 0055ab9c
        ;   Label: LAB_0055ab9c
    MOV EAX,dword ptr [EAX + 0x268ecec] ; 0055aba3
    MOV EDX,dword ptr [ESP + 0x354]     ; 0055aba9
    FLD float ptr [EAX + 0x20]          ; 0055abb0
    FSUB float ptr [EDX]                ; 0055abb3
    FMUL ST0                            ; 0055abb5
    FLD float ptr [EAX + 0x24]          ; 0055abb7
    FSUB float ptr [EDX + 0x4]          ; 0055abba
    FMUL ST0                            ; 0055abbd
    FLD float ptr [EAX + 0x28]          ; 0055abbf
    FXCH                                ; 0055abc2
    FADDP ST2,ST0                       ; 0055abc4
    FSUB float ptr [EDX + 0x8]          ; 0055abc6
    FMUL ST0                            ; 0055abc9
    FADDP                               ; 0055abcb
    MOV dword ptr [ESP + 0x344],EAX     ; 0055abcd
    FCOMP float ptr [ESP + 0x358]       ; 0055abd4
    FNSTSW AX                           ; 0055abdb
    SAHF                                ; 0055abdd
    JA 0x0055ad26                       ; 0055abde
        ;   XREF to: 0055ad26 (CONDITIONAL_JUMP)  ; LAB_0055ad26
    MOV EDI,dword ptr [ESP + 0x344]     ; 0055abe4
    PUSH EDI                            ; 0055abeb
    MOV EBX,0x180                       ; 0055abec
    CALL core_actor.cpp_CDemonActor_setupRenderState_FUN_004087b0 ; 0055abf1
        ;   XREF to: 004087b0 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_CDemonActor_setupRenderState_FUN_004087b0(CDemonActor * this_ptr)
    MOV EAX,0x800000ff                  ; 0055abf6
    ADD ESP,0x4                         ; 0055abfb
    XOR EDX,EDX                         ; 0055abfe
    MOV dword ptr [ESP + 0x348],EAX     ; 0055ac00
    MOV dword ptr [ESP + 0x34c],EDX     ; 0055ac07
    MOV dword ptr [ESP + 0x350],EDX     ; 0055ac0e
    MOV EAX,dword ptr [ESP + 0x384]     ; 0055ac15
    MOV dword ptr [ESP + 0x37c],EBX     ; 0055ac1c
    MOV dword ptr [ESP + 0x368],EAX     ; 0055ac23
    MOV EBX,dword ptr [ESP + 0x350]     ; 0055ac2a
        ;   Label: LAB_0055ac2a
    PUSH EBX                            ; 0055ac31
    MOV ESI,dword ptr [ESP + 0x36c]     ; 0055ac32
    LEA EDI,[ESP + 0x224]               ; 0055ac39
    PUSH ESI                            ; 0055ac40
    LEA ESI,[ESP + 0x234]               ; 0055ac41
    LEA EBX,[ESP + 0x288]               ; 0055ac48
    CALL core_box.cpp_FUN_00420570      ; 0055ac4f
        ;   XREF to: 00420570 (UNCONDITIONAL_CALL)  ; undefined core_box.cpp_FUN_00420570()
    LEA ESI,[ESP + 0x234]               ; 0055ac54
    LEA EAX,[ESP + 0x228]               ; 0055ac5b
    ADD ESP,0x8                         ; 0055ac62
    MOV EDX,dword ptr [0x00612560]      ; 0055ac65 | DAT_00612560
    MOVSD ES:EDI,ESI                    ; 0055ac6b
    MOVSD ES:EDI,ESI                    ; 0055ac6c
    MOVSD ES:EDI,ESI                    ; 0055ac6d
    FLD float ptr [EAX]                 ; 0055ac6e
    FMUL float ptr [0x00605120]         ; 0055ac70 | DAT_00605120
    FISTP dword ptr [EBX]               ; 0055ac76
    FLD float ptr [EAX + 0x4]           ; 0055ac78
    FMUL float ptr [0x00605120]         ; 0055ac7b | DAT_00605120
    FISTP dword ptr [EBX + 0x4]         ; 0055ac81
    FLD float ptr [EAX + 0x8]           ; 0055ac84
    FMUL float ptr [0x00605120]         ; 0055ac87 | DAT_00605120
    FISTP dword ptr [EBX + 0x8]         ; 0055ac8d
    LEA EAX,[ESP + 0x280]               ; 0055ac90
    MOV EDI,dword ptr [ESP + 0x37c]     ; 0055ac97
    PUSH EAX                            ; 0055ac9e
    MOV EAX,dword ptr [EDX]             ; 0055ac9f | DAT_01bc120c
    ADD EAX,EDI                         ; 0055aca1
    PUSH EAX                            ; 0055aca3
    CALL engine_special.cpp_FUN_00580173 ; 0055aca4
        ;   XREF to: 00580173 (UNCONDITIONAL_CALL)  ; void engine_special.cpp_FUN_00580173(SProjectedVertex * output, CVector3i * input)
    MOV EAX,[0x00612560]                ; 0055aca9 | DAT_00612560
    ADD ESP,0x8                         ; 0055acae
    MOV EAX,dword ptr [EAX]             ; 0055acb1 | DAT_01bc120c
    MOV ECX,dword ptr [ESP + 0x348]     ; 0055acb3
    ADD EAX,EDI                         ; 0055acba
    MOV EBX,dword ptr [ESP + 0x34c]     ; 0055acbc
    LEA ESI,[EDI + 0x30]                ; 0055acc3
    MOV EDX,dword ptr [EAX + 0x10]      ; 0055acc6
    MOV EDI,dword ptr [ESP + 0x350]     ; 0055acc9
    MOV dword ptr [ESP + 0x37c],ESI     ; 0055acd0
    AND ECX,EDX                         ; 0055acd7
    OR EBX,EDX                          ; 0055acd9
    MOV dword ptr [ESP + 0x348],ECX     ; 0055acdb
    INC EDI                             ; 0055ace2
    MOV dword ptr [ESP + 0x34c],EBX     ; 0055ace3
    MOV dword ptr [ESP + 0x350],EDI     ; 0055acea
    CMP EDI,0x8                         ; 0055acf1
    JL 0x0055ac2a                       ; 0055acf4
        ;   XREF to: 0055ac2a (CONDITIONAL_JUMP)  ; LAB_0055ac2a
    MOV EDX,dword ptr [ESP + 0x344]     ; 0055acfa
    PUSH EDX                            ; 0055ad01
    CALL core_actor.cpp_CDemonActor_restoreRenderState_FUN_004087f0 ; 0055ad02
        ;   XREF to: 004087f0 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_CDemonActor_restoreRenderState_FUN_004087f0(CDemonActor * this_ptr)
    ADD ESP,0x4                         ; 0055ad07
    TEST byte ptr [ESP + 0x34b],0x80    ; 0055ad0a
    JZ 0x0055af40                       ; 0055ad12
        ;   XREF to: 0055af40 (CONDITIONAL_JUMP)  ; LAB_0055af40
    TEST byte ptr [ESP + 0x348],0xff    ; 0055ad18
    JZ 0x0055af40                       ; 0055ad20
        ;   XREF to: 0055af40 (CONDITIONAL_JUMP)  ; LAB_0055af40
    MOV EAX,dword ptr [ESP + 0x380]     ; 0055ad26
        ;   Label: LAB_0055ad26
    MOV EDX,dword ptr [ESP + 0x384]     ; 0055ad2d
    MOV ECX,dword ptr [ESP + 0x38c]     ; 0055ad34
    MOV EBX,dword ptr [0x0268ece8]      ; 0055ad3b | DAT_0268ece8
    ADD EAX,0x4                         ; 0055ad41
    ADD EDX,0x18                        ; 0055ad44
    INC ECX                             ; 0055ad47
    MOV dword ptr [ESP + 0x380],EAX     ; 0055ad48
    MOV dword ptr [ESP + 0x384],EDX     ; 0055ad4f
    MOV dword ptr [ESP + 0x38c],ECX     ; 0055ad56
    CMP ECX,EBX                         ; 0055ad5d
    JL 0x0055ab9c                       ; 0055ad5f
        ;   XREF to: 0055ab9c (CONDITIONAL_JUMP)  ; LAB_0055ab9c
    PUSH 0x0                            ; 0055ad65
        ;   Label: LAB_0055ad65
    MOV ESI,dword ptr [0x00612560]      ; 0055ad67 | DAT_00612560
    PUSH ESI                            ; 0055ad6d | DAT_01bc120c
    CALL engine_drender.cpp_CDemonRenderer_setRenderingState_FUN_00483d80 ; 0055ad6e
        ;   XREF to: 00483d80 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_setRenderingState_FUN_00483d80(CDemonRenderer * this_ptr, int state_flag)
    ADD ESP,0x8                         ; 0055ad73
    CMP dword ptr [ESP + 0x324],0x0     ; 0055ad76
    JNZ 0x0055adaa                      ; 0055ad7e
        ;   XREF to: 0055adaa (CONDITIONAL_JUMP)  ; LAB_0055adaa
    IMUL EAX,dword ptr [ESP + 0x30c],0x3000 ; 0055ad80
    MOV EDX,0x20b28f4                   ; 0055ad8b
    ADD EDX,EAX                         ; 0055ad90
    XOR EAX,EAX                         ; 0055ad92
    MOV dword ptr [EAX + 0x1c4480c],EDX ; 0055ad94 | DAT_01c4480c | DAT_01c44810
        ;   Label: LAB_0055ad94
    ADD EAX,0x4                         ; 0055ad9a
    ADD EDX,0x100                       ; 0055ad9d
    CMP EAX,0xc0                        ; 0055ada3
    JNZ 0x0055ad94                      ; 0055ada8
        ;   XREF to: 0055ad94 (CONDITIONAL_JUMP)  ; LAB_0055ad94
    PUSH 0x1                            ; 0055adaa
        ;   Label: LAB_0055adaa
    MOV ESI,dword ptr [0x00612560]      ; 0055adac | DAT_00612560
    PUSH ESI                            ; 0055adb2 | DAT_01bc120c
    CALL engine_drender.cpp_CDemonRenderer_setRenderingState_FUN_00483d80 ; 0055adb3
        ;   XREF to: 00483d80 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_setRenderingState_FUN_00483d80(CDemonRenderer * this_ptr, int state_flag)
    ADD ESP,0x8                         ; 0055adb8
    TEST byte ptr [ESP + 0x31f],0x80    ; 0055adbb
    SETNZ AL                            ; 0055adc3
    AND EAX,0xff                        ; 0055adc6
    PUSH EAX                            ; 0055adcb
    MOV EDI,dword ptr [0x00612560]      ; 0055adcc | DAT_00612560
    PUSH EDI                            ; 0055add2 | DAT_01bc120c
    CALL engine_drender.cpp_CDemonRenderer_enableFaceCapture_FUN_00483e20 ; 0055add3
        ;   XREF to: 00483e20 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_enableFaceCapture_FUN_00483e20(CDemonRenderer * this_ptr, int enabled)
    ADD ESP,0x8                         ; 0055add8
    XOR EAX,EAX                         ; 0055addb
    MOV EDX,dword ptr [ESP + 0x320]     ; 0055addd
    MOV dword ptr [ESP + 0x328],EAX     ; 0055ade4
    TEST EDX,EDX                        ; 0055adeb
    JLE 0x0055ae26                      ; 0055aded
        ;   XREF to: 0055ae26 (CONDITIONAL_JUMP)  ; LAB_0055ae26
    LEA ESI,[EDX*0x4 + 0x0]             ; 0055adef
    XOR EBX,EBX                         ; 0055adf6
    MOV ECX,dword ptr [ESP + EBX*0x1 + 0x1c0] ; 0055adf8
        ;   Label: LAB_0055adf8
    PUSH ECX                            ; 0055adff | DAT_00622fdc | DAT_00623024
    MOV EDI,dword ptr [0x00612560]      ; 0055ae00 | DAT_00612560
    PUSH EDI                            ; 0055ae06 | DAT_01bc120c
    CALL engine_drender.cpp_CDemonRenderer_countVisiblePixelsPoly_FUN_00481db0 ; 0055ae07
        ;   XREF to: 00481db0 (UNCONDITIONAL_CALL)  ; int engine_drender.cpp_CDemonRenderer_countVisiblePixelsPoly_FUN_00481db0(CDemonRenderer * this_ptr, SMRGLPrimitivePoly * poly)
    ADD ESP,0x8                         ; 0055ae0c
    MOV EDX,dword ptr [ESP + 0x328]     ; 0055ae0f
    ADD EDX,EAX                         ; 0055ae16
    ADD EBX,0x4                         ; 0055ae18
    MOV dword ptr [ESP + 0x328],EDX     ; 0055ae1b
    CMP EBX,ESI                         ; 0055ae22
    JL 0x0055adf8                       ; 0055ae24
        ;   XREF to: 0055adf8 (CONDITIONAL_JUMP)  ; LAB_0055adf8
    MOV EAX,[0x0061d95c]                ; 0055ae26 | g_CGamePtr
        ;   Label: LAB_0055ae26
    CMP dword ptr [EAX + 0x204],0x0     ; 0055ae2b | g_CGameInstance.field516_0x204
    JZ 0x0055aeb2                       ; 0055ae32
        ;   XREF to: 0055aeb2 (CONDITIONAL_JUMP)  ; LAB_0055aeb2
    IMUL EDX,dword ptr [ESP + 0x30c],0x3000 ; 0055ae38
    ADD EDX,0x23a08f4                   ; 0055ae43
    XOR EBX,EBX                         ; 0055ae49
    MOV ECX,0x100                       ; 0055ae4b
        ;   Label: LAB_0055ae4b
    MOV EDI,EDX                         ; 0055ae50
    MOV ESI,dword ptr [EBX + 0x1c4480c] ; 0055ae52 | DAT_01c4480c | DAT_01c44810
    ADD EBX,0x4                         ; 0055ae58
    PUSH EDI                            ; 0055ae5b
    MOV EAX,ECX                         ; 0055ae5c
    SHR ECX,0x2                         ; 0055ae5e
    MOVSD.REP ES:EDI,ESI                ; 0055ae61
    MOV CL,AL                           ; 0055ae63
    AND CL,0x3                          ; 0055ae65
    MOVSB.REP ES:EDI,ESI                ; 0055ae68
    POP EDI                             ; 0055ae6a
    MOV dword ptr [EBX + 0x1c44808],EDX ; 0055ae6b | DAT_01c4480c
    ADD EDX,0x100                       ; 0055ae71
    CMP EBX,0xc0                        ; 0055ae77
    JNZ 0x0055ae4b                      ; 0055ae7d
        ;   XREF to: 0055ae4b (CONDITIONAL_JUMP)  ; LAB_0055ae4b
    MOV ESI,dword ptr [ESP + 0x320]     ; 0055ae7f
    XOR EBX,EBX                         ; 0055ae86
    TEST ESI,ESI                        ; 0055ae88
    JLE 0x0055aeb2                      ; 0055ae8a
        ;   XREF to: 0055aeb2 (CONDITIONAL_JUMP)  ; LAB_0055aeb2
    MOV ESI,dword ptr [ESP + 0x308]     ; 0055ae8c
    PUSH ESI                            ; 0055ae93 | DAT_00622fdc | DAT_00623024
        ;   Label: LAB_0055ae93
    MOV EDI,dword ptr [0x00612560]      ; 0055ae94 | DAT_00612560
    PUSH EDI                            ; 0055ae9a | DAT_01bc120c
    CALL engine_drender.cpp_CDemonRenderer_renderSolidColorPoly_FUN_00481c00 ; 0055ae9b
        ;   XREF to: 00481c00 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_renderSolidColorPoly_FUN_00481c00(CDemonRenderer * this_ptr, SMRGLPrimitivePoly * poly)
    ADD ESP,0x8                         ; 0055aea0
    INC EBX                             ; 0055aea3
    MOV EAX,dword ptr [ESP + 0x320]     ; 0055aea4
    ADD ESI,0x48                        ; 0055aeab
    CMP EBX,EAX                         ; 0055aeae
    JL 0x0055ae93                       ; 0055aeb0
        ;   XREF to: 0055ae93 (CONDITIONAL_JUMP)  ; LAB_0055ae93
    PUSH 0x1                            ; 0055aeb2
        ;   Label: LAB_0055aeb2
    MOV EDX,dword ptr [0x00612560]      ; 0055aeb4 | DAT_00612560
    PUSH EDX                            ; 0055aeba | DAT_01bc120c
    CALL engine_drender.cpp_CDemonRenderer_enableFaceCapture_FUN_00483e20 ; 0055aebb
        ;   XREF to: 00483e20 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_enableFaceCapture_FUN_00483e20(CDemonRenderer * this_ptr, int enabled)
    ADD ESP,0x8                         ; 0055aec0
    PUSH 0x0                            ; 0055aec3
    MOV ECX,dword ptr [0x00612560]      ; 0055aec5 | DAT_00612560
    PUSH ECX                            ; 0055aecb | DAT_01bc120c
    CALL engine_drender.cpp_CDemonRenderer_setRenderingState_FUN_00483d80 ; 0055aecc
        ;   XREF to: 00483d80 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_setRenderingState_FUN_00483d80(CDemonRenderer * this_ptr, int state_flag)
    ADD ESP,0x8                         ; 0055aed1
    MOV EAX,dword ptr [ESP + 0x328]     ; 0055aed4
    MOV dword ptr [ESP + 0x394],EAX     ; 0055aedb
    FILD dword ptr [ESP + 0x394]        ; 0055aee2
    FMUL float ptr [ESP + 0x8]          ; 0055aee9
    FSTP float ptr [ESP + 0x314]        ; 0055aeed
    JMP 0x0055a908                      ; 0055aef4
        ;   XREF to: 0055a908 (UNCONDITIONAL_JUMP)  ; LAB_0055a908
    MOV dword ptr [ESP + 0x314],EAX     ; 0055aef9
        ;   Label: LAB_0055aef9
    JMP 0x0055a908                      ; 0055af00
        ;   XREF to: 0055a908 (UNCONDITIONAL_JUMP)  ; LAB_0055a908
    TEST byte ptr [ESP + 0x318],0xff    ; 0055af05
        ;   Label: LAB_0055af05
    JZ 0x0055aa70                       ; 0055af0d
        ;   XREF to: 0055aa70 (CONDITIONAL_JUMP)  ; LAB_0055aa70
    MOV EDI,dword ptr [ESP + 0x304]     ; 0055af13
    PUSH EDI                            ; 0055af1a
    CALL core_actor.cpp_CDemonActor_restoreRenderState_FUN_004087f0 ; 0055af1b
        ;   XREF to: 004087f0 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_CDemonActor_restoreRenderState_FUN_004087f0(CDemonActor * this_ptr)
    ADD ESP,0x4                         ; 0055af20
    XOR EAX,EAX                         ; 0055af23
    MOV dword ptr [ESP + 0x314],EAX     ; 0055af25
    JMP 0x0055a908                      ; 0055af2c
        ;   XREF to: 0055a908 (UNCONDITIONAL_JUMP)  ; LAB_0055a908
    FLD float ptr [ESP + 0x8]           ; 0055af31
        ;   Label: LAB_0055af31
    FMUL double ptr [0x005f0ffd]        ; 0055af35 | DAT_005f0ffd
    JMP 0x0055ab31                      ; 0055af3b
        ;   XREF to: 0055ab31 (UNCONDITIONAL_JUMP)  ; LAB_0055ab31
    CMP dword ptr [ESP + 0x324],0x0     ; 0055af40
        ;   Label: LAB_0055af40
    JNZ 0x0055afa2                      ; 0055af48
        ;   XREF to: 0055afa2 (CONDITIONAL_JUMP)  ; LAB_0055afa2
    MOV ECX,0x3000                      ; 0055af4a
    MOV ESI,dword ptr [ESP + 0x36c]     ; 0055af4f
    MOV EDI,0x20af8ec                   ; 0055af56
    MOV EBX,0x1                         ; 0055af5b
    PUSH EDI                            ; 0055af60 | DAT_020af8ec
    MOV EAX,ECX                         ; 0055af61
    SHR ECX,0x2                         ; 0055af63
    MOVSD.REP ES:EDI,ESI                ; 0055af66 | DAT_020af8ec | DAT_020af8f0
    MOV CL,AL                           ; 0055af68
    AND CL,0x3                          ; 0055af6a
    MOVSB.REP ES:EDI,ESI                ; 0055af6d | DAT_020af8f0 | DAT_020af8f1
    POP EDI                             ; 0055af6f
    MOV EDX,EDI                         ; 0055af70
    MOV dword ptr [ESP + 0x324],EBX     ; 0055af72
    XOR EAX,EAX                         ; 0055af79
    MOV dword ptr [EAX + 0x1c4480c],EDX ; 0055af7b | DAT_01c4480c | DAT_020af8ec | DAT_01c44810
        ;   Label: LAB_0055af7b
    ADD EAX,0x4                         ; 0055af81
    ADD EDX,0x100                       ; 0055af84
    CMP EAX,0xc0                        ; 0055af8a
    JNZ 0x0055af7b                      ; 0055af8f
        ;   XREF to: 0055af7b (CONDITIONAL_JUMP)  ; LAB_0055af7b
    PUSH 0x1                            ; 0055af91
    MOV ESI,dword ptr [0x00612560]      ; 0055af93 | DAT_00612560
    PUSH ESI                            ; 0055af99 | DAT_01bc120c
    CALL engine_drender.cpp_CDemonRenderer_setRenderingState_FUN_00483d80 ; 0055af9a
        ;   XREF to: 00483d80 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_setRenderingState_FUN_00483d80(CDemonRenderer * this_ptr, int state_flag)
    ADD ESP,0x8                         ; 0055af9f
    MOV EDI,0x4                         ; 0055afa2
        ;   Label: LAB_0055afa2
    MOV AH,byte ptr [ESP + 0x34f]       ; 0055afa7
    MOV dword ptr [ESP + 0x13c],EDI     ; 0055afae
    TEST AH,0x80                        ; 0055afb5
    SETNZ AL                            ; 0055afb8
    AND EAX,0xff                        ; 0055afbb
    PUSH EAX                            ; 0055afc0
    MOV EAX,[0x00612560]                ; 0055afc1 | DAT_00612560
    PUSH EAX                            ; 0055afc6 | DAT_01bc120c
    MOV EBX,0xe                         ; 0055afc7
    MOV ESI,0xa                         ; 0055afcc
    CALL engine_drender.cpp_CDemonRenderer_enableFaceCapture_FUN_00483e20 ; 0055afd1
        ;   XREF to: 00483e20 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_enableFaceCapture_FUN_00483e20(CDemonRenderer * this_ptr, int enabled)
    MOV EDX,0x8                         ; 0055afd6
    MOV ECX,0xc                         ; 0055afdb
    LEA EAX,[ESP + 0x140]               ; 0055afe0
    ADD ESP,0x8                         ; 0055afe7
    MOV EDI,dword ptr [0x00612560]      ; 0055afea | DAT_00612560
    MOV dword ptr [ESP + 0x150],EDX     ; 0055aff0
    PUSH EAX                            ; 0055aff7
    MOV dword ptr [ESP + 0x158],ECX     ; 0055aff8
    MOV dword ptr [ESP + 0x15c],EBX     ; 0055afff
    PUSH EDI                            ; 0055b006 | DAT_01bc120c
    MOV dword ptr [ESP + 0x164],ESI     ; 0055b007
    MOV EBX,0xd                         ; 0055b00e
    CALL engine_drender.cpp_CDemonRenderer_renderSolidColorDepthDirect_FUN_00481b80 ; 0055b013
        ;   XREF to: 00481b80 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_renderSolidColorDepthDirect_FUN_00481b80(CDemonRenderer * this_ptr, SMRGLHeaderPrimitive * prim)
    MOV EAX,0x9                         ; 0055b018
    MOV EDX,0xb                         ; 0055b01d
    ADD ESP,0x8                         ; 0055b022
    MOV ECX,0xf                         ; 0055b025
    MOV dword ptr [ESP + 0x150],EAX     ; 0055b02a
    LEA EAX,[ESP + 0x138]               ; 0055b031
    MOV EDI,0x8                         ; 0055b038
    PUSH EAX                            ; 0055b03d
    MOV ESI,dword ptr [0x00612560]      ; 0055b03e | DAT_00612560
    MOV dword ptr [ESP + 0x158],EDX     ; 0055b044
    PUSH ESI                            ; 0055b04b | DAT_01bc120c
    MOV dword ptr [ESP + 0x160],ECX     ; 0055b04c
    MOV dword ptr [ESP + 0x164],EBX     ; 0055b053
    CALL engine_drender.cpp_CDemonRenderer_renderSolidColorDepthDirect_FUN_00481b80 ; 0055b05a
        ;   XREF to: 00481b80 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_renderSolidColorDepthDirect_FUN_00481b80(CDemonRenderer * this_ptr, SMRGLHeaderPrimitive * prim)
    MOV EAX,0x9                         ; 0055b05f
    MOV ECX,0xc                         ; 0055b064
    ADD ESP,0x8                         ; 0055b069
    MOV ESI,0xa                         ; 0055b06c
    MOV dword ptr [ESP + 0x154],EAX     ; 0055b071
    LEA EAX,[ESP + 0x138]               ; 0055b078
    MOV dword ptr [ESP + 0x158],EBX     ; 0055b07f
    PUSH EAX                            ; 0055b086
    MOV EBX,dword ptr [0x00612560]      ; 0055b087 | DAT_00612560
    MOV dword ptr [ESP + 0x154],EDI     ; 0055b08d
    PUSH EBX                            ; 0055b094 | DAT_01bc120c
    MOV dword ptr [ESP + 0x164],ECX     ; 0055b095
    MOV EDI,0xe                         ; 0055b09c
    CALL engine_drender.cpp_CDemonRenderer_renderSolidColorDepthDirect_FUN_00481b80 ; 0055b0a1
        ;   XREF to: 00481b80 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_renderSolidColorDepthDirect_FUN_00481b80(CDemonRenderer * this_ptr, SMRGLHeaderPrimitive * prim)
    MOV EAX,0xf                         ; 0055b0a6
    MOV EDX,0xb                         ; 0055b0ab
    ADD ESP,0x8                         ; 0055b0b0
    MOV EBX,0x8                         ; 0055b0b3
    MOV dword ptr [ESP + 0x158],EAX     ; 0055b0b8
    LEA EAX,[ESP + 0x138]               ; 0055b0bf
    MOV ECX,dword ptr [0x00612560]      ; 0055b0c6 | DAT_00612560
    PUSH EAX                            ; 0055b0cc
    MOV dword ptr [ESP + 0x154],ESI     ; 0055b0cd
    MOV dword ptr [ESP + 0x158],EDI     ; 0055b0d4
    PUSH ECX                            ; 0055b0db | DAT_01bc120c
    MOV dword ptr [ESP + 0x164],EDX     ; 0055b0dc
    MOV EDI,0xb                         ; 0055b0e3
    CALL engine_drender.cpp_CDemonRenderer_renderSolidColorDepthDirect_FUN_00481b80 ; 0055b0e8
        ;   XREF to: 00481b80 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_renderSolidColorDepthDirect_FUN_00481b80(CDemonRenderer * this_ptr, SMRGLHeaderPrimitive * prim)
    MOV EAX,0x9                         ; 0055b0ed
    ADD ESP,0x8                         ; 0055b0f2
    MOV EDX,dword ptr [0x00612560]      ; 0055b0f5 | DAT_00612560
    MOV dword ptr [ESP + 0x150],EBX     ; 0055b0fb
    MOV dword ptr [ESP + 0x15c],EAX     ; 0055b102
    LEA EAX,[ESP + 0x138]               ; 0055b109
    MOV dword ptr [ESP + 0x154],ESI     ; 0055b110
    PUSH EAX                            ; 0055b117
    MOV dword ptr [ESP + 0x15c],EDI     ; 0055b118
    MOV EBX,0xd                         ; 0055b11f
    PUSH EDX                            ; 0055b124 | DAT_01bc120c
    MOV ESI,0xf                         ; 0055b125
    MOV EDI,0xe                         ; 0055b12a
    CALL engine_drender.cpp_CDemonRenderer_renderSolidColorDepthDirect_FUN_00481b80 ; 0055b12f
        ;   XREF to: 00481b80 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_renderSolidColorDepthDirect_FUN_00481b80(CDemonRenderer * this_ptr, SMRGLHeaderPrimitive * prim)
    MOV ECX,0xc                         ; 0055b134
    ADD ESP,0x8                         ; 0055b139
    LEA EAX,[ESP + 0x138]               ; 0055b13c
    MOV dword ptr [ESP + 0x150],ECX     ; 0055b143
    PUSH EAX                            ; 0055b14a
    MOV EAX,[0x00612560]                ; 0055b14b | DAT_00612560
    MOV dword ptr [ESP + 0x158],EBX     ; 0055b150
    PUSH EAX                            ; 0055b157 | DAT_01bc120c
    MOV dword ptr [ESP + 0x160],ESI     ; 0055b158
    MOV dword ptr [ESP + 0x164],EDI     ; 0055b15f
    CALL engine_drender.cpp_CDemonRenderer_renderSolidColorDepthDirect_FUN_00481b80 ; 0055b166
        ;   XREF to: 00481b80 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_renderSolidColorDepthDirect_FUN_00481b80(CDemonRenderer * this_ptr, SMRGLHeaderPrimitive * prim)
    ADD ESP,0x8                         ; 0055b16b
    JMP 0x0055ad26                      ; 0055b16e
        ;   XREF to: 0055ad26 (UNCONDITIONAL_JUMP)  ; LAB_0055ad26
    MOV dword ptr [ESP],0xc7c34ff3      ; 0055b173
        ;   Label: LAB_0055b173
    JMP 0x0055a912                      ; 0055b17a
        ;   XREF to: 0055a912 (UNCONDITIONAL_JUMP)  ; LAB_0055a912
    FLDZ                                ; 0055b17f
        ;   Label: LAB_0055b17f
    FCOMP float ptr [ESP]               ; 0055b181
    FNSTSW AX                           ; 0055b184
    SAHF                                ; 0055b186
    JNC 0x0055a91c                      ; 0055b187
        ;   XREF to: 0055a91c (CONDITIONAL_JUMP)  ; LAB_0055a91c
    MOV EDX,dword ptr [EBP + 0x14]      ; 0055b18d
    MOV EAX,[0x020b28ec]                ; 0055b190 | DAT_020b28ec
    CMP EAX,dword ptr [EDX + 0x15aeb8]  ; 0055b195
    JNZ 0x0055b1ad                      ; 0055b19b
        ;   XREF to: 0055b1ad (CONDITIONAL_JUMP)  ; LAB_0055b1ad
    FLD float ptr [ESP]                 ; 0055b19d
    FLD ST0                             ; 0055b1a0
    FMUL double ptr [0x005f1005]        ; 0055b1a2 | DAT_005f1005
    FSTP ST1                            ; 0055b1a8
    FSTP float ptr [ESP]                ; 0055b1aa
    MOV EDX,dword ptr [EBP + 0x14]      ; 0055b1ad
        ;   Label: LAB_0055b1ad
    MOV EAX,[0x020b28ec]                ; 0055b1b0 | DAT_020b28ec
    CMP EAX,dword ptr [EDX + 0x15aebc]  ; 0055b1b5
    JNZ 0x0055a91c                      ; 0055b1bb
        ;   XREF to: 0055a91c (CONDITIONAL_JUMP)  ; LAB_0055a91c
    FLD float ptr [ESP]                 ; 0055b1c1
    FLD ST0                             ; 0055b1c4
    FMUL double ptr [0x005f100d]        ; 0055b1c6 | DAT_005f100d
    FSTP ST1                            ; 0055b1cc
    FSTP float ptr [ESP]                ; 0055b1ce
    JMP 0x0055a91c                      ; 0055b1d1
        ;   XREF to: 0055a91c (UNCONDITIONAL_JUMP)  ; LAB_0055a91c

