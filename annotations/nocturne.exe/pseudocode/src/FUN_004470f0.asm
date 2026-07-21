; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_004470f0(int param_1)
;
; Local Variables:
; undefined4       Stack[-0x28]:4  local_28
; undefined4       Stack[-0x24]:4  local_24
; undefined4       Stack[-0x20]:4  local_20
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[1]:
;   core_dcamera.cpp_CDemonCamera_lockAndRenderToBuffer_FUN_00445020 at 00445038
;
; Referenced Globals:
;   undefined4 DAT_005ad450
;   undefined4 DAT_005ad454
;   undefined4 DAT_005ad458
;   undefined4 DAT_005b7624
;   undefined4 DAT_00b0e2fc
;   undefined4 DAT_012b0660
;   undefined4 DAT_012b0664
;   undefined4 DAT_012ceb70
;   undefined4 DAT_012ceb74
;   undefined4 DAT_0140d778
;   undefined4 DAT_0140d77c
;   undefined4 DAT_01bd1d80
;   undefined4 DAT_01bd2fa0
;   undefined4 DAT_01c00624
;   undefined4 DAT_01c00630
;   ... and 2 more
;
; Called Functions:
;   core_dcamera.cpp_CDemonCamera_blurCoronaBufferAndClearEdges_FUN_00444810
;   core_dcamera.cpp_updateFogScrollOffset_FUN_0043fe60
;   core_dstrender.cpp_blendHBilerpLightmapSharedU64toU16pBB56Px2MMX_FUN_00465fc9
;   core_dstrender.cpp_blendHBilerpLightmapSharedU64toU64pBB12Px2MMX_FUN_00464afc
;   core_dstrender.cpp_blendLightmapPerPxU32toU16pBB12Px2MMX_FUN_00466930
;   core_dstrender.cpp_blendLightmapPerPxU32toU32BB12Px2MMX_FUN_004657a7
;   core_dstrender.cpp_blendLightmapPerPxU64toU16pAmbientPx2MMX_FUN_00466e94
;   core_dstrender.cpp_blendLightmapPerPxU64toU32AmbientPx2MMX_FUN_00465c9b
;   core_dstrender.cpp_blendVHBilerpLightmapSharedU64toU16pBB34Px2MMX_FUN_00466520
;   core_dstrender.cpp_blendVHBilerpLightmapSharedU64toU64pAmbientPx2MMX_FUN_00464fda
;   FUN_00447bb0
;   FUN_00447c60
;
; *****************************************************************************

