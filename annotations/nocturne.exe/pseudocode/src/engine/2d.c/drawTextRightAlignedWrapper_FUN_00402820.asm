; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl engine_2d_c_drawTextRightAlignedWrapper_FUN_00402820(int x,int y,char *text)
;
; Parameters:
; int              Stack[0x4]:4   x
; int              Stack[0x8]:4   y
; char *           Stack[0xc]:4   text
;
; Called Functions:
;   engine_2d.c_drawTextRightAligned_FUN_004027f0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00402820
        ;   Label: engine_2d.c_drawTextRightAlignedWrapper_FUN_00402820
    MOV EDX,dword ptr [ESP + 0xc]       ; 00402821
    PUSH EDX                            ; 00402825
    MOV ECX,dword ptr [ESP + 0xc]       ; 00402826
    PUSH ECX                            ; 0040282a
    MOV EBX,dword ptr [ESP + 0x18]      ; 0040282b
    PUSH EBX                            ; 0040282f
    CALL engine_2d.c_drawTextRightAligned_FUN_004027f0 ; 00402830
        ;   XREF to: 004027f0 (UNCONDITIONAL_CALL)  ; void engine_2d.c_drawTextRightAligned_FUN_004027f0(char * text, int x, int y)
    ADD ESP,0xc                         ; 00402835
    POP EBX                             ; 00402838
    RET                                 ; 00402839

