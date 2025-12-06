; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl CDemonCamera * core_dcamera.cpp_CDemonCamera_precomputeNormals_FUN_0044e360(CDemonCamera * this_ptr)
;
; Parameters:
; CDemonCamera *   Stack[0x4]:4   this_ptr
; Local Variables:
; undefined4       Stack[-0x88]:4  local_88
; undefined1       Stack[-0x84]:1  local_84
; undefined1       Stack[-0x78]:1  local_78
; undefined1       Stack[-0x6c]:1  local_6c
; undefined1       Stack[-0x60]:1  local_60
; undefined4       Stack[-0x58]:4  local_58
; undefined1       Stack[-0x54]:1  local_54
; undefined4       Stack[-0x48]:4  local_48
; undefined4       Stack[-0x44]:4  local_44
; undefined4       Stack[-0x40]:4  local_40
; undefined4       Stack[-0x3c]:4  local_3c
; undefined4       Stack[-0x38]:4  local_38
; undefined4       Stack[-0x34]:4  local_34
; undefined4       Stack[-0x30]:4  local_30
; undefined4       Stack[-0x2c]:4  local_2c
; undefined4       Stack[-0x28]:4  local_28
; undefined4       Stack[-0x24]:4  local_24
; undefined4       Stack[-0x20]:4  local_20
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[2]:
;   core_set.cpp_CDemonSet_precomputeLightVisibility_FUN_0056a470 at 0056a7a9
;   core_set.cpp_CDemonSet_setCameraView_FUN_0056ae50 at 0056b3f9
;
; Referenced Globals:
;   double g_PrecomputePackedNormalToFloat = 0.00390625
;   double g_PrecomputeFixedPointToFloat = 0.00787401574803150
;   int[8] g_CameraEdgeOffsetX
;   undefined4 DAT_0066ed14
;   int[8] g_CameraEdgeOffsetY
;   undefined4 DAT_0066ed34
;   undefined4 DAT_00903e80
;   undefined4 DAT_00903e88
;   undefined4 DAT_009e5d80
;   undefined4 DAT_009e5d88
;   undefined4 DAT_00ac7c80
;   undefined4 DAT_00ac7c84
;   undefined4 DAT_00ac7c88
;   int[76800] g_PrecomputedDepthBuffer
;   undefined4 DAT_00bcebfc
;   ... and 9 more
;
; Called Functions:
;   core_dcamera.cpp_CDemonCamera_restoreAlphaTransform_FUN_00453a70
;   core_dcamera.cpp_CDemonCamera_saveBackdrop_FUN_004529b0
;   core_dcamera.cpp_CDemonCamera_screenToWorldCoord_FUN_0044d2a0
;   core_dcamera.cpp_CDemonCamera_screenToWorldTransform_FUN_0044d370
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0044e360
        ;   Label: core_dcamera.cpp_CDemonCamera_precomputeNormals_FUN_0044e360
    PUSH ESI                            ; 0044e361
    PUSH EDI                            ; 0044e362
    PUSH EBP                            ; 0044e363
    MOV EBP,ESP                         ; 0044e364
    SUB ESP,0x78                        ; 0044e366
    AND ESP,0xfffffff8                  ; 0044e369
    MOV ECX,0x1                         ; 0044e36c
    MOV EAX,dword ptr [EBP + 0x14]      ; 0044e371
    XOR EDX,EDX                         ; 0044e374
    MOV dword ptr [ESP + 0x50],ECX      ; 0044e376
    MOV EBX,dword ptr [EAX + 0x154]     ; 0044e37a
    MOV dword ptr [ESP],EDX             ; 0044e380
    CMP EBX,ECX                         ; 0044e383
    JLE 0x0044e588                      ; 0044e385 | LAB_0044e588
        ;   XREF to: 0044e588 (CONDITIONAL_JUMP)
    MOV EBX,0x500                       ; 0044e38b
    MOV ECX,0xf00                       ; 0044e390
    MOV dword ptr [ESP + 0x48],EBX      ; 0044e395
    MOV dword ptr [ESP + 0x44],ECX      ; 0044e399
    MOV EDX,dword ptr [EBP + 0x14]      ; 0044e39d
        ;   Label: LAB_0044e39d
    MOV EAX,dword ptr [ESP + 0x50]      ; 0044e3a0
    IMUL EAX,dword ptr [EDX + 0x14c]    ; 0044e3a4
    MOV EDI,0x1                         ; 0044e3ab
    MOV dword ptr [ESP + 0x60],EDI      ; 0044e3b0
    MOV EAX,dword ptr [EAX*0x4 + 0x2cf6a9c] ; 0044e3b4 | void *[1024] g_ScreenBufferArray
    MOV EDX,dword ptr [EDX + 0x150]     ; 0044e3bb
    MOV dword ptr [ESP + 0x64],EAX      ; 0044e3c1
    CMP EDX,EDI                         ; 0044e3c5
    JLE 0x0044e552                      ; 0044e3c7 | LAB_0044e552
        ;   XREF to: 0044e552 (CONDITIONAL_JUMP)
    MOV EBX,dword ptr [ESP + 0x44]      ; 0044e3cd
    MOV EAX,dword ptr [ESP + 0x48]      ; 0044e3d1
    ADD EBX,0xc                         ; 0044e3d5
    ADD EAX,0x4                         ; 0044e3d8
    MOV dword ptr [ESP + 0x58],EBX      ; 0044e3db
    MOV dword ptr [ESP + 0x5c],EAX      ; 0044e3df
    MOV EAX,dword ptr [EBP + 0x14]      ; 0044e3e3
        ;   Label: LAB_0044e3e3
    MOV ESI,dword ptr [ESP + 0x64]      ; 0044e3e6
    MOV EAX,dword ptr [EAX + 0x14c]     ; 0044e3ea
    MOV EDX,dword ptr [EBP + 0x14]      ; 0044e3f0
    SHL EAX,0x2                         ; 0044e3f3
    MOV EDI,dword ptr [EDX + 0x14c]     ; 0044e3f6
    ADD ESI,EAX                         ; 0044e3fc
    MOV EAX,dword ptr [ESP + 0x50]      ; 0044e3fe
    IMUL EAX,EDI                        ; 0044e402
    PUSH EAX                            ; 0044e405
    MOV EAX,dword ptr [ESP + 0x64]      ; 0044e406
    IMUL EAX,EDI                        ; 0044e40a
    PUSH EAX                            ; 0044e40d
    MOV dword ptr [ESP + 0x6c],ESI      ; 0044e40e
    PUSH EDX                            ; 0044e412
    LEA ESI,[ESP + 0x10]                ; 0044e413
    LEA EDI,[ESP + 0x34]                ; 0044e417
    CALL core_dcamera.cpp_CDemonCamera_screenToWorldCoord_FUN_0044d2a0 ; 0044e41b | void core_dcamera.cpp_CDemonCamera_screenToWorldCoord_FUN_0044d2a0(CDemonCamera * this_ptr, CVector3i * output_ptr, int screen_x, int screen_y)
        ;   XREF to: 0044d2a0 (UNCONDITIONAL_CALL)
    LEA ESI,[ESP + 0x10]                ; 0044e420
    ADD ESP,0xc                         ; 0044e424
    MOVSD ES:EDI,ESI                    ; 0044e427
    MOVSD ES:EDI,ESI                    ; 0044e428
    MOVSD ES:EDI,ESI                    ; 0044e429
    MOV EDI,dword ptr [ESP + 0x30]      ; 0044e42a
    CMP EDI,0x7fffffff                  ; 0044e42e
    JZ 0x0044e43e                       ; 0044e434 | LAB_0044e43e
        ;   XREF to: 0044e43e (CONDITIONAL_JUMP)
    CMP EDI,dword ptr [ESP]             ; 0044e436
    JLE 0x0044e43e                      ; 0044e439 | LAB_0044e43e
        ;   XREF to: 0044e43e (CONDITIONAL_JUMP)
    MOV dword ptr [ESP],EDI             ; 0044e43b
    LEA EAX,[ESP + 0x28]                ; 0044e43e
        ;   Label: LAB_0044e43e
    PUSH EAX                            ; 0044e442
    MOV ECX,dword ptr [EBP + 0x14]      ; 0044e443
    PUSH ECX                            ; 0044e446
    LEA ESI,[ESP + 0x3c]                ; 0044e447
    LEA EDI,[ESP + 0x24]                ; 0044e44b
    CALL core_dcamera.cpp_CDemonCamera_screenToWorldTransform_FUN_0044d370 ; 0044e44f | CVector3i * core_dcamera.cpp_CDemonCamera_screenToWorldTransform_FUN_0044d370(CDemonCamera * this_ptr, CVector3i * output_ptr, CVector3i * input_ptr)
        ;   XREF to: 0044d370 (UNCONDITIONAL_CALL)
    LEA ESI,[ESP + 0x3c]                ; 0044e454
    ADD ESP,0x8                         ; 0044e458
    MOVSD ES:EDI,ESI                    ; 0044e45b
    MOVSD ES:EDI,ESI                    ; 0044e45c
    MOVSD ES:EDI,ESI                    ; 0044e45d
    MOV EDI,dword ptr [ESP + 0x58]      ; 0044e45e
    LEA ESI,[ESP + 0x34]                ; 0044e462
    LEA EDI,[EDI + 0x9e4e74]            ; 0044e466 | undefined4 DAT_009e5d80
    MOV EAX,dword ptr [ESP + 0x64]      ; 0044e46c
    MOVSD ES:EDI,ESI                    ; 0044e470 | undefined4 DAT_009e5d80
    MOVSD ES:EDI,ESI                    ; 0044e471 | undefined4 DAT_009e5d84
    MOVSD ES:EDI,ESI                    ; 0044e472 | undefined4 DAT_009e5d88
    MOV EAX,dword ptr [EAX]             ; 0044e473
    SHR EAX,0x18                        ; 0044e475
    TEST EAX,EAX                        ; 0044e478
    JZ 0x0044e49d                       ; 0044e47a | LAB_0044e49d
        ;   XREF to: 0044e49d (CONDITIONAL_JUMP)
    PUSH EAX                            ; 0044e47c
    LEA EAX,[ESP + 0x2c]                ; 0044e47d
    PUSH EAX                            ; 0044e481
    MOV ESI,dword ptr [EBP + 0x14]      ; 0044e482
    PUSH ESI                            ; 0044e485
    LEA ESI,[ESP + 0x1c]                ; 0044e486
    LEA EDI,[ESP + 0x28]                ; 0044e48a
    CALL core_dcamera.cpp_CDemonCamera_restoreAlphaTransform_FUN_00453a70 ; 0044e48e | CVector3i * core_dcamera.cpp_CDemonCamera_restoreAlphaTransform_FUN_00453a70(CDemonCamera * this_ptr, CVector3i * screen_pos, int alpha_index, CVector3i * world_pos)
        ;   XREF to: 00453a70 (UNCONDITIONAL_CALL)
    LEA ESI,[ESP + 0x1c]                ; 0044e493
    ADD ESP,0xc                         ; 0044e497
    MOVSD ES:EDI,ESI                    ; 0044e49a
    MOVSD ES:EDI,ESI                    ; 0044e49b
    MOVSD ES:EDI,ESI                    ; 0044e49c
    LEA ESI,[ESP + 0x1c]                ; 0044e49d
        ;   Label: LAB_0044e49d
    LEA EDI,[EBX + 0x902f74]            ; 0044e4a1 | DAT_00903e80
    MOVSD ES:EDI,ESI                    ; 0044e4a7 | DAT_00903e80
    MOVSD ES:EDI,ESI                    ; 0044e4a8 | DAT_00903e84
    MOVSD ES:EDI,ESI                    ; 0044e4a9 | DAT_00903e88
    MOV EDX,dword ptr [ESP + 0x5c]      ; 0044e4aa
    MOV EAX,dword ptr [ESP + 0x30]      ; 0044e4ae
    MOV dword ptr [EDX + 0xbce6f8],EAX  ; 0044e4b2 | DAT_00bcebfc
    MOV EAX,dword ptr [ESP + 0x64]      ; 0044e4b8
    MOV ESI,dword ptr [ESP + 0x64]      ; 0044e4bc
    MOV EAX,dword ptr [EAX]             ; 0044e4c0
    MOV EDX,dword ptr [ESP + 0x64]      ; 0044e4c2
    SHR EAX,0x10                        ; 0044e4c6
    MOV EDX,dword ptr [EDX]             ; 0044e4c9
    AND EAX,0xff                        ; 0044e4cb
    SHR EDX,0x8                         ; 0044e4d0
    CBW                                 ; 0044e4d3
    AND EDX,0xff                        ; 0044e4d5
    MOV dword ptr [ESP + 0x74],EAX      ; 0044e4db
    MOV DH,byte ptr [ESI]               ; 0044e4df
    FILD word ptr [ESP + 0x74]          ; 0044e4e1
    MOVSX AX,DL                         ; 0044e4e5
    FLD double ptr [0x0061a11a]         ; 0044e4e9 | double g_PrecomputeFixedPointToFloat
    FXCH                                ; 0044e4ef
    FMUL ST1                            ; 0044e4f1
    MOV dword ptr [ESP + 0x74],EAX      ; 0044e4f3
    MOVSX AX,DH                         ; 0044e4f7
    FILD word ptr [ESP + 0x74]          ; 0044e4fb
    MOV dword ptr [ESP + 0x74],EAX      ; 0044e4ff
    FMUL ST2                            ; 0044e503
    FILD word ptr [ESP + 0x74]          ; 0044e505
    FMULP ST3                           ; 0044e509
    MOV ECX,dword ptr [ESP + 0x58]      ; 0044e50b
    ADD EBX,0xc                         ; 0044e50f
    ADD ECX,0xc                         ; 0044e512
    MOV EDI,dword ptr [ESP + 0x60]      ; 0044e515
    MOV dword ptr [ESP + 0x58],ECX      ; 0044e519
    INC EDI                             ; 0044e51d
    MOV ESI,dword ptr [ESP + 0x5c]      ; 0044e51e
    MOV dword ptr [ESP + 0x60],EDI      ; 0044e522
    ADD ESI,0x4                         ; 0044e526
    FXCH                                ; 0044e529
    FSTP float ptr [EBX + 0xac6d68]     ; 0044e52b | DAT_00ac7c80
    MOV EDX,dword ptr [EBP + 0x14]      ; 0044e531
    FSTP float ptr [EBX + 0xac6d6c]     ; 0044e534 | DAT_00ac7c84
    FSTP float ptr [EBX + 0xac6d70]     ; 0044e53a | DAT_00ac7c88
    MOV ECX,dword ptr [EDX + 0x150]     ; 0044e540
    MOV dword ptr [ESP + 0x5c],ESI      ; 0044e546
    CMP EDI,ECX                         ; 0044e54a
    JL 0x0044e3e3                       ; 0044e54c | LAB_0044e3e3
        ;   XREF to: 0044e3e3 (CONDITIONAL_JUMP)
    MOV ESI,dword ptr [ESP + 0x44]      ; 0044e552
        ;   Label: LAB_0044e552
    MOV EDI,dword ptr [ESP + 0x48]      ; 0044e556
    MOV EAX,dword ptr [ESP + 0x50]      ; 0044e55a
    MOV EDX,dword ptr [EBP + 0x14]      ; 0044e55e
    ADD ESI,0xf00                       ; 0044e561
    ADD EDI,0x500                       ; 0044e567
    INC EAX                             ; 0044e56d
    MOV ECX,dword ptr [EDX + 0x154]     ; 0044e56e
    MOV dword ptr [ESP + 0x44],ESI      ; 0044e574
    MOV dword ptr [ESP + 0x48],EDI      ; 0044e578
    MOV dword ptr [ESP + 0x50],EAX      ; 0044e57c
    CMP EAX,ECX                         ; 0044e580
    JL 0x0044e39d                       ; 0044e582 | LAB_0044e39d
        ;   XREF to: 0044e39d (CONDITIONAL_JUMP)
    MOV EAX,dword ptr [ESP]             ; 0044e588
        ;   Label: LAB_0044e588
    MOV dword ptr [ESP + 0x70],EAX      ; 0044e58b
    FILD dword ptr [ESP + 0x70]         ; 0044e58f
    FMUL double ptr [0x0061a112]        ; 0044e593 | double g_PrecomputePackedNormalToFloat
    MOV EAX,dword ptr [EBP + 0x14]      ; 0044e599
    XOR ESI,ESI                         ; 0044e59c
    MOV EBX,EAX                         ; 0044e59e
    PUSH EAX                            ; 0044e5a0
    FSTP float ptr [EAX + 0x140]        ; 0044e5a1
    CALL core_dcamera.cpp_CDemonCamera_saveBackdrop_FUN_004529b0 ; 0044e5a7 | void core_dcamera.cpp_CDemonCamera_saveBackdrop_FUN_004529b0(CDemonCamera * this_ptr)
        ;   XREF to: 004529b0 (UNCONDITIONAL_CALL)
    ADD ESP,0x4                         ; 0044e5ac
    MOV EAX,EBX                         ; 0044e5af
    MOV dword ptr [0x00c1a204],ESI      ; 0044e5b1 | int g_LightBufferPoolIndex
    MOV dword ptr [0x01322208],ESI      ; 0044e5b7 | g_LightBufferPool[24][0]
    MOV EDX,dword ptr [EAX + 0x148]     ; 0044e5bd
    MOV dword ptr [0x013bc264],ESI      ; 0044e5c3 | int g_CameraEdgeCount
    CMP EDX,0x1e0                       ; 0044e5c9
    JL 0x0044e133                       ; 0044e5cf | LAB_0044e133
        ;   XREF to: 0044e133 (CONDITIONAL_JUMP)
    MOV EAX,dword ptr [EAX + 0x14c]     ; 0044e5d5
    MOV dword ptr [ESP + 0x6c],EAX      ; 0044e5db
    SHL EAX,0x2                         ; 0044e5df
    MOV dword ptr [ESP + 0x40],EAX      ; 0044e5e2
    MOV EDX,dword ptr [EBP + 0x14]      ; 0044e5e6
        ;   Label: LAB_0044e5e6
    MOV EAX,dword ptr [EBP + 0x14]      ; 0044e5e9
    MOV EDI,dword ptr [EDX + 0x14c]     ; 0044e5ec
    MOV EAX,dword ptr [EAX + 0x148]     ; 0044e5f2
    MOV EDX,dword ptr [ESP + 0x6c]      ; 0044e5f8
    SUB EAX,EDI                         ; 0044e5fc
    CMP EAX,EDX                         ; 0044e5fe
    JLE 0x0044e133                      ; 0044e600 | LAB_0044e133
        ;   XREF to: 0044e133 (CONDITIONAL_JUMP)
    MOV EDI,dword ptr [EBP + 0x14]      ; 0044e606
    MOV EAX,dword ptr [ESP + 0x40]      ; 0044e609
    MOV EDI,dword ptr [EDI + 0x14c]     ; 0044e60d
    MOV dword ptr [ESP + 0x4c],EAX      ; 0044e613
    LEA EAX,[EDI*0x4 + 0x0]             ; 0044e617
    MOV dword ptr [ESP + 0x54],EAX      ; 0044e61e
    MOV EAX,dword ptr [EBP + 0x14]      ; 0044e622
        ;   Label: LAB_0044e622
    MOV EDX,dword ptr [EBP + 0x14]      ; 0044e625
    MOV EAX,dword ptr [EAX + 0x14c]     ; 0044e628
    MOV EDX,dword ptr [EDX + 0x144]     ; 0044e62e
    ADD EAX,EAX                         ; 0044e634
    SUB EDX,EAX                         ; 0044e636
    CMP EDI,EDX                         ; 0044e638
    JL 0x0044e652                       ; 0044e63a | LAB_0044e652
        ;   XREF to: 0044e652 (CONDITIONAL_JUMP)
    MOV EBX,dword ptr [ESP + 0x6c]      ; 0044e63c
    MOV ECX,dword ptr [ESP + 0x40]      ; 0044e640
    INC EBX                             ; 0044e644
    ADD ECX,0x4                         ; 0044e645
    MOV dword ptr [ESP + 0x6c],EBX      ; 0044e648
    MOV dword ptr [ESP + 0x40],ECX      ; 0044e64c
    JMP 0x0044e5e6                      ; 0044e650 | LAB_0044e5e6
        ;   XREF to: 0044e5e6 (UNCONDITIONAL_JUMP)
    CMP dword ptr [0x013bc264],0x2710   ; 0044e652 | int g_CameraEdgeCount
        ;   Label: LAB_0044e652
    JGE 0x0044e769                      ; 0044e65c | LAB_0044e769
        ;   XREF to: 0044e769 (CONDITIONAL_JUMP)
    TEST DI,0x1                         ; 0044e662
    JZ 0x0044e75e                       ; 0044e667 | LAB_0044e75e
        ;   XREF to: 0044e75e (CONDITIONAL_JUMP)
    MOV EAX,dword ptr [ESP + 0x4c]      ; 0044e66d
        ;   Label: LAB_0044e66d
    MOV EDX,dword ptr [ESP + 0x54]      ; 0044e671
    MOV EAX,dword ptr [EAX + 0x2cf7d5c] ; 0044e675 | uint *[1024] g_ZBufferScanlineArray
    ADD EAX,EDX                         ; 0044e67b
    MOV EBX,dword ptr [EAX]             ; 0044e67d
    MOV ESI,0x7fffffff                  ; 0044e67f
    TEST EBX,EBX                        ; 0044e684
    JNZ 0x0044e77a                      ; 0044e686 | LAB_0044e77a
        ;   XREF to: 0044e77a (CONDITIONAL_JUMP)
    MOV EBX,ESI                         ; 0044e68c
    MOV EAX,dword ptr [ESP + 0x6c]      ; 0044e68e
        ;   Label: LAB_0044e68e
    MOV CL,byte ptr [0x013bc260]        ; 0044e692 | int g_CameraDownscaleIterations
    SAR EAX,CL                          ; 0044e698
    IMUL EDX,EAX,0x500                  ; 0044e69a
    MOV EAX,EDI                         ; 0044e6a0
    SAR EAX,CL                          ; 0044e6a2
    MOV EAX,dword ptr [EDX + EAX*0x4 + 0xbce6f8] ; 0044e6a4 | int[76800] g_PrecomputedDepthBuffer
    MOV dword ptr [ESP + 0x68],EBX      ; 0044e6ab
    SUB EBX,EAX                         ; 0044e6af
    MOV EAX,EBX                         ; 0044e6b1
    CDQ                                 ; 0044e6b3
    XOR EAX,EDX                         ; 0044e6b4
    SUB EAX,EDX                         ; 0044e6b6
    CMP EAX,0x400                       ; 0044e6b8
    JLE 0x0044e769                      ; 0044e6bd | LAB_0044e769
        ;   XREF to: 0044e769 (CONDITIONAL_JUMP)
    XOR EBX,EBX                         ; 0044e6c3
    MOV EAX,dword ptr [ESP + 0x6c]      ; 0044e6c5
        ;   Label: LAB_0044e6c5
    MOV CL,byte ptr [0x013bc260]        ; 0044e6c9 | int g_CameraDownscaleIterations
    SAR EAX,CL                          ; 0044e6cf
    ADD EAX,dword ptr [EBX + 0x66ed30]  ; 0044e6d1 | int[8] g_CameraEdgeOffsetY
    IMUL EDX,EAX,0x500                  ; 0044e6d7
    MOV CL,byte ptr [0x013bc260]        ; 0044e6dd | int g_CameraDownscaleIterations
    MOV EAX,EDI                         ; 0044e6e3
    SAR EAX,CL                          ; 0044e6e5
    ADD EAX,dword ptr [EBX + 0x66ed10]  ; 0044e6e7 | int[8] g_CameraEdgeOffsetX
    MOV EAX,dword ptr [EDX + EAX*0x4 + 0xbce6f8] ; 0044e6ed | int[76800] g_PrecomputedDepthBuffer
    MOV EDX,dword ptr [ESP + 0x68]      ; 0044e6f4
    SUB EDX,EAX                         ; 0044e6f8
    MOV EAX,EDX                         ; 0044e6fa
    CDQ                                 ; 0044e6fc
    XOR EAX,EDX                         ; 0044e6fd
    SUB EAX,EDX                         ; 0044e6ff
    CMP EAX,ESI                         ; 0044e701
    JGE 0x0044e72a                      ; 0044e703 | LAB_0044e72a
        ;   XREF to: 0044e72a (CONDITIONAL_JUMP)
    MOV EDX,dword ptr [EBX + 0x66ed30]  ; 0044e705 | int[8] g_CameraEdgeOffsetY
    MOV ESI,EAX                         ; 0044e70b
    IMUL EAX,EDX,0x140                  ; 0044e70d
    MOV EDX,dword ptr [EBX + 0x66ed10]  ; 0044e713 | int[8] g_CameraEdgeOffsetX
    MOV ECX,dword ptr [0x013bc264]      ; 0044e719 | int g_CameraEdgeCount
    ADD EDX,EAX                         ; 0044e71f
    IMUL EAX,ECX,0xc                    ; 0044e721
    MOV dword ptr [EAX + 0x13bc268],EDX ; 0044e724 | int[10000] g_CameraEdgeDetectionResults
    ADD EBX,0x4                         ; 0044e72a
        ;   Label: LAB_0044e72a
    CMP EBX,0x20                        ; 0044e72d
    JNZ 0x0044e6c5                      ; 0044e730 | LAB_0044e6c5
        ;   XREF to: 0044e6c5 (CONDITIONAL_JUMP)
    MOV EBX,dword ptr [0x013bc264]      ; 0044e732 | int g_CameraEdgeCount
    IMUL EAX,EBX,0xc                    ; 0044e738
    CMP dword ptr [EAX + 0x13bc268],0x0 ; 0044e73b | int[10000] g_CameraEdgeDetectionResults
    JZ 0x0044e769                       ; 0044e742 | LAB_0044e769
        ;   XREF to: 0044e769 (CONDITIONAL_JUMP)
    MOV EDX,dword ptr [ESP + 0x6c]      ; 0044e744
    MOV dword ptr [EAX + 0x13bc26c],EDI ; 0044e748 | DAT_013bc26c
    MOV dword ptr [EAX + 0x13bc270],EDX ; 0044e74e | DAT_013bc270
    LEA EAX,[EBX + 0x1]                 ; 0044e754
    MOV [0x013bc264],EAX                ; 0044e757 | int g_CameraEdgeCount
    JMP 0x0044e769                      ; 0044e75c | LAB_0044e769
        ;   XREF to: 0044e769 (UNCONDITIONAL_JUMP)
    TEST byte ptr [ESP + 0x6c],0x1      ; 0044e75e
        ;   Label: LAB_0044e75e
    JNZ 0x0044e66d                      ; 0044e763 | LAB_0044e66d
        ;   XREF to: 0044e66d (CONDITIONAL_JUMP)
    MOV EDX,dword ptr [ESP + 0x54]      ; 0044e769
        ;   Label: LAB_0044e769
    ADD EDX,0x4                         ; 0044e76d
    INC EDI                             ; 0044e770
    MOV dword ptr [ESP + 0x54],EDX      ; 0044e771
    JMP 0x0044e622                      ; 0044e775 | LAB_0044e622
        ;   XREF to: 0044e622 (UNCONDITIONAL_JUMP)
    MOV EDX,ESI                         ; 0044e77a
        ;   Label: LAB_0044e77a
    MOV EAX,ESI                         ; 0044e77c
    SAR EDX,0x1f                        ; 0044e77e
    IDIV EBX                            ; 0044e781
    MOV EBX,EAX                         ; 0044e783
    JMP 0x0044e68e                      ; 0044e785 | LAB_0044e68e
        ;   XREF to: 0044e68e (UNCONDITIONAL_JUMP)

