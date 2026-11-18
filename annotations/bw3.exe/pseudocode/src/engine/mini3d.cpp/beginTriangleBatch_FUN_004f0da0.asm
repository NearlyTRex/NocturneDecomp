; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl engine_mini3d_cpp_beginTriangleBatch_FUN_004f0da0(int base_vertex)
;
; Parameters:
; int              Stack[0x4]:4   base_vertex
;
; XREF[1]:
;   engine_mini3d.cpp_drawTransformedList_FUN_004f12b0 at 004f1342
;
; Referenced Globals:
;   int g_INT_01d7a6c8
;   int g_INT_01d7a6cc
;   short[2] g_SHORT_ARRAY_01d7a6d0
;
; *****************************************************************************

section .text

    XOR EDX,EDX                         ; 004f0da0
        ;   Label: engine_mini3d.cpp_beginTriangleBatch_FUN_004f0da0
    MOV EAX,dword ptr [ESP + 0x4]       ; 004f0da2
    MOV dword ptr [0x01d7a6cc],EDX      ; 004f0da6 | g_INT_01d7a6cc
    MOV dword ptr [0x01d7a6d0],EDX      ; 004f0dac | g_SHORT_ARRAY_01d7a6d0
    MOV [0x01d7a6c8],EAX                ; 004f0db2 | g_INT_01d7a6c8
    RET                                 ; 004f0db7

