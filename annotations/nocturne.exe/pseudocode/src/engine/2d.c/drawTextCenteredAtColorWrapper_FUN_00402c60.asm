; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl engine_2d_c_drawTextCenteredAtColorWrapper_FUN_00402c60(int x,int y,char *text)
;
; Parameters:
; int              Stack[0x4]:4   x
; int              Stack[0x8]:4   y
; char *           Stack[0xc]:4   text
;
; Called Functions:
;   engine_2d.c_drawTextCenteredAtColor_FUN_00402c20
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00402c60
        ;   Label: engine_2d.c_drawTextCenteredAtColorWrapper_FUN_00402c60
    MOV EDX,dword ptr [ESP + 0xc]       ; 00402c61
    PUSH EDX                            ; 00402c65
    MOV ECX,dword ptr [ESP + 0xc]       ; 00402c66
    PUSH ECX                            ; 00402c6a
    MOV EBX,dword ptr [ESP + 0x18]      ; 00402c6b
    PUSH EBX                            ; 00402c6f
    CALL engine_2d.c_drawTextCenteredAtColor_FUN_00402c20 ; 00402c70
        ;   XREF to: 00402c20 (UNCONDITIONAL_CALL)  ; void engine_2d.c_drawTextCenteredAtColor_FUN_00402c20(char * text, int x, int y)
    ADD ESP,0xc                         ; 00402c75
    POP EBX                             ; 00402c78
    RET                                 ; 00402c79

