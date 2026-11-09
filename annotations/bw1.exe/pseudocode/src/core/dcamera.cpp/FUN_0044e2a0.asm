; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_dcamera_cpp_FUN_0044e2a0(int param_1,int *param_2)
;
; Local Variables:
; undefined4       Stack[-0x24]:4  local_24
; undefined4       Stack[-0x20]:4  local_20
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
; undefined4       Stack[-0x10]:4  local_10
;
; XREF[5]:
;   core_dcamera.cpp_CDemonCamera_precomputeLight_FUN_0044e8e0 at 0044ed35
;   core_dcamera.cpp_CDemonCamera_renderGlobeCoronas_FUN_00452550 at 0045259e
;   core_dcamera.cpp_CDemonCamera_renderLightCoronas_FUN_004516c0 at 00451916
;   core_dcamera.cpp_renderCoronaProjectedTextureScanline_FUN_004513a0 at 00451490
;   core_game.cpp_FUN_004d6030 at 004d5f87
;
; Referenced Globals:
;   undefined4 DAT_00612560
;   undefined4 DAT_01483a40
;   undefined4 DAT_01483a44
;   undefined4 DAT_01483a48
;   undefined4 DAT_01bc120c
;
; Called Functions:
;   engine_drender.cpp_CDemonRenderer_getAlphaMask_FUN_00484180
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0044e2a0
        ;   Label: core_dcamera.cpp_FUN_0044e2a0
    PUSH EDI                            ; 0044e2a1
    PUSH EBP                            ; 0044e2a2
    SUB ESP,0x24                        ; 0044e2a3
    MOV EDI,dword ptr [ESP + 0x38]      ; 0044e2a6
    MOV EBP,ESI                         ; 0044e2aa
    MOV ESI,dword ptr [ESP + 0x34]      ; 0044e2ac
    MOV EDX,dword ptr [0x00612560]      ; 0044e2b0 | DAT_00612560
    PUSH EDX                            ; 0044e2b6 | DAT_01bc120c
    CALL engine_drender.cpp_CDemonRenderer_getAlphaMask_FUN_00484180 ; 0044e2b7
        ;   XREF to: 00484180 (UNCONDITIONAL_CALL)  ; int engine_drender.cpp_CDemonRenderer_getAlphaMask_FUN_00484180(CDemonRenderer * this_ptr)
    MOV ECX,EAX                         ; 0044e2bc
    ADD ESP,0x4                         ; 0044e2be
    TEST EAX,EAX                        ; 0044e2c1
    JNZ 0x0044e3e4                      ; 0044e2c3
        ;   XREF to: 0044e3e4 (CONDITIONAL_JUMP)  ; LAB_0044e3e4
    MOV EAX,dword ptr [EDI]             ; 0044e2c9
    SUB EAX,dword ptr [ESI + 0x16c]     ; 0044e2cb
    MOV EDX,dword ptr [ESI + 0x170]     ; 0044e2d1
    MOV dword ptr [ESP + 0xc],EAX       ; 0044e2d7
    MOV EAX,dword ptr [EDI + 0x4]       ; 0044e2db
    SUB EAX,EDX                         ; 0044e2de
    MOV ECX,dword ptr [ESI + 0x174]     ; 0044e2e0
    MOV dword ptr [ESP + 0x10],EAX      ; 0044e2e6
    MOV EAX,dword ptr [EDI + 0x8]       ; 0044e2ea
    SUB EAX,ECX                         ; 0044e2ed
    MOV EDX,dword ptr [ESP + 0xc]       ; 0044e2ef
    MOV dword ptr [ESP + 0x14],EAX      ; 0044e2f3
    MOV EAX,dword ptr [ESI + 0x180]     ; 0044e2f7
    IMUL EDX                            ; 0044e2fd
    SHRD EAX,EDX,0x10                   ; 0044e2ff
    MOV EDX,dword ptr [ESP + 0x10]      ; 0044e303
    MOV ECX,EAX                         ; 0044e307
    MOV EAX,dword ptr [ESI + 0x18c]     ; 0044e309
    IMUL EDX                            ; 0044e30f
    SHRD EAX,EDX,0x10                   ; 0044e311
    MOV EDX,dword ptr [ESP + 0x14]      ; 0044e315
    ADD ECX,EAX                         ; 0044e319
    MOV EAX,dword ptr [ESI + 0x198]     ; 0044e31b
    IMUL EDX                            ; 0044e321
    SHRD EAX,EDX,0x10                   ; 0044e323
    ADD ECX,EAX                         ; 0044e327
    MOV dword ptr [ESP + 0x20],ECX      ; 0044e329
    TEST ECX,ECX                        ; 0044e32d
    JG 0x0044e34b                       ; 0044e32f
        ;   XREF to: 0044e34b (CONDITIONAL_JUMP)  ; LAB_0044e34b
    MOV EDI,ESP                         ; 0044e331
        ;   Label: LAB_0044e331
    MOV ESI,0x1483a40                   ; 0044e333
    MOVSD ES:EDI,ESI                    ; 0044e338 | DAT_01483a40
    MOVSD ES:EDI,ESI                    ; 0044e339 | DAT_01483a44
    MOVSD ES:EDI,ESI                    ; 0044e33a | DAT_01483a48
    MOV ESI,ESP                         ; 0044e33b
    MOV EDI,EBP                         ; 0044e33d
    MOVSD ES:EDI,ESI                    ; 0044e33f
    MOVSD ES:EDI,ESI                    ; 0044e340
    MOVSD ES:EDI,ESI                    ; 0044e341
    MOV EAX,EBP                         ; 0044e342
    ADD ESP,0x24                        ; 0044e344
    POP EBP                             ; 0044e347
    POP EDI                             ; 0044e348
    POP EBX                             ; 0044e349
    RET                                 ; 0044e34a
    MOV EDX,dword ptr [ESP + 0xc]       ; 0044e34b
        ;   Label: LAB_0044e34b
    MOV EAX,dword ptr [ESI + 0x178]     ; 0044e34f
    IMUL EDX                            ; 0044e355
    SHRD EAX,EDX,0x10                   ; 0044e357
    MOV EDX,dword ptr [ESP + 0x10]      ; 0044e35b
    MOV ECX,EAX                         ; 0044e35f
    MOV EAX,dword ptr [ESI + 0x184]     ; 0044e361
    IMUL EDX                            ; 0044e367
    SHRD EAX,EDX,0x10                   ; 0044e369
    MOV EDX,dword ptr [ESP + 0x14]      ; 0044e36d
    ADD ECX,EAX                         ; 0044e371
    MOV EAX,dword ptr [ESI + 0x190]     ; 0044e373
    IMUL EDX                            ; 0044e379
    SHRD EAX,EDX,0x10                   ; 0044e37b
    ADD ECX,EAX                         ; 0044e37f
    MOV EDI,dword ptr [ESP + 0x20]      ; 0044e381
    MOV dword ptr [ESP + 0x18],ECX      ; 0044e385
    CMP ECX,EDI                         ; 0044e389
    JGE 0x0044e331                      ; 0044e38b
        ;   XREF to: 0044e331 (CONDITIONAL_JUMP)  ; LAB_0044e331
    MOV EBX,EDI                         ; 0044e38d
    NEG EBX                             ; 0044e38f
    CMP EBX,ECX                         ; 0044e391
    JGE 0x0044e331                      ; 0044e393
        ;   XREF to: 0044e331 (CONDITIONAL_JUMP)  ; LAB_0044e331
    MOV EDX,dword ptr [ESP + 0xc]       ; 0044e395
    MOV EAX,dword ptr [ESI + 0x17c]     ; 0044e399
    IMUL EDX                            ; 0044e39f
    SHRD EAX,EDX,0x10                   ; 0044e3a1
    MOV EDX,dword ptr [ESP + 0x10]      ; 0044e3a5
    MOV ECX,EAX                         ; 0044e3a9
    MOV EAX,dword ptr [ESI + 0x188]     ; 0044e3ab
    IMUL EDX                            ; 0044e3b1
    SHRD EAX,EDX,0x10                   ; 0044e3b3
    MOV EDX,dword ptr [ESP + 0x14]      ; 0044e3b7
    ADD ECX,EAX                         ; 0044e3bb
    MOV EAX,dword ptr [ESI + 0x194]     ; 0044e3bd
    IMUL EDX                            ; 0044e3c3
    SHRD EAX,EDX,0x10                   ; 0044e3c5
    ADD ECX,EAX                         ; 0044e3c9
    MOV dword ptr [ESP + 0x1c],ECX      ; 0044e3cb
    CMP ECX,EDI                         ; 0044e3cf
    JGE 0x0044e331                      ; 0044e3d1
        ;   XREF to: 0044e331 (CONDITIONAL_JUMP)  ; LAB_0044e331
    CMP EBX,ECX                         ; 0044e3d7
    JL 0x0044e502                       ; 0044e3d9
        ;   XREF to: 0044e502 (CONDITIONAL_JUMP)  ; LAB_0044e502
    JMP 0x0044e331                      ; 0044e3df
        ;   XREF to: 0044e331 (UNCONDITIONAL_JUMP)  ; LAB_0044e331
    SHL EAX,0x2                         ; 0044e3e4
        ;   Label: LAB_0044e3e4
    SUB EAX,ECX                         ; 0044e3e7
    SHL EAX,0x2                         ; 0044e3e9
    LEA EDX,[ESI + EAX*0x1]             ; 0044e3ec
    MOV EAX,dword ptr [EDI]             ; 0044e3ef
    MOV EBX,dword ptr [EDX + 0x11ec]    ; 0044e3f1
    SUB EAX,EBX                         ; 0044e3f7
    MOV dword ptr [ESP + 0xc],EAX       ; 0044e3f9
    MOV EBX,dword ptr [EDX + 0x11f0]    ; 0044e3fd
    MOV EAX,dword ptr [EDI + 0x4]       ; 0044e403
    SUB EAX,EBX                         ; 0044e406
    SHL ECX,0x2                         ; 0044e408
    MOV dword ptr [ESP + 0x10],EAX      ; 0044e40b
    MOV EAX,dword ptr [EDI + 0x8]       ; 0044e40f
    MOV EDI,dword ptr [EDX + 0x11f4]    ; 0044e412
    ADD ECX,ESI                         ; 0044e418
    SUB EAX,EDI                         ; 0044e41a
    MOV EDX,dword ptr [ESP + 0xc]       ; 0044e41c
    MOV dword ptr [ESP + 0x14],EAX      ; 0044e420
    MOV EAX,dword ptr [ECX + 0x128c]    ; 0044e424
    IMUL EDX                            ; 0044e42a
    SHRD EAX,EDX,0x10                   ; 0044e42c
    MOV EDX,dword ptr [ESP + 0x10]      ; 0044e430
    MOV EDI,EAX                         ; 0044e434
    MOV EAX,dword ptr [ECX + 0x12ec]    ; 0044e436
    IMUL EDX                            ; 0044e43c
    SHRD EAX,EDX,0x10                   ; 0044e43e
    MOV EDX,dword ptr [ESP + 0x14]      ; 0044e442
    ADD EDI,EAX                         ; 0044e446
    MOV EAX,dword ptr [ECX + 0x134c]    ; 0044e448
    IMUL EDX                            ; 0044e44e
    SHRD EAX,EDX,0x10                   ; 0044e450
    ADD EDI,EAX                         ; 0044e454
    MOV dword ptr [ESP + 0x20],EDI      ; 0044e456
    TEST EDI,EDI                        ; 0044e45a
    JLE 0x0044e331                      ; 0044e45c
        ;   XREF to: 0044e331 (CONDITIONAL_JUMP)  ; LAB_0044e331
    MOV EDX,dword ptr [ESP + 0xc]       ; 0044e462
    MOV EAX,dword ptr [ECX + 0x124c]    ; 0044e466
    IMUL EDX                            ; 0044e46c
    SHRD EAX,EDX,0x10                   ; 0044e46e
    MOV EDX,dword ptr [ESP + 0x10]      ; 0044e472
    MOV EDI,EAX                         ; 0044e476
    MOV EAX,dword ptr [ECX + 0x12ac]    ; 0044e478
    IMUL EDX                            ; 0044e47e
    SHRD EAX,EDX,0x10                   ; 0044e480
    MOV EDX,dword ptr [ESP + 0x14]      ; 0044e484
    ADD EDI,EAX                         ; 0044e488
    MOV EAX,dword ptr [ECX + 0x130c]    ; 0044e48a
    IMUL EDX                            ; 0044e490
    SHRD EAX,EDX,0x10                   ; 0044e492
    ADD EDI,EAX                         ; 0044e496
    MOV EDX,dword ptr [ESP + 0x20]      ; 0044e498
    MOV dword ptr [ESP + 0x18],EDI      ; 0044e49c
    CMP EDI,EDX                         ; 0044e4a0
    JGE 0x0044e331                      ; 0044e4a2
        ;   XREF to: 0044e331 (CONDITIONAL_JUMP)  ; LAB_0044e331
    MOV EBX,EDX                         ; 0044e4a8
    NEG EBX                             ; 0044e4aa
    CMP EBX,EDI                         ; 0044e4ac
    JGE 0x0044e331                      ; 0044e4ae
        ;   XREF to: 0044e331 (CONDITIONAL_JUMP)  ; LAB_0044e331
    MOV EDX,dword ptr [ESP + 0xc]       ; 0044e4b4
    MOV EAX,dword ptr [ECX + 0x126c]    ; 0044e4b8
    IMUL EDX                            ; 0044e4be
    SHRD EAX,EDX,0x10                   ; 0044e4c0
    MOV EDX,dword ptr [ESP + 0x10]      ; 0044e4c4
    MOV EDI,EAX                         ; 0044e4c8
    MOV EAX,dword ptr [ECX + 0x12cc]    ; 0044e4ca
    IMUL EDX                            ; 0044e4d0
    SHRD EAX,EDX,0x10                   ; 0044e4d2
    MOV EDX,dword ptr [ESP + 0x14]      ; 0044e4d6
    ADD EDI,EAX                         ; 0044e4da
    MOV EAX,dword ptr [ECX + 0x132c]    ; 0044e4dc
    IMUL EDX                            ; 0044e4e2
    SHRD EAX,EDX,0x10                   ; 0044e4e4
    ADD EDI,EAX                         ; 0044e4e8
    MOV EDX,dword ptr [ESP + 0x20]      ; 0044e4ea
    MOV dword ptr [ESP + 0x1c],EDI      ; 0044e4ee
    CMP EDI,EDX                         ; 0044e4f2
    JGE 0x0044e331                      ; 0044e4f4
        ;   XREF to: 0044e331 (CONDITIONAL_JUMP)  ; LAB_0044e331
    CMP EBX,EDI                         ; 0044e4fa
    JGE 0x0044e331                      ; 0044e4fc
        ;   XREF to: 0044e331 (CONDITIONAL_JUMP)  ; LAB_0044e331
    MOV EBX,dword ptr [ESP + 0x20]      ; 0044e502
        ;   Label: LAB_0044e502
    MOV EAX,dword ptr [ESP + 0x18]      ; 0044e506
    MOV EDX,dword ptr [ESI + 0x1c0]     ; 0044e50a
    IMUL EDX                            ; 0044e510
    IDIV EBX                            ; 0044e512
    MOV EDX,dword ptr [ESI + 0x1c8]     ; 0044e514
    MOV EBX,dword ptr [ESP + 0x20]      ; 0044e51a
    ADD EDX,EAX                         ; 0044e51e
    MOV EAX,dword ptr [ESP + 0x1c]      ; 0044e520
    MOV dword ptr [ESP + 0x18],EDX      ; 0044e524
    MOV EDX,dword ptr [ESI + 0x1c4]     ; 0044e528
    IMUL EDX                            ; 0044e52e
    IDIV EBX                            ; 0044e530
    MOV EDX,dword ptr [ESI + 0x1cc]     ; 0044e532
    MOV EDI,ESP                         ; 0044e538
    ADD EDX,EAX                         ; 0044e53a
    LEA ESI,[ESP + 0x18]                ; 0044e53c
    MOV dword ptr [ESP + 0x1c],EDX      ; 0044e540
    MOVSD ES:EDI,ESI                    ; 0044e544
    MOVSD ES:EDI,ESI                    ; 0044e545
    MOVSD ES:EDI,ESI                    ; 0044e546
    MOV ESI,ESP                         ; 0044e547
    MOV EDI,EBP                         ; 0044e549
    MOVSD ES:EDI,ESI                    ; 0044e54b
    MOVSD ES:EDI,ESI                    ; 0044e54c
    MOVSD ES:EDI,ESI                    ; 0044e54d
    MOV EAX,EBP                         ; 0044e54e
    ADD ESP,0x24                        ; 0044e550
    POP EBP                             ; 0044e553
    POP EDI                             ; 0044e554
    POP EBX                             ; 0044e555
    RET                                 ; 0044e556

