; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl int __cdecl engine_drender_cpp_CDemonRenderer_depthTest_FUN_0048dc50(CDemonRenderer *this_ptr,SRenderVertex *vertex_ptr)
;
; Parameters:
; CDemonRenderer * Stack[0x4]:4   this_ptr
; SRenderVertex *  Stack[0x8]:4   vertex_ptr
;
; XREF[6]:
;   core_fire.cpp_CPopcorn_render_FUN_004c64c0 at 004c6516
;   core_fire.cpp_CRainDrop_render_FUN_004c6830 at 004c6886
;   core_fire.cpp_CShell_render_FUN_004c6200 at 004c6261
;   core_fire.cpp_CSmokeParticle_render_FUN_004bf4c0 at 004bf512
;   core_fire.cpp_CSpark_render_FUN_004c0420 at 004c0484
;   core_weather.cpp_CWeather_FUN_005ef190 at 005ef33c
;
; Referenced Globals:
;   void*[1200] g_ScreenBufferArray
;   uint*[1200] g_ZBufferScanlineArray
;
; Called Functions:
;   engine_prim.c_replaceWWithDepth_FUN_00552110
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0048dc50
        ;   Label: engine_drender.cpp_CDemonRenderer_depthTest_FUN_0048dc50
    PUSH ESI                            ; 0048dc51
    MOV EBX,dword ptr [ESP + 0x10]      ; 0048dc52
    TEST byte ptr [EBX + 0x13],0x80     ; 0048dc56
    JNZ 0x0048dc91                      ; 0048dc5a
        ;   XREF to: 0048dc91 (CONDITIONAL_JUMP)  ; LAB_0048dc91
    MOV EAX,dword ptr [ESP + 0xc]       ; 0048dc5c
    CMP dword ptr [EAX + 0x4],0x0       ; 0048dc60
    JZ 0x0048dc96                       ; 0048dc64
        ;   XREF to: 0048dc96 (CONDITIONAL_JUMP)  ; LAB_0048dc96
    MOV ECX,dword ptr [ESP + 0xc]       ; 0048dc66
        ;   Label: LAB_0048dc66
    MOV EAX,dword ptr [EBX + 0x10]      ; 0048dc6a
    MOV EDX,dword ptr [EBX + 0x14]      ; 0048dc6d
    SAR EAX,0x10                        ; 0048dc70
    SAR EDX,0x10                        ; 0048dc73
    MOV ESI,dword ptr [ECX + 0x4]       ; 0048dc76
    SHL EAX,0x2                         ; 0048dc79
    SHL EDX,0x2                         ; 0048dc7c
    TEST ESI,ESI                        ; 0048dc7f
    JNZ 0x0048dca3                      ; 0048dc81
        ;   XREF to: 0048dca3 (CONDITIONAL_JUMP)  ; LAB_0048dca3
    MOV EDX,dword ptr [EDX + 0x2cf7d5c] ; 0048dc83 | g_ZBufferScanlineArray
    MOV EAX,dword ptr [EDX + EAX*0x1]   ; 0048dc89
    CMP EAX,dword ptr [EBX + 0x8]       ; 0048dc8c
    JLE 0x0048dcb6                      ; 0048dc8f
        ;   XREF to: 0048dcb6 (CONDITIONAL_JUMP)  ; LAB_0048dcb6
    XOR EAX,EAX                         ; 0048dc91
        ;   Label: LAB_0048dc91
    POP ESI                             ; 0048dc93
    POP EBX                             ; 0048dc94
    RET                                 ; 0048dc95
    PUSH 0x1                            ; 0048dc96
        ;   Label: LAB_0048dc96
    PUSH EBX                            ; 0048dc98
    CALL engine_prim.c_replaceWWithDepth_FUN_00552110 ; 0048dc99
        ;   XREF to: 00552110 (UNCONDITIONAL_CALL)  ; void engine_prim.c_replaceWWithDepth_FUN_00552110(SRenderVertex * vertices, int vertex_count)
    ADD ESP,0x8                         ; 0048dc9e
    JMP 0x0048dc66                      ; 0048dca1
        ;   XREF to: 0048dc66 (UNCONDITIONAL_JUMP)  ; LAB_0048dc66
    MOV EDX,dword ptr [EDX + 0x2cf6a9c] ; 0048dca3 | g_ScreenBufferArray
        ;   Label: LAB_0048dca3
    MOV EAX,dword ptr [EDX + EAX*0x1]   ; 0048dca9
    CMP EAX,dword ptr [EBX + 0x8]       ; 0048dcac
    JLE 0x0048dcb6                      ; 0048dcaf
        ;   XREF to: 0048dcb6 (CONDITIONAL_JUMP)  ; LAB_0048dcb6
    XOR EAX,EAX                         ; 0048dcb1
    POP ESI                             ; 0048dcb3
    POP EBX                             ; 0048dcb4
    RET                                 ; 0048dcb5
    MOV EAX,0x1                         ; 0048dcb6
        ;   Label: LAB_0048dcb6
    POP ESI                             ; 0048dcbb
    POP EBX                             ; 0048dcbc
    RET                                 ; 0048dcbd

