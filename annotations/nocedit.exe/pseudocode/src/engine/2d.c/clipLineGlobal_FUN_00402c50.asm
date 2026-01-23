; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void engine_2d.c_clipLineGlobal_FUN_00402c50(int x1, int y1, int x2, int y2)
;
; Parameters:
; int              Stack[0x4]:4   x1
; int              Stack[0x8]:4   y1
; int              Stack[0xc]:4   x2
; int              Stack[0x10]:4   y2
;
; XREF[1]:
;   shape_edittool.cpp_CEdCheck_render_FUN_004a6c00 at 004a6d07
;
; Referenced Globals:
;   int g_ClipLeft
;   int g_ClipTop
;   int g_ClipRight
;   int g_ClipBottom
;
; Called Functions:
;   engine_2d.c_clipAndDrawLine_FUN_00402ca0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00402c50
        ;   Label: engine_2d.c_clipLineGlobal_FUN_00402c50
    PUSH ESI                            ; 00402c51
    PUSH EDI                            ; 00402c52
    PUSH EBP                            ; 00402c53
    MOV EDX,dword ptr [0x02d02564]      ; 00402c54 | g_ClipBottom
    PUSH EDX                            ; 00402c5a
    MOV ECX,dword ptr [0x02d02560]      ; 00402c5b | g_ClipRight
    PUSH ECX                            ; 00402c61
    MOV EBX,dword ptr [0x02d0255c]      ; 00402c62 | g_ClipTop
    PUSH EBX                            ; 00402c68
    MOV ESI,dword ptr [0x02d02558]      ; 00402c69 | g_ClipLeft
    PUSH ESI                            ; 00402c6f
    MOV EDI,dword ptr [ESP + 0x30]      ; 00402c70
    PUSH EDI                            ; 00402c74
    MOV EBP,dword ptr [ESP + 0x30]      ; 00402c75
    PUSH EBP                            ; 00402c79
    MOV EAX,dword ptr [ESP + 0x30]      ; 00402c7a
    PUSH EAX                            ; 00402c7e
    MOV EDX,dword ptr [ESP + 0x30]      ; 00402c7f
    PUSH EDX                            ; 00402c83
    CALL engine_2d.c_clipAndDrawLine_FUN_00402ca0 ; 00402c84
        ;   XREF to: 00402ca0 (UNCONDITIONAL_CALL)  ; void engine_2d.c_clipAndDrawLine_FUN_00402ca0(int x1, int y1, int x2, int y2, ...)
    ADD ESP,0x20                        ; 00402c89
    POP EBP                             ; 00402c8c
    POP EDI                             ; 00402c8d
    POP ESI                             ; 00402c8e
    POP EBX                             ; 00402c8f
    RET                                 ; 00402c90

