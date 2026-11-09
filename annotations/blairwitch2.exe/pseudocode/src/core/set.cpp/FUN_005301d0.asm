; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_set_cpp_FUN_005301d0(CDemonSet *param_1)
;
; Local Variables:
; undefined        Stack[-0x60]:1  local_60
; undefined        Stack[-0x48]:1  local_48
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[1]:
;   core_set.cpp_FUN_0052f2a0 at 0052f5ac
;
; Referenced Globals:
;   undefined4 DAT_0060b280
;   CGame* g_CGamePtr = 01cb6900
;   CDemonSet* g_CDemonSetPtr = 01e661b8
;   undefined4 DAT_01ba5c50
;   undefined4 g_CGameInstance.field580_0x244
;   undefined4 DAT_01cedef4
;   undefined4 DAT_0200a3a4
;
; Called Functions:
;   core_set.cpp_CDemonSet_restoreCameraAfterMirror_FUN_005342e0
;   core_set.cpp_CDemonSet_setLightingParameters_FUN_00530980
;   core_set.cpp_FUN_005341b0
;   core_set.cpp_FUN_005344c0
;   engine_drender.cpp_CDemonRenderer_enableFaceCapture_FUN_0046b920
;   engine_drender.cpp_CDemonRenderer_setRenderAlpha_FUN_0046b8e0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005301d0
        ;   Label: core_set.cpp_FUN_005301d0
    PUSH ESI                            ; 005301d1
    PUSH EDI                            ; 005301d2
    PUSH EBP                            ; 005301d3
    SUB ESP,0x50                        ; 005301d4
    MOV EBP,dword ptr [ESP + 0x64]      ; 005301d7
    MOV EAX,[0x00616494]                ; 005301db | g_CGamePtr
    XOR EDX,EDX                         ; 005301e0
    MOV ECX,dword ptr [EAX + 0x244]     ; 005301e2 | g_CGameInstance.field580_0x244
    MOV dword ptr [0x0200a3a4],EDX      ; 005301e8 | DAT_0200a3a4
    TEST ECX,ECX                        ; 005301ee
    JNZ 0x0053021b                      ; 005301f0
        ;   XREF to: 0053021b (CONDITIONAL_JUMP)  ; LAB_0053021b
    MOV EAX,[0x01cedef4]                ; 005301f2 | DAT_01cedef4
    SHL EAX,0x2                         ; 005301f7
    MOV EBX,dword ptr [EAX + 0x1cedee4] ; 005301fa
    TEST EBX,EBX                        ; 00530200
    JZ 0x0053021b                       ; 00530202
        ;   XREF to: 0053021b (CONDITIONAL_JUMP)  ; LAB_0053021b
    MOV ESI,dword ptr [EBX + 0x255f0]   ; 00530204
    MOV EAX,EBX                         ; 0053020a
    TEST ESI,ESI                        ; 0053020c
    JZ 0x0053021b                       ; 0053020e
        ;   XREF to: 0053021b (CONDITIONAL_JUMP)  ; LAB_0053021b
    MOV EAX,dword ptr [EBX + 0x255f8]   ; 00530210
    MOV [0x0200a3a4],EAX                ; 00530216 | DAT_0200a3a4
    MOV EAX,dword ptr [EBP + 0x15f6f8]  ; 0053021b
        ;   Label: LAB_0053021b
    DEC EAX                             ; 00530221
    MOV dword ptr [ESP + 0x4c],EAX      ; 00530222
    TEST EAX,EAX                        ; 00530226
    JL 0x00530265                       ; 00530228
        ;   XREF to: 00530265 (CONDITIONAL_JUMP)  ; LAB_00530265
    SHL EAX,0x2                         ; 0053022a
    ADD EAX,EBP                         ; 0053022d
    MOV dword ptr [ESP + 0x48],EAX      ; 0053022f
    MOV EBX,dword ptr [ESP + 0x48]      ; 00530233
        ;   Label: LAB_00530233
    MOV EBX,dword ptr [EBX + 0x15f6fc]  ; 00530237
    CMP dword ptr [EBX + 0xf8],0x0      ; 0053023d
    JNZ 0x0053026d                      ; 00530244
        ;   XREF to: 0053026d (CONDITIONAL_JUMP)  ; LAB_0053026d
    AND byte ptr [EBX + 0x144],0xfb     ; 00530246
    MOV EAX,dword ptr [ESP + 0x48]      ; 0053024d
        ;   Label: LAB_0053024d
    MOV EDX,dword ptr [ESP + 0x4c]      ; 00530251
    SUB EAX,0x4                         ; 00530255
    DEC EDX                             ; 00530258
    MOV dword ptr [ESP + 0x48],EAX      ; 00530259
    MOV dword ptr [ESP + 0x4c],EDX      ; 0053025d
    TEST EDX,EDX                        ; 00530261
    JGE 0x00530233                      ; 00530263
        ;   XREF to: 00530233 (CONDITIONAL_JUMP)  ; LAB_00530233
    ADD ESP,0x50                        ; 00530265
        ;   Label: LAB_00530265
    POP EBP                             ; 00530268
    POP EDI                             ; 00530269
    POP ESI                             ; 0053026a
    POP EBX                             ; 0053026b
    RET                                 ; 0053026c
    PUSH EBX                            ; 0053026d
        ;   Label: LAB_0053026d
    MOV EAX,dword ptr [EBX + 0x2b0]     ; 0053026e
    LEA ESI,[ESP + 0x4]                 ; 00530274
    LEA EDI,[ESP + 0x1c]                ; 00530278
    CALL dword ptr [EAX + 0x24]         ; 0053027c
    MOV ECX,0x6                         ; 0053027f
    LEA ESI,[ESP + 0x4]                 ; 00530284
    ADD ESP,0x4                         ; 00530288
    MOVSD.REP ES:EDI,ESI                ; 0053028b
    LEA EDX,[ESP + 0x30]                ; 0053028d
    LEA ECX,[ESP + 0x18]                ; 00530291
    CMP EDX,ECX                         ; 00530295
    JZ 0x005302b1                       ; 00530297
        ;   XREF to: 005302b1 (CONDITIONAL_JUMP)  ; LAB_005302b1
    MOV EAX,dword ptr [ESP + 0x18]      ; 00530299
    MOV dword ptr [ESP + 0x30],EAX      ; 0053029d
    MOV EAX,dword ptr [ESP + 0x1c]      ; 005302a1
    MOV dword ptr [ESP + 0x34],EAX      ; 005302a5
    MOV EAX,dword ptr [ESP + 0x20]      ; 005302a9
    MOV dword ptr [ESP + 0x38],EAX      ; 005302ad
    LEA EAX,[ESP + 0x3c]                ; 005302b1
        ;   Label: LAB_005302b1
    LEA EDX,[ECX + 0xc]                 ; 005302b5
    CMP EAX,EDX                         ; 005302b8
    JZ 0x005302d0                       ; 005302ba
        ;   XREF to: 005302d0 (CONDITIONAL_JUMP)  ; LAB_005302d0
    MOV EAX,dword ptr [EDX]             ; 005302bc
    MOV dword ptr [ESP + 0x3c],EAX      ; 005302be
    MOV EAX,dword ptr [EDX + 0x4]       ; 005302c2
    MOV dword ptr [ESP + 0x40],EAX      ; 005302c5
    MOV EAX,dword ptr [EDX + 0x8]       ; 005302c9
    MOV dword ptr [ESP + 0x44],EAX      ; 005302cc
    LEA EAX,[EBX + 0x3c]                ; 005302d0
        ;   Label: LAB_005302d0
    PUSH EAX                            ; 005302d3
    LEA EAX,[ESP + 0x40]                ; 005302d4
    PUSH EAX                            ; 005302d8
    LEA EAX,[ESP + 0x38]                ; 005302d9
    PUSH EAX                            ; 005302dd
    LEA EAX,[EBX + 0x30]                ; 005302de
    PUSH EAX                            ; 005302e1
    LEA EAX,[EBX + 0x20]                ; 005302e2
    PUSH EAX                            ; 005302e5
    PUSH EBP                            ; 005302e6
    CALL core_set.cpp_CDemonSet_setLightingParameters_FUN_00530980 ; 005302e7
        ;   XREF to: 00530980 (UNCONDITIONAL_CALL)  ; void core_set.cpp_CDemonSet_setLightingParameters_FUN_00530980(CDemonSet * this_ptr, CVector3f * position, UOrientationVector * orientation, CVector3f * aabb_min, ...)
    MOV EAX,[0x0200a3a4]                ; 005302ec | DAT_0200a3a4
    ADD ESP,0x18                        ; 005302f1
    MOV EDI,dword ptr [EBX + 0x108]     ; 005302f4
    MOV ESI,dword ptr [EBX + 0x10c]     ; 005302fa
    MOV ECX,dword ptr [EBX + 0x110]     ; 00530300
    CMP EBX,EAX                         ; 00530306
    JNZ 0x00530334                      ; 00530308
        ;   XREF to: 00530334 (CONDITIONAL_JUMP)  ; LAB_00530334
    LEA EDX,[EDI + EDI*0x2]             ; 0053030a
    MOV EAX,EDX                         ; 0053030d
    SAR EDX,0x1f                        ; 0053030f
    SUB EAX,EDX                         ; 00530312
    SAR EAX,0x1                         ; 00530314
    LEA EDX,[ESI + ESI*0x2]             ; 00530316
    MOV EDI,EAX                         ; 00530319
    MOV EAX,EDX                         ; 0053031b
    SAR EDX,0x1f                        ; 0053031d
    SUB EAX,EDX                         ; 00530320
    SAR EAX,0x1                         ; 00530322
    LEA EDX,[ECX + ECX*0x2]             ; 00530324
    MOV ESI,EAX                         ; 00530327
    MOV EAX,EDX                         ; 00530329
    SAR EDX,0x1f                        ; 0053032b
    SUB EAX,EDX                         ; 0053032e
    SAR EAX,0x1                         ; 00530330
    MOV ECX,EAX                         ; 00530332
    PUSH ECX                            ; 00530334
        ;   Label: LAB_00530334
    PUSH ESI                            ; 00530335
    PUSH EDI                            ; 00530336
    MOV EDX,dword ptr [0x0061b5a8]      ; 00530337 | g_CDemonSetPtr
    PUSH EDX                            ; 0053033d
    CALL core_set.cpp_FUN_005344c0      ; 0053033e
        ;   XREF to: 005344c0 (UNCONDITIONAL_CALL)  ; void core_set.cpp_FUN_005344c0(CDemonSet * this_ptr, int light_scale, int color_scale, int fog_scale)
    ADD ESP,0x10                        ; 00530343
    PUSH 0xffff                         ; 00530346
    MOV ECX,dword ptr [0x0060b280]      ; 0053034b | DAT_0060b280
    PUSH ECX                            ; 00530351 | DAT_01ba5c50
    CALL engine_drender.cpp_CDemonRenderer_setRenderAlpha_FUN_0046b8e0 ; 00530352
        ;   XREF to: 0046b8e0 (UNCONDITIONAL_CALL)  ; int engine_drender.cpp_CDemonRenderer_setRenderAlpha_FUN_0046b8e0(CDemonRenderer * this_ptr, int render_alpha)
    ADD ESP,0x8                         ; 00530357
    MOV EAX,dword ptr [EBX + 0x2b0]     ; 0053035a
    PUSH EBX                            ; 00530360
    CALL dword ptr [EAX + 0x18]         ; 00530361
    ADD ESP,0x4                         ; 00530364
    TEST EAX,EAX                        ; 00530367
    JZ 0x005303f8                       ; 00530369
        ;   XREF to: 005303f8 (CONDITIONAL_JUMP)  ; LAB_005303f8
    OR byte ptr [EBX + 0x144],0x4       ; 0053036f
    PUSH 0x1                            ; 00530376
        ;   Label: LAB_00530376
    MOV ESI,dword ptr [0x0060b280]      ; 00530378 | DAT_0060b280
    PUSH ESI                            ; 0053037e | DAT_01ba5c50
    CALL engine_drender.cpp_CDemonRenderer_enableFaceCapture_FUN_0046b920 ; 0053037f
        ;   XREF to: 0046b920 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_enableFaceCapture_FUN_0046b920(CDemonRenderer * this_ptr, int enabled)
    ADD ESP,0x8                         ; 00530384
    MOV EDI,dword ptr [EBP + 0x15acc8]  ; 00530387
    XOR ESI,ESI                         ; 0053038d
    TEST EDI,EDI                        ; 0053038f
    JLE 0x005303db                      ; 00530391
        ;   XREF to: 005303db (CONDITIONAL_JUMP)  ; LAB_005303db
    PUSH 0x0                            ; 00530393
        ;   Label: LAB_00530393
    PUSH ESI                            ; 00530395
    PUSH EBP                            ; 00530396
    CALL core_set.cpp_FUN_005341b0      ; 00530397
        ;   XREF to: 005341b0 (UNCONDITIONAL_CALL)  ; void core_set.cpp_FUN_005341b0(CDemonSet * this_ptr, int mirror_index, int enable_flag)
    ADD ESP,0xc                         ; 0053039c
    MOV EAX,dword ptr [EBX + 0x2b0]     ; 0053039f
    PUSH EBX                            ; 005303a5
    CALL dword ptr [EAX + 0x18]         ; 005303a6
    ADD ESP,0x4                         ; 005303a9
    TEST EAX,EAX                        ; 005303ac
    JZ 0x005303b7                       ; 005303ae
        ;   XREF to: 005303b7 (CONDITIONAL_JUMP)  ; LAB_005303b7
    OR byte ptr [EBX + 0x144],0x4       ; 005303b0
    PUSH 0x1                            ; 005303b7
        ;   Label: LAB_005303b7
    MOV EAX,[0x0060b280]                ; 005303b9 | DAT_0060b280
    PUSH EAX                            ; 005303be | DAT_01ba5c50
    CALL engine_drender.cpp_CDemonRenderer_enableFaceCapture_FUN_0046b920 ; 005303bf
        ;   XREF to: 0046b920 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_enableFaceCapture_FUN_0046b920(CDemonRenderer * this_ptr, int enabled)
    ADD ESP,0x8                         ; 005303c4
    PUSH EBP                            ; 005303c7
    INC ESI                             ; 005303c8
    CALL core_set.cpp_CDemonSet_restoreCameraAfterMirror_FUN_005342e0 ; 005303c9
        ;   XREF to: 005342e0 (UNCONDITIONAL_CALL)  ; void core_set.cpp_CDemonSet_restoreCameraAfterMirror_FUN_005342e0(CDemonSet * this_ptr)
    MOV EDX,dword ptr [EBP + 0x15acc8]  ; 005303ce
    ADD ESP,0x4                         ; 005303d4
    CMP ESI,EDX                         ; 005303d7
    JL 0x00530393                       ; 005303d9
        ;   XREF to: 00530393 (CONDITIONAL_JUMP)  ; LAB_00530393
    PUSH 0x10000                        ; 005303db
        ;   Label: LAB_005303db
    PUSH 0x10000                        ; 005303e0
    PUSH 0x10000                        ; 005303e5
    PUSH EBP                            ; 005303ea
    CALL core_set.cpp_FUN_005344c0      ; 005303eb
        ;   XREF to: 005344c0 (UNCONDITIONAL_CALL)  ; void core_set.cpp_FUN_005344c0(CDemonSet * this_ptr, int light_scale, int color_scale, int fog_scale)
    ADD ESP,0x10                        ; 005303f0
    JMP 0x0053024d                      ; 005303f3
        ;   XREF to: 0053024d (UNCONDITIONAL_JUMP)  ; LAB_0053024d
    AND byte ptr [EBX + 0x144],0xfb     ; 005303f8
        ;   Label: LAB_005303f8
    JMP 0x00530376                      ; 005303ff
        ;   XREF to: 00530376 (UNCONDITIONAL_JUMP)  ; LAB_00530376

