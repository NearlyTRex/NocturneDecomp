; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl engine_2d_c_drawTextXY_FUN_00402140(int x,int y,char *text)
;
; Parameters:
; int              Stack[0x4]:4   x
; int              Stack[0x8]:4   y
; char *           Stack[0xc]:4   text
;
; XREF[1]:
;   core_game.cpp_FUN_004b5190 at 004b5a9c
;
; Called Functions:
;   engine_2d.c_drawText_FUN_00401fe0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00402140
        ;   Label: engine_2d.c_drawTextXY_FUN_00402140
    MOV EDX,dword ptr [ESP + 0xc]       ; 00402141
    PUSH EDX                            ; 00402145
    MOV ECX,dword ptr [ESP + 0xc]       ; 00402146
    PUSH ECX                            ; 0040214a
    MOV EBX,dword ptr [ESP + 0x18]      ; 0040214b
    PUSH EBX                            ; 0040214f
    CALL engine_2d.c_drawText_FUN_00401fe0 ; 00402150
        ;   XREF to: 00401fe0 (UNCONDITIONAL_CALL)  ; void engine_2d.c_drawText_FUN_00401fe0(char * text, int x, int y)
    ADD ESP,0xc                         ; 00402155
    POP EBX                             ; 00402158
    RET                                 ; 00402159

