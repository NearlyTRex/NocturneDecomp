; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CDemonCamera * __cdecl core_dcamera_cpp_CDemonCamera_precomputeNormals_FUN_0044e360(CDemonCamera *this_ptr)
;
; Parameters:
; CDemonCamera *   Stack[0x4]:4   this_ptr
; Local Variables:
; int[1014]        Stack[-0x106c]:4056  aiStackY_106c
; int              Stack[-0x88]:4  local_88
; CVector3i        Stack[-0x84]:12  local_84
; CVector3i        Stack[-0x78]:12  local_78
; int              Stack[-0x6c]:4  local_6c
; int[2]           Stack[-0x68]:8  aiStack_68
; CVector3i        Stack[-0x60]:12  local_60
; CVector3i        Stack[-0x54]:12  local_54
; int              Stack[-0x48]:4  local_48
; int              Stack[-0x44]:4  local_44
; int              Stack[-0x40]:4  local_40
; int              Stack[-0x38]:4  local_38
; int              Stack[-0x34]:4  local_34
; int              Stack[-0x30]:4  local_30
; int              Stack[-0x2c]:4  local_2c
; int              Stack[-0x28]:4  local_28
; uint *           Stack[-0x24]:4  local_24
; uint             Stack[-0x1c]:4  local_1c
; int              Stack[-0x18]:4  local_18
; uint             Stack[-0x14]:4  local_14
;
; XREF[2]:
;   core_set.cpp_CDemonSet_precomputeLightVisibility_FUN_0056a470 at 0056a7a9
;   core_set.cpp_CDemonSet_setCameraView_FUN_0056ae50 at 0056b3f9
;
; Referenced Globals:
;   double g_PrecomputePackedNormalToFloat = 0.00390625
;   double g_PrecomputeFixedPointToFloat = 0.00787401574803150
;   int[8] g_CameraEdgeOffsetX
;   undefined4 g_CameraEdgeOffsetX[1]
;   int[8] g_CameraEdgeOffsetY
;   undefined4 g_CameraEdgeOffsetY[1]
;   undefined4 g_PrecomputedWorldPositions[321].x
;   undefined4 g_TempWorldPositions[1][1].x
;   undefined4 g_PrecomputedSurfaceNormals[1][1].x
;   undefined4 g_PrecomputedSurfaceNormals[1][1].y
;   undefined4 g_PrecomputedSurfaceNormals[1][1].z
;   int[76800] g_PrecomputedDepthBuffer
;   undefined4 g_PrecomputedDepthBuffer[321]
;   int g_LightBufferPoolIndex
;   SCoronaLightCache g_CoronaLightCache
;   ... and 7 more
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
    JLE 0x0044e588                      ; 0044e385
        ;   XREF to: 0044e588 (CONDITIONAL_JUMP)  ; LAB_0044e588
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
    MOV EAX,dword ptr [EAX*0x4 + 0x2cf6a9c] ; 0044e3b4 | g_ScreenBufferArray
    MOV EDX,dword ptr [EDX + 0x150]     ; 0044e3bb
    MOV dword ptr [ESP + 0x64],EAX      ; 0044e3c1
    CMP EDX,EDI                         ; 0044e3c5
    JLE 0x0044e552                      ; 0044e3c7
        ;   XREF to: 0044e552 (CONDITIONAL_JUMP)  ; LAB_0044e552
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
    CALL core_dcamera.cpp_CDemonCamera_screenToWorldCoord_FUN_0044d2a0 ; 0044e41b
        ;   XREF to: 0044d2a0 (UNCONDITIONAL_CALL)  ; int core_dcamera.cpp_CDemonCamera_screenToWorldCoord_FUN_0044d2a0(CDemonCamera * this_ptr, int screen_x, int screen_y, CVector3i * output_ptr)
    LEA ESI,[ESP + 0x10]                ; 0044e420
    ADD ESP,0xc                         ; 0044e424
    JMP 0x0060a0a0                      ; 0044e427
        ;   XREF to: 0060a0a0 (UNCONDITIONAL_JUMP)  ; LAB_0060a0a0
    CMP EDI,0x7fffffff                  ; 0044e42e
        ;   Label: LAB_0044e42e
    JZ 0x0044e43e                       ; 0044e434
        ;   XREF to: 0044e43e (CONDITIONAL_JUMP)  ; LAB_0044e43e
    CMP EDI,dword ptr [ESP]             ; 0044e436
    JLE 0x0044e43e                      ; 0044e439
        ;   XREF to: 0044e43e (CONDITIONAL_JUMP)  ; LAB_0044e43e
    MOV dword ptr [ESP],EDI             ; 0044e43b
    LEA EAX,[ESP + 0x28]                ; 0044e43e
        ;   Label: LAB_0044e43e
    PUSH EAX                            ; 0044e442
    MOV ECX,dword ptr [EBP + 0x14]      ; 0044e443
    PUSH ECX                            ; 0044e446
    LEA ESI,[ESP + 0x3c]                ; 0044e447
    LEA EDI,[ESP + 0x24]                ; 0044e44b
    CALL core_dcamera.cpp_CDemonCamera_screenToWorldTransform_FUN_0044d370 ; 0044e44f
        ;   XREF to: 0044d370 (UNCONDITIONAL_CALL)  ; CVector3i * core_dcamera.cpp_CDemonCamera_screenToWorldTransform_FUN_0044d370(CDemonCamera * this_ptr, CVector3i * input_ptr, CVector3i * output_ptr)
    LEA ESI,[ESP + 0x3c]                ; 0044e454
    ADD ESP,0x8                         ; 0044e458
    JMP 0x0060a0bf                      ; 0044e45b
        ;   XREF to: 0060a0bf (UNCONDITIONAL_JUMP)  ; LAB_0060a0bf
    LEA ESI,[ESP + 0x34]                ; 0044e462
        ;   Label: LAB_0044e462
    LEA EDI,[EDI + 0x9e4e74]            ; 0044e466 | g_TempWorldPositions[1][1].x
    MOV EAX,dword ptr [ESP + 0x64]      ; 0044e46c
    JMP 0x0060a0de                      ; 0044e470
        ;   XREF to: 0060a0de (UNCONDITIONAL_JUMP)  ; LAB_0060a0de
    SHR EAX,0x18                        ; 0044e475
        ;   Label: LAB_0044e475
    TEST EAX,EAX                        ; 0044e478
    JZ 0x0044e49d                       ; 0044e47a
        ;   XREF to: 0044e49d (CONDITIONAL_JUMP)  ; LAB_0044e49d
    PUSH EAX                            ; 0044e47c
    LEA EAX,[ESP + 0x2c]                ; 0044e47d
    PUSH EAX                            ; 0044e481
    MOV ESI,dword ptr [EBP + 0x14]      ; 0044e482
    PUSH ESI                            ; 0044e485
    LEA ESI,[ESP + 0x1c]                ; 0044e486
    LEA EDI,[ESP + 0x28]                ; 0044e48a
    CALL core_dcamera.cpp_CDemonCamera_restoreAlphaTransform_FUN_00453a70 ; 0044e48e
        ;   XREF to: 00453a70 (UNCONDITIONAL_CALL)  ; CVector3i * core_dcamera.cpp_CDemonCamera_restoreAlphaTransform_FUN_00453a70(CDemonCamera * this_ptr, CVector3i * screen_pos, int alpha_index, CVector3i * world_pos)
    LEA ESI,[ESP + 0x1c]                ; 0044e493
    JMP 0x0060c3a4                      ; 0044e497
        ;   XREF to: 0060c3a4 (UNCONDITIONAL_JUMP)  ; LAB_0060c3a4
    LEA ESI,[ESP + 0x1c]                ; 0044e49d
        ;   Label: LAB_0044e49d
    LEA EDI,[EBX + 0x902f74]            ; 0044e4a1 | g_PrecomputedWorldPositions[321].x
    JMP 0x0060a0fb                      ; 0044e4a7
        ;   XREF to: 0060a0fb (UNCONDITIONAL_JUMP)  ; LAB_0060a0fb
    MOV EAX,dword ptr [ESP + 0x30]      ; 0044e4ae
        ;   Label: LAB_0044e4ae
    MOV dword ptr [EDX + 0xbce6f8],EAX  ; 0044e4b2 | g_PrecomputedDepthBuffer[321]
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
    FLD double ptr [0x0061a11a]         ; 0044e4e9 | g_PrecomputeFixedPointToFloat
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
    FSTP float ptr [EBX + 0xac6d68]     ; 0044e52b | g_PrecomputedSurfaceNormals[1][1].x
    MOV EDX,dword ptr [EBP + 0x14]      ; 0044e531
    FSTP float ptr [EBX + 0xac6d6c]     ; 0044e534 | g_PrecomputedSurfaceNormals[1][1].y
    FSTP float ptr [EBX + 0xac6d70]     ; 0044e53a | g_PrecomputedSurfaceNormals[1][1].z
    MOV ECX,dword ptr [EDX + 0x150]     ; 0044e540
    MOV dword ptr [ESP + 0x5c],ESI      ; 0044e546
    CMP EDI,ECX                         ; 0044e54a
    JL 0x0044e3e3                       ; 0044e54c
        ;   XREF to: 0044e3e3 (CONDITIONAL_JUMP)  ; LAB_0044e3e3
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
    JL 0x0044e39d                       ; 0044e582
        ;   XREF to: 0044e39d (CONDITIONAL_JUMP)  ; LAB_0044e39d
    MOV EAX,dword ptr [ESP]             ; 0044e588
        ;   Label: LAB_0044e588
    MOV dword ptr [ESP + 0x70],EAX      ; 0044e58b
    FILD dword ptr [ESP + 0x70]         ; 0044e58f
    FMUL double ptr [0x0061a112]        ; 0044e593 | g_PrecomputePackedNormalToFloat
    MOV EAX,dword ptr [EBP + 0x14]      ; 0044e599
    XOR ESI,ESI                         ; 0044e59c
    MOV EBX,EAX                         ; 0044e59e
    PUSH EAX                            ; 0044e5a0
    FSTP float ptr [EAX + 0x140]        ; 0044e5a1
    CALL core_dcamera.cpp_CDemonCamera_saveBackdrop_FUN_004529b0 ; 0044e5a7
        ;   XREF to: 004529b0 (UNCONDITIONAL_CALL)  ; void core_dcamera.cpp_CDemonCamera_saveBackdrop_FUN_004529b0(CDemonCamera * this_ptr)
    ADD ESP,0x4                         ; 0044e5ac
    MOV EAX,EBX                         ; 0044e5af
    MOV dword ptr [0x00c1a204],ESI      ; 0044e5b1 | g_LightBufferPoolIndex
    MOV dword ptr [0x01322208],ESI      ; 0044e5b7 | g_CoronaLightCache
    MOV EDX,dword ptr [EAX + 0x148]     ; 0044e5bd
    MOV dword ptr [0x013bc264],ESI      ; 0044e5c3 | g_CameraEdgeCount
    CMP EDX,0x1e0                       ; 0044e5c9
    JL 0x0044e133                       ; 0044e5cf
        ;   XREF to: 0044e133 (CONDITIONAL_JUMP)  ; LAB_0044e133
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
    JLE 0x0044e133                      ; 0044e600
        ;   XREF to: 0044e133 (CONDITIONAL_JUMP)  ; LAB_0044e133
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
    JL 0x0044e652                       ; 0044e63a
        ;   XREF to: 0044e652 (CONDITIONAL_JUMP)  ; LAB_0044e652
    MOV EBX,dword ptr [ESP + 0x6c]      ; 0044e63c
    MOV ECX,dword ptr [ESP + 0x40]      ; 0044e640
    INC EBX                             ; 0044e644
    ADD ECX,0x4                         ; 0044e645
    MOV dword ptr [ESP + 0x6c],EBX      ; 0044e648
    MOV dword ptr [ESP + 0x40],ECX      ; 0044e64c
    JMP 0x0044e5e6                      ; 0044e650
        ;   XREF to: 0044e5e6 (UNCONDITIONAL_JUMP)  ; LAB_0044e5e6
    CMP dword ptr [0x013bc264],0x2710   ; 0044e652 | g_CameraEdgeCount
        ;   Label: LAB_0044e652
    JGE 0x0044e769                      ; 0044e65c
        ;   XREF to: 0044e769 (CONDITIONAL_JUMP)  ; LAB_0044e769
    TEST DI,0x1                         ; 0044e662
    JZ 0x0044e75e                       ; 0044e667
        ;   XREF to: 0044e75e (CONDITIONAL_JUMP)  ; LAB_0044e75e
    MOV EAX,dword ptr [ESP + 0x4c]      ; 0044e66d
        ;   Label: LAB_0044e66d
    MOV EDX,dword ptr [ESP + 0x54]      ; 0044e671
    MOV EAX,dword ptr [EAX + 0x2cf7d5c] ; 0044e675 | g_ZBufferScanlineArray
    ADD EAX,EDX                         ; 0044e67b
    MOV EBX,dword ptr [EAX]             ; 0044e67d
    MOV ESI,0x7fffffff                  ; 0044e67f
    TEST EBX,EBX                        ; 0044e684
    JNZ 0x0044e77a                      ; 0044e686
        ;   XREF to: 0044e77a (CONDITIONAL_JUMP)  ; LAB_0044e77a
    MOV EBX,ESI                         ; 0044e68c
    MOV EAX,dword ptr [ESP + 0x6c]      ; 0044e68e
        ;   Label: LAB_0044e68e
    MOV CL,byte ptr [0x013bc260]        ; 0044e692 | g_CameraDownscaleIterations
    SAR EAX,CL                          ; 0044e698
    IMUL EDX,EAX,0x500                  ; 0044e69a
    MOV EAX,EDI                         ; 0044e6a0
    SAR EAX,CL                          ; 0044e6a2
    MOV EAX,dword ptr [EDX + EAX*0x4 + 0xbce6f8] ; 0044e6a4 | g_PrecomputedDepthBuffer
    MOV dword ptr [ESP + 0x68],EBX      ; 0044e6ab
    SUB EBX,EAX                         ; 0044e6af
    MOV EAX,EBX                         ; 0044e6b1
    CDQ                                 ; 0044e6b3
    XOR EAX,EDX                         ; 0044e6b4
    SUB EAX,EDX                         ; 0044e6b6
    CMP EAX,0x400                       ; 0044e6b8
    JLE 0x0044e769                      ; 0044e6bd
        ;   XREF to: 0044e769 (CONDITIONAL_JUMP)  ; LAB_0044e769
    XOR EBX,EBX                         ; 0044e6c3
    MOV EAX,dword ptr [ESP + 0x6c]      ; 0044e6c5
        ;   Label: LAB_0044e6c5
    MOV CL,byte ptr [0x013bc260]        ; 0044e6c9 | g_CameraDownscaleIterations
    SAR EAX,CL                          ; 0044e6cf
    ADD EAX,dword ptr [EBX + 0x66ed30]  ; 0044e6d1 | g_CameraEdgeOffsetY | g_CameraEdgeOffsetY[1]
    IMUL EDX,EAX,0x500                  ; 0044e6d7
    MOV CL,byte ptr [0x013bc260]        ; 0044e6dd | g_CameraDownscaleIterations
    MOV EAX,EDI                         ; 0044e6e3
    SAR EAX,CL                          ; 0044e6e5
    ADD EAX,dword ptr [EBX + 0x66ed10]  ; 0044e6e7 | g_CameraEdgeOffsetX | g_CameraEdgeOffsetX[1]
    MOV EAX,dword ptr [EDX + EAX*0x4 + 0xbce6f8] ; 0044e6ed | g_PrecomputedDepthBuffer
    MOV EDX,dword ptr [ESP + 0x68]      ; 0044e6f4
    SUB EDX,EAX                         ; 0044e6f8
    MOV EAX,EDX                         ; 0044e6fa
    CDQ                                 ; 0044e6fc
    XOR EAX,EDX                         ; 0044e6fd
    SUB EAX,EDX                         ; 0044e6ff
    CMP EAX,ESI                         ; 0044e701
    JGE 0x0044e72a                      ; 0044e703
        ;   XREF to: 0044e72a (CONDITIONAL_JUMP)  ; LAB_0044e72a
    MOV EDX,dword ptr [EBX + 0x66ed30]  ; 0044e705 | g_CameraEdgeOffsetY
    MOV ESI,EAX                         ; 0044e70b
    IMUL EAX,EDX,0x140                  ; 0044e70d
    MOV EDX,dword ptr [EBX + 0x66ed10]  ; 0044e713 | g_CameraEdgeOffsetX
    MOV ECX,dword ptr [0x013bc264]      ; 0044e719 | g_CameraEdgeCount
    ADD EDX,EAX                         ; 0044e71f
    IMUL EAX,ECX,0xc                    ; 0044e721
    MOV dword ptr [EAX + 0x13bc268],EDX ; 0044e724 | g_CameraEdgeDetectionResults
    ADD EBX,0x4                         ; 0044e72a
        ;   Label: LAB_0044e72a
    CMP EBX,0x20                        ; 0044e72d
    JNZ 0x0044e6c5                      ; 0044e730
        ;   XREF to: 0044e6c5 (CONDITIONAL_JUMP)  ; LAB_0044e6c5
    MOV EBX,dword ptr [0x013bc264]      ; 0044e732 | g_CameraEdgeCount
    IMUL EAX,EBX,0xc                    ; 0044e738
    CMP dword ptr [EAX + 0x13bc268],0x0 ; 0044e73b | g_CameraEdgeDetectionResults
    JZ 0x0044e769                       ; 0044e742
        ;   XREF to: 0044e769 (CONDITIONAL_JUMP)  ; LAB_0044e769
    MOV EDX,dword ptr [ESP + 0x6c]      ; 0044e744
    MOV dword ptr [EAX + 0x13bc26c],EDI ; 0044e748 | g_CameraEdgeDetectionResults[0].x
    MOV dword ptr [EAX + 0x13bc270],EDX ; 0044e74e | g_CameraEdgeDetectionResults[0].y
    LEA EAX,[EBX + 0x1]                 ; 0044e754
    MOV [0x013bc264],EAX                ; 0044e757 | g_CameraEdgeCount
    JMP 0x0044e769                      ; 0044e75c
        ;   XREF to: 0044e769 (UNCONDITIONAL_JUMP)  ; LAB_0044e769
    TEST byte ptr [ESP + 0x6c],0x1      ; 0044e75e
        ;   Label: LAB_0044e75e
    JNZ 0x0044e66d                      ; 0044e763
        ;   XREF to: 0044e66d (CONDITIONAL_JUMP)  ; LAB_0044e66d
    MOV EDX,dword ptr [ESP + 0x54]      ; 0044e769
        ;   Label: LAB_0044e769
    ADD EDX,0x4                         ; 0044e76d
    INC EDI                             ; 0044e770
    MOV dword ptr [ESP + 0x54],EDX      ; 0044e771
    JMP 0x0044e622                      ; 0044e775
        ;   XREF to: 0044e622 (UNCONDITIONAL_JUMP)  ; LAB_0044e622
    MOV EDX,ESI                         ; 0044e77a
        ;   Label: LAB_0044e77a
    MOV EAX,ESI                         ; 0044e77c
    SAR EDX,0x1f                        ; 0044e77e
    IDIV EBX                            ; 0044e781
    MOV EBX,EAX                         ; 0044e783
    JMP 0x0044e68e                      ; 0044e785
        ;   XREF to: 0044e68e (UNCONDITIONAL_JUMP)  ; LAB_0044e68e
    MOV ECX,dword ptr [ESI]             ; 0060a0a0
        ;   Label: LAB_0060a0a0
    MOV dword ptr [EDI],ECX             ; 0060a0a2
    MOV ECX,dword ptr [ESI + 0x4]       ; 0060a0a4
    MOV dword ptr [EDI + 0x4],ECX       ; 0060a0a7
    MOV ECX,dword ptr [ESI + 0x8]       ; 0060a0aa
    MOV dword ptr [EDI + 0x8],ECX       ; 0060a0ad
    ADD ESI,0xc                         ; 0060a0b0
    ADD EDI,0xc                         ; 0060a0b3
    MOV EDI,dword ptr [ESP + 0x30]      ; 0060a0b6
    JMP 0x0044e42e                      ; 0060a0ba
        ;   XREF to: 0044e42e (UNCONDITIONAL_JUMP)  ; LAB_0044e42e
    MOV ECX,dword ptr [ESI]             ; 0060a0bf
        ;   Label: LAB_0060a0bf
    MOV dword ptr [EDI],ECX             ; 0060a0c1
    MOV ECX,dword ptr [ESI + 0x4]       ; 0060a0c3
    MOV dword ptr [EDI + 0x4],ECX       ; 0060a0c6
    MOV ECX,dword ptr [ESI + 0x8]       ; 0060a0c9
    MOV dword ptr [EDI + 0x8],ECX       ; 0060a0cc
    ADD ESI,0xc                         ; 0060a0cf
    ADD EDI,0xc                         ; 0060a0d2
    MOV EDI,dword ptr [ESP + 0x58]      ; 0060a0d5
    JMP 0x0044e462                      ; 0060a0d9
        ;   XREF to: 0044e462 (UNCONDITIONAL_JUMP)  ; LAB_0044e462
    MOV ECX,dword ptr [ESI]             ; 0060a0de
        ;   Label: LAB_0060a0de
    MOV dword ptr [EDI],ECX             ; 0060a0e0
    MOV ECX,dword ptr [ESI + 0x4]       ; 0060a0e2
    MOV dword ptr [EDI + 0x4],ECX       ; 0060a0e5
    MOV ECX,dword ptr [ESI + 0x8]       ; 0060a0e8
    MOV dword ptr [EDI + 0x8],ECX       ; 0060a0eb
    ADD ESI,0xc                         ; 0060a0ee
    ADD EDI,0xc                         ; 0060a0f1
    MOV EAX,dword ptr [EAX]             ; 0060a0f4
    JMP 0x0044e475                      ; 0060a0f6
        ;   XREF to: 0044e475 (UNCONDITIONAL_JUMP)  ; LAB_0044e475
    MOV ECX,dword ptr [ESI]             ; 0060a0fb
        ;   Label: LAB_0060a0fb
    MOV dword ptr [EDI],ECX             ; 0060a0fd
    MOV ECX,dword ptr [ESI + 0x4]       ; 0060a0ff
    MOV dword ptr [EDI + 0x4],ECX       ; 0060a102
    MOV ECX,dword ptr [ESI + 0x8]       ; 0060a105
    MOV dword ptr [EDI + 0x8],ECX       ; 0060a108
    ADD ESI,0xc                         ; 0060a10b
    ADD EDI,0xc                         ; 0060a10e
    MOV EDX,dword ptr [ESP + 0x5c]      ; 0060a111
    JMP 0x0044e4ae                      ; 0060a115
        ;   XREF to: 0044e4ae (UNCONDITIONAL_JUMP)  ; LAB_0044e4ae
    ADD ESP,0xc                         ; 0060c3a4
        ;   Label: LAB_0060c3a4
    MOV ECX,dword ptr [ESI]             ; 0060c3a7
    MOV dword ptr [EDI],ECX             ; 0060c3a9
    MOV ECX,dword ptr [ESI + 0x4]       ; 0060c3ab
    MOV dword ptr [EDI + 0x4],ECX       ; 0060c3ae
    MOV ECX,dword ptr [ESI + 0x8]       ; 0060c3b1
    MOV dword ptr [EDI + 0x8],ECX       ; 0060c3b4
    ADD ESI,0xc                         ; 0060c3b7
    ADD EDI,0xc                         ; 0060c3ba
    JMP 0x0044e49d                      ; 0060c3bd
        ;   XREF to: 0044e49d (UNCONDITIONAL_JUMP)  ; LAB_0044e49d

