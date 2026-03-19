; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_dpart_cpp_setupDepthOnlyEdgeInterpolation_FUN_00483210(SSoftwareEdge *vertex_a,SSoftwareEdge *vertex_b)
;
; Parameters:
; SSoftwareEdge *  Stack[0x4]:4   vertex_a
; SSoftwareEdge *  Stack[0x8]:4   vertex_b
;
; Referenced Globals:
;   int g_RenderTriangleEdgeCount
;   SSoftwareEdge[16] g_EdgeInterpolationArray
;   undefined4 g_EdgeInterpolationArray[0].base.y_max
;   undefined4 g_EdgeInterpolationArray[0].base.x_current
;   undefined4 g_EdgeInterpolationArray[0].base.x_gradient
;   undefined4 g_EdgeInterpolationArray[0].base.w_current
;   undefined4 g_EdgeInterpolationArray[0].base.w_gradient
;   int g_RenderTriangleMinScanlineY
;   int g_RenderTriangleMaxScanlineY
;   int g_RasterizerDepthBias
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00483210
        ;   Label: core_dpart.cpp_setupDepthOnlyEdgeInterpolation_FUN_00483210
    PUSH EDI                            ; 00483211
    PUSH EBP                            ; 00483212
    MOV EBX,dword ptr [ESP + 0x10]      ; 00483213
    MOV EDI,dword ptr [ESP + 0x14]      ; 00483217
    MOV EDX,dword ptr [EDI + 0x14]      ; 0048321b
    MOV EAX,dword ptr [EBX + 0x14]      ; 0048321e
    SAR EDX,0x10                        ; 00483221
    SAR EAX,0x10                        ; 00483224
    CMP EAX,EDX                         ; 00483227
    JZ 0x0048330e                       ; 00483229
        ;   XREF to: 0048330e (CONDITIONAL_JUMP)  ; LAB_0048330e
    PUSH ESI                            ; 0048322f
    MOV ESI,dword ptr [EDI + 0x14]      ; 00483230
    CMP ESI,dword ptr [EBX + 0x14]      ; 00483233
    JGE 0x00483244                      ; 00483236
        ;   XREF to: 00483244 (CONDITIONAL_JUMP)  ; LAB_00483244
    MOV ECX,EBX                         ; 00483238
    MOV EBX,EDI                         ; 0048323a
    MOV EDI,ECX                         ; 0048323c
    MOV ECX,EAX                         ; 0048323e
    MOV EAX,EDX                         ; 00483240
    MOV EDX,ECX                         ; 00483242
    MOV ESI,dword ptr [0x02c6cb70]      ; 00483244 | g_RenderTriangleEdgeCount
        ;   Label: LAB_00483244
    LEA ECX,[ESI*0x8 + 0x0]             ; 0048324a
    ADD ECX,ESI                         ; 00483251
    MOV ESI,0x2c6cb74                   ; 00483253 | g_EdgeInterpolationArray
    SHL ECX,0x3                         ; 00483258
    ADD ESI,ECX                         ; 0048325b
    MOV dword ptr [ESI],EAX             ; 0048325d | g_EdgeInterpolationArray
    MOV EBP,dword ptr [0x02c6cff4]      ; 0048325f | g_RenderTriangleMinScanlineY
    MOV dword ptr [ESI + 0x4],EDX       ; 00483265 | g_EdgeInterpolationArray[0].base.y_max
    CMP EAX,EBP                         ; 00483268
    JGE 0x00483271                      ; 0048326a
        ;   XREF to: 00483271 (CONDITIONAL_JUMP)  ; LAB_00483271
    MOV [0x02c6cff4],EAX                ; 0048326c | g_RenderTriangleMinScanlineY
    CMP EDX,dword ptr [0x02c6cff8]      ; 00483271 | g_RenderTriangleMaxScanlineY
        ;   Label: LAB_00483271
    JLE 0x0048327f                      ; 00483277
        ;   XREF to: 0048327f (CONDITIONAL_JUMP)  ; LAB_0048327f
    MOV dword ptr [0x02c6cff8],EDX      ; 00483279 | g_RenderTriangleMaxScanlineY
    MOV EDX,dword ptr [EBX + 0x14]      ; 0048327f
        ;   Label: LAB_0048327f
    MOV ECX,dword ptr [EDI + 0x14]      ; 00483282
    SUB ECX,EDX                         ; 00483285
    CMP ECX,0x10000                     ; 00483287
    JNC 0x00483312                      ; 0048328d
        ;   XREF to: 00483312 (CONDITIONAL_JUMP)  ; LAB_00483312
    XOR ECX,ECX                         ; 00483293
    MOV EDX,dword ptr [EDI + 0x10]      ; 00483295
        ;   Label: LAB_00483295
    MOV EBP,dword ptr [EBX + 0x10]      ; 00483298
    MOV EAX,ECX                         ; 0048329b
    SUB EDX,EBP                         ; 0048329d
    IMUL EDX                            ; 0048329f
    SHRD EAX,EDX,0x10                   ; 004832a1
    MOV dword ptr [ESI + 0xc],EAX       ; 004832a5 | g_EdgeInterpolationArray[0].base.x_gradient
    MOV EAX,dword ptr [EDI + 0x8]       ; 004832a8
    MOV EDX,dword ptr [EBX + 0x8]       ; 004832ab
    SUB EAX,EDX                         ; 004832ae
    MOV EDX,EAX                         ; 004832b0
    SHL EDX,0x8                         ; 004832b2
    MOV EAX,ECX                         ; 004832b5
    IMUL EDX                            ; 004832b7
    SHRD EAX,EDX,0x10                   ; 004832b9
    MOV dword ptr [ESI + 0x2c],EAX      ; 004832bd | g_EdgeInterpolationArray[0].base.w_gradient
    MOV ECX,dword ptr [EBX + 0x14]      ; 004832c0
    AND ECX,0xffff                      ; 004832c3
    XOR CX,0xffff                       ; 004832c9
    MOV EDX,dword ptr [ESI + 0xc]       ; 004832cd | g_EdgeInterpolationArray[0].base.x_gradient
    MOV EAX,ECX                         ; 004832d0
    IMUL EDX                            ; 004832d2
    SHRD EAX,EDX,0x10                   ; 004832d4
    MOV EDX,EAX                         ; 004832d8
    MOV EAX,dword ptr [EBX + 0x10]      ; 004832da
    MOV EDI,dword ptr [0x02c6d03c]      ; 004832dd | g_RasterizerDepthBias
    ADD EAX,EDX                         ; 004832e3
    MOV EDX,dword ptr [ESI + 0x2c]      ; 004832e5 | g_EdgeInterpolationArray[0].base.w_gradient
    MOV dword ptr [ESI + 0x8],EAX       ; 004832e8 | g_EdgeInterpolationArray[0].base.x_current
    MOV EAX,ECX                         ; 004832eb
    MOV EBX,dword ptr [EBX + 0x8]       ; 004832ed
    IMUL EDX                            ; 004832f0
    SHRD EAX,EDX,0x10                   ; 004832f2
    SHL EBX,0x8                         ; 004832f6
    MOV EBP,dword ptr [0x02c6cb70]      ; 004832f9 | g_RenderTriangleEdgeCount
    SUB EBX,EDI                         ; 004832ff
    INC EBP                             ; 00483301
    ADD EBX,EAX                         ; 00483302
    MOV dword ptr [0x02c6cb70],EBP      ; 00483304 | g_RenderTriangleEdgeCount
    MOV dword ptr [ESI + 0x28],EBX      ; 0048330a | g_EdgeInterpolationArray[0].base.w_current
    POP ESI                             ; 0048330d
    POP EBP                             ; 0048330e
        ;   Label: LAB_0048330e
    POP EDI                             ; 0048330f
    POP EBX                             ; 00483310
    RET                                 ; 00483311
    MOV EAX,0xffffffff                  ; 00483312
        ;   Label: LAB_00483312
    XOR EDX,EDX                         ; 00483317
    DIV ECX                             ; 00483319
    MOV ECX,EAX                         ; 0048331b
    JMP 0x00483295                      ; 0048331d
        ;   XREF to: 00483295 (UNCONDITIONAL_JUMP)  ; LAB_00483295

