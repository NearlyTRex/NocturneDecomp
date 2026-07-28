; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl engine_2d_c_drawTextRightAlignedColor_FUN_00402b60(char *text,int x,int y)
;
; Parameters:
; char *           Stack[0x4]:4   text
; int              Stack[0x8]:4   x
; int              Stack[0xc]:4   y
;
; XREF[3]:
;   cockpit_drawsurf.cpp_CDrawSurface_drawTextWithAlignment_FUN_0045d760 at 0045d962
;   engine_2d.c_FUN_00402b90 at 00402ba0
;   engine_2d.c_FUN_00402bb0 at 00402c01
;
; Called Functions:
;   engine_2d.c_drawTextColor_FUN_00402a60
;   engine_2d.c_getStringWidth_FUN_00401ed0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00402b60
        ;   Label: engine_2d.c_drawTextRightAlignedColor_FUN_00402b60
    MOV EDX,dword ptr [ESP + 0x10]      ; 00402b61
    PUSH EDX                            ; 00402b65
    MOV ECX,dword ptr [ESP + 0xc]       ; 00402b66
    PUSH ECX                            ; 00402b6a
    CALL engine_2d.c_getStringWidth_FUN_00401ed0 ; 00402b6b
        ;   XREF to: 00401ed0 (UNCONDITIONAL_CALL)  ; int engine_2d.c_getStringWidth_FUN_00401ed0(char * text)
    ADD ESP,0x4                         ; 00402b70
    MOV EDX,dword ptr [ESP + 0x10]      ; 00402b73
    SUB EDX,EAX                         ; 00402b77
    LEA EAX,[EDX + 0x2]                 ; 00402b79
    PUSH EAX                            ; 00402b7c
    MOV EBX,dword ptr [ESP + 0x10]      ; 00402b7d
    PUSH EBX                            ; 00402b81
    CALL engine_2d.c_drawTextColor_FUN_00402a60 ; 00402b82
        ;   XREF to: 00402a60 (UNCONDITIONAL_CALL)  ; void engine_2d.c_drawTextColor_FUN_00402a60(char * text, int x, int y)
    ADD ESP,0xc                         ; 00402b87
    POP EBX                             ; 00402b8a
    RET                                 ; 00402b8b

