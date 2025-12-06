; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void core_dcamera.cpp_CDemonCamera_compositeLightmapToFramebuffer_FUN_00453270(CDemonCamera * this_ptr)
;
; Parameters:
; CDemonCamera *   Stack[0x4]:4   this_ptr
; Local Variables:
; undefined4       Stack[-0x28]:4  local_28
; undefined4       Stack[-0x24]:4  local_24
; undefined4       Stack[-0x20]:4  local_20
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[1]:
;   core_dcamera.cpp_CDemonCamera_lockAndRenderToBuffer_FUN_004511c0 at 004511d8
;
; Referenced Globals:
;   int g_FogColorIndexR = 0x40
;   int g_FogColorIndexG = 0x40
;   int g_FogColorIndexB = 0x40
;   int g_BitsPerPixel = 0x8
;   char[241][320] g_CoronaBlurWorkBuffer
;   undefined4 g_LightmapTexturePalette[64]
;   int g_CameraDownscaleIterations
;   int g_CameraEdgeCount
;   int[10000] g_CameraEdgeDetectionResults
;   undefined4 DAT_013bc26c
;   undefined4 DAT_013bc270
;   undefined4 DAT_013bc274
;   undefined4 DAT_013bc278
;   undefined4 DAT_013bc27c
;   int g_CameraShakeOffsetX
;   ... and 11 more
;
; Called Functions:
;   core_dcamera.cpp_CDemonCamera_blendLightmapPixel16_FUN_00453db0
;   core_dcamera.cpp_CDemonCamera_blendLightmapPixel32_FUN_00453d10
;   core_dcamera.cpp_CDemonCamera_blurCoronaBufferAndClearEdges_FUN_004509b0
;   core_dcamera.cpp_updateFogScrollOffset_FUN_0044bfb0
;   core_dstrender.cpp_blendBilerpLightmapToTexture64BitOutput_FUN_004917bc
;   core_dstrender.cpp_blendBilerpLightmapToTexture64BitOutput_FUN_00491c9a
;   core_dstrender.cpp_blendBilerpTextureWithLightmapMMX_FUN_00493450
;   core_dstrender.cpp_blendLightmapToTexture32BitInputOutput_FUN_004926e1
;   core_dstrender.cpp_blendLightmapToTexture64BitOutput_FUN_00492bd5
;   core_dstrender.cpp_blendLightmapToTextureMMX_FUN_00493dc4
;   core_dstrender.cpp_blendLightmapToTextureMMX_Variant2_FUN_00492f03
;   core_dstrender.cpp_blendTextureWithLightmapMMX_FUN_00493860
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00453270
        ;   Label: core_dcamera.cpp_CDemonCamera_compositeLightmapToFramebuffer_FUN_00453270
    PUSH ESI                            ; 00453271
    PUSH EDI                            ; 00453272
    PUSH EBP                            ; 00453273
    SUB ESP,0x18                        ; 00453274
    MOV EDI,dword ptr [ESP + 0x2c]      ; 00453277
    MOV EAX,[0x02cf6a80]                ; 0045327b | int g_GlobalDeltaTimeInt
    MOV EDX,dword ptr [0x0151937c]      ; 00453280 | int g_ImageProcessingState2
    SHL EAX,0x2                         ; 00453286
    ADD EDX,EAX                         ; 00453289
    XOR ESI,ESI                         ; 0045328b
    MOV dword ptr [0x0151937c],EDX      ; 0045328d | int g_ImageProcessingState2
    CMP EDX,0x10000                     ; 00453293
    JLE 0x004532da                      ; 00453299 | LAB_004532da
        ;   XREF to: 004532da (CONDITIONAL_JUMP)
    MOV EBP,dword ptr [0x01519378]      ; 0045329b | int g_ImageProcessingState1
    LEA EBX,[EDX + 0xffff0000]          ; 004532a1
    INC EBP                             ; 004532a7
    MOV dword ptr [0x0151937c],EBX      ; 004532a8 | int g_ImageProcessingState2
    MOV dword ptr [0x01519378],EBP      ; 004532ae | int g_ImageProcessingState1
    CMP EBP,0x10                        ; 004532b4
    JL 0x004532bf                       ; 004532b7 | LAB_004532bf
        ;   XREF to: 004532bf (CONDITIONAL_JUMP)
    MOV dword ptr [0x01519378],ESI      ; 004532b9 | int g_ImageProcessingState1
    MOV ECX,dword ptr [0x0151937c]      ; 004532bf | int g_ImageProcessingState2
        ;   Label: LAB_004532bf
    PUSH ECX                            ; 004532c5
    MOV EBX,dword ptr [0x01519378]      ; 004532c6 | int g_ImageProcessingState1
    PUSH EBX                            ; 004532cc
    PUSH 0x1519384                      ; 004532cd | SFogGrid g_CameraFogGrid
    CALL core_dcamera.cpp_updateFogScrollOffset_FUN_0044bfb0 ; 004532d2 | void core_dcamera.cpp_updateFogScrollOffset_FUN_0044bfb0(SFogGrid * fog_ptr, int time_major, int time_minor)
        ;   XREF to: 0044bfb0 (UNCONDITIONAL_CALL)
    ADD ESP,0xc                         ; 004532d7
    PUSH EDI                            ; 004532da
        ;   Label: LAB_004532da
    CALL core_dcamera.cpp_CDemonCamera_blurCoronaBufferAndClearEdges_FUN_004509b0 ; 004532db | void core_dcamera.cpp_CDemonCamera_blurCoronaBufferAndClearEdges_FUN_004509b0(CDemonCamera * this_ptr)
        ;   XREF to: 004509b0 (UNCONDITIONAL_CALL)
    MOV EAX,[0x0066ed0c]                ; 004532e0 | int g_FogColorIndexB
    MOV EBX,dword ptr [EAX*0x4 + 0xc19dfc] ; 004532e5 | g_LightmapTexturePalette[64]
    MOV EAX,[0x0066ed08]                ; 004532ec | int g_FogColorIndexG
    MOV EDX,dword ptr [0x0067939c]      ; 004532f1 | int g_BitsPerPixel
    MOV EBP,dword ptr [EAX*0x4 + 0xc19dfc] ; 004532f7 | g_LightmapTexturePalette[64]
    MOV EAX,[0x0066ed04]                ; 004532fe | int g_FogColorIndexR
    ADD ESP,0x4                         ; 00453303
    AND EBX,0xff                        ; 00453306
    MOV EAX,dword ptr [EAX*0x4 + 0xc19dfc] ; 0045330c | g_LightmapTexturePalette[64]
    AND EBP,0xff                        ; 00453313
    AND EAX,0xff                        ; 00453319
    CMP EDX,0x20                        ; 0045331e
    JNZ 0x00453412                      ; 00453321 | LAB_00453412
        ;   XREF to: 00453412 (CONDITIONAL_JUMP)
    MOV CL,byte ptr [0x02d01f24]        ; 00453327 | int g_RedBitPosition
    SHL EAX,CL                          ; 0045332d
    MOV CL,byte ptr [0x02d01f30]        ; 0045332f | int g_GreenBitPosition
    SHL EBP,CL                          ; 00453335
    MOV CL,byte ptr [0x02d01f3c]        ; 00453337 | int g_BlueBitPosition
    SHL EBX,CL                          ; 0045333d
    OR EAX,EBP                          ; 0045333f
    MOV ECX,EBX                         ; 00453341
    OR ECX,EAX                          ; 00453343
    MOV dword ptr [0x02d052a8],ECX      ; 00453345 | int g_SolidColorMode
        ;   Label: LAB_00453345
    CMP dword ptr [0x0067939c],0x10     ; 0045334b | int g_BitsPerPixel
    JNZ 0x004534cd                      ; 00453352 | LAB_004534cd
        ;   XREF to: 004534cd (CONDITIONAL_JUMP)
    MOV EBP,0x1                         ; 00453358
    MOV EAX,dword ptr [EDI + 0x148]     ; 0045335d
        ;   Label: LAB_0045335d
    DEC EAX                             ; 00453363
    CMP EBP,EAX                         ; 00453364
    JGE 0x00450791                      ; 00453366 | LAB_00450791
        ;   XREF to: 00450791 (CONDITIONAL_JUMP)
    MOV ECX,dword ptr [0x013da774]      ; 0045336c | int g_CameraShakeOffsetY
    MOV EBX,EBP                         ; 00453372
    MOV EAX,[0x013da770]                ; 00453374 | int g_CameraShakeOffsetX
    SUB EBX,ECX                         ; 00453379
    ADD EAX,EAX                         ; 0045337b
    MOV EBX,dword ptr [EBX*0x4 + 0x2cf6a9c] ; 0045337d | void *[1024] g_ScreenBufferArray
    ADD EBX,EAX                         ; 00453384
    MOV EAX,dword ptr [EDI + 0x144]     ; 00453386
    IMUL EAX,EBP                        ; 0045338c
    MOV dword ptr [ESP + 0x10],EBX      ; 0045338f
    MOV EBX,dword ptr [EDI + 0x158]     ; 00453393
    SHL EAX,0x2                         ; 00453399
    MOV CL,byte ptr [0x013bc260]        ; 0045339c | int g_CameraDownscaleIterations
    ADD EBX,EAX                         ; 004533a2
    MOV EAX,EBP                         ; 004533a4
    SAR EAX,CL                          ; 004533a6
    IMUL EAX,EAX,0x140                  ; 004533a8
    MOV dword ptr [ESP + 0x8],EBX       ; 004533ae
    MOV ECX,0x13da778                   ; 004533b2 | SFogImagePlane g_CameraPlaneWorkBuffer
    MOV EBX,0xbbb9b8                    ; 004533b7 | char[241][320] g_CoronaBlurWorkBuffer
    ADD ECX,EAX                         ; 004533bc
    ADD EBX,EAX                         ; 004533be
    MOV dword ptr [ESP + 0x4],ECX       ; 004533c0
    TEST EBP,0x1                        ; 004533c4
    JNZ 0x00453444                      ; 004533ca | LAB_00453444
        ;   XREF to: 00453444 (CONDITIONAL_JUMP)
    CMP dword ptr [EDI + 0x14c],0x1     ; 004533d0
    JNZ 0x004533f4                      ; 004533d7 | LAB_004533f4
        ;   XREF to: 004533f4 (CONDITIONAL_JUMP)
    MOV EDX,dword ptr [EDI + 0x144]     ; 004533d9
    PUSH EDX                            ; 004533df
    PUSH ECX                            ; 004533e0
    PUSH EBX                            ; 004533e1
    MOV EAX,dword ptr [ESP + 0x14]      ; 004533e2
    PUSH EAX                            ; 004533e6
    MOV EDX,dword ptr [ESP + 0x20]      ; 004533e7
    PUSH EDX                            ; 004533eb
    CALL core_dstrender.cpp_blendTextureWithLightmapMMX_FUN_00493860 ; 004533ec | void core_dstrender.cpp_blendTextureWithLightmapMMX_FUN_00493860(uint * output_buffer, uint * texture_buffer, byte * texture_indices, byte * lightmap_indices, ...)
        ;   XREF to: 00493860 (UNCONDITIONAL_CALL)
    ADD ESP,0x14                        ; 004533f1
    CMP dword ptr [EDI + 0x14c],0x2     ; 004533f4
        ;   Label: LAB_004533f4
    JZ 0x00453423                       ; 004533fb | LAB_00453423
        ;   XREF to: 00453423 (CONDITIONAL_JUMP)
    IMUL EBX,ESI,0xc                    ; 004533fd
        ;   Label: LAB_004533fd
    CMP ESI,dword ptr [0x013bc264]      ; 00453400 | int g_CameraEdgeCount
    JL 0x00453495                       ; 00453406 | LAB_00453495
        ;   XREF to: 00453495 (CONDITIONAL_JUMP)
    INC EBP                             ; 0045340c
        ;   Label: LAB_0045340c
    JMP 0x0045335d                      ; 0045340d | LAB_0045335d
        ;   XREF to: 0045335d (UNCONDITIONAL_JUMP)
    MOV ECX,EAX                         ; 00453412
        ;   Label: LAB_00453412
    SHL EBP,0x8                         ; 00453414
    SHL ECX,0x10                        ; 00453417
    OR ECX,EBP                          ; 0045341a
    OR ECX,EBX                          ; 0045341c
    JMP 0x00453345                      ; 0045341e | LAB_00453345
        ;   XREF to: 00453345 (UNCONDITIONAL_JUMP)
    MOV EAX,dword ptr [EDI + 0x144]     ; 00453423
        ;   Label: LAB_00453423
    PUSH EAX                            ; 00453429
    MOV EDX,dword ptr [ESP + 0x8]       ; 0045342a
    PUSH EDX                            ; 0045342e
    PUSH EBX                            ; 0045342f
    MOV ECX,dword ptr [ESP + 0x14]      ; 00453430
    PUSH ECX                            ; 00453434
    MOV EBX,dword ptr [ESP + 0x20]      ; 00453435
    PUSH EBX                            ; 00453439
    CALL core_dstrender.cpp_blendLightmapToTextureMMX_Variant2_FUN_00492f03 ; 0045343a | void core_dstrender.cpp_blendLightmapToTextureMMX_Variant2_FUN_00492f03(uint * output_buffer, ulonglong * texture_buffer, byte * texture_indices, byte * lightmap_indices, ...)
        ;   XREF to: 00492f03 (UNCONDITIONAL_CALL)
    ADD ESP,0x14                        ; 0045343f
    JMP 0x004533fd                      ; 00453442 | LAB_004533fd
        ;   XREF to: 004533fd (UNCONDITIONAL_JUMP)
    CMP dword ptr [EDI + 0x14c],0x1     ; 00453444
        ;   Label: LAB_00453444
    JNZ 0x00453468                      ; 0045344b | LAB_00453468
        ;   XREF to: 00453468 (CONDITIONAL_JUMP)
    MOV EDX,dword ptr [EDI + 0x144]     ; 0045344d
    PUSH EDX                            ; 00453453
    PUSH ECX                            ; 00453454
    PUSH EBX                            ; 00453455
    MOV EAX,dword ptr [ESP + 0x14]      ; 00453456
    PUSH EAX                            ; 0045345a
    MOV EDX,dword ptr [ESP + 0x20]      ; 0045345b
    PUSH EDX                            ; 0045345f
    CALL core_dstrender.cpp_blendLightmapToTextureMMX_FUN_00493dc4 ; 00453460 | void core_dstrender.cpp_blendLightmapToTextureMMX_FUN_00493dc4(ulonglong * output_buffer, ulonglong * texture_buffer, byte * texture_indices, byte * lightmap_indices, ...)
        ;   XREF to: 00493dc4 (UNCONDITIONAL_CALL)
    ADD ESP,0x14                        ; 00453465
    CMP dword ptr [EDI + 0x14c],0x2     ; 00453468
        ;   Label: LAB_00453468
    JNZ 0x004533fd                      ; 0045346f | LAB_004533fd
        ;   XREF to: 004533fd (CONDITIONAL_JUMP)
    MOV EAX,dword ptr [EDI + 0x144]     ; 00453471
    PUSH EAX                            ; 00453477
    MOV EDX,dword ptr [ESP + 0x8]       ; 00453478
    PUSH EDX                            ; 0045347c
    PUSH EBX                            ; 0045347d
    MOV ECX,dword ptr [ESP + 0x14]      ; 0045347e
    PUSH ECX                            ; 00453482
    MOV EBX,dword ptr [ESP + 0x20]      ; 00453483
    PUSH EBX                            ; 00453487
    CALL core_dstrender.cpp_blendBilerpTextureWithLightmapMMX_FUN_00493450 ; 00453488 | void core_dstrender.cpp_blendBilerpTextureWithLightmapMMX_FUN_00493450(uint * output_buffer, ulonglong * texture_buffer, byte * texture_indices, byte * lightmap_indices, ...)
        ;   XREF to: 00493450 (UNCONDITIONAL_CALL)
    ADD ESP,0x14                        ; 0045348d
    JMP 0x004533fd                      ; 00453490 | LAB_004533fd
        ;   XREF to: 004533fd (UNCONDITIONAL_JUMP)
    MOV EDX,dword ptr [EBX + 0x13bc270] ; 00453495 | DAT_013bc270
        ;   Label: LAB_00453495
    CMP EBP,EDX                         ; 0045349b
    JNZ 0x0045340c                      ; 0045349d | LAB_0045340c
        ;   XREF to: 0045340c (CONDITIONAL_JUMP)
    MOV ECX,dword ptr [EBX + 0x13bc268] ; 004534a3 | int[10000] g_CameraEdgeDetectionResults
    PUSH ECX                            ; 004534a9
    PUSH EDX                            ; 004534aa
    MOV EDX,dword ptr [EBX + 0x13bc26c] ; 004534ab | DAT_013bc26c
    PUSH EDX                            ; 004534b1
    PUSH EDI                            ; 004534b2
    ADD EBX,0xc                         ; 004534b3
    INC ESI                             ; 004534b6
    CALL core_dcamera.cpp_CDemonCamera_blendLightmapPixel16_FUN_00453db0 ; 004534b7 | void core_dcamera.cpp_CDemonCamera_blendLightmapPixel16_FUN_00453db0(CDemonCamera * this_ptr, int screen_x, int screen_y, int offset)
        ;   XREF to: 00453db0 (UNCONDITIONAL_CALL)
    ADD ESP,0x10                        ; 004534bc
    CMP ESI,dword ptr [0x013bc264]      ; 004534bf | int g_CameraEdgeCount
    JL 0x00453495                       ; 004534c5 | LAB_00453495
        ;   XREF to: 00453495 (CONDITIONAL_JUMP)
    INC EBP                             ; 004534c7
    JMP 0x0045335d                      ; 004534c8 | LAB_0045335d
        ;   XREF to: 0045335d (UNCONDITIONAL_JUMP)
    MOV EBP,0x1                         ; 004534cd
        ;   Label: LAB_004534cd
    MOV EAX,dword ptr [EDI + 0x148]     ; 004534d2
        ;   Label: LAB_004534d2
    DEC EAX                             ; 004534d8
    CMP EBP,EAX                         ; 004534d9
    JGE 0x00450791                      ; 004534db | LAB_00450791
        ;   XREF to: 00450791 (CONDITIONAL_JUMP)
    MOV EBX,dword ptr [0x013da774]      ; 004534e1 | int g_CameraShakeOffsetY
    MOV EAX,EBP                         ; 004534e7
    SUB EAX,EBX                         ; 004534e9
    LEA EBX,[EAX*0x4 + 0x0]             ; 004534eb
    MOV EAX,[0x013da770]                ; 004534f2 | int g_CameraShakeOffsetX
    MOV EBX,dword ptr [EBX + 0x2cf6a9c] ; 004534f7 | void *[1024] g_ScreenBufferArray
    SHL EAX,0x2                         ; 004534fd
    ADD EBX,EAX                         ; 00453500
    MOV EAX,dword ptr [EDI + 0x144]     ; 00453502
    IMUL EAX,EBP                        ; 00453508
    MOV dword ptr [ESP + 0xc],EBX       ; 0045350b
    MOV EBX,dword ptr [EDI + 0x158]     ; 0045350f
    SHL EAX,0x2                         ; 00453515
    MOV CL,byte ptr [0x013bc260]        ; 00453518 | int g_CameraDownscaleIterations
    ADD EBX,EAX                         ; 0045351e
    MOV EAX,EBP                         ; 00453520
    SAR EAX,CL                          ; 00453522
    IMUL EAX,EAX,0x140                  ; 00453524
    MOV dword ptr [ESP],EBX             ; 0045352a
    MOV ECX,0x13da778                   ; 0045352d | SFogImagePlane g_CameraPlaneWorkBuffer
    MOV EBX,0xbbb9b8                    ; 00453532 | char[241][320] g_CoronaBlurWorkBuffer
    ADD ECX,EAX                         ; 00453537
    ADD EBX,EAX                         ; 00453539
    MOV dword ptr [ESP + 0x14],ECX      ; 0045353b
    TEST EBP,0x1                        ; 0045353f
    JNZ 0x004535aa                      ; 00453545 | LAB_004535aa
        ;   XREF to: 004535aa (CONDITIONAL_JUMP)
    CMP dword ptr [EDI + 0x14c],0x1     ; 00453547
    JNZ 0x0045356b                      ; 0045354e | LAB_0045356b
        ;   XREF to: 0045356b (CONDITIONAL_JUMP)
    MOV EDX,dword ptr [EDI + 0x144]     ; 00453550
    PUSH EDX                            ; 00453556
    PUSH ECX                            ; 00453557
    PUSH EBX                            ; 00453558
    MOV EAX,dword ptr [ESP + 0xc]       ; 00453559
    PUSH EAX                            ; 0045355d
    MOV EDX,dword ptr [ESP + 0x1c]      ; 0045355e
    PUSH EDX                            ; 00453562
    CALL core_dstrender.cpp_blendLightmapToTexture32BitInputOutput_FUN_004926e1 ; 00453563 | void core_dstrender.cpp_blendLightmapToTexture32BitInputOutput_FUN_004926e1(uint * output_buffer, uint * texture_buffer, byte * texture_indices, byte * lightmap_indices, ...)
        ;   XREF to: 004926e1 (UNCONDITIONAL_CALL)
    ADD ESP,0x14                        ; 00453568
    CMP dword ptr [EDI + 0x14c],0x2     ; 0045356b
        ;   Label: LAB_0045356b
    JZ 0x00453589                       ; 00453572 | LAB_00453589
        ;   XREF to: 00453589 (CONDITIONAL_JUMP)
    IMUL EBX,ESI,0xc                    ; 00453574
        ;   Label: LAB_00453574
    CMP ESI,dword ptr [0x013bc264]      ; 00453577 | int g_CameraEdgeCount
    JL 0x004535fb                       ; 0045357d | LAB_004535fb
        ;   XREF to: 004535fb (CONDITIONAL_JUMP)
    INC EBP                             ; 00453583
        ;   Label: LAB_00453583
    JMP 0x004534d2                      ; 00453584 | LAB_004534d2
        ;   XREF to: 004534d2 (UNCONDITIONAL_JUMP)
    MOV EAX,dword ptr [EDI + 0x144]     ; 00453589
        ;   Label: LAB_00453589
    PUSH EAX                            ; 0045358f
    MOV EDX,dword ptr [ESP + 0x18]      ; 00453590
    PUSH EDX                            ; 00453594
    PUSH EBX                            ; 00453595
    MOV ECX,dword ptr [ESP + 0xc]       ; 00453596
    PUSH ECX                            ; 0045359a
    MOV EBX,dword ptr [ESP + 0x1c]      ; 0045359b
    PUSH EBX                            ; 0045359f
    CALL core_dstrender.cpp_blendBilerpLightmapToTexture64BitOutput_FUN_004917bc ; 004535a0 | void core_dstrender.cpp_blendBilerpLightmapToTexture64BitOutput_FUN_004917bc(ulonglong * output_buffer, ulonglong * texture_buffer, byte * texture_indices, byte * lightmap_indices, ...)
        ;   XREF to: 004917bc (UNCONDITIONAL_CALL)
    ADD ESP,0x14                        ; 004535a5
    JMP 0x00453574                      ; 004535a8 | LAB_00453574
        ;   XREF to: 00453574 (UNCONDITIONAL_JUMP)
    CMP dword ptr [EDI + 0x14c],0x1     ; 004535aa
        ;   Label: LAB_004535aa
    JNZ 0x004535ce                      ; 004535b1 | LAB_004535ce
        ;   XREF to: 004535ce (CONDITIONAL_JUMP)
    MOV EDX,dword ptr [EDI + 0x144]     ; 004535b3
    PUSH EDX                            ; 004535b9
    PUSH ECX                            ; 004535ba
    PUSH EBX                            ; 004535bb
    MOV EAX,dword ptr [ESP + 0xc]       ; 004535bc
    PUSH EAX                            ; 004535c0
    MOV EDX,dword ptr [ESP + 0x1c]      ; 004535c1
    PUSH EDX                            ; 004535c5
    CALL core_dstrender.cpp_blendLightmapToTexture64BitOutput_FUN_00492bd5 ; 004535c6 | void core_dstrender.cpp_blendLightmapToTexture64BitOutput_FUN_00492bd5(uint * output_buffer, ulonglong * texture_buffer, byte * texture_indices, byte * lightmap_indices, ...)
        ;   XREF to: 00492bd5 (UNCONDITIONAL_CALL)
    ADD ESP,0x14                        ; 004535cb
    CMP dword ptr [EDI + 0x14c],0x2     ; 004535ce
        ;   Label: LAB_004535ce
    JNZ 0x00453574                      ; 004535d5 | LAB_00453574
        ;   XREF to: 00453574 (CONDITIONAL_JUMP)
    MOV EAX,dword ptr [EDI + 0x144]     ; 004535d7
    PUSH EAX                            ; 004535dd
    MOV EDX,dword ptr [ESP + 0x18]      ; 004535de
    PUSH EDX                            ; 004535e2
    PUSH EBX                            ; 004535e3
    MOV ECX,dword ptr [ESP + 0xc]       ; 004535e4
    PUSH ECX                            ; 004535e8
    MOV EBX,dword ptr [ESP + 0x1c]      ; 004535e9
    PUSH EBX                            ; 004535ed
    CALL core_dstrender.cpp_blendBilerpLightmapToTexture64BitOutput_FUN_00491c9a ; 004535ee | void core_dstrender.cpp_blendBilerpLightmapToTexture64BitOutput_FUN_00491c9a(ulonglong * output_buffer, ulonglong * texture_buffer, byte * texture_indices, byte * lightmap_indices, ...)
        ;   XREF to: 00491c9a (UNCONDITIONAL_CALL)
    ADD ESP,0x14                        ; 004535f3
    JMP 0x00453574                      ; 004535f6 | LAB_00453574
        ;   XREF to: 00453574 (UNCONDITIONAL_JUMP)
    MOV EDX,dword ptr [EBX + 0x13bc270] ; 004535fb | DAT_013bc270
        ;   Label: LAB_004535fb
    CMP EBP,EDX                         ; 00453601
    JNZ 0x00453583                      ; 00453603 | LAB_00453583
        ;   XREF to: 00453583 (CONDITIONAL_JUMP)
    MOV ECX,dword ptr [EBX + 0x13bc268] ; 00453609 | int[10000] g_CameraEdgeDetectionResults
    PUSH ECX                            ; 0045360f
    PUSH EDX                            ; 00453610
    MOV EDX,dword ptr [EBX + 0x13bc26c] ; 00453611 | DAT_013bc26c
    PUSH EDX                            ; 00453617
    PUSH EDI                            ; 00453618
    ADD EBX,0xc                         ; 00453619
    INC ESI                             ; 0045361c
    CALL core_dcamera.cpp_CDemonCamera_blendLightmapPixel32_FUN_00453d10 ; 0045361d | void core_dcamera.cpp_CDemonCamera_blendLightmapPixel32_FUN_00453d10(CDemonCamera * this_ptr, int screen_x, int screen_y, int offset)
        ;   XREF to: 00453d10 (UNCONDITIONAL_CALL)
    ADD ESP,0x10                        ; 00453622
    CMP ESI,dword ptr [0x013bc264]      ; 00453625 | int g_CameraEdgeCount
    JL 0x004535fb                       ; 0045362b | LAB_004535fb
        ;   XREF to: 004535fb (CONDITIONAL_JUMP)
    INC EBP                             ; 0045362d
    JMP 0x004534d2                      ; 0045362e | LAB_004534d2
        ;   XREF to: 004534d2 (UNCONDITIONAL_JUMP)

