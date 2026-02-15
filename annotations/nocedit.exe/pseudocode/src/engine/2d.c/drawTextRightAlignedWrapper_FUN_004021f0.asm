; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl engine_2d_c_drawTextRightAlignedWrapper_FUN_004021f0(int x,int y,char *text)
;
; Parameters:
; int              Stack[0x4]:4   x
; int              Stack[0x8]:4   y
; char *           Stack[0xc]:4   text
;
; Called Functions:
;   engine_2d.c_drawTextRightAligned_FUN_004021c0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004021f0
        ;   Label: engine_2d.c_drawTextRightAlignedWrapper_FUN_004021f0
    MOV EDX,dword ptr [ESP + 0xc]       ; 004021f1
    PUSH EDX                            ; 004021f5
    MOV ECX,dword ptr [ESP + 0xc]       ; 004021f6
    PUSH ECX                            ; 004021fa
    MOV EBX,dword ptr [ESP + 0x18]      ; 004021fb
    PUSH EBX                            ; 004021ff
    CALL engine_2d.c_drawTextRightAligned_FUN_004021c0 ; 00402200
        ;   XREF to: 004021c0 (UNCONDITIONAL_CALL)  ; void engine_2d.c_drawTextRightAligned_FUN_004021c0(char * text, int x, int y)
    ADD ESP,0xc                         ; 00402205
    POP EBX                             ; 00402208
    RET                                 ; 00402209