section .text

    ADD ESP,0x18                        ; 004445f1
        ;   Label: LAB_004445f1
    POP EBP                             ; 004445f4
    POP EDI                             ; 004445f5
    POP ESI                             ; 004445f6
    POP EBX                             ; 004445f7
    RET                                 ; 004445f8
    PUSH EBX                            ; 004470f0
        ;   Label: FUN_004470f0
    PUSH ESI                            ; 004470f1
    PUSH EDI                            ; 004470f2
    PUSH EBP                            ; 004470f3
    SUB ESP,0x18                        ; 004470f4
    MOV EDI,dword ptr [ESP + 0x2c]      ; 004470f7
    MOV EAX,[0x01bd1d80]                ; 004470fb | DAT_01bd1d80
    MOV EDX,dword ptr [0x0140d77c]      ; 00447100 | DAT_0140d77c
    SHL EAX,0x2                         ; 00447106
    ADD EDX,EAX                         ; 00447109
    XOR ESI,ESI                         ; 0044710b
    MOV dword ptr [0x0140d77c],EDX      ; 0044710d | DAT_0140d77c
    CMP EDX,0x10000                     ; 00447113
    JLE 0x0044715a                      ; 00447119
        ;   XREF to: 0044715a (CONDITIONAL_JUMP)  ; LAB_0044715a
    MOV EBP,dword ptr [0x0140d778]      ; 0044711b | DAT_0140d778
    LEA EBX,[EDX + 0xffff0000]          ; 00447121
    INC EBP                             ; 00447127
    MOV dword ptr [0x0140d77c],EBX      ; 00447128 | DAT_0140d77c
    MOV dword ptr [0x0140d778],EBP      ; 0044712e | DAT_0140d778
    CMP EBP,0x10                        ; 00447134
    JL 0x0044713f                       ; 00447137
        ;   XREF to: 0044713f (CONDITIONAL_JUMP)  ; LAB_0044713f
    MOV dword ptr [0x0140d778],ESI      ; 00447139 | DAT_0140d778
    MOV ECX,dword ptr [0x0140d77c]      ; 0044713f | DAT_0140d77c
        ;   Label: LAB_0044713f
    PUSH ECX                            ; 00447145
    MOV EBX,dword ptr [0x0140d778]      ; 00447146 | DAT_0140d778
    PUSH EBX                            ; 0044714c
    PUSH 0x140d784                      ; 0044714d
    CALL core_dcamera.cpp_updateFogScrollOffset_FUN_0043fe60 ; 00447152
        ;   XREF to: 0043fe60 (UNCONDITIONAL_CALL)  ; undefined core_dcamera.cpp_updateFogScrollOffset_FUN_0043fe60()
    ADD ESP,0xc                         ; 00447157
    PUSH EDI                            ; 0044715a
        ;   Label: LAB_0044715a
    CALL core_dcamera.cpp_CDemonCamera_blurCoronaBufferAndClearEdges_FUN_00444810 ; 0044715b
        ;   XREF to: 00444810 (UNCONDITIONAL_CALL)  ; undefined core_dcamera.cpp_CDemonCamera_blurCoronaBufferAndClearEdges_FUN_00444810()
    MOV EAX,[0x005ad458]                ; 00447160 | DAT_005ad458
    MOV ECX,dword ptr [0x005ad450]      ; 00447165 | DAT_005ad450
    MOV EDX,dword ptr [0x005b7624]      ; 0044716b | DAT_005b7624
    ADD ESP,0x4                         ; 00447171
    MOV EBP,dword ptr [EAX*0x4 + 0xb0e1fc] ; 00447174 | DAT_00b0e2fc
    MOV EAX,[0x005ad454]                ; 0044717b | DAT_005ad454
    MOV EBX,dword ptr [ECX*0x4 + 0xb0e1fc] ; 00447180 | DAT_00b0e2fc
    AND EBP,0xff                        ; 00447187
    MOV EAX,dword ptr [EAX*0x4 + 0xb0e1fc] ; 0044718d | DAT_00b0e2fc
    AND EBX,0xff                        ; 00447194
    AND EAX,0xff                        ; 0044719a
    CMP EDX,0x20                        ; 0044719f
    JNZ 0x004472a3                      ; 004471a2
        ;   XREF to: 004472a3 (CONDITIONAL_JUMP)  ; LAB_004472a3
    MOV CL,byte ptr [0x01c00624]        ; 004471a8 | DAT_01c00624
    SHL EBX,CL                          ; 004471ae
    MOV CL,byte ptr [0x01c00630]        ; 004471b0 | DAT_01c00630
    SHL EAX,CL                          ; 004471b6
    MOV CL,byte ptr [0x01c0063c]        ; 004471b8 | DAT_01c0063c
    SHL EBP,CL                          ; 004471be
    OR EAX,EBX                          ; 004471c0
    MOV ECX,EBP                         ; 004471c2
    OR ECX,EAX                          ; 004471c4
    MOV dword ptr [0x01c039a8],ECX      ; 004471c6 | DAT_01c039a8
        ;   Label: LAB_004471c6
    CMP dword ptr [0x005b7624],0x10     ; 004471cc | DAT_005b7624
    JNZ 0x0044735e                      ; 004471d3
        ;   XREF to: 0044735e (CONDITIONAL_JUMP)  ; LAB_0044735e
    MOV EBP,0x1                         ; 004471d9
    MOV EAX,dword ptr [EDI + 0x140]     ; 004471de
        ;   Label: LAB_004471de
    DEC EAX                             ; 004471e4
    CMP EBP,EAX                         ; 004471e5
    JGE 0x004445f1                      ; 004471e7
        ;   XREF to: 004445f1 (CONDITIONAL_JUMP)  ; LAB_004445f1
    MOV EAX,dword ptr [EDI + 0x148]     ; 004471ed
    MOV ECX,dword ptr [0x012ceb74]      ; 004471f3 | DAT_012ceb74
    ADD EAX,EBP                         ; 004471f9
    MOV EBX,dword ptr [EDI + 0x144]     ; 004471fb
    SUB EAX,ECX                         ; 00447201
    ADD EBX,EBX                         ; 00447203
    MOV EAX,dword ptr [EAX*0x4 + 0x1bd2fa0] ; 00447205 | DAT_01bd2fa0
    ADD EBX,EAX                         ; 0044720c
    MOV EAX,[0x012ceb70]                ; 0044720e | DAT_012ceb70
    ADD EAX,EAX                         ; 00447213
    ADD EBX,EAX                         ; 00447215
    MOV EAX,dword ptr [EDI + 0x13c]     ; 00447217
    IMUL EAX,EBP                        ; 0044721d
    MOV dword ptr [ESP + 0xc],EBX       ; 00447220
    MOV EBX,dword ptr [EDI + 0x158]     ; 00447224
    SHL EAX,0x2                         ; 0044722a
    MOV CL,byte ptr [0x012b0660]        ; 0044722d | DAT_012b0660
    ADD EBX,EAX                         ; 00447233
    MOV EAX,EBP                         ; 00447235
    SAR EAX,CL                          ; 00447237
    IMUL EAX,EAX,0x140                  ; 00447239
    MOV dword ptr [ESP + 0x14],EBX      ; 0044723f
    MOV ECX,0x12ceb78                   ; 00447243
    MOV EBX,0xaafdb8                    ; 00447248
    ADD ECX,EAX                         ; 0044724d
    ADD EBX,EAX                         ; 0044724f
    MOV dword ptr [ESP + 0x10],ECX      ; 00447251
    TEST EBP,0x1                        ; 00447255
    JNZ 0x004472d5                      ; 0044725b
        ;   XREF to: 004472d5 (CONDITIONAL_JUMP)  ; LAB_004472d5
    CMP dword ptr [EDI + 0x14c],0x1     ; 00447261
    JNZ 0x00447285                      ; 00447268
        ;   XREF to: 00447285 (CONDITIONAL_JUMP)  ; LAB_00447285
    MOV EDX,dword ptr [EDI + 0x13c]     ; 0044726a
    PUSH EDX                            ; 00447270
    PUSH ECX                            ; 00447271
    PUSH EBX                            ; 00447272
    MOV EAX,dword ptr [ESP + 0x20]      ; 00447273
    PUSH EAX                            ; 00447277
    MOV EDX,dword ptr [ESP + 0x1c]      ; 00447278
    PUSH EDX                            ; 0044727c
    CALL core_dstrender.cpp_blendLightmapPerPxU32toU16pBB12Px2MMX_FUN_00466930 ; 0044727d
        ;   XREF to: 00466930 (UNCONDITIONAL_CALL)  ; undefined core_dstrender.cpp_blendLightmapPerPxU32toU16pBB12Px2MMX_FUN_00466930()
    ADD ESP,0x14                        ; 00447282
    CMP dword ptr [EDI + 0x14c],0x2     ; 00447285
        ;   Label: LAB_00447285
    JZ 0x004472b4                       ; 0044728c
        ;   XREF to: 004472b4 (CONDITIONAL_JUMP)  ; LAB_004472b4
    IMUL EBX,ESI,0xc                    ; 0044728e
        ;   Label: LAB_0044728e
    CMP ESI,dword ptr [0x012b0664]      ; 00447291 | DAT_012b0664
    JL 0x00447326                       ; 00447297
        ;   XREF to: 00447326 (CONDITIONAL_JUMP)  ; LAB_00447326
    INC EBP                             ; 0044729d
        ;   Label: LAB_0044729d
    JMP 0x004471de                      ; 0044729e
        ;   XREF to: 004471de (UNCONDITIONAL_JUMP)  ; LAB_004471de
    MOV ECX,EAX                         ; 004472a3
        ;   Label: LAB_004472a3
    SHL EBX,0x10                        ; 004472a5
    SHL ECX,0x8                         ; 004472a8
    OR ECX,EBX                          ; 004472ab
    OR ECX,EBP                          ; 004472ad
    JMP 0x004471c6                      ; 004472af
        ;   XREF to: 004471c6 (UNCONDITIONAL_JUMP)  ; LAB_004471c6
    MOV EAX,dword ptr [EDI + 0x13c]     ; 004472b4
        ;   Label: LAB_004472b4
    PUSH EAX                            ; 004472ba
    MOV EDX,dword ptr [ESP + 0x14]      ; 004472bb
    PUSH EDX                            ; 004472bf
    PUSH EBX                            ; 004472c0
    MOV ECX,dword ptr [ESP + 0x20]      ; 004472c1
    PUSH ECX                            ; 004472c5
    MOV EBX,dword ptr [ESP + 0x1c]      ; 004472c6
    PUSH EBX                            ; 004472ca
    CALL core_dstrender.cpp_blendHBilerpLightmapSharedU64toU16pBB56Px2MMX_FUN_00465fc9 ; 004472cb
        ;   XREF to: 00465fc9 (UNCONDITIONAL_CALL)  ; undefined core_dstrender.cpp_blendHBilerpLightmapSharedU64toU16pBB56Px2MMX_FUN_00465fc9()
    ADD ESP,0x14                        ; 004472d0
    JMP 0x0044728e                      ; 004472d3
        ;   XREF to: 0044728e (UNCONDITIONAL_JUMP)  ; LAB_0044728e
    CMP dword ptr [EDI + 0x14c],0x1     ; 004472d5
        ;   Label: LAB_004472d5
    JNZ 0x004472f9                      ; 004472dc
        ;   XREF to: 004472f9 (CONDITIONAL_JUMP)  ; LAB_004472f9
    MOV EDX,dword ptr [EDI + 0x13c]     ; 004472de
    PUSH EDX                            ; 004472e4
    PUSH ECX                            ; 004472e5
    PUSH EBX                            ; 004472e6
    MOV EAX,dword ptr [ESP + 0x20]      ; 004472e7
    PUSH EAX                            ; 004472eb
    MOV EDX,dword ptr [ESP + 0x1c]      ; 004472ec
    PUSH EDX                            ; 004472f0
    CALL core_dstrender.cpp_blendLightmapPerPxU64toU16pAmbientPx2MMX_FUN_00466e94 ; 004472f1
        ;   XREF to: 00466e94 (UNCONDITIONAL_CALL)  ; undefined core_dstrender.cpp_blendLightmapPerPxU64toU16pAmbientPx2MMX_FUN_00466e94()
    ADD ESP,0x14                        ; 004472f6
    CMP dword ptr [EDI + 0x14c],0x2     ; 004472f9
        ;   Label: LAB_004472f9
    JNZ 0x0044728e                      ; 00447300
        ;   XREF to: 0044728e (CONDITIONAL_JUMP)  ; LAB_0044728e
    MOV EAX,dword ptr [EDI + 0x13c]     ; 00447302
    PUSH EAX                            ; 00447308
    MOV EDX,dword ptr [ESP + 0x14]      ; 00447309
    PUSH EDX                            ; 0044730d
    PUSH EBX                            ; 0044730e
    MOV ECX,dword ptr [ESP + 0x20]      ; 0044730f
    PUSH ECX                            ; 00447313
    MOV EBX,dword ptr [ESP + 0x1c]      ; 00447314
    PUSH EBX                            ; 00447318
    CALL core_dstrender.cpp_blendVHBilerpLightmapSharedU64toU16pBB34Px2MMX_FUN_00466520 ; 00447319
        ;   XREF to: 00466520 (UNCONDITIONAL_CALL)  ; undefined core_dstrender.cpp_blendVHBilerpLightmapSharedU64toU16pBB34Px2MMX_FUN_00466520()
    ADD ESP,0x14                        ; 0044731e
    JMP 0x0044728e                      ; 00447321
        ;   XREF to: 0044728e (UNCONDITIONAL_JUMP)  ; LAB_0044728e
    MOV EDX,dword ptr [EBX + 0x12b0670] ; 00447326
        ;   Label: LAB_00447326
    CMP EBP,EDX                         ; 0044732c
    JNZ 0x0044729d                      ; 0044732e
        ;   XREF to: 0044729d (CONDITIONAL_JUMP)  ; LAB_0044729d
    MOV ECX,dword ptr [EBX + 0x12b0668] ; 00447334
    PUSH ECX                            ; 0044733a
    PUSH EDX                            ; 0044733b
    MOV EDX,dword ptr [EBX + 0x12b066c] ; 0044733c
    PUSH EDX                            ; 00447342
    PUSH EDI                            ; 00447343
    ADD EBX,0xc                         ; 00447344
    INC ESI                             ; 00447347
    CALL FUN_00447c60                   ; 00447348
        ;   XREF to: 00447c60 (UNCONDITIONAL_CALL)  ; undefined FUN_00447c60()
    ADD ESP,0x10                        ; 0044734d
    CMP ESI,dword ptr [0x012b0664]      ; 00447350 | DAT_012b0664
    JL 0x00447326                       ; 00447356
        ;   XREF to: 00447326 (CONDITIONAL_JUMP)  ; LAB_00447326
    INC EBP                             ; 00447358
    JMP 0x004471de                      ; 00447359
        ;   XREF to: 004471de (UNCONDITIONAL_JUMP)  ; LAB_004471de
    MOV EBP,0x1                         ; 0044735e
        ;   Label: LAB_0044735e
    MOV EAX,dword ptr [EDI + 0x140]     ; 00447363
        ;   Label: LAB_00447363
    DEC EAX                             ; 00447369
    CMP EBP,EAX                         ; 0044736a
    JGE 0x004445f1                      ; 0044736c
        ;   XREF to: 004445f1 (CONDITIONAL_JUMP)  ; LAB_004445f1
    MOV EAX,dword ptr [EDI + 0x148]     ; 00447372
    MOV EBX,dword ptr [0x012ceb74]      ; 00447378 | DAT_012ceb74
    ADD EAX,EBP                         ; 0044737e
    SUB EAX,EBX                         ; 00447380
    MOV EBX,dword ptr [EDI + 0x144]     ; 00447382
    MOV EAX,dword ptr [EAX*0x4 + 0x1bd2fa0] ; 00447388 | DAT_01bd2fa0
    SHL EBX,0x2                         ; 0044738f
    ADD EBX,EAX                         ; 00447392
    MOV EAX,[0x012ceb70]                ; 00447394 | DAT_012ceb70
    SHL EAX,0x2                         ; 00447399
    ADD EBX,EAX                         ; 0044739c
    MOV EAX,dword ptr [EDI + 0x13c]     ; 0044739e
    IMUL EAX,EBP                        ; 004473a4
    MOV dword ptr [ESP],EBX             ; 004473a7
    MOV EBX,dword ptr [EDI + 0x158]     ; 004473aa
    SHL EAX,0x2                         ; 004473b0
    ADD EBX,EAX                         ; 004473b3
    MOV CL,byte ptr [0x012b0660]        ; 004473b5 | DAT_012b0660
    MOV dword ptr [ESP + 0x8],EBX       ; 004473bb
    MOV EBX,EBP                         ; 004473bf
    SAR EBX,CL                          ; 004473c1
    IMUL EBX,EBX,0x140                  ; 004473c3
    MOV EAX,0xaafdb8                    ; 004473c9
    ADD EAX,EBX                         ; 004473ce
    MOV dword ptr [ESP + 0x4],EAX       ; 004473d0
    ADD EBX,0x12ceb78                   ; 004473d4
    TEST EBP,0x1                        ; 004473da
    JNZ 0x00447449                      ; 004473e0
        ;   XREF to: 00447449 (CONDITIONAL_JUMP)  ; LAB_00447449
    CMP dword ptr [EDI + 0x14c],0x1     ; 004473e2
    JNZ 0x0044740a                      ; 004473e9
        ;   XREF to: 0044740a (CONDITIONAL_JUMP)  ; LAB_0044740a
    MOV EDX,dword ptr [EDI + 0x13c]     ; 004473eb
    PUSH EDX                            ; 004473f1
    PUSH EBX                            ; 004473f2
    MOV ECX,dword ptr [ESP + 0xc]       ; 004473f3
    PUSH ECX                            ; 004473f7
    MOV EAX,dword ptr [ESP + 0x14]      ; 004473f8
    PUSH EAX                            ; 004473fc
    MOV EDX,dword ptr [ESP + 0x10]      ; 004473fd
    PUSH EDX                            ; 00447401
    CALL core_dstrender.cpp_blendLightmapPerPxU32toU32BB12Px2MMX_FUN_004657a7 ; 00447402
        ;   XREF to: 004657a7 (UNCONDITIONAL_CALL)  ; undefined core_dstrender.cpp_blendLightmapPerPxU32toU32BB12Px2MMX_FUN_004657a7()
    ADD ESP,0x14                        ; 00447407
    CMP dword ptr [EDI + 0x14c],0x2     ; 0044740a
        ;   Label: LAB_0044740a
    JZ 0x00447428                       ; 00447411
        ;   XREF to: 00447428 (CONDITIONAL_JUMP)  ; LAB_00447428
    IMUL EBX,ESI,0xc                    ; 00447413
        ;   Label: LAB_00447413
    CMP ESI,dword ptr [0x012b0664]      ; 00447416 | DAT_012b0664
    JL 0x0044749e                       ; 0044741c
        ;   XREF to: 0044749e (CONDITIONAL_JUMP)  ; LAB_0044749e
    INC EBP                             ; 00447422
        ;   Label: LAB_00447422
    JMP 0x00447363                      ; 00447423
        ;   XREF to: 00447363 (UNCONDITIONAL_JUMP)  ; LAB_00447363
    MOV EAX,dword ptr [EDI + 0x13c]     ; 00447428
        ;   Label: LAB_00447428
    PUSH EAX                            ; 0044742e
    PUSH EBX                            ; 0044742f
    MOV EDX,dword ptr [ESP + 0xc]       ; 00447430
    PUSH EDX                            ; 00447434
    MOV ECX,dword ptr [ESP + 0x14]      ; 00447435
    PUSH ECX                            ; 00447439
    MOV EBX,dword ptr [ESP + 0x10]      ; 0044743a
    PUSH EBX                            ; 0044743e
    CALL core_dstrender.cpp_blendHBilerpLightmapSharedU64toU64pBB12Px2MMX_FUN_00464afc ; 0044743f
        ;   XREF to: 00464afc (UNCONDITIONAL_CALL)  ; undefined core_dstrender.cpp_blendHBilerpLightmapSharedU64toU64pBB12Px2MMX_FUN_00464afc()
    ADD ESP,0x14                        ; 00447444
    JMP 0x00447413                      ; 00447447
        ;   XREF to: 00447413 (UNCONDITIONAL_JUMP)  ; LAB_00447413
    CMP dword ptr [EDI + 0x14c],0x1     ; 00447449
        ;   Label: LAB_00447449
    JNZ 0x00447471                      ; 00447450
        ;   XREF to: 00447471 (CONDITIONAL_JUMP)  ; LAB_00447471
    MOV EDX,dword ptr [EDI + 0x13c]     ; 00447452
    PUSH EDX                            ; 00447458
    PUSH EBX                            ; 00447459
    MOV ECX,dword ptr [ESP + 0xc]       ; 0044745a
    PUSH ECX                            ; 0044745e
    MOV EAX,dword ptr [ESP + 0x14]      ; 0044745f
    PUSH EAX                            ; 00447463
    MOV EDX,dword ptr [ESP + 0x10]      ; 00447464
    PUSH EDX                            ; 00447468
    CALL core_dstrender.cpp_blendLightmapPerPxU64toU32AmbientPx2MMX_FUN_00465c9b ; 00447469
        ;   XREF to: 00465c9b (UNCONDITIONAL_CALL)  ; undefined core_dstrender.cpp_blendLightmapPerPxU64toU32AmbientPx2MMX_FUN_00465c9b()
    ADD ESP,0x14                        ; 0044746e
    CMP dword ptr [EDI + 0x14c],0x2     ; 00447471
        ;   Label: LAB_00447471
    JNZ 0x00447413                      ; 00447478
        ;   XREF to: 00447413 (CONDITIONAL_JUMP)  ; LAB_00447413
    MOV EAX,dword ptr [EDI + 0x13c]     ; 0044747a
    PUSH EAX                            ; 00447480
    PUSH EBX                            ; 00447481
    MOV EDX,dword ptr [ESP + 0xc]       ; 00447482
    PUSH EDX                            ; 00447486
    MOV ECX,dword ptr [ESP + 0x14]      ; 00447487
    PUSH ECX                            ; 0044748b
    MOV EBX,dword ptr [ESP + 0x10]      ; 0044748c
    PUSH EBX                            ; 00447490
    CALL core_dstrender.cpp_blendVHBilerpLightmapSharedU64toU64pAmbientPx2MMX_FUN_00464fda ; 00447491
        ;   XREF to: 00464fda (UNCONDITIONAL_CALL)  ; undefined core_dstrender.cpp_blendVHBilerpLightmapSharedU64toU64pAmbientPx2MMX_FUN_00464fda()
    ADD ESP,0x14                        ; 00447496
    JMP 0x00447413                      ; 00447499
        ;   XREF to: 00447413 (UNCONDITIONAL_JUMP)  ; LAB_00447413
    MOV EDX,dword ptr [EBX + 0x12b0670] ; 0044749e
        ;   Label: LAB_0044749e
    CMP EBP,EDX                         ; 004474a4
    JNZ 0x00447422                      ; 004474a6
        ;   XREF to: 00447422 (CONDITIONAL_JUMP)  ; LAB_00447422
    MOV ECX,dword ptr [EBX + 0x12b0668] ; 004474ac
    PUSH ECX                            ; 004474b2
    PUSH EDX                            ; 004474b3
    MOV EDX,dword ptr [EBX + 0x12b066c] ; 004474b4
    PUSH EDX                            ; 004474ba
    PUSH EDI                            ; 004474bb
    ADD EBX,0xc                         ; 004474bc
    INC ESI                             ; 004474bf
    CALL FUN_00447bb0                   ; 004474c0
        ;   XREF to: 00447bb0 (UNCONDITIONAL_CALL)  ; undefined FUN_00447bb0()
    ADD ESP,0x10                        ; 004474c5
    CMP ESI,dword ptr [0x012b0664]      ; 004474c8 | DAT_012b0664
    JL 0x0044749e                       ; 004474ce
        ;   XREF to: 0044749e (CONDITIONAL_JUMP)  ; LAB_0044749e
    INC EBP                             ; 004474d0
    JMP 0x00447363                      ; 004474d1
        ;   XREF to: 00447363 (UNCONDITIONAL_JUMP)  ; LAB_00447363

