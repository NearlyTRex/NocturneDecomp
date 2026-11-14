; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl engine_2d_c_drawTextCenteredColor_FUN_004026d0(char *text,int left_x,int right_x,int y)
;
; Parameters:
; char *           Stack[0x4]:4   text
; int              Stack[0x8]:4   left_x
; int              Stack[0xc]:4   right_x
; int              Stack[0x10]:4   y
;
; XREF[2]:
;   cockpit_drawsurf.cpp_CDrawSurface_drawTextWithAlignment_FUN_00467f70 at 004681c2
;   engine_2d.c_drawTextCenteredXYColor_FUN_00402710 at 00402726
;
; Called Functions:
;   engine_2d.c_drawTextColor_FUN_00402440
;   engine_2d.c_getStringWidth_FUN_004018b0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004026d0
        ;   Label: engine_2d.c_drawTextCenteredColor_FUN_004026d0
    PUSH ESI                            ; 004026d1
    MOV EDX,dword ptr [ESP + 0x18]      ; 004026d2
    MOV EBX,dword ptr [ESP + 0x10]      ; 004026d6
    PUSH EDX                            ; 004026da
    MOV ESI,dword ptr [ESP + 0x10]      ; 004026db
    MOV ECX,dword ptr [ESP + 0x18]      ; 004026df
    PUSH ESI                            ; 004026e3
    ADD EBX,ECX                         ; 004026e4
    CALL engine_2d.c_getStringWidth_FUN_004018b0 ; 004026e6
        ;   XREF to: 004018b0 (UNCONDITIONAL_CALL)  ; int engine_2d.c_getStringWidth_FUN_004018b0(char * text)
    LEA EDX,[EBX + 0x1]                 ; 004026eb
    SUB EDX,EAX                         ; 004026ee
    INC EDX                             ; 004026f0
    MOV EAX,EDX                         ; 004026f1
    SAR EDX,0x1f                        ; 004026f3
    SUB EAX,EDX                         ; 004026f6
    SAR EAX,0x1                         ; 004026f8
    ADD ESP,0x4                         ; 004026fa
    PUSH EAX                            ; 004026fd
    PUSH ESI                            ; 004026fe
    CALL engine_2d.c_drawTextColor_FUN_00402440 ; 004026ff
        ;   XREF to: 00402440 (UNCONDITIONAL_CALL)  ; void engine_2d.c_drawTextColor_FUN_00402440(char * text, int x, int y)
    ADD ESP,0xc                         ; 00402704
    POP ESI                             ; 00402707
    POP EBX                             ; 00402708
    RET                                 ; 00402709

