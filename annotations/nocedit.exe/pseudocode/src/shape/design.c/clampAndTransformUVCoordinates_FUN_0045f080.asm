; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void __cdecl shape_design_c_clampAndTransformUVCoordinates_FUN_0045f080(void)
;
; Local Variables:
; undefined4       Stack[-0x20]:4  local_20
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[1]:
;   shape_design.c_showFacetPartEditor_FUN_0045f1d0 at 0045f795
;
; Referenced Globals:
;   double g_UVScaleFactorPrimary = 0.00390625
;   double g_UVScaleFactorSecondary = 248
;   double g_UVOffsetBase = 4
;   double g_UVClampMinU = 252
;   double g_UVClampMinV = 4
;   double g_UVClampMaxV = 252
;   int g_PolygonCount
;   undefined4 DAT_016e99b4
;   undefined4 DAT_016e9a08
;   undefined4 DAT_016e9a48
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0045f080
        ;   Label: shape_design.c_clampAndTransformUVCoordinates_FUN_0045f080
    PUSH ESI                            ; 0045f081
    PUSH EDI                            ; 0045f082
    PUSH EBP                            ; 0045f083
    MOV EBP,ESP                         ; 0045f084
    SUB ESP,0x10                        ; 0045f086
    MOV dword ptr [EBP + -0x8],0x0      ; 0045f08c
    JMP 0x0045f09b                      ; 0045f093
        ;   XREF to: 0045f09b (UNCONDITIONAL_JUMP)  ; LAB_0045f09b
    MOV EAX,dword ptr [EBP + -0x8]      ; 0045f095
        ;   Label: LAB_0045f095
    INC dword ptr [EBP + -0x8]          ; 0045f098
    MOV EAX,dword ptr [EBP + -0x8]      ; 0045f09b
        ;   Label: LAB_0045f09b
    CMP EAX,dword ptr [0x016e990c]      ; 0045f09e | g_PolygonCount
    JGE 0x0045f1bd                      ; 0045f0a4
        ;   XREF to: 0045f1bd (CONDITIONAL_JUMP)  ; LAB_0045f1bd
    MOV dword ptr [EBP + -0x4],0x0      ; 0045f0aa
    JMP 0x0045f0b9                      ; 0045f0b1
        ;   XREF to: 0045f0b9 (UNCONDITIONAL_JUMP)  ; LAB_0045f0b9
    MOV EAX,dword ptr [EBP + -0x4]      ; 0045f0b3
        ;   Label: LAB_0045f0b3
    INC dword ptr [EBP + -0x4]          ; 0045f0b6
    IMUL EDX,dword ptr [EBP + -0x8],0x184 ; 0045f0b9
        ;   Label: LAB_0045f0b9
    MOV EAX,dword ptr [EBP + -0x4]      ; 0045f0c0
    CMP EAX,dword ptr [EDX + 0x16e99b4] ; 0045f0c3 | DAT_016e99b4
    JGE 0x0045f1b8                      ; 0045f0c9
        ;   XREF to: 0045f1b8 (CONDITIONAL_JUMP)  ; LAB_0045f1b8
    IMUL EDX,dword ptr [EBP + -0x8],0x184 ; 0045f0cf
    MOV EAX,dword ptr [EBP + -0x4]      ; 0045f0d6
    SHL EAX,0x2                         ; 0045f0d9
    ADD EAX,EDX                         ; 0045f0dc
    MOV EAX,dword ptr [EAX + 0x16e9a08] ; 0045f0de | DAT_016e9a08
    MOV dword ptr [EBP + -0x10],EAX     ; 0045f0e4
    IMUL EDX,dword ptr [EBP + -0x8],0x184 ; 0045f0e7
    MOV EAX,dword ptr [EBP + -0x4]      ; 0045f0ee
    SHL EAX,0x2                         ; 0045f0f1
    ADD EAX,EDX                         ; 0045f0f4
    MOV EAX,dword ptr [EAX + 0x16e9a48] ; 0045f0f6 | DAT_016e9a48
    MOV dword ptr [EBP + -0xc],EAX      ; 0045f0fc
    FLD float ptr [EBP + -0x10]         ; 0045f0ff
    FMUL double ptr [0x0061b6de]        ; 0045f102 | g_UVScaleFactorPrimary
    FMUL double ptr [0x0061b6e6]        ; 0045f108 | g_UVScaleFactorSecondary
    FADD double ptr [0x0061b6ee]        ; 0045f10e | g_UVOffsetBase
    FSTP float ptr [EBP + -0x10]        ; 0045f114
    FLD float ptr [EBP + -0xc]          ; 0045f117
    FMUL double ptr [0x0061b6de]        ; 0045f11a | g_UVScaleFactorPrimary
    FMUL double ptr [0x0061b6e6]        ; 0045f120 | g_UVScaleFactorSecondary
    FADD double ptr [0x0061b6ee]        ; 0045f126 | g_UVOffsetBase
    FSTP float ptr [EBP + -0xc]         ; 0045f12c
    FLD float ptr [EBP + -0x10]         ; 0045f12f
    FCOMP double ptr [0x0061b6ee]       ; 0045f132 | g_UVOffsetBase
    FNSTSW AX                           ; 0045f138
    SAHF                                ; 0045f13a
    JNC 0x0045f144                      ; 0045f13b
        ;   XREF to: 0045f144 (CONDITIONAL_JUMP)  ; LAB_0045f144
    MOV dword ptr [EBP + -0x10],0x40800000 ; 0045f13d
    FLD float ptr [EBP + -0x10]         ; 0045f144
        ;   Label: LAB_0045f144
    FCOMP double ptr [0x0061b6f6]       ; 0045f147 | g_UVClampMinU
    FNSTSW AX                           ; 0045f14d
    SAHF                                ; 0045f14f
    JBE 0x0045f159                      ; 0045f150
        ;   XREF to: 0045f159 (CONDITIONAL_JUMP)  ; LAB_0045f159
    MOV dword ptr [EBP + -0x10],0x437c0000 ; 0045f152
    FLD float ptr [EBP + -0xc]          ; 0045f159
        ;   Label: LAB_0045f159
    FCOMP double ptr [0x0061b6fe]       ; 0045f15c | g_UVClampMinV
    FNSTSW AX                           ; 0045f162
    SAHF                                ; 0045f164
    JNC 0x0045f16e                      ; 0045f165
        ;   XREF to: 0045f16e (CONDITIONAL_JUMP)  ; LAB_0045f16e
    MOV dword ptr [EBP + -0xc],0x40800000 ; 0045f167
    FLD float ptr [EBP + -0xc]          ; 0045f16e
        ;   Label: LAB_0045f16e
    FCOMP double ptr [0x0061b706]       ; 0045f171 | g_UVClampMaxV
    FNSTSW AX                           ; 0045f177
    SAHF                                ; 0045f179
    JBE 0x0045f183                      ; 0045f17a
        ;   XREF to: 0045f183 (CONDITIONAL_JUMP)  ; LAB_0045f183
    MOV dword ptr [EBP + -0xc],0x437c0000 ; 0045f17c
    IMUL EDX,dword ptr [EBP + -0x8],0x184 ; 0045f183
        ;   Label: LAB_0045f183
    MOV EAX,dword ptr [EBP + -0x4]      ; 0045f18a
    SHL EAX,0x2                         ; 0045f18d
    ADD EDX,EAX                         ; 0045f190
    MOV EAX,dword ptr [EBP + -0x10]     ; 0045f192
    MOV dword ptr [EDX + 0x16e9a08],EAX ; 0045f195 | DAT_016e9a08
    IMUL EDX,dword ptr [EBP + -0x8],0x184 ; 0045f19b
    MOV EAX,dword ptr [EBP + -0x4]      ; 0045f1a2
    SHL EAX,0x2                         ; 0045f1a5
    ADD EDX,EAX                         ; 0045f1a8
    MOV EAX,dword ptr [EBP + -0xc]      ; 0045f1aa
    MOV dword ptr [EDX + 0x16e9a48],EAX ; 0045f1ad | DAT_016e9a48
    JMP 0x0045f0b3                      ; 0045f1b3
        ;   XREF to: 0045f0b3 (UNCONDITIONAL_JUMP)  ; LAB_0045f0b3
    JMP 0x0045f095                      ; 0045f1b8
        ;   XREF to: 0045f095 (UNCONDITIONAL_JUMP)  ; LAB_0045f095
        ;   Label: LAB_0045f1b8
    MOV ESP,EBP                         ; 0045f1bd
        ;   Label: LAB_0045f1bd
    POP EBP                             ; 0045f1bf
    POP EDI                             ; 0045f1c0
    POP ESI                             ; 0045f1c1
    POP EBX                             ; 0045f1c2
    RET                                 ; 0045f1c3

