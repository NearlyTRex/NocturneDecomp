; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl engine_special_cpp_drawPolyList2_FUN_005b7780(SRenderVertex *vertex_buffer,ushort **polygons,int polygon_count,int render_flags)
;
; Parameters:
; SRenderVertex *  Stack[0x4]:4   vertex_buffer
; ushort * *       Stack[0x8]:4   polygons
; int              Stack[0xc]:4   polygon_count
; int              Stack[0x10]:4   render_flags
; Local Variables:
; SRenderVertex *  Stack[-0x1c]:4  local_1c
; SRenderVertex *  Stack[-0x18]:4  local_18
; SRenderVertex *  Stack[-0x14]:4  local_14
;
; XREF[1]:
;   engine_drender.cpp_CDemonRenderer_renderFaceList_FUN_0048d170 at 0048d3f5
;
; Referenced Globals:
;   int g_UseExternalRenderer
;   int g_RenderedTriangleCount
;   APIDLL_drawPolygon2* g_APIDLL_drawPolygon2
;   APIDLL_drawPolyList2* g_APIDLL_drawPolyList2
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005b7780
        ;   Label: engine_special.cpp_drawPolyList2_FUN_005b7780
    PUSH ESI                            ; 005b7781
    PUSH EDI                            ; 005b7782
    PUSH EBP                            ; 005b7783
    SUB ESP,0xc                         ; 005b7784
    MOV EDI,dword ptr [ESP + 0x20]      ; 005b7787
    MOV EDX,dword ptr [ESP + 0x24]      ; 005b778b
    CMP dword ptr [0x02d03e94],0x0      ; 005b778f | g_UseExternalRenderer
    JZ 0x005b788f                       ; 005b7796
        ;   XREF to: 005b788f (CONDITIONAL_JUMP)  ; LAB_005b788f
    MOV EBX,dword ptr [ESP + 0x28]      ; 005b779c
    MOV EAX,[0x030e56b8]                ; 005b77a0 | g_RenderedTriangleCount
    MOV ESI,dword ptr [0x03f6b8d4]      ; 005b77a5 | g_APIDLL_drawPolyList2
    ADD EAX,EBX                         ; 005b77ab
    TEST ESI,ESI                        ; 005b77ad
    JNZ 0x005b789b                      ; 005b77af
        ;   XREF to: 005b789b (CONDITIONAL_JUMP)  ; LAB_005b789b
    MOV [0x030e56b8],EAX                ; 005b77b5 | g_RenderedTriangleCount
    TEST EBX,EBX                        ; 005b77ba
    JLE 0x005b7880                      ; 005b77bc
        ;   XREF to: 005b7880 (CONDITIONAL_JUMP)  ; LAB_005b7880
    MOV EBP,dword ptr [ESP + 0x2c]      ; 005b77c2
    MOV EBX,EDX                         ; 005b77c6
    MOV EAX,dword ptr [EBX]             ; 005b77c8
        ;   Label: LAB_005b77c8
    XOR EDX,EDX                         ; 005b77ca
    MOV DX,word ptr [EAX]               ; 005b77cc
    IMUL EDX,EDX,0x30                   ; 005b77cf
    LEA ECX,[EDI + EDX*0x1]             ; 005b77d2
    MOV dword ptr [ESP],ECX             ; 005b77d5
    XOR EDX,EDX                         ; 005b77d8
    MOV DX,word ptr [EAX + 0x2]         ; 005b77da
    IMUL EDX,EDX,0x30                   ; 005b77de
    LEA ECX,[EDI + EDX*0x1]             ; 005b77e1
    MOV dword ptr [ESP + 0x4],ECX       ; 005b77e4
    XOR EDX,EDX                         ; 005b77e8
    MOV DX,word ptr [EAX + 0x4]         ; 005b77ea
    IMUL EDX,EDX,0x30                   ; 005b77ee
    LEA ECX,[EDI + EDX*0x1]             ; 005b77f1
    MOV dword ptr [ESP + 0x8],ECX       ; 005b77f4
    XOR ECX,ECX                         ; 005b77f8
    MOV CX,word ptr [EAX + 0x6]         ; 005b77fa
    MOV EDX,dword ptr [ESP]             ; 005b77fe
    SHL ECX,0x8                         ; 005b7801
    MOV dword ptr [EDX + 0x18],ECX      ; 005b7804
    XOR ECX,ECX                         ; 005b7807
    MOV CX,word ptr [EAX + 0xc]         ; 005b7809
    MOV EDX,dword ptr [ESP]             ; 005b780d
    SHL ECX,0x8                         ; 005b7810
    MOV dword ptr [EDX + 0x1c],ECX      ; 005b7813
    XOR ECX,ECX                         ; 005b7816
    MOV CX,word ptr [EAX + 0x8]         ; 005b7818
    MOV EDX,dword ptr [ESP + 0x4]       ; 005b781c
    SHL ECX,0x8                         ; 005b7820
    MOV dword ptr [EDX + 0x18],ECX      ; 005b7823
    XOR ECX,ECX                         ; 005b7826
    MOV CX,word ptr [EAX + 0xe]         ; 005b7828
    MOV EDX,dword ptr [ESP + 0x4]       ; 005b782c
    SHL ECX,0x8                         ; 005b7830
    MOV dword ptr [EDX + 0x1c],ECX      ; 005b7833
    XOR ECX,ECX                         ; 005b7836
    MOV CX,word ptr [EAX + 0xa]         ; 005b7838
    MOV EDX,dword ptr [ESP + 0x8]       ; 005b783c
    SHL ECX,0x8                         ; 005b7840
    MOV dword ptr [EDX + 0x18],ECX      ; 005b7843
    MOV AX,word ptr [EAX + 0x10]        ; 005b7846
    MOV EDX,dword ptr [ESP + 0x8]       ; 005b784a
    AND EAX,0xffff                      ; 005b784e
    PUSH EBP                            ; 005b7853
    SHL EAX,0x8                         ; 005b7854
    PUSH 0x3                            ; 005b7857
    MOV dword ptr [EDX + 0x1c],EAX      ; 005b7859
    LEA EAX,[ESP + 0x8]                 ; 005b785c
    PUSH EAX                            ; 005b7860
    CALL dword ptr [0x03f6b8cc]         ; 005b7861 | g_APIDLL_drawPolygon2
    ADD ESP,0xc                         ; 005b7867
    INC ESI                             ; 005b786a
    MOV EAX,dword ptr [ESP + 0x28]      ; 005b786b
    ADD EBX,0x4                         ; 005b786f
    CMP ESI,EAX                         ; 005b7872
    JL 0x005b77c8                       ; 005b7874
        ;   XREF to: 005b77c8 (CONDITIONAL_JUMP)  ; LAB_005b77c8
    LEA EAX,[EAX]                       ; 005b787a
    MOV EDX,0x1                         ; 005b7880
        ;   Label: LAB_005b7880
    MOV EAX,EDX                         ; 005b7885
    ADD ESP,0xc                         ; 005b7887
    POP EBP                             ; 005b788a
    POP EDI                             ; 005b788b
    POP ESI                             ; 005b788c
    POP EBX                             ; 005b788d
    RET                                 ; 005b788e
    XOR EDX,EDX                         ; 005b788f
        ;   Label: LAB_005b788f
    MOV EAX,EDX                         ; 005b7891
    ADD ESP,0xc                         ; 005b7893
    POP EBP                             ; 005b7896
    POP EDI                             ; 005b7897
    POP ESI                             ; 005b7898
    POP EBX                             ; 005b7899
    RET                                 ; 005b789a
    MOV EBP,dword ptr [ESP + 0x2c]      ; 005b789b
        ;   Label: LAB_005b789b
    PUSH EBP                            ; 005b789f
    PUSH EBX                            ; 005b78a0
    PUSH EDX                            ; 005b78a1
    PUSH EDI                            ; 005b78a2
    MOV [0x030e56b8],EAX                ; 005b78a3 | g_RenderedTriangleCount
    CALL dword ptr [0x03f6b8d4]         ; 005b78a8 | g_APIDLL_drawPolyList2
    ADD ESP,0x10                        ; 005b78ae
    MOV EDX,EAX                         ; 005b78b1
    MOV EAX,EDX                         ; 005b78b3
    ADD ESP,0xc                         ; 005b78b5
    POP EBP                             ; 005b78b8
    POP EDI                             ; 005b78b9
    POP ESI                             ; 005b78ba
    POP EBX                             ; 005b78bb
    RET                                 ; 005b78bc

