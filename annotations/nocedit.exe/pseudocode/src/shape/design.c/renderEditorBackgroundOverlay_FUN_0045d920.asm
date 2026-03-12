; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl shape_design_c_renderEditorBackgroundOverlay_FUN_0045d920(void)
;
; Local Variables:
; undefined1       Stack[-0x20]:1  local_20
; int              Stack[-0x1c]:4  local_1c
; int              Stack[-0x18]:4  local_18
; int *            Stack[-0x14]:4  local_14
;
; XREF[1]:
;   shape_design.c_showFacetPartEditor_FUN_0045f1d0 at 0045f552
;
; Referenced Globals:
;   int g_EditorCurrentTexture = 0x2
;   int INT_016263c8
;   int g_PolygonCount
;   int g_AntiAliasingEnabled
;   int g_EditorTextureMode
;
; Called Functions:
;   engine_3d.c_processPolygonColor_FUN_00403e30
;   shape_design.c_renderSinglePolygonWithColorOverlay_FUN_0045d1d0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0045d920
        ;   Label: shape_design.c_renderEditorBackgroundOverlay_FUN_0045d920
    PUSH ESI                            ; 0045d921
    PUSH EDI                            ; 0045d922
    PUSH EBP                            ; 0045d923
    MOV EBP,ESP                         ; 0045d924
    SUB ESP,0x10                        ; 0045d926
    CMP dword ptr [0x01e528c8],0x1      ; 0045d92c | g_EditorTextureMode
    JZ 0x0045d93e                       ; 0045d933
        ;   XREF to: 0045d93e (CONDITIONAL_JUMP)  ; LAB_0045d93e
    CMP dword ptr [0x01e528c8],0x3      ; 0045d935 | g_EditorTextureMode
    JNZ 0x0045d940                      ; 0045d93c
        ;   XREF to: 0045d940 (CONDITIONAL_JUMP)  ; LAB_0045d940
    JMP 0x0045d949                      ; 0045d93e
        ;   XREF to: 0045d949 (UNCONDITIONAL_JUMP)  ; LAB_0045d949
        ;   Label: LAB_0045d93e
    CMP dword ptr [0x01e528c8],0x4      ; 0045d940 | g_EditorTextureMode
        ;   Label: LAB_0045d940
    JNZ 0x0045d9b1                      ; 0045d947
        ;   XREF to: 0045d9b1 (CONDITIONAL_JUMP)  ; LAB_0045d9b1
    CMP dword ptr [0x01e528c4],0x0      ; 0045d949 | g_AntiAliasingEnabled
        ;   Label: LAB_0045d949
    JNZ 0x0045d974                      ; 0045d950
        ;   XREF to: 0045d974 (CONDITIONAL_JUMP)  ; LAB_0045d974
    MOV EAX,[0x0066edfc]                ; 0045d952 | g_EditorCurrentTexture
    SHL EAX,0x2                         ; 0045d957
    MOV EAX,dword ptr [EAX + 0x16263c0] ; 0045d95a | INT_016263c8
    MOV dword ptr [EBP + -0xc],EAX      ; 0045d960
    NEG dword ptr [EBP + -0xc]          ; 0045d963
    LEA EAX,[EBP + -0x10]               ; 0045d966
    PUSH EAX                            ; 0045d969
    CALL engine_3d.c_processPolygonColor_FUN_00403e30 ; 0045d96a
        ;   XREF to: 00403e30 (UNCONDITIONAL_CALL)  ; SMRGLHeaderExtended * engine_3d.c_processPolygonColor_FUN_00403e30(SMRGLHeaderPrimitive * prim)
    ADD ESP,0x4                         ; 0045d96f
    JMP 0x0045d985                      ; 0045d972
        ;   XREF to: 0045d985 (UNCONDITIONAL_JUMP)  ; LAB_0045d985
    MOV EAX,[0x0066edfc]                ; 0045d974 | g_EditorCurrentTexture
        ;   Label: LAB_0045d974
    SHL EAX,0x2                         ; 0045d979
    MOV EAX,dword ptr [EAX + 0x16263c0] ; 0045d97c | INT_016263c8
    MOV dword ptr [EBP + -0x4],EAX      ; 0045d982
    MOV dword ptr [EBP + -0x8],0x0      ; 0045d985
        ;   Label: LAB_0045d985
    JMP 0x0045d994                      ; 0045d98c
        ;   XREF to: 0045d994 (UNCONDITIONAL_JUMP)  ; LAB_0045d994
    MOV EAX,dword ptr [EBP + -0x8]      ; 0045d98e
        ;   Label: LAB_0045d98e
    INC dword ptr [EBP + -0x8]          ; 0045d991
    MOV EAX,dword ptr [EBP + -0x8]      ; 0045d994
        ;   Label: LAB_0045d994
    CMP EAX,dword ptr [0x016e990c]      ; 0045d997 | g_PolygonCount
    JGE 0x0045d9b1                      ; 0045d99d
        ;   XREF to: 0045d9b1 (CONDITIONAL_JUMP)  ; LAB_0045d9b1
    MOV EAX,dword ptr [EBP + -0x4]      ; 0045d99f
    PUSH EAX                            ; 0045d9a2
    MOV EAX,dword ptr [EBP + -0x8]      ; 0045d9a3
    PUSH EAX                            ; 0045d9a6
    CALL shape_design.c_renderSinglePolygonWithColorOverlay_FUN_0045d1d0 ; 0045d9a7
        ;   XREF to: 0045d1d0 (UNCONDITIONAL_CALL)  ; void shape_design.c_renderSinglePolygonWithColorOverlay_FUN_0045d1d0(int polygon_index, int * color_value)
    ADD ESP,0x8                         ; 0045d9ac
    JMP 0x0045d98e                      ; 0045d9af
        ;   XREF to: 0045d98e (UNCONDITIONAL_JUMP)  ; LAB_0045d98e
    MOV ESP,EBP                         ; 0045d9b1
        ;   Label: LAB_0045d9b1
    POP EBP                             ; 0045d9b3
    POP EDI                             ; 0045d9b4
    POP ESI                             ; 0045d9b5
    POP EBX                             ; 0045d9b6
    RET                                 ; 0045d9b7

