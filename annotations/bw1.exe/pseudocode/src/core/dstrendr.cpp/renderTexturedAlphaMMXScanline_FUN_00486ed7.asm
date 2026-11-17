; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __edi_esi_ebx core_dstrendr_cpp_renderTexturedAlphaMMXScanline_FUN_00486ed7(SSoftwareEdge *left_edge,SSoftwareEdge *right_edge,int scanline_y)
;
;
; XREF[2]:
;   engine_drender.cpp_CDemonRenderer_renderDestReadBlendPoly_FUN_00482cd0 at 00482d48
;   engine_drender.cpp_CDemonRenderer_renderSolidTexturedPoly_FUN_004828b0 at 00482924
;
; Referenced Globals:
;   uint g_PerspectiveNextU = 0x0
;   uint g_PerspectiveNextV = 0x0
;   uint g_StartDepthZ = 0x0
;   int g_SoftwareDeltaTextureU = 0x0
;   int g_SoftwareDeltaTextureV = 0x0
;   int g_SoftwareDeltaDepthZ = 0x0
;   int g_PerspectiveScanlinePixelCount = 0x0
;   uint* g_PerspectiveScanlineZPtr = 00000000
;   qword g_TextureShift1 = 0x10
;   qword g_TextureShift2 = 0x8
;   qword g_TextureMask1 = 0xff
;   qword g_TextureMask2 = 0xff00
;   void*[1200] g_ScreenBufferArray
;   undefined4 g_ReciprocalLookupTable[1]
;   uchar* g_CurrentTextureData
;   ... and 1 more
;
; *****************************************************************************

