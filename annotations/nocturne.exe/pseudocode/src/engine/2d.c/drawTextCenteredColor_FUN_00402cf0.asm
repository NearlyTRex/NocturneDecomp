; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl engine_2d_c_drawTextCenteredColor_FUN_00402cf0(char *text,int left_x,int right_x,int y)
;
; Parameters:
; char *           Stack[0x4]:4   text
; int              Stack[0x8]:4   left_x
; int              Stack[0xc]:4   right_x
; int              Stack[0x10]:4   y
;
; XREF[3]:
;   cockpit_drawsurf.cpp_CDrawSurface_drawTextWithAlignment_FUN_0045d760 at 0045d9b2
;   engine_2d.c_drawTextCenteredColorFormatted_FUN_00402d60 at 00402dba
;   engine_2d.c_drawTextCenteredXYColor_FUN_00402d30 at 00402d46
;
; Called Functions:
;   engine_2d.c_drawTextColor_FUN_00402a60
;   engine_2d.c_getStringWidth_FUN_00401ed0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00402cf0
        ;   Label: engine_2d.c_drawTextCenteredColor_FUN_00402cf0
    PUSH ESI                            ; 00402cf1
    MOV EDX,dword ptr [ESP + 0x18]      ; 00402cf2
    MOV EBX,dword ptr [ESP + 0x10]      ; 00402cf6
    PUSH EDX                            ; 00402cfa
    MOV ESI,dword ptr [ESP + 0x10]      ; 00402cfb
    MOV ECX,dword ptr [ESP + 0x18]      ; 00402cff
    PUSH ESI                            ; 00402d03
    ADD EBX,ECX                         ; 00402d04
    CALL engine_2d.c_getStringWidth_FUN_00401ed0 ; 00402d06
        ;   XREF to: 00401ed0 (UNCONDITIONAL_CALL)  ; int engine_2d.c_getStringWidth_FUN_00401ed0(char * text)
    LEA EDX,[EBX + 0x1]                 ; 00402d0b
    SUB EDX,EAX                         ; 00402d0e
    INC EDX                             ; 00402d10
    MOV EAX,EDX                         ; 00402d11
    SAR EDX,0x1f                        ; 00402d13
    SUB EAX,EDX                         ; 00402d16
    SAR EAX,0x1                         ; 00402d18
    ADD ESP,0x4                         ; 00402d1a
    PUSH EAX                            ; 00402d1d
    PUSH ESI                            ; 00402d1e
    CALL engine_2d.c_drawTextColor_FUN_00402a60 ; 00402d1f
        ;   XREF to: 00402a60 (UNCONDITIONAL_CALL)  ; void engine_2d.c_drawTextColor_FUN_00402a60(char * text, int x, int y)
    ADD ESP,0xc                         ; 00402d24
    POP ESI                             ; 00402d27
    POP EBX                             ; 00402d28
    RET                                 ; 00402d29

