; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl engine_mini3d_cpp_beginTriangleBatch_FUN_004f6850(int base_vertex)
;
; Parameters:
; int              Stack[0x4]:4   base_vertex
;
; XREF[1]:
;   engine_mini3d.cpp_drawTransformedList_FUN_004f6d00 at 004f6d92
;
; Referenced Globals:
;   undefined4 DAT_01d0d2e8
;   undefined4 DAT_01d0d2ec
;   undefined4 DAT_01d0d2f0
;
; *****************************************************************************

section .text

    XOR EDX,EDX                         ; 004f6850
        ;   Label: engine_mini3d.cpp_beginTriangleBatch_FUN_004f6850
    MOV EAX,dword ptr [ESP + 0x4]       ; 004f6852
    MOV dword ptr [0x01d0d2ec],EDX      ; 004f6856 | DAT_01d0d2ec
    MOV dword ptr [0x01d0d2f0],EDX      ; 004f685c | DAT_01d0d2f0
    MOV [0x01d0d2e8],EAX                ; 004f6862 | DAT_01d0d2e8
    RET                                 ; 004f6867

