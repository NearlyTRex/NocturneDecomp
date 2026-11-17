; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl engine_special_cpp_renderScanlineSwapped_FUN_0056325d(int scanline_y,SHardwareEdge *right,SHardwareEdge *left)
;
; Parameters:
; int              Stack[0x4]:4   scanline_y
; SHardwareEdge *  Stack[0x8]:4   right
; SHardwareEdge *  Stack[0xc]:4   left
;
; Referenced Globals:
;   int g_INT_00604d34 = 0x0
;   int g_INT_00604d38 = 0x0
;   int g_INT_00604d3c = 0x0
;   int g_INT_00604d40 = 0x0
;   void* g_ScanlineRenderFunc
;
; *****************************************************************************

section .text

    PUSH EBP                            ; 0056325d
        ;   Label: engine_special.cpp_renderScanlineSwapped_FUN_0056325d
    MOV EBP,ESP                         ; 0056325e
    PUSH ESI                            ; 00563260
    PUSH EDI                            ; 00563261
    MOV [0x00604d34],EAX                ; 00563262 | g_INT_00604d34
    MOV dword ptr [0x00604d38],EBX      ; 00563267 | g_INT_00604d38
    MOV dword ptr [0x00604d3c],ECX      ; 0056326d | g_INT_00604d3c
    MOV dword ptr [0x00604d40],EDX      ; 00563273 | g_INT_00604d40
    MOV EBX,dword ptr [EBP + 0x8]       ; 00563279
    MOV ESI,dword ptr [EBP + 0xc]       ; 0056327c
    MOV EDI,dword ptr [EBP + 0x10]      ; 0056327f
    CALL dword ptr [0x01c6b5cc]         ; 00563282 | g_ScanlineRenderFunc
    MOV EAX,[0x00604d34]                ; 00563288 | g_INT_00604d34
    MOV EBX,dword ptr [0x00604d38]      ; 0056328d | g_INT_00604d38
    MOV ECX,dword ptr [0x00604d3c]      ; 00563293 | g_INT_00604d3c
    MOV EDX,dword ptr [0x00604d40]      ; 00563299 | g_INT_00604d40
    POP EDI                             ; 0056329f
    POP ESI                             ; 005632a0
    LEAVE                               ; 005632a1
    RET                                 ; 005632a2

