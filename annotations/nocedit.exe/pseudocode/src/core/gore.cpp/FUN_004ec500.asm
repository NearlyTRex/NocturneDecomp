; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; unknown undefined core_gore.cpp_FUN_004ec500()
;
; Local Variables:
; undefined4       Stack[-0x8c]:4  local_8c
; undefined4       Stack[-0x88]:4  local_88
; undefined4       Stack[-0x84]:4  local_84
; undefined4       Stack[-0x80]:4  local_80
; undefined4       Stack[-0x7c]:4  local_7c
; undefined4       Stack[-0x78]:4  local_78
; undefined4       Stack[-0x74]:4  local_74
; undefined4       Stack[-0x70]:4  local_70
; undefined4       Stack[-0x6c]:4  local_6c
; undefined4       Stack[-0x68]:4  local_68
; undefined4       Stack[-0x64]:4  local_64
; undefined4       Stack[-0x60]:4  local_60
; undefined4       Stack[-0x5c]:4  local_5c
; undefined4       Stack[-0x58]:4  local_58
; undefined4       Stack[-0x54]:4  local_54
; undefined4       Stack[-0x50]:4  local_50
; undefined4       Stack[-0x4c]:4  local_4c
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
; XREF[1]:
;   core_gore.cpp_FUN_004ed830 at 004ed952
;
; Referenced Globals:
;   double DOUBLE_0062e30a = 8
;   double DOUBLE_0062e312 = 4
;   undefined4 DAT_0065f024
;   CDemonRenderer* g_CDemonRendererPtr2 = 02c6d578
;   SMRGLTextureBasic DAT_0067b9c8
;   SMRGLTextureBasic DAT_0067ba28
;   undefined4 g_RenderVertexBuffer[0].light
;   undefined4 g_RenderVertexBuffer[0].color
;   undefined4 g_RenderVertexBuffer[0].fog
;   undefined4 g_RenderVertexBuffer[1].light
;   undefined4 g_RenderVertexBuffer[1].color
;   undefined4 g_RenderVertexBuffer[1].fog
;   undefined4 g_RenderVertexBuffer[2].light
;   undefined4 g_RenderVertexBuffer[2].color
;   undefined4 g_RenderVertexBuffer[2].fog
;   ... and 9 more
;
; Called Functions:
;   crt_math.c_round_FUN_005fe6b0
;   engine_drender.cpp_CDemonRenderer_applyScaledTransform_FUN_0048c4f0
;   engine_drender.cpp_CDemonRenderer_captureTexture_FUN_0048db80
;   engine_drender.cpp_CDemonRenderer_matrixPop_FUN_0050d720
;   engine_drender.cpp_CDemonRenderer_processCameraRelativeVertex_FUN_0048c450
;   engine_drender.cpp_CDemonRenderer_renderEnhancedQuality_FUN_0048bcf0
;   wincore_windll.cpp_transformAndProjectPoint_FUN_005b575c
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004ec500
        ;   Label: core_gore.cpp_FUN_004ec500
    PUSH ESI                            ; 004ec501
    PUSH EDI                            ; 004ec502
    PUSH EBP                            ; 004ec503
    SUB ESP,0x7c                        ; 004ec504
    MOV ESI,dword ptr [ESP + 0x90]      ; 004ec507
    MOV EBX,dword ptr [ESP + 0x94]      ; 004ec50e
    FLD float ptr [ESI + 0x24]          ; 004ec515
    FMUL double ptr [0x0062e30a]        ; 004ec518 | DOUBLE_0062e30a
    FADD double ptr [0x0062e312]        ; 004ec51e | DOUBLE_0062e312
    CALL crt_math.c_round_FUN_005fe6b0  ; 004ec524
        ;   XREF to: 005fe6b0 (UNCONDITIONAL_CALL)  ; double crt_math.c_round_FUN_005fe6b0(double value)
    FISTP dword ptr [ESP + 0x78]        ; 004ec529
    MOV EDX,dword ptr [ESP + 0x78]      ; 004ec52d
    TEST EDX,EDX                        ; 004ec531
    JL 0x004ec808                       ; 004ec533
        ;   XREF to: 004ec808 (CONDITIONAL_JUMP)  ; LAB_004ec808
    CMP EDX,0xf                         ; 004ec539
    JLE 0x004ec550                      ; 004ec53c
        ;   XREF to: 004ec550 (CONDITIONAL_JUMP)  ; LAB_004ec550
    MOV dword ptr [ESP + 0x78],0xf      ; 004ec53e
    TEST EBX,EBX                        ; 004ec546
    JZ 0x004ec550                       ; 004ec548
        ;   XREF to: 004ec550 (CONDITIONAL_JUMP)  ; LAB_004ec550
    MOV dword ptr [ESI],0x1             ; 004ec54a
    LEA EAX,[ESI + 0x4]                 ; 004ec550
        ;   Label: LAB_004ec550
    PUSH EAX                            ; 004ec553
    MOV EAX,[0x006703ec]                ; 004ec554 | g_CDemonRendererPtr2
    PUSH EAX                            ; 004ec559 | g_CDemonRendererInstance
    CALL engine_drender.cpp_CDemonRenderer_processCameraRelativeVertex_FUN_0048c450 ; 004ec55a
        ;   XREF to: 0048c450 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_processCameraRelativeVertex_FUN_0048c450(CDemonRenderer * this_ptr, CVector3f * world_position)
    MOV EDX,dword ptr [ESI + 0x10]      ; 004ec55f
    ADD ESP,0x8                         ; 004ec562
    CMP EDX,0x1                         ; 004ec565
    JNZ 0x004ec813                      ; 004ec568
        ;   XREF to: 004ec813 (CONDITIONAL_JUMP)  ; LAB_004ec813
    XOR EDX,EDX                         ; 004ec56e
    MOV EBX,0xffff                      ; 004ec570
    MOV dword ptr [0x02d83370],EDX      ; 004ec575 | DAT_02d83368.surface_normal.A
    MOV dword ptr [0x02d83378],EBX      ; 004ec57b | DAT_02d83368.surface_normal.C
    MOV EBX,dword ptr [ESI + 0x28]      ; 004ec581
    MOV dword ptr [0x02d83374],EDX      ; 004ec584 | DAT_02d83368.surface_normal.B
    LEA EAX,[EBX*0x4 + 0x0]             ; 004ec58a
    MOV dword ptr [0x02d8337c],EDX      ; 004ec591 | DAT_02d83368.surface_normal.D
    SUB EAX,EBX                         ; 004ec597
    MOV EDX,0x67ba28                    ; 004ec599 | DAT_0067ba28
    SHL EAX,0x7                         ; 004ec59e
    MOV EBX,dword ptr [ESP + 0x78]      ; 004ec5a1
    ADD EDX,EAX                         ; 004ec5a5
    LEA EAX,[EBX*0x4 + 0x0]             ; 004ec5a7
    SUB EAX,EBX                         ; 004ec5ae
    SHL EAX,0x3                         ; 004ec5b0
    ADD EAX,EDX                         ; 004ec5b3
    PUSH EAX                            ; 004ec5b5
    MOV EBP,dword ptr [0x006703ec]      ; 004ec5b6 | g_CDemonRendererPtr2
    PUSH EBP                            ; 004ec5bc | g_CDemonRendererInstance
    CALL engine_drender.cpp_CDemonRenderer_captureTexture_FUN_0048db80 ; 004ec5bd
        ;   XREF to: 0048db80 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_captureTexture_FUN_0048db80(CDemonRenderer * this_ptr, SMRGLTextureBasic * texture)
    ADD ESP,0x8                         ; 004ec5c2
    XOR EDI,EDI                         ; 004ec5c5
    PUSH EDI                            ; 004ec5c7
    LEA EAX,[ESI + 0x18]                ; 004ec5c8
    PUSH EAX                            ; 004ec5cb
    MOV EAX,[0x006703ec]                ; 004ec5cc | g_CDemonRendererPtr2
    PUSH EAX                            ; 004ec5d1 | g_CDemonRendererInstance
    XOR EBX,EBX                         ; 004ec5d2
    CALL engine_drender.cpp_CDemonRenderer_applyScaledTransform_FUN_0048c4f0 ; 004ec5d4
        ;   XREF to: 0048c4f0 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_applyScaledTransform_FUN_0048c4f0(CDemonRenderer * this_ptr, CVector3i * position, CVector3i * rotation)
    MOV EDX,0xbf000000                  ; 004ec5d9
    ADD ESP,0xc                         ; 004ec5de
    LEA EAX,[ESP + 0x18]                ; 004ec5e1
    MOV dword ptr [ESP + 0x18],EDX      ; 004ec5e5
    MOV dword ptr [ESP + 0x1c],EDX      ; 004ec5e9
    MOV dword ptr [ESP + 0x20],EBX      ; 004ec5ed
    LEA EBX,[ESP + 0x24]                ; 004ec5f1
    MOV EDX,dword ptr [0x006703ec]      ; 004ec5f5 | g_CDemonRendererPtr2
    FLD float ptr [EAX]                 ; 004ec5fb
    FMUL float ptr [0x0065f024]         ; 004ec5fd | DAT_0065f024
    FISTP dword ptr [EBX]               ; 004ec603
    FLD float ptr [EAX + 0x4]           ; 004ec605
    FMUL float ptr [0x0065f024]         ; 004ec608 | DAT_0065f024
    FISTP dword ptr [EBX + 0x4]         ; 004ec60e
    FLD float ptr [EAX + 0x8]           ; 004ec611
    FMUL float ptr [0x0065f024]         ; 004ec614 | DAT_0065f024
    FISTP dword ptr [EBX + 0x8]         ; 004ec61a
    LEA EAX,[ESP + 0x24]                ; 004ec61d
    PUSH EAX                            ; 004ec621
    MOV EAX,dword ptr [EDX]             ; 004ec622 | g_CDemonRendererInstance
    PUSH EAX                            ; 004ec624
    MOV EBP,0xbf000000                  ; 004ec625
    MOV EDI,0x3f000000                  ; 004ec62a
    CALL wincore_windll.cpp_transformAndProjectPoint_FUN_005b575c ; 004ec62f
        ;   XREF to: 005b575c (UNCONDITIONAL_CALL)  ; void wincore_windll.cpp_transformAndProjectPoint_FUN_005b575c(SProjectedVertex * output, CVector3i * input)
    LEA EBX,[ESP + 0x44]                ; 004ec634
    MOV EDX,dword ptr [0x006703ec]      ; 004ec638 | g_CDemonRendererPtr2
    ADD ESP,0x8                         ; 004ec63e
    XOR EAX,EAX                         ; 004ec641
    MOV dword ptr [ESP + 0x18],EDI      ; 004ec643
    MOV dword ptr [ESP + 0x20],EAX      ; 004ec647
    LEA EAX,[ESP + 0x18]                ; 004ec64b
    MOV dword ptr [ESP + 0x1c],EBP      ; 004ec64f
    FLD float ptr [EAX]                 ; 004ec653
    FMUL float ptr [0x0065f024]         ; 004ec655 | DAT_0065f024
    FISTP dword ptr [EBX]               ; 004ec65b
    FLD float ptr [EAX + 0x4]           ; 004ec65d
    FMUL float ptr [0x0065f024]         ; 004ec660 | DAT_0065f024
    FISTP dword ptr [EBX + 0x4]         ; 004ec666
    FLD float ptr [EAX + 0x8]           ; 004ec669
    FMUL float ptr [0x0065f024]         ; 004ec66c | DAT_0065f024
    FISTP dword ptr [EBX + 0x8]         ; 004ec672
    LEA EAX,[ESP + 0x3c]                ; 004ec675
    PUSH EAX                            ; 004ec679
    MOV EAX,dword ptr [EDX]             ; 004ec67a | g_CDemonRendererInstance
    ADD EAX,0x30                        ; 004ec67c
    PUSH EAX                            ; 004ec67f
    CALL wincore_windll.cpp_transformAndProjectPoint_FUN_005b575c ; 004ec680
        ;   XREF to: 005b575c (UNCONDITIONAL_CALL)  ; void wincore_windll.cpp_transformAndProjectPoint_FUN_005b575c(SProjectedVertex * output, CVector3i * input)
    LEA EAX,[ESP + 0x20]                ; 004ec685
    MOV EDX,dword ptr [0x006703ec]      ; 004ec689 | g_CDemonRendererPtr2
    ADD ESP,0x8                         ; 004ec68f
    XOR EBX,EBX                         ; 004ec692
    MOV dword ptr [ESP + 0x18],EDI      ; 004ec694
    MOV dword ptr [ESP + 0x20],EBX      ; 004ec698
    LEA EBX,[ESP + 0x54]                ; 004ec69c
    MOV dword ptr [ESP + 0x1c],EDI      ; 004ec6a0
    FLD float ptr [EAX]                 ; 004ec6a4
    FMUL float ptr [0x0065f024]         ; 004ec6a6 | DAT_0065f024
    FISTP dword ptr [EBX]               ; 004ec6ac
    FLD float ptr [EAX + 0x4]           ; 004ec6ae
    FMUL float ptr [0x0065f024]         ; 004ec6b1 | DAT_0065f024
    FISTP dword ptr [EBX + 0x4]         ; 004ec6b7
    FLD float ptr [EAX + 0x8]           ; 004ec6ba
    FMUL float ptr [0x0065f024]         ; 004ec6bd | DAT_0065f024
    FISTP dword ptr [EBX + 0x8]         ; 004ec6c3
    LEA EAX,[ESP + 0x54]                ; 004ec6c6
    PUSH EAX                            ; 004ec6ca
    MOV EAX,dword ptr [EDX]             ; 004ec6cb | g_CDemonRendererInstance
    ADD EAX,0x60                        ; 004ec6cd
    PUSH EAX                            ; 004ec6d0
    CALL wincore_windll.cpp_transformAndProjectPoint_FUN_005b575c ; 004ec6d1
        ;   XREF to: 005b575c (UNCONDITIONAL_CALL)  ; void wincore_windll.cpp_transformAndProjectPoint_FUN_005b575c(SProjectedVertex * output, CVector3i * input)
    LEA EBX,[ESP + 0x14]                ; 004ec6d6
    MOV EDX,dword ptr [0x006703ec]      ; 004ec6da | g_CDemonRendererPtr2
    ADD ESP,0x8                         ; 004ec6e0
    XOR EAX,EAX                         ; 004ec6e3
    MOV dword ptr [ESP + 0x18],EBP      ; 004ec6e5
    MOV dword ptr [ESP + 0x20],EAX      ; 004ec6e9
    LEA EAX,[ESP + 0x18]                ; 004ec6ed
    MOV dword ptr [ESP + 0x1c],EDI      ; 004ec6f1
    FLD float ptr [EAX]                 ; 004ec6f5
    FMUL float ptr [0x0065f024]         ; 004ec6f7 | DAT_0065f024
    FISTP dword ptr [EBX]               ; 004ec6fd
    FLD float ptr [EAX + 0x4]           ; 004ec6ff
    FMUL float ptr [0x0065f024]         ; 004ec702 | DAT_0065f024
    FISTP dword ptr [EBX + 0x4]         ; 004ec708
    FLD float ptr [EAX + 0x8]           ; 004ec70b
    FMUL float ptr [0x0065f024]         ; 004ec70e | DAT_0065f024
    FISTP dword ptr [EBX + 0x8]         ; 004ec714
    LEA EAX,[ESP + 0xc]                 ; 004ec717
    PUSH EAX                            ; 004ec71b
        ;   Label: LAB_004ec71b
    MOV EAX,dword ptr [EDX]             ; 004ec71c | g_CDemonRendererInstance
    ADD EAX,0x90                        ; 004ec71e
    PUSH EAX                            ; 004ec723
    CALL wincore_windll.cpp_transformAndProjectPoint_FUN_005b575c ; 004ec724
        ;   XREF to: 005b575c (UNCONDITIONAL_CALL)  ; void wincore_windll.cpp_transformAndProjectPoint_FUN_005b575c(SProjectedVertex * output, CVector3i * input)
    ADD ESP,0x8                         ; 004ec729
    MOV EBX,0x688034                    ; 004ec72c | g_RenderVertexBuffer[0].light
    MOV EDX,0x688038                    ; 004ec731 | g_RenderVertexBuffer[0].color
    MOV EAX,dword ptr [ESI + 0x14]      ; 004ec736
    MOV ECX,0x68803c                    ; 004ec739 | g_RenderVertexBuffer[0].fog
    CMP EAX,0x1                         ; 004ec73e
    JNC 0x004ec9e1                      ; 004ec741
        ;   XREF to: 004ec9e1 (CONDITIONAL_JUMP)  ; LAB_004ec9e1
    MOV dword ptr [EBX],0x2000          ; 004ec747 | g_RenderVertexBuffer[0].light
        ;   Label: LAB_004ec747
    MOV dword ptr [EDX],0x0             ; 004ec74d | g_RenderVertexBuffer[0].color
    MOV dword ptr [ECX],0x0             ; 004ec753 | g_RenderVertexBuffer[0].fog
    MOV ECX,0x688064                    ; 004ec759 | g_RenderVertexBuffer[1].light
        ;   Label: LAB_004ec759
    MOV EBX,0x688068                    ; 004ec75e | g_RenderVertexBuffer[1].color
    MOV EAX,dword ptr [ESI + 0x14]      ; 004ec763
    MOV EDX,0x68806c                    ; 004ec766 | g_RenderVertexBuffer[1].fog
    CMP EAX,0x1                         ; 004ec76b
    JNC 0x004eca24                      ; 004ec76e
        ;   XREF to: 004eca24 (CONDITIONAL_JUMP)  ; LAB_004eca24
    MOV dword ptr [ECX],0x2000          ; 004ec774 | g_RenderVertexBuffer[1].light
        ;   Label: LAB_004ec774
    MOV dword ptr [EBX],0x0             ; 004ec77a | g_RenderVertexBuffer[1].color
    MOV dword ptr [EDX],0x0             ; 004ec780 | g_RenderVertexBuffer[1].fog
    MOV EDX,0x688094                    ; 004ec786 | g_RenderVertexBuffer[2].light
        ;   Label: LAB_004ec786
    MOV ECX,0x688098                    ; 004ec78b | g_RenderVertexBuffer[2].color
    MOV EAX,dword ptr [ESI + 0x14]      ; 004ec790
    MOV EBX,0x68809c                    ; 004ec793 | g_RenderVertexBuffer[2].fog
    CMP EAX,0x1                         ; 004ec798
    JNC 0x004eca67                      ; 004ec79b
        ;   XREF to: 004eca67 (CONDITIONAL_JUMP)  ; LAB_004eca67
    MOV dword ptr [EDX],0x2000          ; 004ec7a1 | g_RenderVertexBuffer[2].light
        ;   Label: LAB_004ec7a1
    MOV dword ptr [ECX],0x0             ; 004ec7a7 | g_RenderVertexBuffer[2].color
    MOV dword ptr [EBX],0x0             ; 004ec7ad | g_RenderVertexBuffer[2].fog
    MOV EBX,0x6880c4                    ; 004ec7b3 | g_RenderVertexBuffer[3].light
        ;   Label: LAB_004ec7b3
    MOV ECX,0x6880c8                    ; 004ec7b8 | g_RenderVertexBuffer[3].color
    MOV EAX,dword ptr [ESI + 0x14]      ; 004ec7bd
    MOV EDX,0x6880cc                    ; 004ec7c0 | g_RenderVertexBuffer[3].fog
    CMP EAX,0x1                         ; 004ec7c5
    JNC 0x004ecaaa                      ; 004ec7c8
        ;   XREF to: 004ecaaa (CONDITIONAL_JUMP)  ; LAB_004ecaaa
    MOV dword ptr [EBX],0x2000          ; 004ec7ce | g_RenderVertexBuffer[3].light
        ;   Label: LAB_004ec7ce
    MOV dword ptr [ECX],0x0             ; 004ec7d4 | g_RenderVertexBuffer[3].color
    MOV dword ptr [EDX],0x0             ; 004ec7da | g_RenderVertexBuffer[3].fog
    PUSH 0x2d83368                      ; 004ec7e0 | DAT_02d83368
        ;   Label: LAB_004ec7e0
    MOV EDX,dword ptr [0x006703ec]      ; 004ec7e5 | g_CDemonRendererPtr2
    PUSH EDX                            ; 004ec7eb | g_CDemonRendererInstance
    CALL engine_drender.cpp_CDemonRenderer_renderEnhancedQuality_FUN_0048bcf0 ; 004ec7ec
        ;   XREF to: 0048bcf0 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_renderEnhancedQuality_FUN_0048bcf0(CDemonRenderer * this_ptr, SMRGLHeaderPrimitive * polygon_info)
    MOV ECX,dword ptr [ESI + 0x10]      ; 004ec7f1
    ADD ESP,0x8                         ; 004ec7f4
    CMP ECX,0x1                         ; 004ec7f7
    JZ 0x004ecab6                       ; 004ec7fa
        ;   XREF to: 004ecab6 (CONDITIONAL_JUMP)  ; LAB_004ecab6
    ADD ESP,0x7c                        ; 004ec800
    POP EBP                             ; 004ec803
    POP EDI                             ; 004ec804
    POP ESI                             ; 004ec805
    POP EBX                             ; 004ec806
    RET                                 ; 004ec807
    XOR EBP,EBP                         ; 004ec808
        ;   Label: LAB_004ec808
    MOV dword ptr [ESP + 0x78],EBP      ; 004ec80a
    JMP 0x004ec550                      ; 004ec80e
        ;   XREF to: 004ec550 (UNCONDITIONAL_JUMP)  ; LAB_004ec550
    TEST EBX,EBX                        ; 004ec813
        ;   Label: LAB_004ec813
    JZ 0x004ec81d                       ; 004ec815
        ;   XREF to: 004ec81d (CONDITIONAL_JUMP)  ; LAB_004ec81d
    MOV dword ptr [ESI],0x1             ; 004ec817
    MOV dword ptr [0x02d83374],0xffff   ; 004ec81d | DAT_02d83368.surface_normal.B
        ;   Label: LAB_004ec81d
    MOV EBX,dword ptr [ESI + 0x28]      ; 004ec827
    LEA EAX,[EBX*0x4 + 0x0]             ; 004ec82a
    SUB EAX,EBX                         ; 004ec831
    XOR ECX,ECX                         ; 004ec833
    SHL EAX,0x3                         ; 004ec835
    XOR EDI,EDI                         ; 004ec838
    ADD EAX,0x67b9c8                    ; 004ec83a | DAT_0067b9c8
    MOV dword ptr [0x02d83370],ECX      ; 004ec83f | DAT_02d83368.surface_normal.A
    PUSH EAX                            ; 004ec845
    MOV EAX,[0x006703ec]                ; 004ec846 | g_CDemonRendererPtr2
    MOV dword ptr [0x02d83378],ECX      ; 004ec84b | DAT_02d83368.surface_normal.C
    PUSH EAX                            ; 004ec851 | g_CDemonRendererInstance
    MOV dword ptr [0x02d8337c],ECX      ; 004ec852 | DAT_02d83368.surface_normal.D
    LEA EBX,[ESP + 0x74]                ; 004ec858
    CALL engine_drender.cpp_CDemonRenderer_captureTexture_FUN_0048db80 ; 004ec85c
        ;   XREF to: 0048db80 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_captureTexture_FUN_0048db80(CDemonRenderer * this_ptr, SMRGLTextureBasic * texture)
    MOV EDX,0xbf000000                  ; 004ec861
    ADD ESP,0x8                         ; 004ec866
    LEA EAX,[ESP + 0x48]                ; 004ec869
    MOV dword ptr [ESP + 0x48],EDX      ; 004ec86d
    MOV dword ptr [ESP + 0x4c],EDI      ; 004ec871
    MOV dword ptr [ESP + 0x50],EDX      ; 004ec875
    MOV EDX,dword ptr [0x006703ec]      ; 004ec879 | g_CDemonRendererPtr2
    FLD float ptr [EAX]                 ; 004ec87f
    FMUL float ptr [0x0065f024]         ; 004ec881 | DAT_0065f024
    FISTP dword ptr [EBX]               ; 004ec887
    FLD float ptr [EAX + 0x4]           ; 004ec889
    FMUL float ptr [0x0065f024]         ; 004ec88c | DAT_0065f024
    FISTP dword ptr [EBX + 0x4]         ; 004ec892
    FLD float ptr [EAX + 0x8]           ; 004ec895
    FMUL float ptr [0x0065f024]         ; 004ec898 | DAT_0065f024
    FISTP dword ptr [EBX + 0x8]         ; 004ec89e
    LEA EAX,[ESP + 0x6c]                ; 004ec8a1
    PUSH EAX                            ; 004ec8a5
    MOV EAX,dword ptr [EDX]             ; 004ec8a6 | g_CDemonRendererInstance
    PUSH EAX                            ; 004ec8a8
    XOR EBP,EBP                         ; 004ec8a9
    MOV EDI,0x3f000000                  ; 004ec8ab
    CALL wincore_windll.cpp_transformAndProjectPoint_FUN_005b575c ; 004ec8b0
        ;   XREF to: 005b575c (UNCONDITIONAL_CALL)  ; void wincore_windll.cpp_transformAndProjectPoint_FUN_005b575c(SProjectedVertex * output, CVector3i * input)
    MOV EAX,0xbf000000                  ; 004ec8b5
    LEA EBX,[ESP + 0x8]                 ; 004ec8ba
    ADD ESP,0x8                         ; 004ec8be
    MOV EDX,dword ptr [0x006703ec]      ; 004ec8c1 | g_CDemonRendererPtr2
    MOV dword ptr [ESP + 0x48],EDI      ; 004ec8c7
    MOV dword ptr [ESP + 0x50],EAX      ; 004ec8cb
    LEA EAX,[ESP + 0x48]                ; 004ec8cf
    MOV dword ptr [ESP + 0x4c],EBP      ; 004ec8d3
    FLD float ptr [EAX]                 ; 004ec8d7
    FMUL float ptr [0x0065f024]         ; 004ec8d9 | DAT_0065f024
    FISTP dword ptr [EBX]               ; 004ec8df
    FLD float ptr [EAX + 0x4]           ; 004ec8e1
    FMUL float ptr [0x0065f024]         ; 004ec8e4 | DAT_0065f024
    FISTP dword ptr [EBX + 0x4]         ; 004ec8ea
    FLD float ptr [EAX + 0x8]           ; 004ec8ed
    FMUL float ptr [0x0065f024]         ; 004ec8f0 | DAT_0065f024
    FISTP dword ptr [EBX + 0x8]         ; 004ec8f6
    MOV EAX,ESP                         ; 004ec8f9
    PUSH EAX                            ; 004ec8fb
    MOV EAX,dword ptr [EDX]             ; 004ec8fc | g_CDemonRendererInstance
    ADD EAX,0x30                        ; 004ec8fe
    PUSH EAX                            ; 004ec901
    CALL wincore_windll.cpp_transformAndProjectPoint_FUN_005b575c ; 004ec902
        ;   XREF to: 005b575c (UNCONDITIONAL_CALL)  ; void wincore_windll.cpp_transformAndProjectPoint_FUN_005b575c(SProjectedVertex * output, CVector3i * input)
    LEA EBX,[ESP + 0x38]                ; 004ec907
    LEA EAX,[ESP + 0x50]                ; 004ec90b
    MOV EDX,dword ptr [0x006703ec]      ; 004ec90f | g_CDemonRendererPtr2
    ADD ESP,0x8                         ; 004ec915
    XOR ECX,ECX                         ; 004ec918
    MOV dword ptr [ESP + 0x48],EDI      ; 004ec91a
    MOV dword ptr [ESP + 0x4c],ECX      ; 004ec91e
    MOV dword ptr [ESP + 0x50],EDI      ; 004ec922
    FLD float ptr [EAX]                 ; 004ec926
    FMUL float ptr [0x0065f024]         ; 004ec928 | DAT_0065f024
    FISTP dword ptr [EBX]               ; 004ec92e
    FLD float ptr [EAX + 0x4]           ; 004ec930
    FMUL float ptr [0x0065f024]         ; 004ec933 | DAT_0065f024
    FISTP dword ptr [EBX + 0x4]         ; 004ec939
    FLD float ptr [EAX + 0x8]           ; 004ec93c
    FMUL float ptr [0x0065f024]         ; 004ec93f | DAT_0065f024
    FISTP dword ptr [EBX + 0x8]         ; 004ec945
    LEA EAX,[ESP + 0x30]                ; 004ec948
    PUSH EAX                            ; 004ec94c
    MOV EAX,dword ptr [EDX]             ; 004ec94d | g_CDemonRendererInstance
    ADD EAX,0x60                        ; 004ec94f
    PUSH EAX                            ; 004ec952
    MOV EDI,0xbf000000                  ; 004ec953
    CALL wincore_windll.cpp_transformAndProjectPoint_FUN_005b575c ; 004ec958
        ;   XREF to: 005b575c (UNCONDITIONAL_CALL)  ; void wincore_windll.cpp_transformAndProjectPoint_FUN_005b575c(SProjectedVertex * output, CVector3i * input)
    MOV EAX,0x3f000000                  ; 004ec95d
    LEA EBX,[ESP + 0x68]                ; 004ec962
    ADD ESP,0x8                         ; 004ec966
    MOV EDX,dword ptr [0x006703ec]      ; 004ec969 | g_CDemonRendererPtr2
    MOV dword ptr [ESP + 0x48],EDI      ; 004ec96f
    MOV dword ptr [ESP + 0x50],EAX      ; 004ec973
    LEA EAX,[ESP + 0x48]                ; 004ec977
    MOV dword ptr [ESP + 0x4c],EBP      ; 004ec97b
    FLD float ptr [EAX]                 ; 004ec97f
    FMUL float ptr [0x0065f024]         ; 004ec981 | DAT_0065f024
    FISTP dword ptr [EBX]               ; 004ec987
    FLD float ptr [EAX + 0x4]           ; 004ec989
    FMUL float ptr [0x0065f024]         ; 004ec98c | DAT_0065f024
    FISTP dword ptr [EBX + 0x4]         ; 004ec992
    FLD float ptr [EAX + 0x8]           ; 004ec995
    FMUL float ptr [0x0065f024]         ; 004ec998 | DAT_0065f024
    FISTP dword ptr [EBX + 0x8]         ; 004ec99e
    LEA EAX,[ESP + 0x60]                ; 004ec9a1
    JMP 0x004ec71b                      ; 004ec9a5
        ;   XREF to: 004ec71b (UNCONDITIONAL_JUMP)  ; LAB_004ec71b
    MOV EBP,0x7f80                      ; 004ec9aa
        ;   Label: LAB_004ec9aa
    XOR EDI,EDI                         ; 004ec9af
    MOV dword ptr [0x00688038],EBP      ; 004ec9b1 | g_RenderVertexBuffer[0].color
    MOV dword ptr [0x0068803c],EDI      ; 004ec9b7 | g_RenderVertexBuffer[0].fog
    MOV dword ptr [0x00688034],EDI      ; 004ec9bd | g_RenderVertexBuffer[0].light
    JMP 0x004ec759                      ; 004ec9c3
        ;   XREF to: 004ec759 (UNCONDITIONAL_JUMP)  ; LAB_004ec759
    XOR EDX,EDX                         ; 004ec9c8
        ;   Label: LAB_004ec9c8
    MOV dword ptr [0x00688038],EDX      ; 004ec9ca | g_RenderVertexBuffer[0].color
    MOV dword ptr [0x0068803c],EDX      ; 004ec9d0 | g_RenderVertexBuffer[0].fog
    MOV dword ptr [0x00688034],EDX      ; 004ec9d6 | g_RenderVertexBuffer[0].light
    JMP 0x004ec759                      ; 004ec9dc
        ;   XREF to: 004ec759 (UNCONDITIONAL_JUMP)  ; LAB_004ec759
    JBE 0x004ec9aa                      ; 004ec9e1
        ;   XREF to: 004ec9aa (CONDITIONAL_JUMP)  ; LAB_004ec9aa
        ;   Label: LAB_004ec9e1
    CMP EAX,0x2                         ; 004ec9e3
    JZ 0x004ec9c8                       ; 004ec9e6
        ;   XREF to: 004ec9c8 (CONDITIONAL_JUMP)  ; LAB_004ec9c8
    JMP 0x004ec747                      ; 004ec9e8
        ;   XREF to: 004ec747 (UNCONDITIONAL_JUMP)  ; LAB_004ec747
    MOV EBP,0x7f80                      ; 004ec9ed
        ;   Label: LAB_004ec9ed
    XOR EDI,EDI                         ; 004ec9f2
    MOV dword ptr [0x00688068],EBP      ; 004ec9f4 | g_RenderVertexBuffer[1].color
    MOV dword ptr [0x0068806c],EDI      ; 004ec9fa | g_RenderVertexBuffer[1].fog
    MOV dword ptr [0x00688064],EDI      ; 004eca00 | g_RenderVertexBuffer[1].light
    JMP 0x004ec786                      ; 004eca06
        ;   XREF to: 004ec786 (UNCONDITIONAL_JUMP)  ; LAB_004ec786
    XOR EDX,EDX                         ; 004eca0b
        ;   Label: LAB_004eca0b
    MOV dword ptr [0x00688068],EDX      ; 004eca0d | g_RenderVertexBuffer[1].color
    MOV dword ptr [0x0068806c],EDX      ; 004eca13 | g_RenderVertexBuffer[1].fog
    MOV dword ptr [0x00688064],EDX      ; 004eca19 | g_RenderVertexBuffer[1].light
    JMP 0x004ec786                      ; 004eca1f
        ;   XREF to: 004ec786 (UNCONDITIONAL_JUMP)  ; LAB_004ec786
    JBE 0x004ec9ed                      ; 004eca24
        ;   XREF to: 004ec9ed (CONDITIONAL_JUMP)  ; LAB_004ec9ed
        ;   Label: LAB_004eca24
    CMP EAX,0x2                         ; 004eca26
    JZ 0x004eca0b                       ; 004eca29
        ;   XREF to: 004eca0b (CONDITIONAL_JUMP)  ; LAB_004eca0b
    JMP 0x004ec774                      ; 004eca2b
        ;   XREF to: 004ec774 (UNCONDITIONAL_JUMP)  ; LAB_004ec774
    MOV EBP,0x7f80                      ; 004eca30
        ;   Label: LAB_004eca30
    XOR EDI,EDI                         ; 004eca35
    MOV dword ptr [0x00688098],EBP      ; 004eca37 | g_RenderVertexBuffer[2].color
    MOV dword ptr [0x0068809c],EDI      ; 004eca3d | g_RenderVertexBuffer[2].fog
    MOV dword ptr [0x00688094],EDI      ; 004eca43 | g_RenderVertexBuffer[2].light
    JMP 0x004ec7b3                      ; 004eca49
        ;   XREF to: 004ec7b3 (UNCONDITIONAL_JUMP)  ; LAB_004ec7b3
    XOR EDX,EDX                         ; 004eca4e
        ;   Label: LAB_004eca4e
    MOV dword ptr [0x00688098],EDX      ; 004eca50 | g_RenderVertexBuffer[2].color
    MOV dword ptr [0x0068809c],EDX      ; 004eca56 | g_RenderVertexBuffer[2].fog
    MOV dword ptr [0x00688094],EDX      ; 004eca5c | g_RenderVertexBuffer[2].light
    JMP 0x004ec7b3                      ; 004eca62
        ;   XREF to: 004ec7b3 (UNCONDITIONAL_JUMP)  ; LAB_004ec7b3
    JBE 0x004eca30                      ; 004eca67
        ;   XREF to: 004eca30 (CONDITIONAL_JUMP)  ; LAB_004eca30
        ;   Label: LAB_004eca67
    CMP EAX,0x2                         ; 004eca69
    JZ 0x004eca4e                       ; 004eca6c
        ;   XREF to: 004eca4e (CONDITIONAL_JUMP)  ; LAB_004eca4e
    JMP 0x004ec7a1                      ; 004eca6e
        ;   XREF to: 004ec7a1 (UNCONDITIONAL_JUMP)  ; LAB_004ec7a1
    MOV EBP,0x7f80                      ; 004eca73
        ;   Label: LAB_004eca73
    XOR EDI,EDI                         ; 004eca78
    MOV dword ptr [0x006880c8],EBP      ; 004eca7a | g_RenderVertexBuffer[3].color
    MOV dword ptr [0x006880cc],EDI      ; 004eca80 | g_RenderVertexBuffer[3].fog
    MOV dword ptr [0x006880c4],EDI      ; 004eca86 | g_RenderVertexBuffer[3].light
    JMP 0x004ec7e0                      ; 004eca8c
        ;   XREF to: 004ec7e0 (UNCONDITIONAL_JUMP)  ; LAB_004ec7e0
    XOR EDX,EDX                         ; 004eca91
        ;   Label: LAB_004eca91
    MOV dword ptr [0x006880c8],EDX      ; 004eca93 | g_RenderVertexBuffer[3].color
    MOV dword ptr [0x006880cc],EDX      ; 004eca99 | g_RenderVertexBuffer[3].fog
    MOV dword ptr [0x006880c4],EDX      ; 004eca9f | g_RenderVertexBuffer[3].light
    JMP 0x004ec7e0                      ; 004ecaa5
        ;   XREF to: 004ec7e0 (UNCONDITIONAL_JUMP)  ; LAB_004ec7e0
    JBE 0x004eca73                      ; 004ecaaa
        ;   XREF to: 004eca73 (CONDITIONAL_JUMP)  ; LAB_004eca73
        ;   Label: LAB_004ecaaa
    CMP EAX,0x2                         ; 004ecaac
    JZ 0x004eca91                       ; 004ecaaf
        ;   XREF to: 004eca91 (CONDITIONAL_JUMP)  ; LAB_004eca91
    JMP 0x004ec7ce                      ; 004ecab1
        ;   XREF to: 004ec7ce (UNCONDITIONAL_JUMP)  ; LAB_004ec7ce
    MOV EBX,dword ptr [0x006703ec]      ; 004ecab6 | g_CDemonRendererPtr2
        ;   Label: LAB_004ecab6
    PUSH EBX                            ; 004ecabc | g_CDemonRendererInstance
    CALL engine_drender.cpp_CDemonRenderer_matrixPop_FUN_0050d720 ; 004ecabd
        ;   XREF to: 0048c640 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_matrixPop_FUN_0050d720()

