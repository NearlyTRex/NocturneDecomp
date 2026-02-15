; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl engine_2d_c_plotPixel_FUN_00401140(int x,int y)
;
; Parameters:
; int              Stack[0x4]:4   x
; int              Stack[0x8]:4   y
;
; XREF[22]:
;   core_actor.cpp_CDemonActor_renderTargetPoints_FUN_00409b90 at 00409e04
;   core_actor.cpp_draw3DPointMarker_FUN_00409930 at 00409aa8
;   core_actor.cpp_plotPixelWithBoundsCheck_FUN_00409900 at 00409923
;   core_cloth.cpp_drawVertexMarker_FUN_0043c6e0 at 0043c7a0
;   core_cloth.cpp_plotPixelSafe_FUN_0043c6b0 at 0043c6d3
;   core_morph.cpp_FUN_0052bb50 at 0052bb73
;   core_morph.cpp_FUN_0052bb80 at 0052bc67
;   core_setdir.cpp_CZThumb_render_FUN_00574f20 at 0057508d
;   engine_2d.c_draw320x200SizeDot_FUN_00402a8e at 00402b31
;   engine_2d.c_drawLine_FUN_004011b0 at 00401206
;   ... and 12 more
;
; Referenced Globals:
;   int g_BitsPerPixel = 0x8
;   void*[1200] g_ScreenBufferArray
;   ushort[256] g_ColorTable16
;   uint[256] g_ColorTable32
;   int g_ActiveRenderColor
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00401140
        ;   Label: engine_2d.c_plotPixel_FUN_00401140
    MOV ECX,dword ptr [ESP + 0x8]       ; 00401141
    MOV EAX,dword ptr [ESP + 0xc]       ; 00401145
    MOV EDX,dword ptr [0x0067939c]      ; 00401149 | g_BitsPerPixel
    SHL EAX,0x2                         ; 0040114f
    CMP EDX,0x8                         ; 00401152
    JZ 0x00401185                       ; 00401155
        ;   XREF to: 00401185 (CONDITIONAL_JUMP)  ; LAB_00401185
    MOV EDX,dword ptr [0x02d02570]      ; 00401157 | g_ActiveRenderColor
    MOV EBX,dword ptr [0x0067939c]      ; 0040115d | g_BitsPerPixel
    AND EDX,0xff                        ; 00401163
    CMP EBX,0x10                        ; 00401169
    JNZ 0x00401195                      ; 0040116c
        ;   XREF to: 00401195 (CONDITIONAL_JUMP)  ; LAB_00401195
    MOV EAX,dword ptr [EAX + 0x2cf6a9c] ; 0040116e | g_ScreenBufferArray
    ADD ECX,ECX                         ; 00401174
    ADD ECX,EAX                         ; 00401176
    MOV AX,word ptr [EDX*0x2 + 0x2d01020] ; 00401178 | g_ColorTable16
    MOV word ptr [ECX],AX               ; 00401180
    POP EBX                             ; 00401183
    RET                                 ; 00401184
    MOV EDX,dword ptr [EAX + 0x2cf6a9c] ; 00401185 | g_ScreenBufferArray
        ;   Label: LAB_00401185
    MOV AL,[0x02d02570]                 ; 0040118b | g_ActiveRenderColor
    MOV byte ptr [ECX + EDX*0x1],AL     ; 00401190
    POP EBX                             ; 00401193
    RET                                 ; 00401194
    SHL ECX,0x2                         ; 00401195
        ;   Label: LAB_00401195
    MOV EAX,dword ptr [EAX + 0x2cf6a9c] ; 00401198 | g_ScreenBufferArray
    ADD ECX,EAX                         ; 0040119e
    MOV EAX,dword ptr [EDX*0x4 + 0x2d01220] ; 004011a0 | g_ColorTable32
    MOV dword ptr [ECX],EAX             ; 004011a7
    POP EBX                             ; 004011a9
    RET                                 ; 004011aa

