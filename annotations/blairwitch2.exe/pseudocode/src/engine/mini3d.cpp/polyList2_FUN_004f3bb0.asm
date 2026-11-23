; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl engine_mini3d_cpp_polyList2_FUN_004f3bb0(float *vertices,int vertex_count,ushort *indices,int triangle_count)
;
; Parameters:
; float *          Stack[0x4]:4   vertices
; int              Stack[0x8]:4   vertex_count
; ushort *         Stack[0xc]:4   indices
; int              Stack[0x10]:4   triangle_count
;
; Referenced Globals:
;   int g_INT_01c37788
;   _BIT_INTEGER32 g_RenderStateFlags
;   char* g_CurrentFilename
;   int g_CurrentLineNumber
;   int g_INT_01d09854
;   int g_RenderedTriangleCount
;   void* g_APIDLL_lockTexture
;
; Called Functions:
;   core_main.c_displayErrorAndQuit_FUN_004e4500
;   engine_mini3d.cpp_updateRenderState_FUN_004f7da0
;   engine_mini3d.cpp_updateTransform_FUN_004f3740
;
; *****************************************************************************

section .text

    PUSH EDI                            ; 004f3bb0
        ;   Label: engine_mini3d.cpp_polyList2_FUN_004f3bb0
    PUSH EBP                            ; 004f3bb1
    MOV EAX,dword ptr [ESP + 0x18]      ; 004f3bb2
    MOV EDX,dword ptr [0x01e61b58]      ; 004f3bb6 | g_RenderedTriangleCount
    MOV ECX,dword ptr [0x01d09854]      ; 004f3bbc | g_INT_01d09854
    ADD EDX,EAX                         ; 004f3bc2
    ADD ECX,dword ptr [ESP + 0x10]      ; 004f3bc4
    MOV dword ptr [0x01e61b58],EDX      ; 004f3bc8 | g_RenderedTriangleCount
    MOV dword ptr [0x01d09854],ECX      ; 004f3bce | g_INT_01d09854
    CALL engine_mini3d.cpp_updateTransform_FUN_004f3740 ; 004f3bd4
        ;   XREF to: 004f3740 (UNCONDITIONAL_CALL)  ; void engine_mini3d.cpp_updateTransform_FUN_004f3740()
    CALL engine_mini3d.cpp_updateRenderState_FUN_004f7da0 ; 004f3bd9
        ;   XREF to: 004f7da0 (UNCONDITIONAL_CALL)  ; void engine_mini3d.cpp_updateRenderState_FUN_004f7da0()
    CMP dword ptr [0x0264bc8c],0x0      ; 004f3bde | g_APIDLL_lockTexture
    JZ 0x004f3c1a                       ; 004f3be5
        ;   XREF to: 004f3c1a (CONDITIONAL_JUMP)  ; LAB_004f3c1a
    CMP dword ptr [0x01c37788],0x0      ; 004f3be7 | g_INT_01c37788
    JZ 0x004f3c1a                       ; 004f3bee
        ;   XREF to: 004f3c1a (CONDITIONAL_JUMP)  ; LAB_004f3c1a
    PUSH ESI                            ; 004f3bf0
    PUSH EBX                            ; 004f3bf1
    MOV EAX,[0x01c38b54]                ; 004f3bf2 | g_RenderStateFlags
    PUSH EAX                            ; 004f3bf7
    MOV EDX,dword ptr [ESP + 0x24]      ; 004f3bf8
    PUSH EDX                            ; 004f3bfc
    MOV ECX,dword ptr [ESP + 0x24]      ; 004f3bfd
    PUSH ECX                            ; 004f3c01
    MOV EBX,dword ptr [ESP + 0x24]      ; 004f3c02
    PUSH EBX                            ; 004f3c06
    MOV ESI,dword ptr [ESP + 0x24]      ; 004f3c07
    PUSH ESI                            ; 004f3c0b
    CALL dword ptr [0x0264bc8c]         ; 004f3c0c | g_APIDLL_lockTexture
    ADD ESP,0x14                        ; 004f3c12
    POP EBX                             ; 004f3c15
    POP ESI                             ; 004f3c16
    POP EBP                             ; 004f3c17
    POP EDI                             ; 004f3c18
    RET                                 ; 004f3c19
    MOV EDI,0x5ddccc                    ; 004f3c1a
        ;   Label: LAB_004f3c1a
    MOV EBP,0x73a                       ; 004f3c1f
    PUSH 0x5ddce1                       ; 004f3c24
    MOV dword ptr [0x01d046a0],EDI      ; 004f3c29 | g_CurrentFilename
    MOV dword ptr [0x01d046a4],EBP      ; 004f3c2f | g_CurrentLineNumber
    CALL core_main.c_displayErrorAndQuit_FUN_004e4500 ; 004f3c35
        ;   XREF to: 004e4500 (UNCONDITIONAL_CALL)  ; void core_main.c_displayErrorAndQuit_FUN_004e4500(char * format)
    ADD ESP,0x4                         ; 004f3c3a
    POP EBP                             ; 004f3c3d
    POP EDI                             ; 004f3c3e
    RET                                 ; 004f3c3f

