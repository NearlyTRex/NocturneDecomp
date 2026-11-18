; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl engine_mini3d_cpp_polyList2_FUN_004ee110(float *vertices,int vertex_count,ushort *indices,int triangle_count)
;
; Parameters:
; float *          Stack[0x4]:4   vertices
; int              Stack[0x8]:4   vertex_count
; ushort *         Stack[0xc]:4   indices
; int              Stack[0x10]:4   triangle_count
;
; Referenced Globals:
;   int g_INT_01c6cee8
;   _BIT_INTEGER32 g_RenderStateFlags
;   char* g_CHAR_PTR_01d71de0
;   int g_INT_01d71de4
;   int g_INT_01d76c34
;   int g_RenderedTriangleCount
;   void* g_APIDLL_getTextureHandle
;
; Called Functions:
;   core_main.c_displayErrorAndQuit_FUN_004e4330
;   engine_mini3d.cpp_updateRenderState_FUN_004f2430
;   engine_mini3d.cpp_updateTransform_FUN_004edcc0
;
; *****************************************************************************

section .text

    PUSH EDI                            ; 004ee110
        ;   Label: engine_mini3d.cpp_polyList2_FUN_004ee110
    PUSH EBP                            ; 004ee111
    MOV EAX,dword ptr [ESP + 0x18]      ; 004ee112
    MOV EDX,dword ptr [0x01ed3198]      ; 004ee116 | g_RenderedTriangleCount
    MOV ECX,dword ptr [0x01d76c34]      ; 004ee11c | g_INT_01d76c34
    ADD EDX,EAX                         ; 004ee122
    ADD ECX,dword ptr [ESP + 0x10]      ; 004ee124
    MOV dword ptr [0x01ed3198],EDX      ; 004ee128 | g_RenderedTriangleCount
    MOV dword ptr [0x01d76c34],ECX      ; 004ee12e | g_INT_01d76c34
    CALL engine_mini3d.cpp_updateTransform_FUN_004edcc0 ; 004ee134
        ;   XREF to: 004edcc0 (UNCONDITIONAL_CALL)  ; void engine_mini3d.cpp_updateTransform_FUN_004edcc0()
    CALL engine_mini3d.cpp_updateRenderState_FUN_004f2430 ; 004ee139
        ;   XREF to: 004f2430 (UNCONDITIONAL_CALL)  ; void engine_mini3d.cpp_updateRenderState_FUN_004f2430()
    CMP dword ptr [0x02cf60b8],0x0      ; 004ee13e | g_APIDLL_getTextureHandle
    JZ 0x004ee17a                       ; 004ee145
        ;   XREF to: 004ee17a (CONDITIONAL_JUMP)  ; LAB_004ee17a
    CMP dword ptr [0x01c6cee8],0x0      ; 004ee147 | g_INT_01c6cee8
    JZ 0x004ee17a                       ; 004ee14e
        ;   XREF to: 004ee17a (CONDITIONAL_JUMP)  ; LAB_004ee17a
    PUSH ESI                            ; 004ee150
    PUSH EBX                            ; 004ee151
    MOV EAX,[0x01c6e2b4]                ; 004ee152 | g_RenderStateFlags
    PUSH EAX                            ; 004ee157
    MOV EDX,dword ptr [ESP + 0x24]      ; 004ee158
    PUSH EDX                            ; 004ee15c
    MOV ECX,dword ptr [ESP + 0x24]      ; 004ee15d
    PUSH ECX                            ; 004ee161
    MOV EBX,dword ptr [ESP + 0x24]      ; 004ee162
    PUSH EBX                            ; 004ee166
    MOV ESI,dword ptr [ESP + 0x24]      ; 004ee167
    PUSH ESI                            ; 004ee16b
    CALL dword ptr [0x02cf60b8]         ; 004ee16c | g_APIDLL_getTextureHandle
    ADD ESP,0x14                        ; 004ee172
    POP EBX                             ; 004ee175
    POP ESI                             ; 004ee176
    POP EBP                             ; 004ee177
    POP EDI                             ; 004ee178
    RET                                 ; 004ee179
    MOV EDI,0x5c8015                    ; 004ee17a
        ;   Label: LAB_004ee17a
    MOV EBP,0x71f                       ; 004ee17f
    PUSH 0x5c802a                       ; 004ee184
    MOV dword ptr [0x01d71de0],EDI      ; 004ee189 | g_CHAR_PTR_01d71de0
    MOV dword ptr [0x01d71de4],EBP      ; 004ee18f | g_INT_01d71de4
    CALL core_main.c_displayErrorAndQuit_FUN_004e4330 ; 004ee195
        ;   XREF to: 004e4330 (UNCONDITIONAL_CALL)  ; void core_main.c_displayErrorAndQuit_FUN_004e4330(char * format)
    ADD ESP,0x4                         ; 004ee19a
    POP EBP                             ; 004ee19d
    POP EDI                             ; 004ee19e
    RET                                 ; 004ee19f

