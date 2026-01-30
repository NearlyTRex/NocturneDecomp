; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void __cdecl shape_design_c_createQuadPolygon_FUN_0045df60(void)
;
;
; XREF[3]:
;   shape_design.c_createBoxPrimitive_FUN_0045e520 at 0045e8f2
;   shape_design.c_createReversedQuadPolygon_FUN_0045e040 at 0045e05c
;   shape_design.c_createRotationalSweepGeometry_FUN_0045e070 at 0045e500
;
; Referenced Globals:
;   int g_EditorColorIndex
;   int g_PolygonCount
;   SShapeEditorPolygon[20000] g_ModelPolygonData
;   undefined4 DAT_016e9914
;   undefined4 DAT_016e99b4
;   undefined4 DAT_016e99c8
;   undefined4 DAT_016e99cc
;   undefined4 DAT_016e99d0
;   undefined4 DAT_016e99d4
;   undefined4 DAT_016e9a88
;   undefined4 DAT_016e9a8c
;   int g_CurrentPartIndex
;
; Called Functions:
;   shape_design.c_calculatePolygonNormal_FUN_0045caa0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0045df60
        ;   Label: shape_design.c_createQuadPolygon_FUN_0045df60
    PUSH ESI                            ; 0045df61
    PUSH EDI                            ; 0045df62
    PUSH EBP                            ; 0045df63
    MOV EBP,ESP                         ; 0045df64
    SUB ESP,0x0                         ; 0045df66
    IMUL EAX,dword ptr [0x016e990c],0x184 ; 0045df6c | g_PolygonCount
    MOV dword ptr [EAX + 0x16e99b4],0x4 ; 0045df76 | DAT_016e99b4
    IMUL EAX,dword ptr [0x016e990c],0x184 ; 0045df80 | g_PolygonCount
    MOV dword ptr [EAX + 0x16e9910],0x1 ; 0045df8a | g_ModelPolygonData
    IMUL EAX,dword ptr [0x016e990c],0x184 ; 0045df94 | g_PolygonCount
    MOV byte ptr [EAX + 0x16e9914],0x0  ; 0045df9e | DAT_016e9914
    IMUL EDX,dword ptr [0x016e990c],0x184 ; 0045dfa5 | g_PolygonCount
    MOV EAX,[0x01e6614c]                ; 0045dfaf | g_CurrentPartIndex
    MOV dword ptr [EDX + 0x16e9a88],EAX ; 0045dfb4 | DAT_016e9a88
    IMUL EDX,dword ptr [0x016e990c],0x184 ; 0045dfba | g_PolygonCount
    MOV EAX,[0x01626368]                ; 0045dfc4 | g_EditorColorIndex
    MOV dword ptr [EDX + 0x16e9a8c],EAX ; 0045dfc9 | DAT_016e9a8c
    IMUL EDX,dword ptr [0x016e990c],0x184 ; 0045dfcf | g_PolygonCount
    MOV EAX,dword ptr [EBP + 0x14]      ; 0045dfd9
    MOV dword ptr [EDX + 0x16e99c8],EAX ; 0045dfdc | DAT_016e99c8
    IMUL EDX,dword ptr [0x016e990c],0x184 ; 0045dfe2 | g_PolygonCount
    MOV EAX,dword ptr [EBP + 0x18]      ; 0045dfec
    MOV dword ptr [EDX + 0x16e99cc],EAX ; 0045dfef | DAT_016e99cc
    IMUL EDX,dword ptr [0x016e990c],0x184 ; 0045dff5 | g_PolygonCount
    MOV EAX,dword ptr [EBP + 0x1c]      ; 0045dfff
    MOV dword ptr [EDX + 0x16e99d0],EAX ; 0045e002 | DAT_016e99d0
    IMUL EDX,dword ptr [0x016e990c],0x184 ; 0045e008 | g_PolygonCount
    MOV EAX,dword ptr [EBP + 0x20]      ; 0045e012
    MOV dword ptr [EDX + 0x16e99d4],EAX ; 0045e015 | DAT_016e99d4
    IMUL EAX,dword ptr [0x016e990c],0x184 ; 0045e01b | g_PolygonCount
    MOV EDX,0x16e9910                   ; 0045e025 | g_ModelPolygonData
    ADD EAX,EDX                         ; 0045e02a
    PUSH EAX                            ; 0045e02c
    CALL shape_design.c_calculatePolygonNormal_FUN_0045caa0 ; 0045e02d
        ;   XREF to: 0045caa0 (UNCONDITIONAL_CALL)  ; void shape_design.c_calculatePolygonNormal_FUN_0045caa0(SShapeEditorPolygon * polygon)
    ADD ESP,0x4                         ; 0045e032
    INC dword ptr [0x016e990c]          ; 0045e035 | g_PolygonCount
    POP EBP                             ; 0045e03b
    POP EDI                             ; 0045e03c
    POP ESI                             ; 0045e03d
    POP EBX                             ; 0045e03e
    RET                                 ; 0045e03f

