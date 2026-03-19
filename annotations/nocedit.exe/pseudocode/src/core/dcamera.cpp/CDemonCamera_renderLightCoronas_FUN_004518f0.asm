; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_dcamera_cpp_CDemonCamera_renderLightCoronas_FUN_004518f0(CDemonCamera *this_ptr,void *p1,int p2)
;
; Parameters:
; CDemonCamera *   Stack[0x4]:4   this_ptr
; void *           Stack[0x8]:4   p1
; int              Stack[0xc]:4   p2
; Local Variables:
; int[1014]        Stack[-0x107c]:4056  aiStackY_107c
; CVector3i        Stack[-0x94]:12  local_94
; int              Stack[-0x88]:4  local_88
; char *           Stack[-0x80]:4  local_80
; char[320] *      Stack[-0x7c]:4  local_7c
; int[320] *       Stack[-0x78]:4  local_78
; CVector3i *      Stack[-0x74]:4  local_74
; int[320] *       Stack[-0x70]:4  local_70
; char *           Stack[-0x6c]:4  local_6c
; CVector3i *      Stack[-0x68]:4  local_68
; int              Stack[-0x64]:4  local_64
; char *           Stack[-0x60]:4  local_60
; char *           Stack[-0x5c]:4  local_5c
; int              Stack[-0x58]:4  local_58
; int              Stack[-0x54]:4  local_54
; int              Stack[-0x50]:4  local_50
; int              Stack[-0x48]:4  local_48
; int              Stack[-0x44]:4  local_44
; int              Stack[-0x3c]:4  local_3c
; uint *           Stack[-0x38]:4  local_38
; int *            Stack[-0x34]:4  local_34
; char *           Stack[-0x30]:4  local_30
; int *            Stack[-0x2c]:4  local_2c
; int              Stack[-0x28]:4  local_28
; uint *           Stack[-0x24]:4  local_24
; CVector3i *      Stack[-0x20]:4  local_20
; int              Stack[-0x1c]:4  local_1c
; int              Stack[-0x18]:4  local_18
; char             Stack[-0x14]:1  local_14
;
; XREF[1]:
;   core_set.cpp_CDemonSet_renderScene_FUN_0056c1a0 at 0056c3e3
;
; Referenced Globals:
;   int INT_0066ed68 = -0x1
;   CGame* g_CGamePtr = 02d81a9c
;   CVector3i[15360] g_PrecomputedWorldPositions
;   undefined4 g_PrecomputedWorldPositions[0].y
;   undefined4 g_PrecomputedWorldPositions[0].z
;   undefined4 g_PrecomputedWorldPositions[1].x
;   undefined4 g_PrecomputedWorldPositions[320].x
;   undefined4 g_PrecomputedWorldPositions[320].y
;   undefined4 g_PrecomputedWorldPositions[320].z
;   undefined4 g_PrecomputedWorldPositions[321].x
;   undefined4 g_PrecomputedWorldPositions[640].x
;   char[241][320] g_CoronaBlurOutputBuffer
;   undefined4 g_CoronaBlurOutputBuffer[1][0]
;   undefined4 g_CoronaBlurOutputBuffer[2][0]
;   int[76800] g_PrecomputedDepthBuffer
;   ... and 26 more
;
; Called Functions:
;   core_dcamera.cpp_blendCoronaTextureSpan_FUN_004517f0
;   core_dcamera.cpp_CDemonCamera_worldToScreenWithFrustumCull_FUN_0044d7d0
;   core_dglobe.cpp_CDemonGlobe_renderCorona_FUN_00471400
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004518f0
        ;   Label: core_dcamera.cpp_CDemonCamera_renderLightCoronas_FUN_004518f0
    PUSH ESI                            ; 004518f1
    PUSH EDI                            ; 004518f2
    PUSH EBP                            ; 004518f3
    SUB ESP,0x84                        ; 004518f4
    MOV EBX,dword ptr [ESP + 0xa0]      ; 004518fa
    MOV EAX,[0x0067b654]                ; 00451901 | g_CGameInstance | g_CGamePtr
    CMP dword ptr [EAX + 0xc],0x0       ; 00451906 | g_CGameInstance.halo_mode
    JNZ 0x00451925                      ; 0045190a
        ;   XREF to: 00451925 (CONDITIONAL_JUMP)  ; LAB_00451925
    TEST EBX,EBX                        ; 0045190c
    JNZ 0x00451a94                      ; 0045190e
        ;   XREF to: 00451a94 (CONDITIONAL_JUMP)  ; LAB_00451a94
    MOV EAX,dword ptr [ESP + 0x9c]      ; 00451914
    CMP dword ptr [EAX + 0x20],0x0      ; 0045191b
    JZ 0x00451a94                       ; 0045191f
        ;   XREF to: 00451a94 (CONDITIONAL_JUMP)  ; LAB_00451a94
    MOV EAX,dword ptr [ESP + 0x9c]      ; 00451925
        ;   Label: LAB_00451925
    PUSH EAX                            ; 0045192c
    MOV EDI,dword ptr [ESP + 0x9c]      ; 0045192d
    PUSH EDI                            ; 00451934
    LEA ESI,[ESP + 0x8]                 ; 00451935
    MOV [0x015c4170],EAX                ; 00451939 | g_CurrentGlobe
    CALL core_dcamera.cpp_CDemonCamera_worldToScreenWithFrustumCull_FUN_0044d7d0 ; 0045193e
        ;   XREF to: 0044d7d0 (UNCONDITIONAL_CALL)  ; CVector3i * core_dcamera.cpp_CDemonCamera_worldToScreenWithFrustumCull_FUN_0044d7d0(CDemonCamera * this_ptr, CVector3i * input_ptr, CVector3i * output_ptr)
    LEA ESI,[ESP + 0x8]                 ; 00451943
    ADD ESP,0x8                         ; 00451947
    MOV EDI,0x15c4178                   ; 0045194a | g_CoronaTargetX
    MOV EAX,dword ptr [ESP + 0x9c]      ; 0045194f
    MOVSD ES:EDI,ESI                    ; 00451956 | g_CoronaTargetX
    MOVSD ES:EDI,ESI                    ; 00451957 | g_CoronaTargetY
    MOVSD ES:EDI,ESI                    ; 00451958 | g_CoronaTargetDepth
    MOV EBP,dword ptr [EAX + 0x20]      ; 00451959
    TEST EBP,EBP                        ; 0045195c
    JZ 0x00451aac                       ; 0045195e
        ;   XREF to: 00451aac (CONDITIONAL_JUMP)  ; LAB_00451aac
    MOV EDX,dword ptr [0x015c4178]      ; 00451964 | g_CoronaTargetX
    TEST EDX,EDX                        ; 0045196a
    JZ 0x00451aa1                       ; 0045196c
        ;   XREF to: 00451aa1 (CONDITIONAL_JUMP)  ; LAB_00451aa1
    MOV ESI,0x1                         ; 00451972
    MOV EAX,[0x013bc260]                ; 00451977 | g_CameraDownscaleIterations
    MOV EBP,dword ptr [0x015c417c]      ; 0045197c | g_CoronaTargetY
    ADD EAX,0x10                        ; 00451982
    MOV EDI,EDX                         ; 00451985
    MOV CL,AL                           ; 00451987
    MOV dword ptr [0x015c4174],ESI      ; 00451989 | g_CoronaVisibilityEnabled
    SAR EDI,CL                          ; 0045198f
    SAR EBP,CL                          ; 00451991
    MOV dword ptr [0x015c4178],EDI      ; 00451993 | g_CoronaTargetX
    MOV dword ptr [0x015c417c],EBP      ; 00451999 | g_CoronaTargetY
    MOV EAX,dword ptr [ESP + 0x98]      ; 0045199f
        ;   Label: LAB_0045199f
    MOV ECX,dword ptr [EAX + 0x154]     ; 004519a6
    XOR EDX,EDX                         ; 004519ac
    TEST ECX,ECX                        ; 004519ae
    JLE 0x004519f0                      ; 004519b0
        ;   XREF to: 004519f0 (CONDITIONAL_JUMP)  ; LAB_004519f0
    XOR EAX,EAX                         ; 004519b2
    MOV ECX,dword ptr [ESP + 0x98]      ; 004519b4
        ;   Label: LAB_004519b4
    MOV ECX,dword ptr [ECX + 0x144]     ; 004519bb
    XOR ESI,ESI                         ; 004519c1
    MOV dword ptr [EAX + 0x1576fa8],ECX ; 004519c3 | g_CoronaLeftExtent | g_CoronaLeftExtent[1]
    MOV ECX,dword ptr [ESP + 0x98]      ; 004519c9
    MOV dword ptr [EAX + 0x1577368],ESI ; 004519d0 | g_CoronaRightExtent | g_CoronaRightExtent[1]
    INC EDX                             ; 004519d6
    MOV EDI,dword ptr [ECX + 0x154]     ; 004519d7
    ADD EAX,0x4                         ; 004519dd
    CMP EDX,EDI                         ; 004519e0
    JL 0x004519b4                       ; 004519e2
        ;   XREF to: 004519b4 (CONDITIONAL_JUMP)  ; LAB_004519b4
    LEA EAX,[EAX]                       ; 004519e4
    LEA EDX,[EDX]                       ; 004519ea
    TEST EBX,EBX                        ; 004519f0
        ;   Label: LAB_004519f0
    JNZ 0x00451ad6                      ; 004519f2
        ;   XREF to: 00451ad6 (CONDITIONAL_JUMP)  ; LAB_00451ad6
    MOV EAX,dword ptr [ESP + 0x9c]      ; 004519f8
    CMP dword ptr [EAX + 0x20],0x0      ; 004519ff
    JZ 0x00451ad6                       ; 00451a03
        ;   XREF to: 00451ad6 (CONDITIONAL_JUMP)  ; LAB_00451ad6
    MOV dword ptr [0x0066ed68],0xffffffff ; 00451a09 | INT_0066ed68
    MOV EAX,dword ptr [ESP + 0x9c]      ; 00451a13
    CMP dword ptr [EAX + 0x20],0x2      ; 00451a1a
    JNZ 0x00451ad6                      ; 00451a1e
        ;   XREF to: 00451ad6 (CONDITIONAL_JUMP)  ; LAB_00451ad6
    MOV ECX,dword ptr [0x01322208]      ; 00451a24 | g_LightBufferPool[24][0]
    TEST ECX,ECX                        ; 00451a2a
    JBE 0x00451ac0                      ; 00451a2c
        ;   XREF to: 00451ac0 (CONDITIONAL_JUMP)  ; LAB_00451ac0
    MOV ESI,dword ptr [ESP + 0x9c]      ; 00451a32
    XOR EAX,EAX                         ; 00451a39
    IMUL EDX,ECX,0x13384                ; 00451a3b
    CMP ESI,dword ptr [EAX + 0x132220c] ; 00451a41 | g_LightBufferPool[24][4] | g_LightBufferPool[24][78728]
        ;   Label: LAB_00451a41
    JNZ 0x00451ab7                      ; 00451a47
        ;   XREF to: 00451ab7 (CONDITIONAL_JUMP)  ; LAB_00451ab7
    MOV EDI,0x132220c                   ; 00451a4d | g_LightBufferPool[24][4]
    ADD EDI,EAX                         ; 00451a52
    MOV EAX,dword ptr [ESP + 0x98]      ; 00451a54
    MOV EBP,dword ptr [EAX + 0x154]     ; 00451a5b
    XOR ESI,ESI                         ; 00451a61
    TEST EBP,EBP                        ; 00451a63
    JLE 0x00451a94                      ; 00451a65
        ;   XREF to: 00451a94 (CONDITIONAL_JUMP)  ; LAB_00451a94
    MOV EBX,EDI                         ; 00451a67
    MOV EDX,dword ptr [ESP + 0x98]      ; 00451a69
        ;   Label: LAB_00451a69
    MOV EAX,dword ptr [EBX + 0x4]       ; 00451a70 | g_LightBufferPool[24][8] | g_LightBufferPool[24][12] | g_LightBufferPool[24][78732]
    CMP EAX,dword ptr [EDX + 0x144]     ; 00451a73
    JNZ 0x00451b8e                      ; 00451a79
        ;   XREF to: 00451b8e (CONDITIONAL_JUMP)  ; LAB_00451b8e
    MOV EAX,dword ptr [ESP + 0x98]      ; 00451a7f
        ;   Label: LAB_00451a7f
    INC ESI                             ; 00451a86
    MOV EDX,dword ptr [EAX + 0x154]     ; 00451a87
    ADD EBX,0x4                         ; 00451a8d | g_LightBufferPool[24][8]
    CMP ESI,EDX                         ; 00451a90
    JL 0x00451a69                       ; 00451a92
        ;   XREF to: 00451a69 (CONDITIONAL_JUMP)  ; LAB_00451a69
    ADD ESP,0x84                        ; 00451a94
        ;   Label: LAB_00451a94
    POP EBP                             ; 00451a9a
    POP EDI                             ; 00451a9b
    POP ESI                             ; 00451a9c
    POP EBX                             ; 00451a9d
    MOV EAX,EAX                         ; 00451a9e
    RET                                 ; 00451aa0
    MOV dword ptr [0x015c4174],EDX      ; 00451aa1 | g_CoronaVisibilityEnabled
        ;   Label: LAB_00451aa1
    JMP 0x0045199f                      ; 00451aa7
        ;   XREF to: 0045199f (UNCONDITIONAL_JUMP)  ; LAB_0045199f
    MOV dword ptr [0x015c4174],EBP      ; 00451aac | g_CoronaVisibilityEnabled
        ;   Label: LAB_00451aac
    JMP 0x0045199f                      ; 00451ab2
        ;   XREF to: 0045199f (UNCONDITIONAL_JUMP)  ; LAB_0045199f
    ADD EAX,0x13384                     ; 00451ab7
        ;   Label: LAB_00451ab7
    CMP EAX,EDX                         ; 00451abc
    JL 0x00451a41                       ; 00451abe
        ;   XREF to: 00451a41 (CONDITIONAL_JUMP)  ; LAB_00451a41
    MOV EAX,[0x01322208]                ; 00451ac0 | g_LightBufferPool[24][0]
        ;   Label: LAB_00451ac0
    CMP EAX,0x8                         ; 00451ac5
    JC 0x00451ba5                       ; 00451ac8
        ;   XREF to: 00451ba5 (CONDITIONAL_JUMP)  ; LAB_00451ba5
    XOR EDX,EDX                         ; 00451ace
    MOV dword ptr [0x015c4174],EDX      ; 00451ad0 | g_CoronaVisibilityEnabled
    MOV ECX,dword ptr [ESP + 0x9c]      ; 00451ad6
        ;   Label: LAB_00451ad6
    PUSH ECX                            ; 00451add
    CALL core_dglobe.cpp_CDemonGlobe_renderCorona_FUN_00471400 ; 00451ade
        ;   XREF to: 00471400 (UNCONDITIONAL_CALL)  ; void core_dglobe.cpp_CDemonGlobe_renderCorona_FUN_00471400(CDemonGlobe * this_ptr)
    ADD ESP,0x4                         ; 00451ae3
    MOV EAX,dword ptr [ESP + 0x98]      ; 00451ae6
    XOR EBX,EBX                         ; 00451aed
    MOV ESI,dword ptr [EAX + 0x154]     ; 00451aef
    MOV dword ptr [ESP + 0x30],EBX      ; 00451af5
    TEST ESI,ESI                        ; 00451af9
    JLE 0x00451a94                      ; 00451afb
        ;   XREF to: 00451a94 (CONDITIONAL_JUMP)  ; LAB_00451a94
    MOV EBP,0x1577728                   ; 00451afd | g_CoronaDepthBuffer
    MOV EAX,0xba8c78                    ; 00451b02 | g_CoronaBlurOutputBuffer
    MOV EDX,0x902f74                    ; 00451b07 | g_PrecomputedWorldPositions
    MOV dword ptr [ESP + 0x3c],EBX      ; 00451b0c
    MOV dword ptr [ESP + 0x1c],EBP      ; 00451b10 | g_CoronaDepthBuffer
    MOV dword ptr [ESP + 0x18],EAX      ; 00451b14 | g_CoronaBlurOutputBuffer
    MOV dword ptr [ESP + 0x20],EDX      ; 00451b18 | g_PrecomputedWorldPositions
    MOV EDX,dword ptr [ESP + 0x98]      ; 00451b1c
        ;   Label: LAB_00451b1c
    MOV EAX,dword ptr [ESP + 0x3c]      ; 00451b23
    MOV ECX,dword ptr [EDX + 0x144]     ; 00451b27
    CMP ECX,dword ptr [EAX + 0x1576fa8] ; 00451b2d | g_CoronaLeftExtent | g_CoronaLeftExtent[1]
    JNZ 0x00451fd6                      ; 00451b33
        ;   XREF to: 00451fd6 (CONDITIONAL_JUMP)  ; LAB_00451fd6
    MOV ECX,dword ptr [ESP + 0x3c]      ; 00451b39
        ;   Label: LAB_00451b39
    MOV EBX,dword ptr [ESP + 0x1c]      ; 00451b3d
    MOV ESI,dword ptr [ESP + 0x18]      ; 00451b41
    MOV EDI,dword ptr [ESP + 0x20]      ; 00451b45
    MOV EBP,dword ptr [ESP + 0x30]      ; 00451b49
    MOV EDX,dword ptr [ESP + 0x98]      ; 00451b4d
    ADD ECX,0x4                         ; 00451b54
    ADD EBX,0x500                       ; 00451b57
    ADD ESI,0x140                       ; 00451b5d
    ADD EDI,0xf00                       ; 00451b63
    INC EBP                             ; 00451b69
    MOV dword ptr [ESP + 0x3c],ECX      ; 00451b6a
    MOV dword ptr [ESP + 0x1c],EBX      ; 00451b6e | g_CoronaDepthBuffer[1][0] | g_CoronaDepthBuffer[2][0]
    MOV dword ptr [ESP + 0x18],ESI      ; 00451b72 | g_CoronaBlurOutputBuffer[1][0] | g_CoronaBlurOutputBuffer[2][0]
    MOV dword ptr [ESP + 0x20],EDI      ; 00451b76 | g_PrecomputedWorldPositions[320].x | g_PrecomputedWorldPositions[640].x
    MOV ECX,dword ptr [EDX + 0x154]     ; 00451b7a
    MOV dword ptr [ESP + 0x30],EBP      ; 00451b80
    CMP EBP,ECX                         ; 00451b84
    JGE 0x00451a94                      ; 00451b86
        ;   XREF to: 00451a94 (CONDITIONAL_JUMP)  ; LAB_00451a94
    JMP 0x00451b1c                      ; 00451b8c
        ;   XREF to: 00451b1c (UNCONDITIONAL_JUMP)  ; LAB_00451b1c
    PUSH EDI                            ; 00451b8e | g_LightBufferPool[24][4]
        ;   Label: LAB_00451b8e
    MOV EBP,dword ptr [EBX + 0x3c4]     ; 00451b8f | g_LightBufferPool[24][972]
    PUSH EBP                            ; 00451b95
    PUSH EAX                            ; 00451b96
    PUSH ESI                            ; 00451b97
    CALL core_dcamera.cpp_blendCoronaTextureSpan_FUN_004517f0 ; 00451b98
        ;   XREF to: 004517f0 (UNCONDITIONAL_CALL)  ; void core_dcamera.cpp_blendCoronaTextureSpan_FUN_004517f0(int scanline_y, int x_start, int x_end, int source_buffer_offset)
    ADD ESP,0x10                        ; 00451b9d
    JMP 0x00451a7f                      ; 00451ba0
        ;   XREF to: 00451a7f (UNCONDITIONAL_JUMP)  ; LAB_00451a7f
    IMUL EAX,EAX,0x13384                ; 00451ba5
        ;   Label: LAB_00451ba5
    MOV EDX,0x132220c                   ; 00451bab | g_LightBufferPool[24][4]
    MOV ECX,dword ptr [ESP + 0x9c]      ; 00451bb0
    MOV EBX,dword ptr [0x01322208]      ; 00451bb7 | g_LightBufferPool[24][0]
    PUSH ECX                            ; 00451bbd
    INC EBX                             ; 00451bbe
    ADD EDX,EAX                         ; 00451bbf
    MOV dword ptr [0x01322208],EBX      ; 00451bc1 | g_LightBufferPool[24][0]
    MOV dword ptr [ESP + 0x18],EDX      ; 00451bc7
    CALL core_dglobe.cpp_CDemonGlobe_renderCorona_FUN_00471400 ; 00451bcb
        ;   XREF to: 00471400 (UNCONDITIONAL_CALL)  ; void core_dglobe.cpp_CDemonGlobe_renderCorona_FUN_00471400(CDemonGlobe * this_ptr)
    ADD ESP,0x4                         ; 00451bd0
    MOV EAX,dword ptr [ESP + 0x98]      ; 00451bd3
    XOR ESI,ESI                         ; 00451bda
    MOV EDI,dword ptr [EAX + 0x154]     ; 00451bdc
    MOV dword ptr [ESP + 0x40],ESI      ; 00451be2
    TEST EDI,EDI                        ; 00451be6
    JLE 0x00451ee5                      ; 00451be8
        ;   XREF to: 00451ee5 (CONDITIONAL_JUMP)  ; LAB_00451ee5
    MOV EAX,dword ptr [ESP + 0x14]      ; 00451bee
    ADD EAX,0x784                       ; 00451bf2
    MOV dword ptr [ESP + 0x28],EAX      ; 00451bf7
    MOV EAX,0x902f74                    ; 00451bfb | g_PrecomputedWorldPositions
    MOV EBP,0x1577728                   ; 00451c00 | g_CoronaDepthBuffer
    MOV dword ptr [ESP + 0x2c],EAX      ; 00451c05 | g_PrecomputedWorldPositions
    MOV EAX,dword ptr [ESP + 0x14]      ; 00451c09
    MOV dword ptr [ESP + 0x24],EBP      ; 00451c0d | g_CoronaDepthBuffer
    MOV dword ptr [ESP + 0x34],EAX      ; 00451c11
    MOV EAX,dword ptr [ESP + 0x40]      ; 00451c15
        ;   Label: LAB_00451c15
    MOV ECX,dword ptr [ESP + 0x98]      ; 00451c19
    SHL EAX,0x2                         ; 00451c20
    MOV EBX,dword ptr [ECX + 0x144]     ; 00451c23
    CMP EBX,dword ptr [EAX + 0x1576fa8] ; 00451c29 | g_CoronaLeftExtent
    JZ 0x00451e75                       ; 00451c2f
        ;   XREF to: 00451e75 (CONDITIONAL_JUMP)  ; LAB_00451e75
    MOV EDX,dword ptr [ESP + 0x40]      ; 00451c35
    MOV dword ptr [ESP + 0x4c],EDX      ; 00451c39
    MOV EDX,dword ptr [EAX + 0x1576fa8] ; 00451c3d | g_CoronaLeftExtent
    MOV EAX,dword ptr [EAX + 0x1577368] ; 00451c43 | g_CoronaRightExtent
    MOV dword ptr [ESP + 0xc],EDX       ; 00451c49
    MOV dword ptr [ESP + 0x44],EAX      ; 00451c4d
    MOV EAX,dword ptr [ESP + 0x14]      ; 00451c51
    MOV ESI,EDX                         ; 00451c55
    MOV dword ptr [ESP + 0x38],EAX      ; 00451c57
    IMUL EAX,EDX,0xc                    ; 00451c5b
    MOV EDX,dword ptr [ESP + 0x2c]      ; 00451c5e
    ADD EDX,EAX                         ; 00451c62
    MOV dword ptr [ESP + 0x74],EDX      ; 00451c64
    MOV EAX,ESI                         ; 00451c68
    MOV EDX,dword ptr [ESP + 0x24]      ; 00451c6a
    SHL EAX,0x2                         ; 00451c6e
    MOV CL,byte ptr [0x013bc260]        ; 00451c71 | g_CameraDownscaleIterations
    ADD EDX,EAX                         ; 00451c77
    MOV EAX,dword ptr [ESP + 0x40]      ; 00451c79
    MOV dword ptr [ESP + 0x68],EDX      ; 00451c7d
    MOV EDX,ESI                         ; 00451c81
    SHL EAX,CL                          ; 00451c83
    SHL EDX,CL                          ; 00451c85
    MOV EAX,dword ptr [EAX*0x4 + 0x2cf7d5c] ; 00451c87 | g_ZBufferScanlineArray
    SHL EDX,0x2                         ; 00451c8e
    ADD EAX,EDX                         ; 00451c91
    MOV EDI,ESI                         ; 00451c93
    MOV dword ptr [ESP + 0x70],EAX      ; 00451c95
    MOV EAX,dword ptr [ESP + 0x28]      ; 00451c99
    ADD EAX,EDI                         ; 00451c9d
    MOV EBP,dword ptr [ESP + 0x44]      ; 00451c9f
    MOV dword ptr [ESP + 0x64],EAX      ; 00451ca3
    CMP ESI,EBP                         ; 00451ca7
    JGE 0x00451de4                      ; 00451ca9
        ;   XREF to: 00451de4 (CONDITIONAL_JUMP)  ; LAB_00451de4
    XOR DL,DL                           ; 00451caf
        ;   Label: LAB_00451caf
    MOV EAX,dword ptr [ESP + 0x70]      ; 00451cb1
    MOV byte ptr [ESP + 0x80],DL        ; 00451cb5
    MOV EDX,dword ptr [ESP + 0x68]      ; 00451cbc
    MOV EAX,dword ptr [EAX]             ; 00451cc0
    CMP EAX,dword ptr [EDX]             ; 00451cc2 | g_CoronaDepthBuffer | g_CoronaDepthBuffer[0][1]
    JNC 0x00451d8b                      ; 00451cc4
        ;   XREF to: 00451d8b (CONDITIONAL_JUMP)  ; LAB_00451d8b
    MOV EAX,dword ptr [ESP + 0x74]      ; 00451cca
    MOV EDX,dword ptr [0x015c4170]      ; 00451cce | g_CurrentGlobe
    MOV EAX,dword ptr [EAX]             ; 00451cd4 | g_PrecomputedWorldPositions | g_PrecomputedWorldPositions[1].x
    SUB EAX,dword ptr [EDX]             ; 00451cd6
    CDQ                                 ; 00451cd8
    XOR EAX,EDX                         ; 00451cd9
    SUB EAX,EDX                         ; 00451cdb
    MOV EDX,dword ptr [0x015c4170]      ; 00451cdd | g_CurrentGlobe
    MOV ESI,dword ptr [EDX + 0xc]       ; 00451ce3
    MOV EBX,EAX                         ; 00451ce6
    CMP EAX,ESI                         ; 00451ce8
    JGE 0x00451d8b                      ; 00451cea
        ;   XREF to: 00451d8b (CONDITIONAL_JUMP)  ; LAB_00451d8b
    MOV EAX,dword ptr [ESP + 0x74]      ; 00451cf0
    MOV EDI,dword ptr [EDX + 0x4]       ; 00451cf4
    MOV EAX,dword ptr [EAX + 0x4]       ; 00451cf7 | g_PrecomputedWorldPositions[0].y
    SUB EAX,EDI                         ; 00451cfa
    CDQ                                 ; 00451cfc
    XOR EAX,EDX                         ; 00451cfd
    SUB EAX,EDX                         ; 00451cff
    MOV EDX,dword ptr [0x015c4170]      ; 00451d01 | g_CurrentGlobe
    MOV EBP,dword ptr [EDX + 0xc]       ; 00451d07
    MOV ECX,EAX                         ; 00451d0a
    CMP EAX,EBP                         ; 00451d0c
    JGE 0x00451d8b                      ; 00451d0e
        ;   XREF to: 00451d8b (CONDITIONAL_JUMP)  ; LAB_00451d8b
    MOV EAX,dword ptr [ESP + 0x74]      ; 00451d14
    MOV ESI,dword ptr [EDX + 0x8]       ; 00451d18
    MOV EAX,dword ptr [EAX + 0x8]       ; 00451d1b | g_PrecomputedWorldPositions[0].z
    SUB EAX,ESI                         ; 00451d1e
    CDQ                                 ; 00451d20
    XOR EAX,EDX                         ; 00451d21
    SUB EAX,EDX                         ; 00451d23
    MOV EDX,dword ptr [0x015c4170]      ; 00451d25 | g_CurrentGlobe
    CMP EAX,dword ptr [EDX + 0xc]       ; 00451d2b
    JGE 0x00451d8b                      ; 00451d2e
        ;   XREF to: 00451d8b (CONDITIONAL_JUMP)  ; LAB_00451d8b
    IMUL ECX,ECX                        ; 00451d30
    IMUL EBX,EBX                        ; 00451d33
    IMUL EAX,EAX                        ; 00451d36
    ADD ECX,EBX                         ; 00451d39
    ADD ECX,EAX                         ; 00451d3b
    MOV EBP,dword ptr [EDX + 0x10]      ; 00451d3d
    MOV dword ptr [ESP + 0x58],ECX      ; 00451d40
    CMP ECX,EBP                         ; 00451d44
    JGE 0x00451d8b                      ; 00451d46
        ;   XREF to: 00451d8b (CONDITIONAL_JUMP)  ; LAB_00451d8b
    MOV ECX,dword ptr [ESP + 0x4c]      ; 00451d48
    MOV ESI,dword ptr [ESP + 0x70]      ; 00451d4c
    MOV EBX,dword ptr [ESP + 0xc]       ; 00451d50
    MOV EAX,[0x015c4174]                ; 00451d54 | g_CoronaVisibilityEnabled
    MOV ESI,dword ptr [ESI]             ; 00451d59
    TEST EAX,EAX                        ; 00451d5b
    JNZ 0x00451efd                      ; 00451d5d
        ;   XREF to: 00451efd (CONDITIONAL_JUMP)  ; LAB_00451efd
    MOV EAX,[0x015c4170]                ; 00451d63 | g_CurrentGlobe
        ;   Label: LAB_00451d63
    MOV ECX,dword ptr [ESP + 0x58]      ; 00451d68
    MOV EDX,dword ptr [EAX + 0x10]      ; 00451d6c
    SUB EDX,ECX                         ; 00451d6f
    SAR EDX,0x10                        ; 00451d71
    IMUL EDX,EDX,0x3f                   ; 00451d74
    MOV ECX,dword ptr [EAX + 0x10]      ; 00451d77
    SAR ECX,0x10                        ; 00451d7a
    MOV EAX,EDX                         ; 00451d7d
    SAR EDX,0x1f                        ; 00451d7f
    IDIV ECX                            ; 00451d82
    MOV byte ptr [ESP + 0x80],AL        ; 00451d84
    MOV EDX,dword ptr [ESP + 0x64]      ; 00451d8b
        ;   Label: LAB_00451d8b
    MOV EDI,dword ptr [ESP + 0x68]      ; 00451d8f
    MOV EBP,dword ptr [ESP + 0x74]      ; 00451d93
    MOV AL,byte ptr [ESP + 0x80]        ; 00451d97
    MOV ESI,dword ptr [ESP + 0x70]      ; 00451d9e
    MOV CL,byte ptr [0x013bc260]        ; 00451da2 | g_CameraDownscaleIterations
    LEA EBX,[EDX + 0x1]                 ; 00451da8
    ADD EDI,0x4                         ; 00451dab
    ADD EBP,0xc                         ; 00451dae
    MOV byte ptr [EDX],AL               ; 00451db1
    MOV EAX,0x1                         ; 00451db3
    MOV EDX,dword ptr [ESP + 0x44]      ; 00451db8
    SHL EAX,CL                          ; 00451dbc
    MOV dword ptr [ESP + 0x64],EBX      ; 00451dbe
    SHL EAX,0x2                         ; 00451dc2
    MOV dword ptr [ESP + 0x68],EDI      ; 00451dc5
    ADD ESI,EAX                         ; 00451dc9
    MOV EAX,dword ptr [ESP + 0xc]       ; 00451dcb
    MOV dword ptr [ESP + 0x74],EBP      ; 00451dcf
    INC EAX                             ; 00451dd3
    MOV dword ptr [ESP + 0x70],ESI      ; 00451dd4
    MOV dword ptr [ESP + 0xc],EAX       ; 00451dd8
    CMP EAX,EDX                         ; 00451ddc
    JL 0x00451caf                       ; 00451dde
        ;   XREF to: 00451caf (CONDITIONAL_JUMP)  ; LAB_00451caf
    IMUL EBX,dword ptr [ESP + 0x4c],0x140 ; 00451de4
        ;   Label: LAB_00451de4
    MOV EDX,dword ptr [ESP + 0x4c]      ; 00451dec
    MOV ECX,dword ptr [ESP + 0x38]      ; 00451df0
    SHL EDX,0x2                         ; 00451df4
    ADD EDX,ECX                         ; 00451df7
    ADD ECX,0x784                       ; 00451df9
    MOV EAX,dword ptr [EDX + 0x4]       ; 00451dff
    ADD ECX,EBX                         ; 00451e02
    MOV EDX,dword ptr [EDX + 0x3c4]     ; 00451e04
    ADD ECX,EAX                         ; 00451e0a
    CMP EAX,EDX                         ; 00451e0c
    JGE 0x00451e19                      ; 00451e0e
        ;   XREF to: 00451e19 (CONDITIONAL_JUMP)  ; LAB_00451e19
    CMP byte ptr [ECX],0x0              ; 00451e10
        ;   Label: LAB_00451e10
    JZ 0x00451fb8                       ; 00451e13
        ;   XREF to: 00451fb8 (CONDITIONAL_JUMP)  ; LAB_00451fb8
    IMUL ECX,dword ptr [ESP + 0x4c],0x140 ; 00451e19
        ;   Label: LAB_00451e19
    MOV EBX,dword ptr [ESP + 0x38]      ; 00451e21
    ADD EBX,0x784                       ; 00451e25
    ADD ECX,EBX                         ; 00451e2b
    ADD ECX,EDX                         ; 00451e2d
    DEC ECX                             ; 00451e2f
    CMP EDX,EAX                         ; 00451e30
    JLE 0x00451e3d                      ; 00451e32
        ;   XREF to: 00451e3d (CONDITIONAL_JUMP)  ; LAB_00451e3d
    CMP byte ptr [ECX],0x0              ; 00451e34
        ;   Label: LAB_00451e34
    JZ 0x00451fc7                       ; 00451e37
        ;   XREF to: 00451fc7 (CONDITIONAL_JUMP)  ; LAB_00451fc7
    MOV ECX,dword ptr [ESP + 0x4c]      ; 00451e3d
        ;   Label: LAB_00451e3d
    MOV EBP,dword ptr [ESP + 0x38]      ; 00451e41
    SHL ECX,0x2                         ; 00451e45
    ADD ECX,EBP                         ; 00451e48
    MOV dword ptr [ECX + 0x4],EAX       ; 00451e4a
    MOV EAX,dword ptr [ESP + 0x14]      ; 00451e4d
    PUSH EAX                            ; 00451e51
    MOV EAX,dword ptr [ESP + 0x44]      ; 00451e52
    MOV dword ptr [ECX + 0x3c4],EDX     ; 00451e56
    MOV EDX,dword ptr [EAX*0x4 + 0x1577368] ; 00451e5c | g_CoronaRightExtent
    PUSH EDX                            ; 00451e63
    MOV ECX,dword ptr [EAX*0x4 + 0x1576fa8] ; 00451e64 | g_CoronaLeftExtent
    PUSH ECX                            ; 00451e6b
    PUSH EAX                            ; 00451e6c
    CALL core_dcamera.cpp_blendCoronaTextureSpan_FUN_004517f0 ; 00451e6d
        ;   XREF to: 004517f0 (UNCONDITIONAL_CALL)  ; void core_dcamera.cpp_blendCoronaTextureSpan_FUN_004517f0(int scanline_y, int x_start, int x_end, int source_buffer_offset)
    ADD ESP,0x10                        ; 00451e72
    MOV ESI,dword ptr [ESP + 0x28]      ; 00451e75
        ;   Label: LAB_00451e75
    MOV EDI,dword ptr [ESP + 0x24]      ; 00451e79
    MOV EAX,dword ptr [ESP + 0x40]      ; 00451e7d
    MOV ECX,dword ptr [ESP + 0x34]      ; 00451e81
    MOV EBP,dword ptr [ESP + 0x2c]      ; 00451e85
    ADD ESI,0x140                       ; 00451e89
    ADD EDI,0x500                       ; 00451e8f
    MOV EDX,dword ptr [EAX*0x4 + 0x1576fa8] ; 00451e95 | g_CoronaLeftExtent
    ADD EBP,0xf00                       ; 00451e9c
    MOV dword ptr [ECX + 0x4],EDX       ; 00451ea2 | g_LightBufferPool[24][8] | g_LightBufferPool[24][12]
    MOV EDX,dword ptr [ESP + 0x40]      ; 00451ea5
    MOV EAX,dword ptr [EAX*0x4 + 0x1577368] ; 00451ea9 | g_CoronaRightExtent
    INC EDX                             ; 00451eb0
    MOV dword ptr [ECX + 0x3c4],EAX     ; 00451eb1 | g_LightBufferPool[24][968]
    LEA EAX,[ECX + 0x4]                 ; 00451eb7
    MOV dword ptr [ESP + 0x40],EDX      ; 00451eba
    MOV dword ptr [ESP + 0x34],EAX      ; 00451ebe
    MOV EAX,EDX                         ; 00451ec2
    MOV EDX,dword ptr [ESP + 0x98]      ; 00451ec4
    MOV dword ptr [ESP + 0x28],ESI      ; 00451ecb
    MOV dword ptr [ESP + 0x24],EDI      ; 00451ecf | g_CoronaDepthBuffer[1][0]
    MOV ECX,dword ptr [EDX + 0x154]     ; 00451ed3
    MOV dword ptr [ESP + 0x2c],EBP      ; 00451ed9 | g_PrecomputedWorldPositions[320].x
    CMP EAX,ECX                         ; 00451edd
    JL 0x00451c15                       ; 00451edf
        ;   XREF to: 00451c15 (CONDITIONAL_JUMP)  ; LAB_00451c15
    MOV EAX,dword ptr [ESP + 0x14]      ; 00451ee5
        ;   Label: LAB_00451ee5
    MOV EDX,dword ptr [ESP + 0x9c]      ; 00451ee9
    MOV dword ptr [EAX],EDX             ; 00451ef0 | g_LightBufferPool[24][4]
    ADD ESP,0x84                        ; 00451ef2
    POP EBP                             ; 00451ef8
    POP EDI                             ; 00451ef9
    POP ESI                             ; 00451efa
    POP EBX                             ; 00451efb
    RET                                 ; 00451efc
    MOV EBP,dword ptr [0x015c4178]      ; 00451efd | g_CoronaTargetX
        ;   Label: LAB_00451efd
    MOV EDI,dword ptr [0x015c417c]      ; 00451f03 | g_CoronaTargetY
    MOV EAX,[0x015c4180]                ; 00451f09 | g_CoronaTargetDepth
    XOR EDX,EDX                         ; 00451f0e
    MOV dword ptr [ESP + 0x50],EAX      ; 00451f10
    MOV dword ptr [ESP + 0x54],EDX      ; 00451f14
    TEST ESI,ESI                        ; 00451f18
    JZ 0x00451f85                       ; 00451f1a
        ;   XREF to: 00451f85 (CONDITIONAL_JUMP)  ; LAB_00451f85
    MOV EAX,0x7fffffff                  ; 00451f1c
    MOV EDX,EAX                         ; 00451f21
    SAR EDX,0x1f                        ; 00451f23
    IDIV ESI                            ; 00451f26
    MOV ESI,EAX                         ; 00451f28
    MOV EDX,dword ptr [ESP + 0x50]      ; 00451f2a
        ;   Label: LAB_00451f2a
    SUB EDX,ESI                         ; 00451f2e
    MOV EAX,EDX                         ; 00451f30
    SAR EDX,0x1f                        ; 00451f32
    SHL EDX,0x4                         ; 00451f35
    SBB EAX,EDX                         ; 00451f38
    SAR EAX,0x4                         ; 00451f3a
    SUB EBP,EBX                         ; 00451f3d
    SUB EDI,ECX                         ; 00451f3f
    SHL EBP,0x4                         ; 00451f41
    SHL EDI,0x4                         ; 00451f44
    SHL EBX,0x8                         ; 00451f47
    SHL ECX,0x8                         ; 00451f4a
    MOV dword ptr [ESP + 0x78],EBP      ; 00451f4d
    MOV dword ptr [ESP + 0x7c],EDI      ; 00451f51
    MOV EBP,EAX                         ; 00451f55
    MOV EDX,ESI                         ; 00451f57
    MOV EAX,0x10                        ; 00451f59
    MOV ESI,ECX                         ; 00451f5e
        ;   Label: LAB_00451f5e
    SAR ESI,0x8                         ; 00451f60
    IMUL ESI,ESI,0x500                  ; 00451f63
    MOV EDI,EBX                         ; 00451f69
    SAR EDI,0x8                         ; 00451f6b
    MOV EDI,dword ptr [ESI + EDI*0x4 + 0xbce6f8] ; 00451f6e | g_PrecomputedDepthBuffer
    LEA ESI,[EDX + -0x80]               ; 00451f75
    CMP EDI,ESI                         ; 00451f78
    JGE 0x00451f8c                      ; 00451f7a
        ;   XREF to: 00451f8c (CONDITIONAL_JUMP)  ; LAB_00451f8c
    TEST EAX,EAX                        ; 00451f7c
    JNZ 0x00451fa8                      ; 00451f7e
        ;   XREF to: 00451fa8 (CONDITIONAL_JUMP)  ; LAB_00451fa8
    JMP 0x00451d63                      ; 00451f80
        ;   XREF to: 00451d63 (UNCONDITIONAL_JUMP)  ; LAB_00451d63
    MOV ESI,0x7fffffff                  ; 00451f85
        ;   Label: LAB_00451f85
    JMP 0x00451f2a                      ; 00451f8a
        ;   XREF to: 00451f2a (UNCONDITIONAL_JUMP)  ; LAB_00451f2a
    MOV ESI,dword ptr [ESP + 0x78]      ; 00451f8c
        ;   Label: LAB_00451f8c
    MOV EDI,dword ptr [ESP + 0x7c]      ; 00451f90
    DEC EAX                             ; 00451f94
    ADD EDX,EBP                         ; 00451f95
    ADD EBX,ESI                         ; 00451f97
    ADD ECX,EDI                         ; 00451f99
    TEST EAX,EAX                        ; 00451f9b
    JG 0x00451f5e                       ; 00451f9d
        ;   XREF to: 00451f5e (CONDITIONAL_JUMP)  ; LAB_00451f5e
    TEST EAX,EAX                        ; 00451f9f
    JNZ 0x00451fa8                      ; 00451fa1
        ;   XREF to: 00451fa8 (CONDITIONAL_JUMP)  ; LAB_00451fa8
    JMP 0x00451d63                      ; 00451fa3
        ;   XREF to: 00451d63 (UNCONDITIONAL_JUMP)  ; LAB_00451d63
    CMP dword ptr [ESP + 0x54],0x0      ; 00451fa8
        ;   Label: LAB_00451fa8
    JNZ 0x00451d63                      ; 00451fad
        ;   XREF to: 00451d63 (CONDITIONAL_JUMP)  ; LAB_00451d63
    JMP 0x00451d8b                      ; 00451fb3
        ;   XREF to: 00451d8b (UNCONDITIONAL_JUMP)  ; LAB_00451d8b
    INC EAX                             ; 00451fb8
        ;   Label: LAB_00451fb8
    INC ECX                             ; 00451fb9
    CMP EAX,EDX                         ; 00451fba
    JL 0x00451e10                       ; 00451fbc
        ;   XREF to: 00451e10 (CONDITIONAL_JUMP)  ; LAB_00451e10
    JMP 0x00451e19                      ; 00451fc2
        ;   XREF to: 00451e19 (UNCONDITIONAL_JUMP)  ; LAB_00451e19
    DEC EDX                             ; 00451fc7
        ;   Label: LAB_00451fc7
    DEC ECX                             ; 00451fc8
    CMP EDX,EAX                         ; 00451fc9
    JG 0x00451e34                       ; 00451fcb
        ;   XREF to: 00451e34 (CONDITIONAL_JUMP)  ; LAB_00451e34
    JMP 0x00451e3d                      ; 00451fd1
        ;   XREF to: 00451e3d (UNCONDITIONAL_JUMP)  ; LAB_00451e3d
    MOV EAX,dword ptr [ESP + 0x3c]      ; 00451fd6
        ;   Label: LAB_00451fd6
    MOV EAX,dword ptr [EAX + 0x1576fa8] ; 00451fda | g_CoronaLeftExtent[1]
    MOV dword ptr [ESP + 0x6c],EAX      ; 00451fe0
    MOV ESI,dword ptr [ESP + 0x6c]      ; 00451fe4
    IMUL EBX,ESI,0xc                    ; 00451fe8
    MOV EAX,dword ptr [ESP + 0x3c]      ; 00451feb
    MOV EDI,dword ptr [ESP + 0x20]      ; 00451fef
    MOV EBP,dword ptr [ESP + 0x18]      ; 00451ff3
    MOV EAX,dword ptr [EAX + 0x1577368] ; 00451ff7 | g_CoronaRightExtent[1]
    MOV EDX,dword ptr [ESP + 0x1c]      ; 00451ffd
    MOV dword ptr [ESP + 0x48],EAX      ; 00452001
    ADD EBP,ESI                         ; 00452005
    LEA EAX,[ESI*0x4 + 0x0]             ; 00452007
    MOV CL,byte ptr [0x013bc260]        ; 0045200e | g_CameraDownscaleIterations
    ADD EDX,EAX                         ; 00452014
    MOV EAX,dword ptr [ESP + 0x30]      ; 00452016
    MOV dword ptr [ESP + 0x60],EDX      ; 0045201a
    MOV EDX,ESI                         ; 0045201e
    SHL EAX,CL                          ; 00452020
    SHL EDX,CL                          ; 00452022
    MOV EAX,dword ptr [EAX*0x4 + 0x2cf7d5c] ; 00452024 | g_ZBufferScanlineArray
    SHL EDX,0x2                         ; 0045202b
    ADD EBX,EDI                         ; 0045202e
    ADD EAX,EDX                         ; 00452030
    MOV EDX,dword ptr [ESP + 0x48]      ; 00452032
    MOV dword ptr [ESP + 0x5c],EAX      ; 00452036
    CMP ESI,EDX                         ; 0045203a
    JGE 0x00451b39                      ; 0045203c
        ;   XREF to: 00451b39 (CONDITIONAL_JUMP)  ; LAB_00451b39
        ;   Label: LAB_0045203c
    MOV EDX,dword ptr [ESP + 0x60]      ; 00452042
    MOV EAX,dword ptr [ESP + 0x5c]      ; 00452046
    MOV ECX,dword ptr [EDX]             ; 0045204a | g_CoronaDepthBuffer[1][0] | g_CoronaDepthBuffer[1][1]
    CMP ECX,dword ptr [EAX]             ; 0045204c
    JBE 0x004520d3                      ; 0045204e
        ;   XREF to: 004520d3 (CONDITIONAL_JUMP)  ; LAB_004520d3
    MOV ESI,dword ptr [0x015c4170]      ; 00452054 | g_CurrentGlobe
    MOV ECX,dword ptr [EBX]             ; 0045205a | g_PrecomputedWorldPositions | g_PrecomputedWorldPositions[320].x | g_PrecomputedWorldPositions[321].x
    MOV EDI,dword ptr [ESI]             ; 0045205c
    SUB ECX,EDI                         ; 0045205e
    MOV EAX,ECX                         ; 00452060
    CDQ                                 ; 00452062
    XOR EAX,EDX                         ; 00452063
    SUB EAX,EDX                         ; 00452065
    CMP EAX,dword ptr [ESI + 0xc]       ; 00452067
    JGE 0x004520d3                      ; 0045206a
        ;   XREF to: 004520d3 (CONDITIONAL_JUMP)  ; LAB_004520d3
    MOV EDI,dword ptr [0x015c4170]      ; 0045206c | g_CurrentGlobe
    MOV ESI,dword ptr [EBX + 0x4]       ; 00452072 | g_PrecomputedWorldPositions[0].y | g_PrecomputedWorldPositions[320].y
    MOV EAX,dword ptr [EDI + 0x4]       ; 00452075
    SUB ESI,EAX                         ; 00452078
    MOV EAX,ESI                         ; 0045207a
    CDQ                                 ; 0045207c
    XOR EAX,EDX                         ; 0045207d
    SUB EAX,EDX                         ; 0045207f
    CMP EAX,dword ptr [EDI + 0xc]       ; 00452081
    JGE 0x004520d3                      ; 00452084
        ;   XREF to: 004520d3 (CONDITIONAL_JUMP)  ; LAB_004520d3
    MOV EAX,[0x015c4170]                ; 00452086 | g_CurrentGlobe
    MOV EDI,dword ptr [EBX + 0x8]       ; 0045208b | g_PrecomputedWorldPositions[0].z | g_PrecomputedWorldPositions[320].z
    SUB EDI,dword ptr [EAX + 0x8]       ; 0045208e
    MOV dword ptr [ESP + 0x10],EAX      ; 00452091
    MOV EAX,EDI                         ; 00452095
    CDQ                                 ; 00452097
    XOR EAX,EDX                         ; 00452098
    SUB EAX,EDX                         ; 0045209a
    MOV EDX,dword ptr [ESP + 0x10]      ; 0045209c
    CMP EAX,dword ptr [EDX + 0xc]       ; 004520a0
    JGE 0x004520d3                      ; 004520a3
        ;   XREF to: 004520d3 (CONDITIONAL_JUMP)  ; LAB_004520d3
    IMUL ESI,ESI                        ; 004520a5
    IMUL ECX,ECX                        ; 004520a8
    MOV EDX,EDI                         ; 004520ab
    IMUL EDX,EDI                        ; 004520ad
    ADD ECX,ESI                         ; 004520b0
    MOV EAX,[0x015c4170]                ; 004520b2 | g_CurrentGlobe
    ADD EDX,ECX                         ; 004520b7
    MOV ECX,dword ptr [EAX + 0x10]      ; 004520b9
    CMP EDX,ECX                         ; 004520bc
    JGE 0x004520d3                      ; 004520be
        ;   XREF to: 004520d3 (CONDITIONAL_JUMP)  ; LAB_004520d3
    SUB ECX,EDX                         ; 004520c0
    SAR ECX,0x10                        ; 004520c2
    MOV EDX,dword ptr [EAX + 0x14]      ; 004520c5
    MOV EAX,ECX                         ; 004520c8
    IMUL EDX                            ; 004520ca
    SHRD EAX,EDX,0x10                   ; 004520cc
    ADD byte ptr [EBP],AL               ; 004520d0 | g_CoronaBlurOutputBuffer[1][0]
    MOV EAX,0x1                         ; 004520d3
        ;   Label: LAB_004520d3
    MOV ESI,dword ptr [ESP + 0x5c]      ; 004520d8
    MOV EDI,dword ptr [ESP + 0x60]      ; 004520dc
    MOV EDX,dword ptr [ESP + 0x48]      ; 004520e0
    MOV CL,byte ptr [0x013bc260]        ; 004520e4 | g_CameraDownscaleIterations
    ADD EBX,0xc                         ; 004520ea
    SHL EAX,CL                          ; 004520ed
    INC EBP                             ; 004520ef
    SHL EAX,0x2                         ; 004520f0
    ADD EDI,0x4                         ; 004520f3
    ADD ESI,EAX                         ; 004520f6
    MOV EAX,dword ptr [ESP + 0x6c]      ; 004520f8
    MOV dword ptr [ESP + 0x60],EDI      ; 004520fc
    INC EAX                             ; 00452100
    MOV dword ptr [ESP + 0x5c],ESI      ; 00452101
    MOV dword ptr [ESP + 0x6c],EAX      ; 00452105
    CMP EAX,EDX                         ; 00452109
    JMP 0x0045203c                      ; 0045210b
        ;   XREF to: 0045203c (UNCONDITIONAL_JUMP)  ; LAB_0045203c

