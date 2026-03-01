; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_dcamera_cpp_renderVolumetricLightScanline_FUN_00450440(SSoftwareEdge *left_edge,SSoftwareEdge *right_edge,int scanline_y)
;
; Parameters:
; SSoftwareEdge *  Stack[0x4]:4   left_edge
; SSoftwareEdge *  Stack[0x8]:4   right_edge
; int              Stack[0xc]:4   scanline_y
; Local Variables:
; undefined4       Stack[-0x2c]:4  local_2c
; undefined4       Stack[-0x28]:4  local_28
; undefined4       Stack[-0x24]:4  local_24
; undefined4       Stack[-0x20]:4  local_20
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[1]:
;   core_dlight.cpp_CDemonLight_renderExternalVolumetricShafts_FUN_004758d0 at 00475ee5
;
; Referenced Globals:
;   int g_BackdropSaveActive
;   int g_DitherPatternOffset
;   int[256] g_DitherPatternTable
;   undefined4 g_DitherPatternTable[1]
;   _BIT_INTEGER32 g_CameraDownscaleIterations
;   SFogImagePlane g_CameraPlaneWorkBuffer
;   uint*[1200] g_ZBufferScanlineArray
;   int g_ClipLeft
;   int g_ClipTop
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00450440
        ;   Label: core_dcamera.cpp_renderVolumetricLightScanline_FUN_00450440
    PUSH ESI                            ; 00450441
    PUSH EDI                            ; 00450442
    PUSH EBP                            ; 00450443
    MOV EBP,ESP                         ; 00450444
    SUB ESP,0x1c                        ; 00450446
    MOV EDI,dword ptr [EBP + 0x18]      ; 00450449
    MOV EDX,dword ptr [EBP + 0x14]      ; 0045044c
    SUB EDX,dword ptr [0x02d0255c]      ; 0045044f | g_ClipTop
    MOV ECX,dword ptr [0x013bc260]      ; 00450455 | g_CameraDownscaleIterations
    MOV dword ptr [EBP + 0x14],EDX      ; 0045045b
    CMP ECX,0x1                         ; 0045045e
    JNZ 0x0045046d                      ; 00450461
        ;   XREF to: 0045046d (CONDITIONAL_JUMP)  ; LAB_0045046d
    TEST byte ptr [EBP + 0x14],0x1      ; 00450463
    JNZ 0x004505d6                      ; 00450467
        ;   XREF to: 004505d6 (CONDITIONAL_JUMP)  ; LAB_004505d6
    CMP dword ptr [0x013bc260],0x2      ; 0045046d | g_CameraDownscaleIterations
        ;   Label: LAB_0045046d
    JNZ 0x00450480                      ; 00450474
        ;   XREF to: 00450480 (CONDITIONAL_JUMP)  ; LAB_00450480
    TEST byte ptr [EBP + 0x14],0x3      ; 00450476
    JNZ 0x004505d6                      ; 0045047a
        ;   XREF to: 004505d6 (CONDITIONAL_JUMP)  ; LAB_004505d6
    MOV ESI,dword ptr [EBP + 0x14]      ; 00450480
        ;   Label: LAB_00450480
    MOV CL,byte ptr [0x013bc260]        ; 00450483 | g_CameraDownscaleIterations
    SAR ESI,CL                          ; 00450489
    MOV dword ptr [EBP + 0x14],ESI      ; 0045048b
    MOV ESI,dword ptr [EBP + 0x1c]      ; 0045048e
    MOV EAX,[0x02d02558]                ; 00450491 | g_ClipLeft
    MOV EBX,dword ptr [EDI + 0x8]       ; 00450496
    MOV ESI,dword ptr [ESI + 0x8]       ; 00450499
    SAR EBX,0x10                        ; 0045049c
    SAR ESI,0x10                        ; 0045049f
    SUB EBX,EAX                         ; 004504a2
    SUB ESI,EAX                         ; 004504a4
    SAR EBX,CL                          ; 004504a6
    SAR ESI,CL                          ; 004504a8
    CMP EBX,ESI                         ; 004504aa
    JLE 0x004504bc                      ; 004504ac
        ;   XREF to: 004504bc (CONDITIONAL_JUMP)  ; LAB_004504bc
    MOV EAX,EBX                         ; 004504ae
    MOV EBX,ESI                         ; 004504b0
    MOV ESI,EAX                         ; 004504b2
    MOV EAX,EDI                         ; 004504b4
    MOV EDI,dword ptr [EBP + 0x1c]      ; 004504b6
    MOV dword ptr [EBP + 0x1c],EAX      ; 004504b9
    MOV EAX,dword ptr [EDI + 0x28]      ; 004504bc
        ;   Label: LAB_004504bc
    MOV EDX,EAX                         ; 004504bf
    SAR EDX,0x1f                        ; 004504c1
    SHL EDX,0x8                         ; 004504c4
    SBB EAX,EDX                         ; 004504c7
    SAR EAX,0x8                         ; 004504c9
    MOV dword ptr [EBP + -0x1c],EAX     ; 004504cc
    MOV EDX,dword ptr [EBP + 0x1c]      ; 004504cf
    MOV EAX,dword ptr [EBP + 0x1c]      ; 004504d2
    MOV EDX,dword ptr [EDX + 0x28]      ; 004504d5
    MOV EAX,dword ptr [EAX + 0x28]      ; 004504d8
    SAR EDX,0x1f                        ; 004504db
    SHL EDX,0x8                         ; 004504de
    SBB EAX,EDX                         ; 004504e1
    SAR EAX,0x8                         ; 004504e3
    MOV ECX,EAX                         ; 004504e6
    MOV EAX,dword ptr [EDI + 0x28]      ; 004504e8
    MOV EDX,EAX                         ; 004504eb
    SAR EDX,0x1f                        ; 004504ed
    SHL EDX,0x8                         ; 004504f0
    SBB EAX,EDX                         ; 004504f3
    SAR EAX,0x8                         ; 004504f5
    MOV EDX,ECX                         ; 004504f8
    MOV ECX,ESI                         ; 004504fa
    SUB EDX,EAX                         ; 004504fc
    SUB ECX,EBX                         ; 004504fe
    MOV EAX,EDX                         ; 00450500
    INC ECX                             ; 00450502
    SAR EDX,0x1f                        ; 00450503
    IDIV ECX                            ; 00450506
    MOV dword ptr [EBP + -0x18],EAX     ; 00450508
    MOV EAX,dword ptr [EDI + 0x10]      ; 0045050b
    MOV dword ptr [EBP + -0x14],EAX     ; 0045050e
    MOV EDX,dword ptr [EBP + 0x1c]      ; 00450511
    MOV EDX,dword ptr [EDX + 0x10]      ; 00450514
    SUB EDX,EAX                         ; 00450517
    MOV EAX,EDX                         ; 00450519
    SAR EDX,0x1f                        ; 0045051b
    IDIV ECX                            ; 0045051e
    MOV dword ptr [EBP + -0x10],EAX     ; 00450520
    MOV CL,byte ptr [0x013bc260]        ; 00450523 | g_CameraDownscaleIterations
    MOV EDX,EBX                         ; 00450529
    MOV EAX,dword ptr [EBP + 0x14]      ; 0045052b
    SHL EDX,CL                          ; 0045052e
    SHL EAX,CL                          ; 00450530
    SHL EDX,0x2                         ; 00450532
    MOV EAX,dword ptr [EAX*0x4 + 0x2cf7d5c] ; 00450535 | g_ZBufferScanlineArray
    ADD EAX,EDX                         ; 0045053c
    MOV dword ptr [EBP + -0xc],EAX      ; 0045053e
    MOV EDX,dword ptr [EBP + 0x14]      ; 00450541
    LEA EAX,[EDX*0x4 + 0x0]             ; 00450544
    ADD EAX,EDX                         ; 0045054b
    SHL EAX,0x6                         ; 0045054d
    ADD EAX,0x13da778                   ; 00450550 | g_CameraPlaneWorkBuffer
    ADD EAX,EBX                         ; 00450555
    MOV dword ptr [EBP + -0x8],EAX      ; 00450557
    SUB ESI,EBX                         ; 0045055a
    MOV dword ptr [EBP + -0x4],ESI      ; 0045055c
    MOV ECX,dword ptr [EBP + 0xfffffffc] ; 0045055f
    SHL ECX,0x2                         ; 00450565
    MOV ESI,dword ptr [EBP + 0xfffffff8] ; 00450568
    MOV EDI,dword ptr [0x013bbe30]      ; 0045056e | g_DitherPatternOffset
    MOV EBX,dword ptr [EBP + 0xffffffe4] ; 00450574
    MOV EDX,dword ptr [EBP + 0xffffffec] ; 0045057a
    MOV EAX,ECX                         ; 00450580
        ;   Label: LAB_00450580
    ADD EAX,dword ptr [EBP + 0xfffffff4] ; 00450582
    CMP EBX,dword ptr [EAX]             ; 00450588
    JLE 0x004505b4                      ; 0045058a
        ;   XREF to: 004505b4 (CONDITIONAL_JUMP)  ; LAB_004505b4
    MOVZX EAX,byte ptr [ESI]            ; 0045058c
    SHL EAX,0x8                         ; 0045058f
    ADD EAX,EDX                         ; 00450592
    ADD EAX,dword ptr [EDI + 0x13bbe34] ; 00450594 | g_DitherPatternTable | g_DitherPatternTable[1]
    ADD EDI,0x4                         ; 0045059a
    AND EDI,0x3fc                       ; 0045059d
    SHR EAX,0x8                         ; 004505a3
    CMP EAX,0xff                        ; 004505a6
    JC 0x004505b2                       ; 004505ab
        ;   XREF to: 004505b2 (CONDITIONAL_JUMP)  ; LAB_004505b2
    MOV EAX,0xff                        ; 004505ad
    MOV byte ptr [ESI],AL               ; 004505b2
        ;   Label: LAB_004505b2
    ADD EDX,dword ptr [EBP + 0xfffffff0] ; 004505b4
        ;   Label: LAB_004505b4
    ADD EBX,dword ptr [EBP + 0xffffffe8] ; 004505ba
    INC ESI                             ; 004505c0
    SUB ECX,0x4                         ; 004505c1
    JG 0x00450580                       ; 004505c4
        ;   XREF to: 00450580 (CONDITIONAL_JUMP)  ; LAB_00450580
    MOV dword ptr [0x013bbe30],EDI      ; 004505c6 | g_DitherPatternOffset
    MOV dword ptr [0x013bbe2c],0x1      ; 004505cc | g_BackdropSaveActive
    MOV ESP,EBP                         ; 004505d6
        ;   Label: LAB_004505d6
    POP EBP                             ; 004505d8
    POP EDI                             ; 004505d9
    POP ESI                             ; 004505da
    POP EBX                             ; 004505db
    RET                                 ; 004505dc

