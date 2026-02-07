; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void __cdecl engine_2d_c_drawTextColorWrapper_FUN_004024a0(int x,int y,char *text)
;
; Parameters:
; int              Stack[0x4]:4   x
; int              Stack[0x8]:4   y
; char *           Stack[0xc]:4   text
;
; Called Functions:
;   engine_2d.c_drawTextColor_FUN_00402430
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004024a0
        ;   Label: engine_2d.c_drawTextColorWrapper_FUN_004024a0
    MOV EDX,dword ptr [ESP + 0xc]       ; 004024a1
    PUSH EDX                            ; 004024a5
    MOV ECX,dword ptr [ESP + 0xc]       ; 004024a6
    PUSH ECX                            ; 004024aa
    MOV EBX,dword ptr [ESP + 0x18]      ; 004024ab
    PUSH EBX                            ; 004024af
    CALL engine_2d.c_drawTextColor_FUN_00402430 ; 004024b0
        ;   XREF to: 00402430 (UNCONDITIONAL_CALL)  ; void engine_2d.c_drawTextColor_FUN_00402430(char * text, int x, int y)
    ADD ESP,0xc                         ; 004024b5
    POP EBX                             ; 004024b8
    RET                                 ; 004024b9

