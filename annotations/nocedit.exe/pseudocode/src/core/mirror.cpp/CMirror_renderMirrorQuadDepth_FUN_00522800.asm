; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_mirror_cpp_CMirror_renderMirrorQuadDepth_FUN_00522800(CMirror *this_ptr)
;
; Parameters:
; CMirror *        Stack[0x4]:4   this_ptr
; Local Variables:
; SMRGLPrimitiveQuad Stack[-0x88]:72  SStack_88
; CVector3i        Stack[-0x40]:12  local_40
; CVector3i        Stack[-0x34]:12  local_34
; CVector3i        Stack[-0x28]:12  local_28
; CVector3i        Stack[-0x1c]:12  local_1c
;
; XREF[1]:
;   core_set.cpp_CDemonSet_renderSceneGeometry_FUN_0056a190 at 0056a408
;
; Referenced Globals:
;   float g_MirrorProjectionScale = 256
;   CDemonRenderer* g_CDemonRendererPtr2 = 02c6d578
;   CDemonRenderer g_CDemonRendererInstance
;
; Called Functions:
;   engine_drender.cpp_CDemonRenderer_renderAlternativeDepth_FUN_0048a950
;   wincore_windll.cpp_transformPoint_FUN_005b5a25
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00522800
        ;   Label: core_mirror.cpp_CMirror_renderMirrorQuadDepth_FUN_00522800
    PUSH ESI                            ; 00522801
    PUSH EDI                            ; 00522802
    PUSH EBP                            ; 00522803
    SUB ESP,0x78                        ; 00522804
    MOV ESI,dword ptr [0x006703ec]      ; 00522807 | g_CDemonRendererPtr2
    MOV EDI,dword ptr [ESP + 0x8c]      ; 0052280d
    LEA EBX,[ESP + 0x54]                ; 00522814
    MOV EAX,EDI                         ; 00522818
    MOV EDX,dword ptr [ESI]             ; 0052281a | g_CDemonRendererInstance
    FLD float ptr [EAX]                 ; 0052281c
    FMUL float ptr [0x006616e0]         ; 0052281e | g_MirrorProjectionScale
    FISTP dword ptr [EBX]               ; 00522824
    FLD float ptr [EAX + 0x4]           ; 00522826
    FMUL float ptr [0x006616e0]         ; 00522829 | g_MirrorProjectionScale
    FISTP dword ptr [EBX + 0x4]         ; 0052282f
    FLD float ptr [EAX + 0x8]           ; 00522832
    FMUL float ptr [0x006616e0]         ; 00522835 | g_MirrorProjectionScale
    FISTP dword ptr [EBX + 0x8]         ; 0052283b
    LEA EAX,[ESP + 0x54]                ; 0052283e
    PUSH EAX                            ; 00522842
    PUSH EDX                            ; 00522843
    CALL wincore_windll.cpp_transformPoint_FUN_005b5a25 ; 00522844
        ;   XREF to: 005b5a25 (UNCONDITIONAL_CALL)  ; int wincore_windll.cpp_transformPoint_FUN_005b5a25(SProjectedVertex * output, CVector3i * input)
    MOV ESI,dword ptr [0x006703ec]      ; 00522849 | g_CDemonRendererPtr2
    MOV EAX,dword ptr [ESI]             ; 0052284f | g_CDemonRendererInstance
    ADD ESP,0x8                         ; 00522851
    LEA EDX,[EAX + 0x30]                ; 00522854
    LEA EBX,[ESP + 0x48]                ; 00522857
    LEA EAX,[EDI + 0xc]                 ; 0052285b
    FLD float ptr [EAX]                 ; 0052285e
    FMUL float ptr [0x006616e0]         ; 00522860 | g_MirrorProjectionScale
    FISTP dword ptr [EBX]               ; 00522866
    FLD float ptr [EAX + 0x4]           ; 00522868
    FMUL float ptr [0x006616e0]         ; 0052286b | g_MirrorProjectionScale
    FISTP dword ptr [EBX + 0x4]         ; 00522871
    FLD float ptr [EAX + 0x8]           ; 00522874
    FMUL float ptr [0x006616e0]         ; 00522877 | g_MirrorProjectionScale
    FISTP dword ptr [EBX + 0x8]         ; 0052287d
    LEA EAX,[ESP + 0x48]                ; 00522880
    PUSH EAX                            ; 00522884
    PUSH EDX                            ; 00522885
    CALL wincore_windll.cpp_transformPoint_FUN_005b5a25 ; 00522886
        ;   XREF to: 005b5a25 (UNCONDITIONAL_CALL)  ; int wincore_windll.cpp_transformPoint_FUN_005b5a25(SProjectedVertex * output, CVector3i * input)
    MOV ESI,dword ptr [0x006703ec]      ; 0052288b | g_CDemonRendererPtr2
    MOV EAX,dword ptr [ESI]             ; 00522891 | g_CDemonRendererInstance
    ADD ESP,0x8                         ; 00522893
    LEA EDX,[EAX + 0x60]                ; 00522896
    LEA EBX,[ESP + 0x6c]                ; 00522899
    LEA EAX,[EDI + 0x18]                ; 0052289d
    FLD float ptr [EAX]                 ; 005228a0
    FMUL float ptr [0x006616e0]         ; 005228a2 | g_MirrorProjectionScale
    FISTP dword ptr [EBX]               ; 005228a8
    FLD float ptr [EAX + 0x4]           ; 005228aa
    FMUL float ptr [0x006616e0]         ; 005228ad | g_MirrorProjectionScale
    FISTP dword ptr [EBX + 0x4]         ; 005228b3
    FLD float ptr [EAX + 0x8]           ; 005228b6
    FMUL float ptr [0x006616e0]         ; 005228b9 | g_MirrorProjectionScale
    FISTP dword ptr [EBX + 0x8]         ; 005228bf
    LEA EAX,[ESP + 0x6c]                ; 005228c2
    PUSH EAX                            ; 005228c6
    PUSH EDX                            ; 005228c7
    CALL wincore_windll.cpp_transformPoint_FUN_005b5a25 ; 005228c8
        ;   XREF to: 005b5a25 (UNCONDITIONAL_CALL)  ; int wincore_windll.cpp_transformPoint_FUN_005b5a25(SProjectedVertex * output, CVector3i * input)
    MOV ESI,dword ptr [0x006703ec]      ; 005228cd | g_CDemonRendererPtr2
    MOV EAX,dword ptr [ESI]             ; 005228d3 | g_CDemonRendererInstance
    ADD ESP,0x8                         ; 005228d5
    LEA EDX,[EAX + 0x90]                ; 005228d8
    LEA EBX,[ESP + 0x60]                ; 005228de
    LEA EAX,[EDI + 0x24]                ; 005228e2
    FLD float ptr [EAX]                 ; 005228e5
    FMUL float ptr [0x006616e0]         ; 005228e7 | g_MirrorProjectionScale
    FISTP dword ptr [EBX]               ; 005228ed
    FLD float ptr [EAX + 0x4]           ; 005228ef
    FMUL float ptr [0x006616e0]         ; 005228f2 | g_MirrorProjectionScale
    FISTP dword ptr [EBX + 0x4]         ; 005228f8
    FLD float ptr [EAX + 0x8]           ; 005228fb
    FMUL float ptr [0x006616e0]         ; 005228fe | g_MirrorProjectionScale
    FISTP dword ptr [EBX + 0x8]         ; 00522904
    LEA EAX,[ESP + 0x60]                ; 00522907
    PUSH EAX                            ; 0052290b
    PUSH EDX                            ; 0052290c
    CALL wincore_windll.cpp_transformPoint_FUN_005b5a25 ; 0052290d
        ;   XREF to: 005b5a25 (UNCONDITIONAL_CALL)  ; int wincore_windll.cpp_transformPoint_FUN_005b5a25(SProjectedVertex * output, CVector3i * input)
    MOV ESI,dword ptr [0x006703ec]      ; 00522912 | g_CDemonRendererPtr2
    ADD ESP,0x8                         ; 00522918
    XOR EAX,EAX                         ; 0052291b
    MOV EDX,ESI                         ; 0052291d | g_CDemonRendererInstance
    MOV ECX,dword ptr [ESI]             ; 0052291f | g_CDemonRendererInstance
        ;   Label: LAB_0052291f
    SHL dword ptr [ECX + EAX*0x1],0x4   ; 00522921
    MOV ECX,dword ptr [ESI]             ; 00522925 | g_CDemonRendererInstance
    SHL dword ptr [ECX + EAX*0x1 + 0x4],0x4 ; 00522927
    MOV ECX,dword ptr [ESI]             ; 0052292c | g_CDemonRendererInstance
    SHL dword ptr [ECX + EAX*0x1 + 0x8],0x4 ; 0052292e
    MOV ECX,dword ptr [ESI]             ; 00522933 | g_CDemonRendererInstance
    MOV EBX,dword ptr [ECX + EAX*0x1 + 0xc] ; 00522935
    ADD EAX,0x30                        ; 00522939
    SHR EBX,0x4                         ; 0052293c
    MOV dword ptr [ECX + EAX*0x1 + -0x24],EBX ; 0052293f
    CMP EAX,0xc0                        ; 00522943
    JNZ 0x0052291f                      ; 00522948
        ;   XREF to: 0052291f (CONDITIONAL_JUMP)  ; LAB_0052291f
    MOV EDI,0x4                         ; 0052294a
    MOV EAX,0x2                         ; 0052294f
    MOV ECX,0x3                         ; 00522954
    MOV dword ptr [0x006703ec],ESI      ; 00522959 | g_CDemonRendererPtr2
    XOR EBP,EBP                         ; 0052295f
    MOV dword ptr [ESP + 0x4],EDI       ; 00522961
    MOV dword ptr [ESP + 0x14],EBP      ; 00522965
    MOV dword ptr [ESP + 0x10],EBP      ; 00522969
    MOV dword ptr [ESP + 0xc],EBP       ; 0052296d
    MOV dword ptr [ESP + 0x30],EAX      ; 00522971
    MOV EAX,ESP                         ; 00522975
    MOV dword ptr [ESP + 0x8],EBP       ; 00522977
    PUSH EAX                            ; 0052297b
    MOV dword ptr [ESP + 0x1c],EBP      ; 0052297c
    MOV EBP,0x1                         ; 00522980
    PUSH ESI                            ; 00522985 | g_CDemonRendererInstance
    MOV dword ptr [ESP + 0x44],ECX      ; 00522986
    MOV dword ptr [ESP + 0x2c],EBP      ; 0052298a
    CALL engine_drender.cpp_CDemonRenderer_renderAlternativeDepth_FUN_0048a950 ; 0052298e
        ;   XREF to: 0048a950 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_renderAlternativeDepth_FUN_0048a950(CDemonRenderer * this_ptr, SMRGLHeaderPrimitive * prim)
    MOV ESI,dword ptr [0x006703ec]      ; 00522993 | g_CDemonRendererPtr2
    ADD ESP,0x8                         ; 00522999
    ADD ESP,0x78                        ; 0052299c
    POP EBP                             ; 0052299f
    POP EDI                             ; 005229a0
    POP ESI                             ; 005229a1
    POP EBX                             ; 005229a2
    RET                                 ; 005229a3

