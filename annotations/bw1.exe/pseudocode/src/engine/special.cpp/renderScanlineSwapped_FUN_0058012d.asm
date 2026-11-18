; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl engine_special_cpp_renderScanlineSwapped_FUN_0058012d(int scanline_y,SHardwareEdge *right,SHardwareEdge *left)
;
; Parameters:
; int              Stack[0x4]:4   scanline_y
; SHardwareEdge *  Stack[0x8]:4   right
; SHardwareEdge *  Stack[0xc]:4   left
;
; Referenced Globals:
;   int g_INT_00623df4 = 0x0
;   int g_INT_00623df8 = 0x0
;   int g_INT_00623dfc = 0x0
;   int g_INT_00623e00 = 0x0
;   void* g_ScanlineRenderFunc
;
; *****************************************************************************

section .text

    PUSH EBP                            ; 0058012d
        ;   Label: engine_special.cpp_renderScanlineSwapped_FUN_0058012d
    MOV EBP,ESP                         ; 0058012e
    PUSH ESI                            ; 00580130
    PUSH EDI                            ; 00580131
    MOV [0x00623df4],EAX                ; 00580132 | g_INT_00623df4
    MOV dword ptr [0x00623df8],EBX      ; 00580137 | g_INT_00623df8
    MOV dword ptr [0x00623dfc],ECX      ; 0058013d | g_INT_00623dfc
    MOV dword ptr [0x00623e00],EDX      ; 00580143 | g_INT_00623e00
    MOV EBX,dword ptr [EBP + 0x8]       ; 00580149
    MOV ESI,dword ptr [EBP + 0xc]       ; 0058014c
    MOV EDI,dword ptr [EBP + 0x10]      ; 0058014f
    CALL dword ptr [0x01c4f02c]         ; 00580152 | g_ScanlineRenderFunc
    MOV EAX,[0x00623df4]                ; 00580158 | g_INT_00623df4
    MOV EBX,dword ptr [0x00623df8]      ; 0058015d | g_INT_00623df8
    MOV ECX,dword ptr [0x00623dfc]      ; 00580163 | g_INT_00623dfc
    MOV EDX,dword ptr [0x00623e00]      ; 00580169 | g_INT_00623e00
    POP EDI                             ; 0058016f
    POP ESI                             ; 00580170
    LEAVE                               ; 00580171
    RET                                 ; 00580172

