; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl shape_meshlod_cpp_CLodMesh_renderShadedTriangles_FUN_0051e990(CLodMesh *this_ptr,int use_palette_coloring)
;
; Parameters:
; CLodMesh *       Stack[0x4]:4   this_ptr
; int              Stack[0x8]:4   use_palette_coloring
; Local Variables:
; SMRGLPrimitiveQuad Stack[-0x60]:72  SStack_60
; int              Stack[-0x18]:4  local_18
; int              Stack[-0x14]:4  local_14
;
; XREF[2]:
;   shape_meshlod.cpp_CLodMesh_chooseLodsInteractive_FUN_0051d990 at 0051dfb4
;   shape_meshlod.cpp_CLodMesh_previewLodGeneration_FUN_0051d520 at 0051d5ef
;
; Referenced Globals:
;   float FLOAT_00638525 = 127
;   CDemonRenderer* g_CDemonRendererPtr2 = 02c6d578
;   CDemonRenderer g_CDemonRendererInstance
;
; Called Functions:
;   crt_math.c_round_FUN_005fe6b0
;   engine_drender.cpp_CDemonRenderer_renderSolidColorPoly_FUN_0048a8a0
;   engine_drender.cpp_CDemonRenderer_setCurrentPolygonColor_FUN_0048c960
;   engine_drender.cpp_CDemonRenderer_setRenderingState_FUN_0048ca00
;   engine_drender.cpp_CDemonRenderer_setRGBAColor_FUN_0048c970
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0051e990
        ;   Label: shape_meshlod.cpp_CLodMesh_renderShadedTriangles_FUN_0051e990
    PUSH ESI                            ; 0051e991
    PUSH EDI                            ; 0051e992
    PUSH EBP                            ; 0051e993
    SUB ESP,0x50                        ; 0051e994
    MOV EDI,dword ptr [ESP + 0x64]      ; 0051e997
    MOV EBP,dword ptr [ESP + 0x68]      ; 0051e99b
    MOV EDX,0x3                         ; 0051e99f
    PUSH 0xff                           ; 0051e9a4
    XOR ECX,ECX                         ; 0051e9a9
    MOV dword ptr [ESP + 0x8],EDX       ; 0051e9ab
    MOV dword ptr [ESP + 0x18],ECX      ; 0051e9af
    MOV EDX,dword ptr [0x006703ec]      ; 0051e9b3 | g_CDemonRendererInstance | g_CDemonRendererPtr2
    MOV dword ptr [ESP + 0x14],ECX      ; 0051e9b9
    PUSH EDX                            ; 0051e9bd | g_CDemonRendererInstance
    MOV dword ptr [ESP + 0x14],ECX      ; 0051e9be
    MOV dword ptr [ESP + 0x10],ECX      ; 0051e9c2
    CALL engine_drender.cpp_CDemonRenderer_setCurrentPolygonColor_FUN_0048c960 ; 0051e9c6
        ;   XREF to: 0048c960 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_setCurrentPolygonColor_FUN_0048c960(CDemonRenderer * this_ptr, int color)
    ADD ESP,0x8                         ; 0051e9cb
    PUSH 0x1                            ; 0051e9ce
    MOV ECX,dword ptr [0x006703ec]      ; 0051e9d0 | g_CDemonRendererInstance | g_CDemonRendererPtr2
    PUSH ECX                            ; 0051e9d6 | g_CDemonRendererInstance
    XOR EBX,EBX                         ; 0051e9d7
    CALL engine_drender.cpp_CDemonRenderer_setRenderingState_FUN_0048ca00 ; 0051e9d9
        ;   XREF to: 0048ca00 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_setRenderingState_FUN_0048ca00(CDemonRenderer * this_ptr, int state_flag)
    MOV ESI,dword ptr [EDI + 0x8]       ; 0051e9de
    ADD ESP,0x8                         ; 0051e9e1
    TEST ESI,ESI                        ; 0051e9e4
    JLE 0x0051ea03                      ; 0051e9e6
        ;   XREF to: 0051ea03 (CONDITIONAL_JUMP)  ; LAB_0051ea03
    XOR ESI,ESI                         ; 0051e9e8
    MOV EDX,dword ptr [EDI + 0xc]       ; 0051e9ea
        ;   Label: LAB_0051e9ea
    ADD EDX,ESI                         ; 0051e9ed
    CMP dword ptr [EDX + 0x40],0x0      ; 0051e9ef
    JZ 0x0051ea1c                       ; 0051e9f3
        ;   XREF to: 0051ea1c (CONDITIONAL_JUMP)  ; LAB_0051ea1c
    INC EBX                             ; 0051e9f5
        ;   Label: LAB_0051e9f5
    MOV EAX,dword ptr [EDI + 0x8]       ; 0051e9f6
    ADD ESI,0x8c                        ; 0051e9f9
    CMP EBX,EAX                         ; 0051e9ff
    JL 0x0051e9ea                       ; 0051ea01
        ;   XREF to: 0051e9ea (CONDITIONAL_JUMP)  ; LAB_0051e9ea
    PUSH 0x0                            ; 0051ea03
        ;   Label: LAB_0051ea03
    MOV EDX,dword ptr [0x006703ec]      ; 0051ea05 | g_CDemonRendererInstance | g_CDemonRendererPtr2
    PUSH EDX                            ; 0051ea0b | g_CDemonRendererInstance
    CALL engine_drender.cpp_CDemonRenderer_setRenderingState_FUN_0048ca00 ; 0051ea0c
        ;   XREF to: 0048ca00 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_setRenderingState_FUN_0048ca00(CDemonRenderer * this_ptr, int state_flag)
    ADD ESP,0x8                         ; 0051ea11
    ADD ESP,0x50                        ; 0051ea14
    POP EBP                             ; 0051ea17
    POP EDI                             ; 0051ea18
    POP ESI                             ; 0051ea19
    POP EBX                             ; 0051ea1a
    RET                                 ; 0051ea1b
    MOV EAX,dword ptr [EDX + 0x10]      ; 0051ea1c
        ;   Label: LAB_0051ea1c
    MOV dword ptr [ESP + 0x18],EAX      ; 0051ea1f
    MOV EAX,dword ptr [EDX + 0x14]      ; 0051ea23
    MOV dword ptr [ESP + 0x24],EAX      ; 0051ea26
    MOV EAX,dword ptr [EDX + 0x18]      ; 0051ea2a
    MOV dword ptr [ESP + 0x30],EAX      ; 0051ea2d
    TEST EBP,EBP                        ; 0051ea31
    JZ 0x0051ea64                       ; 0051ea33
        ;   XREF to: 0051ea64 (CONDITIONAL_JUMP)  ; LAB_0051ea64
    MOV EAX,EBX                         ; 0051ea35
    AND EAX,0x7f                        ; 0051ea37
    ADD EAX,0x80                        ; 0051ea3a
    NEG EAX                             ; 0051ea3f
    PUSH EAX                            ; 0051ea41
    MOV ECX,dword ptr [0x006703ec]      ; 0051ea42 | g_CDemonRendererInstance | g_CDemonRendererPtr2
    PUSH ECX                            ; 0051ea48 | g_CDemonRendererInstance
    CALL engine_drender.cpp_CDemonRenderer_setCurrentPolygonColor_FUN_0048c960 ; 0051ea49
        ;   XREF to: 0048c960 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_setCurrentPolygonColor_FUN_0048c960(CDemonRenderer * this_ptr, int color)
    ADD ESP,0x8                         ; 0051ea4e
    MOV EAX,ESP                         ; 0051ea51
        ;   Label: LAB_0051ea51
    PUSH EAX                            ; 0051ea53
    MOV EAX,[0x006703ec]                ; 0051ea54 | g_CDemonRendererInstance | g_CDemonRendererPtr2
    PUSH EAX                            ; 0051ea59 | g_CDemonRendererInstance
    CALL engine_drender.cpp_CDemonRenderer_renderSolidColorPoly_FUN_0048a8a0 ; 0051ea5a
        ;   XREF to: 0048a8a0 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_renderSolidColorPoly_FUN_0048a8a0(CDemonRenderer * this_ptr, SMRGLPrimitivePoly * poly)
    ADD ESP,0x8                         ; 0051ea5f
    JMP 0x0051e9f5                      ; 0051ea62
        ;   XREF to: 0051e9f5 (UNCONDITIONAL_JUMP)  ; LAB_0051e9f5
    FLD float ptr [0x00638525]          ; 0051ea64 | FLOAT_00638525
        ;   Label: LAB_0051ea64
    FLD float ptr [EDX + 0x4c]          ; 0051ea6a
    FMUL ST1                            ; 0051ea6d
    FLD float ptr [EDX + 0x48]          ; 0051ea6f
    FMUL ST2                            ; 0051ea72
    FLD float ptr [EDX + 0x44]          ; 0051ea74
    FMUL ST3                            ; 0051ea77
    FXCH ST2                            ; 0051ea79
    FADD ST0,ST3                        ; 0051ea7b
    FXCH                                ; 0051ea7d
    FADD ST0,ST3                        ; 0051ea7f
    FXCH ST2                            ; 0051ea81
    FADDP ST3,ST0                       ; 0051ea83
    CALL crt_math.c_round_FUN_005fe6b0  ; 0051ea85
        ;   XREF to: 005fe6b0 (UNCONDITIONAL_CALL)  ; double crt_math.c_round_FUN_005fe6b0(double value)
    FXCH                                ; 0051ea8a
    CALL crt_math.c_round_FUN_005fe6b0  ; 0051ea8c
        ;   XREF to: 005fe6b0 (UNCONDITIONAL_CALL)  ; double crt_math.c_round_FUN_005fe6b0(double value)
    FXCH                                ; 0051ea91
    FISTP dword ptr [ESP + 0x48]        ; 0051ea93
    FISTP dword ptr [ESP + 0x4c]        ; 0051ea97
    MOV EAX,dword ptr [ESP + 0x48]      ; 0051ea9b
    MOV ECX,dword ptr [ESP + 0x4c]      ; 0051ea9f
    PUSH EAX                            ; 0051eaa3
    CALL crt_math.c_round_FUN_005fe6b0  ; 0051eaa4
        ;   XREF to: 005fe6b0 (UNCONDITIONAL_CALL)  ; double crt_math.c_round_FUN_005fe6b0(double value)
    PUSH ECX                            ; 0051eaa9
    FISTP dword ptr [ESP + 0x54]        ; 0051eaaa
    MOV EAX,dword ptr [ESP + 0x54]      ; 0051eaae
    PUSH EAX                            ; 0051eab2
    MOV EDX,dword ptr [0x006703ec]      ; 0051eab3 | g_CDemonRendererInstance | g_CDemonRendererPtr2
    PUSH EDX                            ; 0051eab9 | g_CDemonRendererInstance
    CALL engine_drender.cpp_CDemonRenderer_setRGBAColor_FUN_0048c970 ; 0051eaba
        ;   XREF to: 0048c970 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_setRGBAColor_FUN_0048c970(CDemonRenderer * this_ptr, int red_component, int green_component, int blue_component)
    ADD ESP,0x10                        ; 0051eabf
    JMP 0x0051ea51                      ; 0051eac2
        ;   XREF to: 0051ea51 (UNCONDITIONAL_JUMP)  ; LAB_0051ea51

