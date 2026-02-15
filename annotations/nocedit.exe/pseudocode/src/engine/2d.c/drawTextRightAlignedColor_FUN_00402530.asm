; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl engine_2d_c_drawTextRightAlignedColor_FUN_00402530(char *text,int x,int y)
;
; Parameters:
; char *           Stack[0x4]:4   text
; int              Stack[0x8]:4   x
; int              Stack[0xc]:4   y
;
; XREF[3]:
;   cockpit_drawsurf.cpp_CDrawSurface_drawTextWithAlignment_FUN_00489120 at 00489322
;   engine_2d.c_drawTextRightAlignedColorFormatted_FUN_00402580 at 004025d1
;   engine_2d.c_drawTextRightAlignedColorWrapper_FUN_00402560 at 00402570
;
; Called Functions:
;   engine_2d.c_drawTextColor_FUN_00402430
;   engine_2d.c_getStringWidth_FUN_004018a0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00402530
        ;   Label: engine_2d.c_drawTextRightAlignedColor_FUN_00402530
    MOV EDX,dword ptr [ESP + 0x10]      ; 00402531
    PUSH EDX                            ; 00402535
    MOV ECX,dword ptr [ESP + 0xc]       ; 00402536
    PUSH ECX                            ; 0040253a
    CALL engine_2d.c_getStringWidth_FUN_004018a0 ; 0040253b
        ;   XREF to: 004018a0 (UNCONDITIONAL_CALL)  ; int engine_2d.c_getStringWidth_FUN_004018a0(char * text)
    ADD ESP,0x4                         ; 00402540
    MOV EDX,dword ptr [ESP + 0x10]      ; 00402543
    SUB EDX,EAX                         ; 00402547
    LEA EAX,[EDX + 0x2]                 ; 00402549
    PUSH EAX                            ; 0040254c
    MOV EBX,dword ptr [ESP + 0x10]      ; 0040254d
    PUSH EBX                            ; 00402551
    CALL engine_2d.c_drawTextColor_FUN_00402430 ; 00402552
        ;   XREF to: 00402430 (UNCONDITIONAL_CALL)  ; void engine_2d.c_drawTextColor_FUN_00402430(char * text, int x, int y)
    ADD ESP,0xc                         ; 00402557
    POP EBX                             ; 0040255a
    RET                                 ; 0040255b

