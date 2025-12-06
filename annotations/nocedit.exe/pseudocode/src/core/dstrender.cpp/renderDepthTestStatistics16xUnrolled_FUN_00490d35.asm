; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void core_dstrender.cpp_renderDepthTestStatistics16xUnrolled_FUN_00490d35(SEdgeData * left_edge, SEdgeData * right_edge, int scanline_y)
;
;
; XREF[1]:
;   engine_drender.cpp_CDemonRenderer_renderStandardTextured_FUN_0048aa50 at 0048ab29
;
; Referenced Globals:
;   int g_RenderPixelCounter
;   void*[1024] g_ScreenBufferArray
;   uint*[1024] g_ZBufferScanlineArray
;   uint[1600] g_ReciprocalLookupTable
;
; *****************************************************************************

section .text

    PUSH ESI                            ; 00490d35
        ;   Label: core_dstrender.cpp_renderDepthTestStatistics16xUnrolled_FUN_00490d35
    PUSH EDI                            ; 00490d36
    PUSH EBP                            ; 00490d37
    MOV EAX,dword ptr [ESI + 0x8]       ; 00490d38
    MOV ECX,dword ptr [EDI + 0x8]       ; 00490d3b
    CMP EAX,ECX                         ; 00490d3e
    JBE 0x00490d45                      ; 00490d40 | LAB_00490d45
        ;   XREF to: 00490d45 (CONDITIONAL_JUMP)
    XCHG EAX,ECX                        ; 00490d42
    XCHG EDI,ESI                        ; 00490d43
    SHR EAX,0x10                        ; 00490d45
        ;   Label: LAB_00490d45
    SHR ECX,0x10                        ; 00490d48
    MOV EBP,dword ptr [EBX*0x4 + 0x2cf7d5c] ; 00490d4b | uint *[1024] g_ZBufferScanlineArray
    MOV EBX,dword ptr [EBX*0x4 + 0x2cf6a9c] ; 00490d52 | void *[1024] g_ScreenBufferArray
    SUB ECX,EAX                         ; 00490d59
    JLE 0x00490ebc                      ; 00490d5b | LAB_00490ebc
        ;   XREF to: 00490ebc (CONDITIONAL_JUMP)
    ADD EBX,EAX                         ; 00490d61
    SHL EAX,0x2                         ; 00490d63
    ADD EBP,EAX                         ; 00490d66
    INC ECX                             ; 00490d68
    MOV EAX,dword ptr [EDI + 0x28]      ; 00490d69
    SUB EAX,dword ptr [ESI + 0x28]      ; 00490d6c
    IMUL dword ptr [ECX*0x4 + 0x2d02580] ; 00490d6f | uint[1600] g_ReciprocalLookupTable
    MOV EDI,EBX                         ; 00490d76
    MOV EBX,EBP                         ; 00490d78
    DEC ECX                             ; 00490d7a
    MOV ESI,dword ptr [ESI + 0x28]      ; 00490d7b
    MOV EAX,[0x02c6d5a4]                ; 00490d7e | int g_RenderPixelCounter
    SUB ECX,0x4                         ; 00490d83
        ;   Label: LAB_00490d83
    JL 0x00490e88                       ; 00490d86 | LAB_00490e88
        ;   XREF to: 00490e88 (CONDITIONAL_JUMP)
    MOV EBP,ESI                         ; 00490d8c
    SHR EBP,0x8                         ; 00490d8e
    CMP EBP,dword ptr [EBX]             ; 00490d91
    SBB EAX,-0x1                        ; 00490d93
    ADD ESI,EDX                         ; 00490d96
    MOV EBP,ESI                         ; 00490d98
    SHR EBP,0x8                         ; 00490d9a
    CMP EBP,dword ptr [EBX + 0x4]       ; 00490d9d
    SBB EAX,-0x1                        ; 00490da0
    ADD ESI,EDX                         ; 00490da3
    MOV EBP,ESI                         ; 00490da5
    SHR EBP,0x8                         ; 00490da7
    CMP EBP,dword ptr [EBX + 0x8]       ; 00490daa
    SBB EAX,-0x1                        ; 00490dad
    ADD ESI,EDX                         ; 00490db0
    MOV EBP,ESI                         ; 00490db2
    SHR EBP,0x8                         ; 00490db4
    CMP EBP,dword ptr [EBX + 0xc]       ; 00490db7
    SBB EAX,-0x1                        ; 00490dba
    ADD ESI,EDX                         ; 00490dbd
    ADD EBX,0x10                        ; 00490dbf
    ADD EDI,0x4                         ; 00490dc2
    SUB ECX,0x4                         ; 00490dc5
    JL 0x00490e88                       ; 00490dc8 | LAB_00490e88
        ;   XREF to: 00490e88 (CONDITIONAL_JUMP)
    MOV EBP,ESI                         ; 00490dce
    SHR EBP,0x8                         ; 00490dd0
    CMP EBP,dword ptr [EBX]             ; 00490dd3
    SBB EAX,-0x1                        ; 00490dd5
    ADD ESI,EDX                         ; 00490dd8
    MOV EBP,ESI                         ; 00490dda
    SHR EBP,0x8                         ; 00490ddc
    CMP EBP,dword ptr [EBX + 0x4]       ; 00490ddf
    SBB EAX,-0x1                        ; 00490de2
    ADD ESI,EDX                         ; 00490de5
    MOV EBP,ESI                         ; 00490de7
    SHR EBP,0x8                         ; 00490de9
    CMP EBP,dword ptr [EBX + 0x8]       ; 00490dec
    SBB EAX,-0x1                        ; 00490def
    ADD ESI,EDX                         ; 00490df2
    MOV EBP,ESI                         ; 00490df4
    SHR EBP,0x8                         ; 00490df6
    CMP EBP,dword ptr [EBX + 0xc]       ; 00490df9
    SBB EAX,-0x1                        ; 00490dfc
    ADD ESI,EDX                         ; 00490dff
    ADD EBX,0x10                        ; 00490e01
    ADD EDI,0x4                         ; 00490e04
    SUB ECX,0x4                         ; 00490e07
    JL 0x00490e88                       ; 00490e0a | LAB_00490e88
        ;   XREF to: 00490e88 (CONDITIONAL_JUMP)
    MOV EBP,ESI                         ; 00490e0c
    SHR EBP,0x8                         ; 00490e0e
    CMP EBP,dword ptr [EBX]             ; 00490e11
    SBB EAX,-0x1                        ; 00490e13
    ADD ESI,EDX                         ; 00490e16
    MOV EBP,ESI                         ; 00490e18
    SHR EBP,0x8                         ; 00490e1a
    CMP EBP,dword ptr [EBX + 0x4]       ; 00490e1d
    SBB EAX,-0x1                        ; 00490e20
    ADD ESI,EDX                         ; 00490e23
    MOV EBP,ESI                         ; 00490e25
    SHR EBP,0x8                         ; 00490e27
    CMP EBP,dword ptr [EBX + 0x8]       ; 00490e2a
    SBB EAX,-0x1                        ; 00490e2d
    ADD ESI,EDX                         ; 00490e30
    MOV EBP,ESI                         ; 00490e32
    SHR EBP,0x8                         ; 00490e34
    CMP EBP,dword ptr [EBX + 0xc]       ; 00490e37
    SBB EAX,-0x1                        ; 00490e3a
    ADD ESI,EDX                         ; 00490e3d
    ADD EBX,0x10                        ; 00490e3f
    ADD EDI,0x4                         ; 00490e42
    SUB ECX,0x4                         ; 00490e45
    JL 0x00490e88                       ; 00490e48 | LAB_00490e88
        ;   XREF to: 00490e88 (CONDITIONAL_JUMP)
    MOV EBP,ESI                         ; 00490e4a
    SHR EBP,0x8                         ; 00490e4c
    CMP EBP,dword ptr [EBX]             ; 00490e4f
    SBB EAX,-0x1                        ; 00490e51
    ADD ESI,EDX                         ; 00490e54
    MOV EBP,ESI                         ; 00490e56
    SHR EBP,0x8                         ; 00490e58
    CMP EBP,dword ptr [EBX + 0x4]       ; 00490e5b
    SBB EAX,-0x1                        ; 00490e5e
    ADD ESI,EDX                         ; 00490e61
    MOV EBP,ESI                         ; 00490e63
    SHR EBP,0x8                         ; 00490e65
    CMP EBP,dword ptr [EBX + 0x8]       ; 00490e68
    SBB EAX,-0x1                        ; 00490e6b
    ADD ESI,EDX                         ; 00490e6e
    MOV EBP,ESI                         ; 00490e70
    SHR EBP,0x8                         ; 00490e72
    CMP EBP,dword ptr [EBX + 0xc]       ; 00490e75
    SBB EAX,-0x1                        ; 00490e78
    ADD ESI,EDX                         ; 00490e7b
    ADD EBX,0x10                        ; 00490e7d
    ADD EDI,0x4                         ; 00490e80
    JMP 0x00490d83                      ; 00490e83 | LAB_00490d83
        ;   XREF to: 00490d83 (UNCONDITIONAL_JUMP)
    ADD ECX,0x4                         ; 00490e88
        ;   Label: LAB_00490e88
    JLE 0x00490eb7                      ; 00490e8b | LAB_00490eb7
        ;   XREF to: 00490eb7 (CONDITIONAL_JUMP)
    MOV EBP,ESI                         ; 00490e8d
    SHR EBP,0x8                         ; 00490e8f
    CMP EBP,dword ptr [EBX]             ; 00490e92
    SBB EAX,-0x1                        ; 00490e94
    ADD ESI,EDX                         ; 00490e97
    DEC ECX                             ; 00490e99
    JLE 0x00490eb7                      ; 00490e9a | LAB_00490eb7
        ;   XREF to: 00490eb7 (CONDITIONAL_JUMP)
    MOV EBP,ESI                         ; 00490e9c
    SHR EBP,0x8                         ; 00490e9e
    CMP EBP,dword ptr [EBX + 0x4]       ; 00490ea1
    SBB EAX,-0x1                        ; 00490ea4
    ADD ESI,EDX                         ; 00490ea7
    DEC ECX                             ; 00490ea9
    JLE 0x00490eb7                      ; 00490eaa | LAB_00490eb7
        ;   XREF to: 00490eb7 (CONDITIONAL_JUMP)
    MOV EBP,ESI                         ; 00490eac
    SHR EBP,0x8                         ; 00490eae
    CMP EBP,dword ptr [EBX + 0x8]       ; 00490eb1
    SBB EAX,-0x1                        ; 00490eb4
    MOV [0x02c6d5a4],EAX                ; 00490eb7 | int g_RenderPixelCounter
        ;   Label: LAB_00490eb7
    POP EBP                             ; 00490ebc
        ;   Label: LAB_00490ebc
    POP EDI                             ; 00490ebd
    POP ESI                             ; 00490ebe
    RET                                 ; 00490ebf

