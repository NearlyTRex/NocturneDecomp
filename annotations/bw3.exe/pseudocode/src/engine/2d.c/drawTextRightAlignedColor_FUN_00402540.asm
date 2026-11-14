; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl engine_2d_c_drawTextRightAlignedColor_FUN_00402540(char *text,int x,int y)
;
; Parameters:
; char *           Stack[0x4]:4   text
; int              Stack[0x8]:4   x
; int              Stack[0xc]:4   y
;
; XREF[1]:
;   cockpit_drawsurf.cpp_CDrawSurface_drawTextWithAlignment_FUN_00469b40 at 00469d42
;
; Called Functions:
;   engine_2d.c_drawTextColor_FUN_00402440
;   engine_2d.c_getStringWidth_FUN_004018b0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00402540
        ;   Label: engine_2d.c_drawTextRightAlignedColor_FUN_00402540
    MOV EDX,dword ptr [ESP + 0x10]      ; 00402541
    PUSH EDX                            ; 00402545
    MOV ECX,dword ptr [ESP + 0xc]       ; 00402546
    PUSH ECX                            ; 0040254a
    CALL engine_2d.c_getStringWidth_FUN_004018b0 ; 0040254b
        ;   XREF to: 004018b0 (UNCONDITIONAL_CALL)  ; int engine_2d.c_getStringWidth_FUN_004018b0(char * text)
    ADD ESP,0x4                         ; 00402550
    MOV EDX,dword ptr [ESP + 0x10]      ; 00402553
    SUB EDX,EAX                         ; 00402557
    LEA EAX,[EDX + 0x2]                 ; 00402559
    PUSH EAX                            ; 0040255c
    MOV EBX,dword ptr [ESP + 0x10]      ; 0040255d
    PUSH EBX                            ; 00402561
    CALL engine_2d.c_drawTextColor_FUN_00402440 ; 00402562
        ;   XREF to: 00402440 (UNCONDITIONAL_CALL)  ; void engine_2d.c_drawTextColor_FUN_00402440(char * text, int x, int y)
    ADD ESP,0xc                         ; 00402567
    POP EBX                             ; 0040256a
    RET                                 ; 0040256b