section .text

    PUSH ESI                            ; 00486ed7
        ;   Label: core_dstrendr.cpp_renderTexturedAlphaMMXScanline_FUN_00486ed7
    PUSH EDI                            ; 00486ed8
    PUSH EBP                            ; 00486ed9
    MOV EAX,dword ptr [ESI + 0x8]       ; 00486eda
    MOV ECX,dword ptr [EDI + 0x8]       ; 00486edd
    CMP EAX,ECX                         ; 00486ee0
    JBE 0x00486ee7                      ; 00486ee2
        ;   XREF to: 00486ee7 (CONDITIONAL_JUMP)  ; LAB_00486ee7
    XCHG EAX,ECX                        ; 00486ee4
    XCHG EDI,ESI                        ; 00486ee5
    SHR ECX,0x10                        ; 00486ee7
        ;   Label: LAB_00486ee7
    SHR EAX,0x10                        ; 00486eea
    MOV EBP,dword ptr [EBX*0x4 + 0x1c4354c] ; 00486eed | g_ScreenBufferArray
    SUB ECX,EAX                         ; 00486ef4
    JLE 0x00486fec                      ; 00486ef6
        ;   XREF to: 00486fec (CONDITIONAL_JUMP)  ; LAB_00486fec
    SHL ECX,0x1                         ; 00486efc
    LEA EBP,[EBP + EAX*0x2]             ; 00486efe
    MOV dword ptr [0x00614544],ECX      ; 00486f02 | g_PerspectiveScanlinePixelCount
    MOV dword ptr [0x00614548],EBP      ; 00486f08 | g_PerspectiveScanlineZPtr
    MOV EAX,dword ptr [EDI + 0x18]      ; 00486f0e
    MOV EBX,dword ptr [ESI + 0x18]      ; 00486f11
    SUB EAX,EBX                         ; 00486f14
    IMUL dword ptr [ECX*0x2 + 0x1c4f034] ; 00486f16 | g_ReciprocalLookupTable[1]
    MOV dword ptr [0x00614518],EBX      ; 00486f1d | g_PerspectiveNextU
    MOV dword ptr [0x00614534],EDX      ; 00486f23 | g_SoftwareDeltaTextureU
    MOV EAX,dword ptr [EDI + 0x20]      ; 00486f29
    MOV EBX,dword ptr [ESI + 0x20]      ; 00486f2c
    SUB EAX,EBX                         ; 00486f2f
    IMUL dword ptr [ECX*0x2 + 0x1c4f034] ; 00486f31 | g_ReciprocalLookupTable[1]
    MOV dword ptr [0x0061451c],EBX      ; 00486f38 | g_PerspectiveNextV
    MOV dword ptr [0x00614538],EDX      ; 00486f3e | g_SoftwareDeltaTextureV
    MOV EAX,dword ptr [EDI + 0x28]      ; 00486f44
    MOV EBX,dword ptr [ESI + 0x28]      ; 00486f47
    SUB EAX,EBX                         ; 00486f4a
    IMUL dword ptr [ECX*0x2 + 0x1c4f034] ; 00486f4c | g_ReciprocalLookupTable[1]
    MOV dword ptr [0x00614524],EBX      ; 00486f53 | g_StartDepthZ
    MOV dword ptr [0x0061453c],EDX      ; 00486f59 | g_SoftwareDeltaDepthZ
    MOV ECX,dword ptr [0x00614518]      ; 00486f5f | g_PerspectiveNextU
    MOV EDX,dword ptr [0x0061451c]      ; 00486f65 | g_PerspectiveNextV
    MOV EDI,0x0                         ; 00486f6b
    MOV ESI,dword ptr [0x00614524]      ; 00486f70 | g_StartDepthZ
    MOV EBP,dword ptr [0x00614548]      ; 00486f76 | g_PerspectiveScanlineZPtr
        ;   Label: LAB_00486f76
    ADD EBP,EDI                         ; 00486f7c
    MOVZX EAX,word ptr [EBP]            ; 00486f7e
    CMP ESI,EAX                         ; 00486f82
    JNC 0x00486fcd                      ; 00486f84
        ;   XREF to: 00486fcd (CONDITIONAL_JUMP)  ; LAB_00486fcd
    MOVD MM0,ECX                        ; 00486f86
    MOVD MM2,EDX                        ; 00486f89
    PSRLQ MM0,qword ptr [0x00623eb8]    ; 00486f8c | g_TextureShift1
    PSRLQ MM2,qword ptr [0x00623ed8]    ; 00486f93 | g_TextureShift2
    PAND MM0,qword ptr [0x00623ef8]     ; 00486f9a | g_TextureMask1
    PAND MM2,qword ptr [0x00623f18]     ; 00486fa1 | g_TextureMask2
    PADDD MM0,MM2                       ; 00486fa8
    MOVD EBX,MM0                        ; 00486fab
    MOV EAX,[0x01c50934]                ; 00486fae | g_CurrentTextureOpacityData
    TEST EAX,0xffffffff                 ; 00486fb3
    JNZ 0x00486fbf                      ; 00486fb8
        ;   XREF to: 00486fbf (CONDITIONAL_JUMP)  ; LAB_00486fbf
    MOV EAX,[0x01c50930]                ; 00486fba | g_CurrentTextureData
    ADD EBX,EAX                         ; 00486fbf
        ;   Label: LAB_00486fbf
    MOVZX EAX,byte ptr [EBX]            ; 00486fc1
    CMP EAX,0x0                         ; 00486fc4
    JZ 0x00486fcd                       ; 00486fc7
        ;   XREF to: 00486fcd (CONDITIONAL_JUMP)  ; LAB_00486fcd
    MOV word ptr [EBP],SI               ; 00486fc9
    ADD EDI,0x2                         ; 00486fcd
        ;   Label: LAB_00486fcd
    CMP EDI,dword ptr [0x00614544]      ; 00486fd0 | g_PerspectiveScanlinePixelCount
    JA 0x00486fec                       ; 00486fd6
        ;   XREF to: 00486fec (CONDITIONAL_JUMP)  ; LAB_00486fec
    ADD ECX,dword ptr [0x00614534]      ; 00486fd8 | g_SoftwareDeltaTextureU
    ADD EDX,dword ptr [0x00614538]      ; 00486fde | g_SoftwareDeltaTextureV
    ADD ESI,dword ptr [0x0061453c]      ; 00486fe4 | g_SoftwareDeltaDepthZ
    JMP 0x00486f76                      ; 00486fea
        ;   XREF to: 00486f76 (UNCONDITIONAL_JUMP)  ; LAB_00486f76
    POP EBP                             ; 00486fec
        ;   Label: LAB_00486fec
    EMMS                                ; 00486fed
    POP EDI                             ; 00486fef
    POP ESI                             ; 00486ff0
    RET                                 ; 00486ff1

