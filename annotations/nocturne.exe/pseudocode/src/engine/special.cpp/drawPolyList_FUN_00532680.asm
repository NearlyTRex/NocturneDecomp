; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl engine_special_cpp_drawPolyList_FUN_00532680(SRenderVertex *vertex_buffer,SMRGLPrimitiveQuad **polygons,int polygon_count,int render_flags)
;
; Parameters:
; SRenderVertex *  Stack[0x4]:4   vertex_buffer
; SMRGLPrimitiveQuad * * Stack[0x8]:4   polygons
; int              Stack[0xc]:4   polygon_count
; int              Stack[0x10]:4   render_flags
; Local Variables:
; undefined4       Stack[-0x20]:4  local_20
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[3]:
;   engine_3d.c_FUN_00408fc0 at 00409048
;   engine_3d.c_flushRenderQueue_FUN_00408f50 at 00408fa8
;   engine_drender.cpp_CDemonRenderer_renderFacetList_FUN_004614b0 at 00461702
;
; Referenced Globals:
;   int g_UseExternalRenderer
;   int g_RenderedTriangleCount
;   APIDLL_drawPolygon2* g_APIDLL_drawPolygon2
;   APIDLL_drawPolyList* g_APIDLL_drawPolyList
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00532680
        ;   Label: engine_special.cpp_drawPolyList_FUN_00532680
    PUSH ESI                            ; 00532681
    PUSH EDI                            ; 00532682
    PUSH EBP                            ; 00532683
    SUB ESP,0x10                        ; 00532684
    MOV EBX,dword ptr [ESP + 0x24]      ; 00532687
    MOV EDX,dword ptr [ESP + 0x28]      ; 0053268b
    MOV EBP,dword ptr [ESP + 0x2c]      ; 0053268f
    CMP dword ptr [0x01c02594],0x0      ; 00532693 | g_UseExternalRenderer
    JZ 0x00532778                       ; 0053269a
        ;   XREF to: 00532778 (CONDITIONAL_JUMP)  ; LAB_00532778
    MOV EAX,[0x01e52ef8]                ; 005326a0 | g_RenderedTriangleCount
    MOV ESI,dword ptr [0x02dc9db0]      ; 005326a5 | g_APIDLL_drawPolyList
    ADD EAX,EBP                         ; 005326ab
    TEST ESI,ESI                        ; 005326ad
    JNZ 0x00532794                      ; 005326af
        ;   XREF to: 00532794 (CONDITIONAL_JUMP)  ; LAB_00532794
    MOV [0x01e52ef8],EAX                ; 005326b5 | g_RenderedTriangleCount
    XOR EDI,EDI                         ; 005326ba
    TEST EBP,EBP                        ; 005326bc
    JLE 0x00532769                      ; 005326be
        ;   XREF to: 00532769 (CONDITIONAL_JUMP)  ; LAB_00532769
    MOV ESI,EDX                         ; 005326c4
    MOV EAX,dword ptr [ESI]             ; 005326c6
        ;   Label: LAB_005326c6
    IMUL EDX,dword ptr [EAX + 0x18],0x30 ; 005326c8
    LEA ECX,[EBX + EDX*0x1]             ; 005326cc
    MOV dword ptr [ESP],ECX             ; 005326cf
    IMUL EDX,dword ptr [EAX + 0x24],0x30 ; 005326d2
    LEA ECX,[EBX + EDX*0x1]             ; 005326d6
    MOV dword ptr [ESP + 0x4],ECX       ; 005326d9
    IMUL EDX,dword ptr [EAX + 0x30],0x30 ; 005326dd
    LEA ECX,[EBX + EDX*0x1]             ; 005326e1
    MOV dword ptr [ESP + 0x8],ECX       ; 005326e4
    CMP dword ptr [EAX + 0x4],0x4       ; 005326e8
    JZ 0x00532784                       ; 005326ec
        ;   XREF to: 00532784 (CONDITIONAL_JUMP)  ; LAB_00532784
    MOV EDX,dword ptr [ESP]             ; 005326f2
        ;   Label: LAB_005326f2
    MOV ECX,dword ptr [EAX + 0x1c]      ; 005326f5
    MOV dword ptr [EDX + 0x18],ECX      ; 005326f8
    MOV EDX,dword ptr [ESP]             ; 005326fb
    MOV ECX,dword ptr [EAX + 0x20]      ; 005326fe
    MOV dword ptr [EDX + 0x1c],ECX      ; 00532701
    MOV ECX,dword ptr [ESP + 0x4]       ; 00532704
    MOV EDX,dword ptr [EAX + 0x28]      ; 00532708
    MOV dword ptr [ECX + 0x18],EDX      ; 0053270b
    MOV ECX,dword ptr [ESP + 0x4]       ; 0053270e
    MOV EDX,dword ptr [EAX + 0x2c]      ; 00532712
    MOV dword ptr [ECX + 0x1c],EDX      ; 00532715
    MOV EDX,dword ptr [ESP + 0x8]       ; 00532718
    MOV ECX,dword ptr [EAX + 0x34]      ; 0053271c
    MOV dword ptr [EDX + 0x18],ECX      ; 0053271f
    MOV EDX,dword ptr [ESP + 0x8]       ; 00532722
    MOV ECX,dword ptr [EAX + 0x38]      ; 00532726
    MOV dword ptr [EDX + 0x1c],ECX      ; 00532729
    CMP dword ptr [EAX + 0x4],0x4       ; 0053272c
    JNZ 0x00532746                      ; 00532730
        ;   XREF to: 00532746 (CONDITIONAL_JUMP)  ; LAB_00532746
    MOV EDX,dword ptr [ESP + 0xc]       ; 00532732
    MOV ECX,dword ptr [EAX + 0x40]      ; 00532736
    MOV dword ptr [EDX + 0x18],ECX      ; 00532739
    MOV EDX,dword ptr [ESP + 0xc]       ; 0053273c
    MOV ECX,dword ptr [EAX + 0x44]      ; 00532740
    MOV dword ptr [EDX + 0x1c],ECX      ; 00532743
    MOV EDX,dword ptr [ESP + 0x30]      ; 00532746
        ;   Label: LAB_00532746
    PUSH EDX                            ; 0053274a
    MOV ECX,dword ptr [EAX + 0x4]       ; 0053274b
    PUSH ECX                            ; 0053274e
    LEA EAX,[ESP + 0x8]                 ; 0053274f
    PUSH EAX                            ; 00532753
    ADD ESI,0x4                         ; 00532754
    INC EDI                             ; 00532757
    CALL dword ptr [0x02dc9dac]         ; 00532758 | g_APIDLL_drawPolygon2
    ADD ESP,0xc                         ; 0053275e
    CMP EDI,EBP                         ; 00532761
    JL 0x005326c6                       ; 00532763
        ;   XREF to: 005326c6 (CONDITIONAL_JUMP)  ; LAB_005326c6
    MOV EDX,0x1                         ; 00532769
        ;   Label: LAB_00532769
    MOV EAX,EDX                         ; 0053276e
    ADD ESP,0x10                        ; 00532770
    POP EBP                             ; 00532773
    POP EDI                             ; 00532774
    POP ESI                             ; 00532775
    POP EBX                             ; 00532776
    RET                                 ; 00532777
    XOR EDX,EDX                         ; 00532778
        ;   Label: LAB_00532778
    MOV EAX,EDX                         ; 0053277a
    ADD ESP,0x10                        ; 0053277c
    POP EBP                             ; 0053277f
    POP EDI                             ; 00532780
    POP ESI                             ; 00532781
    POP EBX                             ; 00532782
    RET                                 ; 00532783
    IMUL EDX,dword ptr [EAX + 0x3c],0x30 ; 00532784
        ;   Label: LAB_00532784
    LEA ECX,[EBX + EDX*0x1]             ; 00532788
    MOV dword ptr [ESP + 0xc],ECX       ; 0053278b
    JMP 0x005326f2                      ; 0053278f
        ;   XREF to: 005326f2 (UNCONDITIONAL_JUMP)  ; LAB_005326f2
    MOV EDI,dword ptr [ESP + 0x30]      ; 00532794
        ;   Label: LAB_00532794
    PUSH EDI                            ; 00532798
    PUSH EBP                            ; 00532799
    PUSH EDX                            ; 0053279a
    PUSH EBX                            ; 0053279b
    MOV [0x01e52ef8],EAX                ; 0053279c | g_RenderedTriangleCount
    CALL dword ptr [0x02dc9db0]         ; 005327a1 | g_APIDLL_drawPolyList
    ADD ESP,0x10                        ; 005327a7
    MOV EDX,EAX                         ; 005327aa
    MOV EAX,EDX                         ; 005327ac
    ADD ESP,0x10                        ; 005327ae
    POP EBP                             ; 005327b1
    POP EDI                             ; 005327b2
    POP ESI                             ; 005327b3
    POP EBX                             ; 005327b4
    RET                                 ; 005327b5

