; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl engine_2d_c_clipLineGlobal_FUN_00402ca0(int x1,int y1,int x2,int y2)
;
; Parameters:
; int              Stack[0x4]:4   x1
; int              Stack[0x8]:4   y1
; int              Stack[0xc]:4   x2
; int              Stack[0x10]:4   y2
;
; XREF[1]:
;   shape_edittool.cpp_CEdCheck_render_FUN_00485610 at 004856ed
;
; Referenced Globals:
;   int g_INT_01c35e48
;   int g_INT_01c35e4c
;   int g_ClipRight
;   int g_INT_01c35e54
;
; Called Functions:
;   engine_2d.c_clipAndDrawLine_FUN_00402cf0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00402ca0
        ;   Label: engine_2d.c_clipLineGlobal_FUN_00402ca0
    PUSH ESI                            ; 00402ca1
    PUSH EDI                            ; 00402ca2
    PUSH EBP                            ; 00402ca3
    MOV EDX,dword ptr [0x01c35e54]      ; 00402ca4 | g_INT_01c35e54
    PUSH EDX                            ; 00402caa
    MOV ECX,dword ptr [0x01c35e50]      ; 00402cab | g_ClipRight
    PUSH ECX                            ; 00402cb1
    MOV EBX,dword ptr [0x01c35e4c]      ; 00402cb2 | g_INT_01c35e4c
    PUSH EBX                            ; 00402cb8
    MOV ESI,dword ptr [0x01c35e48]      ; 00402cb9 | g_INT_01c35e48
    PUSH ESI                            ; 00402cbf
    MOV EDI,dword ptr [ESP + 0x30]      ; 00402cc0
    PUSH EDI                            ; 00402cc4
    MOV EBP,dword ptr [ESP + 0x30]      ; 00402cc5
    PUSH EBP                            ; 00402cc9
    MOV EAX,dword ptr [ESP + 0x30]      ; 00402cca
    PUSH EAX                            ; 00402cce
    MOV EDX,dword ptr [ESP + 0x30]      ; 00402ccf
    PUSH EDX                            ; 00402cd3
    CALL engine_2d.c_clipAndDrawLine_FUN_00402cf0 ; 00402cd4
        ;   XREF to: 00402cf0 (UNCONDITIONAL_CALL)  ; void engine_2d.c_clipAndDrawLine_FUN_00402cf0(int x1, int y1, int x2, int y2, ...)
    ADD ESP,0x20                        ; 00402cd9
    POP EBP                             ; 00402cdc
    POP EDI                             ; 00402cdd
    POP ESI                             ; 00402cde
    POP EBX                             ; 00402cdf
    RET                                 ; 00402ce0

