; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl engine_special_cpp_drawPolyList3_FUN_005b78c0(SRenderVertex *vertex_buffer,ushort *polygons,int polygon_count,int render_flags)
;
; Parameters:
; SRenderVertex *  Stack[0x4]:4   vertex_buffer
; ushort *         Stack[0x8]:4   polygons
; int              Stack[0xc]:4   polygon_count
; int              Stack[0x10]:4   render_flags
; Local Variables:
; SRenderVertex *  Stack[-0x1c]:4  local_1c
; SRenderVertex *  Stack[-0x18]:4  local_18
; SRenderVertex *  Stack[-0x14]:4  local_14
;
; Referenced Globals:
;   int g_UseExternalRenderer
;   int g_RenderedTriangleCount
;   APIDLL_drawPolygon2* g_APIDLL_drawPolygon2
;   APIDLL_drawPolyList3* g_APIDLL_drawPolyList3
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005b78c0
        ;   Label: engine_special.cpp_drawPolyList3_FUN_005b78c0
    PUSH ESI                            ; 005b78c1
    PUSH EDI                            ; 005b78c2
    PUSH EBP                            ; 005b78c3
    SUB ESP,0xc                         ; 005b78c4
    MOV EDI,dword ptr [ESP + 0x20]      ; 005b78c7
    MOV EBX,dword ptr [ESP + 0x24]      ; 005b78cb
    MOV EBP,dword ptr [ESP + 0x28]      ; 005b78cf
    CMP dword ptr [0x02d03e94],0x0      ; 005b78d3 | g_UseExternalRenderer
    JZ 0x005b795d                       ; 005b78da
        ;   XREF to: 005b795d (CONDITIONAL_JUMP)  ; LAB_005b795d
    MOV EAX,[0x030e56b8]                ; 005b78e0 | g_RenderedTriangleCount
    MOV ECX,dword ptr [0x03f6b8d8]      ; 005b78e5 | g_APIDLL_drawPolyList3
    ADD EAX,EBP                         ; 005b78eb
    TEST ECX,ECX                        ; 005b78ed
    JNZ 0x005b7967                      ; 005b78ef
        ;   XREF to: 005b7967 (CONDITIONAL_JUMP)  ; LAB_005b7967
    MOV [0x030e56b8],EAX                ; 005b78f5 | g_RenderedTriangleCount
    XOR ESI,ESI                         ; 005b78fa
    TEST EBP,EBP                        ; 005b78fc
    JLE 0x005b7950                      ; 005b78fe
        ;   XREF to: 005b7950 (CONDITIONAL_JUMP)  ; LAB_005b7950
    XOR EAX,EAX                         ; 005b7900
        ;   Label: LAB_005b7900
    MOV AX,word ptr [EBX]               ; 005b7902
    IMUL EAX,EAX,0x30                   ; 005b7905
    LEA EDX,[EDI + EAX*0x1]             ; 005b7908
    MOV dword ptr [ESP],EDX             ; 005b790b
    XOR EAX,EAX                         ; 005b790e
    MOV AX,word ptr [EBX + 0x2]         ; 005b7910
    IMUL EAX,EAX,0x30                   ; 005b7914
    LEA EDX,[EDI + EAX*0x1]             ; 005b7917
    MOV dword ptr [ESP + 0x4],EDX       ; 005b791a
    XOR EAX,EAX                         ; 005b791e
    MOV AX,word ptr [EBX + 0x4]         ; 005b7920
    IMUL EAX,EAX,0x30                   ; 005b7924
    LEA EDX,[EDI + EAX*0x1]             ; 005b7927
    MOV EAX,dword ptr [ESP + 0x2c]      ; 005b792a
    PUSH EAX                            ; 005b792e
    PUSH 0x3                            ; 005b792f
    LEA EAX,[ESP + 0x8]                 ; 005b7931
    ADD EBX,0x6                         ; 005b7935
    PUSH EAX                            ; 005b7938
    INC ESI                             ; 005b7939
    MOV dword ptr [ESP + 0x14],EDX      ; 005b793a
    CALL dword ptr [0x03f6b8cc]         ; 005b793e | g_APIDLL_drawPolygon2
    ADD ESP,0xc                         ; 005b7944
    CMP ESI,EBP                         ; 005b7947
    JL 0x005b7900                       ; 005b7949
        ;   XREF to: 005b7900 (CONDITIONAL_JUMP)  ; LAB_005b7900
    LEA EAX,[EAX]                       ; 005b794b
    MOV ECX,ECX                         ; 005b794e
    MOV EAX,0x1                         ; 005b7950
        ;   Label: LAB_005b7950
    ADD ESP,0xc                         ; 005b7955
    POP EBP                             ; 005b7958
    POP EDI                             ; 005b7959
    POP ESI                             ; 005b795a
    POP EBX                             ; 005b795b
    RET                                 ; 005b795c
    XOR EAX,EAX                         ; 005b795d
        ;   Label: LAB_005b795d
    ADD ESP,0xc                         ; 005b795f
    POP EBP                             ; 005b7962
    POP EDI                             ; 005b7963
    POP ESI                             ; 005b7964
    POP EBX                             ; 005b7965
    RET                                 ; 005b7966
    MOV ESI,dword ptr [ESP + 0x2c]      ; 005b7967
        ;   Label: LAB_005b7967
    PUSH ESI                            ; 005b796b
    PUSH EBP                            ; 005b796c
    PUSH EBX                            ; 005b796d
    PUSH EDI                            ; 005b796e
    MOV [0x030e56b8],EAX                ; 005b796f | g_RenderedTriangleCount
    CALL dword ptr [0x03f6b8d8]         ; 005b7974 | g_APIDLL_drawPolyList3
    ADD ESP,0x10                        ; 005b797a
    ADD ESP,0xc                         ; 005b797d
    POP EBP                             ; 005b7980
    POP EDI                             ; 005b7981
    POP ESI                             ; 005b7982
    POP EBX                             ; 005b7983
    RET                                 ; 005b7984

