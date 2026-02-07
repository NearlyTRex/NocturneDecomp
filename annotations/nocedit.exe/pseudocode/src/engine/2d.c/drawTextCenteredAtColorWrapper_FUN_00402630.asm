; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void __cdecl engine_2d_c_drawTextCenteredAtColorWrapper_FUN_00402630(int x,int y,char *text)
;
; Parameters:
; int              Stack[0x4]:4   x
; int              Stack[0x8]:4   y
; char *           Stack[0xc]:4   text
;
; Called Functions:
;   engine_2d.c_drawTextCenteredAtColor_FUN_004025f0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00402630
        ;   Label: engine_2d.c_drawTextCenteredAtColorWrapper_FUN_00402630
    MOV EDX,dword ptr [ESP + 0xc]       ; 00402631
    PUSH EDX                            ; 00402635
    MOV ECX,dword ptr [ESP + 0xc]       ; 00402636
    PUSH ECX                            ; 0040263a
    MOV EBX,dword ptr [ESP + 0x18]      ; 0040263b
    PUSH EBX                            ; 0040263f
    CALL engine_2d.c_drawTextCenteredAtColor_FUN_004025f0 ; 00402640
        ;   XREF to: 004025f0 (UNCONDITIONAL_CALL)  ; void engine_2d.c_drawTextCenteredAtColor_FUN_004025f0(char * text, int x, int y)
    ADD ESP,0xc                         ; 00402645
    POP EBX                             ; 00402648
    RET                                 ; 00402649

