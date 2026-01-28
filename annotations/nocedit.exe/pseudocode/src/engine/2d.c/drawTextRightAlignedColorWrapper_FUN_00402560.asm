; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void __cdecl engine_2d_c_drawTextRightAlignedColorWrapper_FUN_00402560(int y_pos,int right_x,char *text)
;
; Parameters:
; int              Stack[0x4]:4   y_pos
; int              Stack[0x8]:4   right_x
; char *           Stack[0xc]:4   text
;
; Called Functions:
;   engine_2d.c_drawTextRightAlignedColor_FUN_00402530
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00402560
        ;   Label: engine_2d.c_drawTextRightAlignedColorWrapper_FUN_00402560
    MOV EDX,dword ptr [ESP + 0xc]       ; 00402561
    PUSH EDX                            ; 00402565
    MOV ECX,dword ptr [ESP + 0xc]       ; 00402566
    PUSH ECX                            ; 0040256a
    MOV EBX,dword ptr [ESP + 0x18]      ; 0040256b
    PUSH EBX                            ; 0040256f
    CALL engine_2d.c_drawTextRightAlignedColor_FUN_00402530 ; 00402570
        ;   XREF to: 00402530 (UNCONDITIONAL_CALL)  ; void engine_2d.c_drawTextRightAlignedColor_FUN_00402530(char * text, int y_pos, int right_x)
    ADD ESP,0xc                         ; 00402575
    POP EBX                             ; 00402578
    RET                                 ; 00402579

