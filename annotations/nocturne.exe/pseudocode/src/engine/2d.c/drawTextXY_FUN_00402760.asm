; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl engine_2d_c_drawTextXY_FUN_00402760(int x,int y,char *text)
;
; Parameters:
; int              Stack[0x4]:4   x
; int              Stack[0x8]:4   y
; char *           Stack[0xc]:4   text
;
; XREF[1]:
;   core_game.cpp_CGame_processFrame_FUN_0049cc10 at 0049d403
;
; Called Functions:
;   engine_2d.c_drawText_FUN_00402600
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00402760
        ;   Label: engine_2d.c_drawTextXY_FUN_00402760
    MOV EDX,dword ptr [ESP + 0xc]       ; 00402761
    PUSH EDX                            ; 00402765
    MOV ECX,dword ptr [ESP + 0xc]       ; 00402766
    PUSH ECX                            ; 0040276a
    MOV EBX,dword ptr [ESP + 0x18]      ; 0040276b
    PUSH EBX                            ; 0040276f
    CALL engine_2d.c_drawText_FUN_00402600 ; 00402770
        ;   XREF to: 00402600 (UNCONDITIONAL_CALL)  ; void engine_2d.c_drawText_FUN_00402600(char * text, int x, int y)
    ADD ESP,0xc                         ; 00402775
    POP EBX                             ; 00402778
    RET                                 ; 00402779

