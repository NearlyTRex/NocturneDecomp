; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl engine_mini3d_cpp_updateRenderState_FUN_004f2430(void)
;
;
; XREF[7]:
;   engine_mini3d.cpp_lineListD3DTL_FUN_004ee9f0 at 004ee9f5
;   engine_mini3d.cpp_polyList2_FUN_004ee110 at 004ee139
;   engine_mini3d.cpp_polyListD3DL2_FUN_004ee3a0 at 004ee3c9
;   engine_mini3d.cpp_polyListD3DL_FUN_004ee1a0 at 004ee1e2
;   engine_mini3d.cpp_polyListD3DTL_FUN_004ee5b0 at 004ee5fe
;   engine_mini3d.cpp_polyListL_FUN_004ee430 at 004ee485
;   engine_mini3d.cpp_polyList_FUN_004edea0 at 004edee2
;
; Referenced Globals:
;   int g_INT_01c6e2ac
;   _BIT_INTEGER32 g_RenderStateFlags
;   int g_VertexPreprocessMode
;   int g_INT_01d76c38
;   int g_INT_01d76c3c
;   int g_INT_01d76c44
;   int g_INT_01d76c48
;
; *****************************************************************************

section .text

    MOV EAX,[0x01d76c38]                ; 004f2430 | g_INT_01d76c38
        ;   Label: engine_mini3d.cpp_updateRenderState_FUN_004f2430
    MOV ECX,dword ptr [0x01d76c48]      ; 004f2435 | g_INT_01d76c48
    XOR EDX,EDX                         ; 004f243b
    OR AX,0x205                         ; 004f243d
    MOV dword ptr [0x01c6e2b8],EDX      ; 004f2441 | g_VertexPreprocessMode
    MOV [0x01c6e2b4],EAX                ; 004f2447 | g_RenderStateFlags
    TEST ECX,ECX                        ; 004f244c
    JNZ 0x004f2464                      ; 004f244e
        ;   XREF to: 004f2464 (CONDITIONAL_JUMP)  ; LAB_004f2464
    CMP dword ptr [0x01d76c44],0x0      ; 004f2450 | g_INT_01d76c44
        ;   Label: LAB_004f2450
    JNZ 0x004f246d                      ; 004f2457
        ;   XREF to: 004f246d (CONDITIONAL_JUMP)  ; LAB_004f246d
    MOV EAX,[0x01d76c3c]                ; 004f2459 | g_INT_01d76c3c
    MOV [0x01c6e2ac],EAX                ; 004f245e | g_INT_01c6e2ac
    RET                                 ; 004f2463
    OR byte ptr [0x01c6e2b4],0x8        ; 004f2464 | g_RenderStateFlags
        ;   Label: LAB_004f2464
    JMP 0x004f2450                      ; 004f246b
        ;   XREF to: 004f2450 (UNCONDITIONAL_JUMP)  ; LAB_004f2450
    OR word ptr [0x01c6e2b4],0x122      ; 004f246d | g_RenderStateFlags
        ;   Label: LAB_004f246d
    MOV EAX,[0x01d76c3c]                ; 004f2476 | g_INT_01d76c3c
    MOV [0x01c6e2ac],EAX                ; 004f247b | g_INT_01c6e2ac
    RET                                 ; 004f2480

