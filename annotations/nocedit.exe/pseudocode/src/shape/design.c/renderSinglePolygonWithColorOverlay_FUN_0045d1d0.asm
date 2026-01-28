; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void __cdecl shape_design_c_renderSinglePolygonWithColorOverlay_FUN_0045d1d0(int polygon_index,int *color_value)
;
; Parameters:
; int              Stack[0x4]:4   polygon_index
; int *            Stack[0x8]:4   color_value
; Local Variables:
; undefined1       Stack[-0x6c]:1  local_6c
; undefined4       Stack[-0x68]:4  local_68
; undefined4       Stack[-0x64]:4  local_64
; undefined4       Stack[-0x60]:4  local_60
; undefined4       Stack[-0x5c]:4  local_5c
; undefined4       Stack[-0x58]:4  local_58
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[1]:
;   shape_design.c_renderEditorBackgroundOverlay_FUN_0045d920 at 0045d9a7
;
; Referenced Globals:
;   float g_OverlayNormalScale = 65535
;   float g_OverlayPlaneDistanceScale = 256
;   undefined4 DAT_016e99b4
;   undefined4 DAT_016e99b8
;   undefined4 DAT_016e99bc
;   undefined4 DAT_016e99c0
;   undefined4 DAT_016e99c4
;   undefined4 DAT_016e99c8
;   undefined4 DAT_016e9a88
;   int g_AntiAliasingEnabled
;   int g_CurrentPartIndex
;   int g_WireframeMode
;
; Called Functions:
;   crt_math.c_round_FUN_005fe6b0
;   shape_design.c_renderPolygonWireframe_FUN_0045d300
;   shape_design.c_renderPolygonWireframeAntialiased_FUN_0045d470
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0045d1d0
        ;   Label: shape_design.c_renderSinglePolygonWithColorOverlay_FUN_0045d1d0
    PUSH ESI                            ; 0045d1d1
    PUSH EDI                            ; 0045d1d2
    PUSH EBP                            ; 0045d1d3
    MOV EBP,ESP                         ; 0045d1d4
    SUB ESP,0x5c                        ; 0045d1d6
    CMP dword ptr [0x01e66158],0x0      ; 0045d1dc | g_WireframeMode
    JZ 0x0045d1ee                       ; 0045d1e3
        ;   XREF to: 0045d1ee (CONDITIONAL_JUMP)  ; LAB_0045d1ee
    CMP dword ptr [0x01e6614c],-0x1     ; 0045d1e5 | g_CurrentPartIndex
    JNZ 0x0045d1f0                      ; 0045d1ec
        ;   XREF to: 0045d1f0 (CONDITIONAL_JUMP)  ; LAB_0045d1f0
    JMP 0x0045d20a                      ; 0045d1ee
        ;   XREF to: 0045d20a (UNCONDITIONAL_JUMP)  ; LAB_0045d20a
        ;   Label: LAB_0045d1ee
    IMUL EAX,dword ptr [EBP + 0x14],0x184 ; 0045d1f0
        ;   Label: LAB_0045d1f0
    MOV EAX,dword ptr [EAX + 0x16e9a88] ; 0045d1f7 | DAT_016e9a88
    CMP EAX,dword ptr [0x01e6614c]      ; 0045d1fd | g_CurrentPartIndex
    JZ 0x0045d20a                       ; 0045d203
        ;   XREF to: 0045d20a (CONDITIONAL_JUMP)  ; LAB_0045d20a
    JMP 0x0045d2f5                      ; 0045d205
        ;   XREF to: 0045d2f5 (UNCONDITIONAL_JUMP)  ; LAB_0045d2f5
    IMUL EAX,dword ptr [EBP + 0x14],0x184 ; 0045d20a
        ;   Label: LAB_0045d20a
    MOV EAX,dword ptr [EAX + 0x16e99b4] ; 0045d211 | DAT_016e99b4
    MOV dword ptr [EBP + -0x58],EAX     ; 0045d217
    IMUL EAX,dword ptr [EBP + 0x14],0x184 ; 0045d21a
    FLD float ptr [EAX + 0x16e99b8]     ; 0045d221 | DAT_016e99b8
    FMUL float ptr [0x0061b3fe]         ; 0045d227 | g_OverlayNormalScale
    CALL crt_math.c_round_FUN_005fe6b0  ; 0045d22d
        ;   XREF to: 005fe6b0 (UNCONDITIONAL_CALL)  ; double crt_math.c_round_FUN_005fe6b0(double value)
    FISTP dword ptr [EBP + -0x54]       ; 0045d232
    IMUL EAX,dword ptr [EBP + 0x14],0x184 ; 0045d235
    FLD float ptr [EAX + 0x16e99bc]     ; 0045d23c | DAT_016e99bc
    FMUL float ptr [0x0061b3fe]         ; 0045d242 | g_OverlayNormalScale
    CALL crt_math.c_round_FUN_005fe6b0  ; 0045d248
        ;   XREF to: 005fe6b0 (UNCONDITIONAL_CALL)  ; double crt_math.c_round_FUN_005fe6b0(double value)
    FISTP dword ptr [EBP + -0x50]       ; 0045d24d
    IMUL EAX,dword ptr [EBP + 0x14],0x184 ; 0045d250
    FLD float ptr [EAX + 0x16e99c0]     ; 0045d257 | DAT_016e99c0
    FMUL float ptr [0x0061b3fe]         ; 0045d25d | g_OverlayNormalScale
    CALL crt_math.c_round_FUN_005fe6b0  ; 0045d263
        ;   XREF to: 005fe6b0 (UNCONDITIONAL_CALL)  ; double crt_math.c_round_FUN_005fe6b0(double value)
    FISTP dword ptr [EBP + -0x4c]       ; 0045d268
    IMUL EAX,dword ptr [EBP + 0x14],0x184 ; 0045d26b
    FLD float ptr [EAX + 0x16e99c4]     ; 0045d272 | DAT_016e99c4
    FMUL float ptr [0x0061b3fe]         ; 0045d278 | g_OverlayNormalScale
    FMUL float ptr [0x0061b402]         ; 0045d27e | g_OverlayPlaneDistanceScale
    CALL crt_math.c_round_FUN_005fe6b0  ; 0045d284
        ;   XREF to: 005fe6b0 (UNCONDITIONAL_CALL)  ; double crt_math.c_round_FUN_005fe6b0(double value)
    FISTP dword ptr [EBP + -0x48]       ; 0045d289
    MOV dword ptr [EBP + -0x4],0x0      ; 0045d28c
    JMP 0x0045d29b                      ; 0045d293
        ;   XREF to: 0045d29b (UNCONDITIONAL_JUMP)  ; LAB_0045d29b
    MOV EAX,dword ptr [EBP + -0x4]      ; 0045d295
        ;   Label: LAB_0045d295
    INC dword ptr [EBP + -0x4]          ; 0045d298
    IMUL EDX,dword ptr [EBP + 0x14],0x184 ; 0045d29b
        ;   Label: LAB_0045d29b
    MOV EAX,dword ptr [EBP + -0x4]      ; 0045d2a2
    CMP EAX,dword ptr [EDX + 0x16e99b4] ; 0045d2a5 | DAT_016e99b4
    JGE 0x0045d2ce                      ; 0045d2ab
        ;   XREF to: 0045d2ce (CONDITIONAL_JUMP)  ; LAB_0045d2ce
    IMUL EDX,dword ptr [EBP + 0x14],0x184 ; 0045d2ad
    MOV EAX,dword ptr [EBP + -0x4]      ; 0045d2b4
    SHL EAX,0x2                         ; 0045d2b7
    ADD EAX,EDX                         ; 0045d2ba
    MOV EDX,dword ptr [EBP + -0x4]      ; 0045d2bc
    SHL EDX,0x2                         ; 0045d2bf
    MOV EAX,dword ptr [EAX + 0x16e99c8] ; 0045d2c2 | DAT_016e99c8
    MOV dword ptr [EDX + EBP*0x1 + -0x44],EAX ; 0045d2c8
    JMP 0x0045d295                      ; 0045d2cc
        ;   XREF to: 0045d295 (UNCONDITIONAL_JUMP)  ; LAB_0045d295
    CMP dword ptr [0x01e528c4],0x0      ; 0045d2ce | g_AntiAliasingEnabled
        ;   Label: LAB_0045d2ce
    JNZ 0x0045d2e5                      ; 0045d2d5
        ;   XREF to: 0045d2e5 (CONDITIONAL_JUMP)  ; LAB_0045d2e5
    LEA EAX,[EBP + -0x5c]               ; 0045d2d7
    PUSH EAX                            ; 0045d2da
    CALL shape_design.c_renderPolygonWireframe_FUN_0045d300 ; 0045d2db
        ;   XREF to: 0045d300 (UNCONDITIONAL_CALL)  ; void shape_design.c_renderPolygonWireframe_FUN_0045d300(SMRGLHeaderPrimitive * polygon_data)
    ADD ESP,0x4                         ; 0045d2e0
    JMP 0x0045d2f5                      ; 0045d2e3
        ;   XREF to: 0045d2f5 (UNCONDITIONAL_JUMP)  ; LAB_0045d2f5
    MOV EAX,dword ptr [EBP + 0x18]      ; 0045d2e5
        ;   Label: LAB_0045d2e5
    PUSH EAX                            ; 0045d2e8
    LEA EAX,[EBP + -0x5c]               ; 0045d2e9
    PUSH EAX                            ; 0045d2ec
    CALL shape_design.c_renderPolygonWireframeAntialiased_FUN_0045d470 ; 0045d2ed
        ;   XREF to: 0045d470 (UNCONDITIONAL_CALL)  ; void shape_design.c_renderPolygonWireframeAntialiased_FUN_0045d470(SMRGLHeaderPrimitive * polygon_data, int line_color)
    ADD ESP,0x8                         ; 0045d2f2
    MOV ESP,EBP                         ; 0045d2f5
        ;   Label: LAB_0045d2f5
    POP EBP                             ; 0045d2f7
    POP EDI                             ; 0045d2f8
    POP ESI                             ; 0045d2f9
    POP EBX                             ; 0045d2fa
    RET                                 ; 0045d2fb

